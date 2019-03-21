#pragma once

class IBaseBehaviour
{
public:
	virtual ~IBaseBehaviour();

	virtual void onAwake() = 0;
	virtual void onStart() = 0;
	virtual void onUpdate() = 0;
	virtual void onRender() = 0;

private:

};

