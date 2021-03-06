505
{
	SetTitle
	(
		IDS_PROPQUEST_REQUESTBOX2_INC_000000
	);
}

500
{
	SetTitle
	(
		IDS_PROPQUEST_REQUESTBOX2_INC_000001
	);

	setting
	{
		SetCharacter( "MaFl_Series1" );
		SetQuestType( QT_GENERAL);
		SetHeadQuest( 505 );
		



		SetBeginCondDisguise( -1 ); 
		SetBeginCondItem( -1, 0, JOB_VAGRANT, II_GEN_GEM_GEM_CHUPIM, 1 );
		
 		SetBeginSetAddGold( 1000 );
		SetBeginSetDisguise( MI_AIBATT2 ); 
		
		SetEndCondLimitTime( 3 ) 
		SetEndCondKillNPC( 0, MI_AIBATT2, 1 ); 
		SetEndRemoveItem( 0,  II_GEN_GEM_GEM_CHUPIM, 5 );
		SetEndRemoveItem( 0, II_GEN_GEM_GEM_CHUPIM, 5 );
		SetEndRewardHide( 0 );
		SetEndRewardGold( 3500, 3600 );
		SetEndRewardExp( 70, 210 );
		SetEndRewardKarmaPoint( 1, 1000 );
		SetEndRewardItem( -1, 0, -1, II_WEA_SWO_PARMIL, 1 );
		SenEndRewardJob( JOB_ACROBAT, 1 );	
	}
	SetPatrolZoneName
	(
		IDS_PROPQUEST_REQUESTBOX2_INC_000002
	);
	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_REQUESTBOX2_INC_000003
	);
	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_REQUESTBOX2_INC_000004
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_REQUESTBOX2_INC_000005
	);
	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_REQUESTBOX2_INC_000006
	);
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_REQUESTBOX2_INC_000007
	);
	SetDialog
	(
		QSAY_END_FAILURE2,
		IDS_PROPQUEST_REQUESTBOX2_INC_000008
	);
	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_REQUESTBOX2_INC_000009
		);
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_REQUESTBOX2_INC_000010
		);
	}
}
501
{
	SetTitle
	(
		IDS_PROPQUEST_REQUESTBOX2_INC_000011
	);

	setting
	{
		SetCharacter( "MaFl_Series2" );
		SetQuestType( QT_GENERAL);
		SetHeadQuest( 505 );
		


		SetBeginCondPreviousQuest( 0, 19 );
		
		SetEndCondCharacter( "MaFl_Series2" ); 
		SetEndCondItem( -1, 0, -1,  II_GEN_GEM_GEM_CHUPIM, 5 );
		SetEndCondDialog( "MaFl_Series2", "FUCK" );
		SetEndRemoveItem( 0,  II_GEN_GEM_GEM_CHUPIM, 5 );


		SetEndRemoveQuest( 500 );
		
		SetEndRewardItem( -1, 0, -1, II_WEA_SWO_OUTLAW, 2 );
		SetEndRewardItem( -1, 0, -1, II_WEA_SWO_OUTLAW, 1 );
		SetEndRewardItem( -1, 0, -1, II_WEA_SWO_OUTLAW, 1 );
		SetEndRewardItem( -1, 0, -1, II_WEA_SWO_OUTLAW, 1 );
		SetEndRewardGold( 3500, 3500 );
		SetEndRewardExp( 70, 70 );
		SetEndRemoveQuest( 19 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_REQUESTBOX2_INC_000012
	);
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_REQUESTBOX2_INC_000013
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_REQUESTBOX2_INC_000014
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_REQUESTBOX2_INC_000015
	);
	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_REQUESTBOX2_INC_000016
	);
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_REQUESTBOX2_INC_000017
	);
	SetDialog
	(
		QSAY_END_FAILURE2,
		IDS_PROPQUEST_REQUESTBOX2_INC_000018
	);


	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_REQUESTBOX2_INC_000019
		);
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_REQUESTBOX2_INC_000020
		);

	}
}

502
{
	SetTitle
	(
		IDS_PROPQUEST_REQUESTBOX2_INC_000021
	);

	setting
	{
		SetMultiCharacter( "MaFl_MultiQuest1", II_WEA_SWO_WOODEN, "MaFl_MultiQuest2", II_WEA_SWO_LONG, "MaFl_MultiQuest3", II_WEA_SWO_LONG );
		SetQuestType( QT_GENERAL);
		SetHeadQuest( 505 );
		


		SetBeginCondPreviousQuest( 0, 19 );
		
		SetEndCondMultiCharacter( "MaFl_MultiQuest1", II_WEA_SWO_WOODEN, "MaFl_MultiQuest2", II_WEA_SWO_LONG, "MaFl_MultiQuest3", II_WEA_SWO_LONG );
		SetEndCondItem( -1, 0, -1,  II_GEN_GEM_GEM_CHUPIM, 5 );
		SetEndRemoveItem( 0,  II_GEN_GEM_GEM_CHUPIM, 5 );


		SetEndRemoveQuest( 500 );
		
		SetEndRewardItem( -1, 1, II_WEA_SWO_WOODEN , II_WEA_SWO_PARMIL  , 1 );
		SetEndRewardItem( -1, 1, II_WEA_SWO_LONG , II_WEA_SWO_PARMIL, 1 );
		SetEndRewardItem( -1, 1, II_WEA_SWO_LONG   , II_WEA_SWO_CRIMSON , 1 );
		SetEndRewardGold( 3500, 3500 );
		SetEndRewardExp( 70, 70 );
	}


	SetDialog
	(
		QSAY_BEGIN1, 
		IDS_PROPQUEST_REQUESTBOX2_INC_000022
	);
	SetDialog
	(
		QSAY_BEGIN2, 
		IDS_PROPQUEST_REQUESTBOX2_INC_000023
	);

	SetDialog
	(
		QSAY_BEGIN_YES,
		IDS_PROPQUEST_REQUESTBOX2_INC_000024
	);
	SetDialog
	(
		QSAY_BEGIN_NO, 
		IDS_PROPQUEST_REQUESTBOX2_INC_000025
	);
	SetDialog
	(
		QSAY_END_COMPLETE1, 
		IDS_PROPQUEST_REQUESTBOX2_INC_000026
	);
	SetDialog
	(
		QSAY_END_FAILURE1,
		IDS_PROPQUEST_REQUESTBOX2_INC_000027
	);
	SetDialog
	(
		QSAY_END_FAILURE2,
		IDS_PROPQUEST_REQUESTBOX2_INC_000028
	);


	state 0
	{

		SetDesc
		(
			IDS_PROPQUEST_REQUESTBOX2_INC_000029
		);
	}
	state 14
	{

		SetDesc
		(
			IDS_PROPQUEST_REQUESTBOX2_INC_000030
		);

	}
}