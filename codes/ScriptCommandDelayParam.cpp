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
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.executeIndex = index;
  this->fields.executeIndexMax = indexMax;
  this->fields.delaySecond = second;
  this->fields.skipDropFlag = sflag;
  this->fields.messageFlag = mflag;
  this->fields.checkTextSpeed = cflag;
}