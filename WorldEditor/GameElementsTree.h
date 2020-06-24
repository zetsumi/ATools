#ifndef GAMEELEMENTSTREE_H
#define GAMEELEMENTSTREE_H

class CGameElementsTree : public QTreeView
{
	Q_OBJECT

public:
	CGameElementsTree(QWidget* parent = null);

protected:
	void keyPressEvent(QKeyEvent* event) override;
};

#endif // GAMEELEMENTSTREE_H