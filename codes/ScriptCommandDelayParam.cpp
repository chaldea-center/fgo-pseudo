void ScriptCommandDelayParam___ctor(
        ScriptCommandDelayParam_o *this,
        int32_t index,
        int32_t indexMax,
        float second,
        bool sflag,
        bool mflag,
        bool cflag,
        const MethodInfo *method)
{
  bool v12; // w22
  bool v13; // w23
  bool v14; // w24

  v12 = sflag;
  v13 = mflag;
  v14 = cflag;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.executeIndex = index;
  this->fields.executeIndexMax = indexMax;
  this->fields.delaySecond = second;
  this->fields.skipDropFlag = v12;
  this->fields.messageFlag = v13;
  this->fields.checkTextSpeed = v14;
}