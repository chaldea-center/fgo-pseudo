void ClassStatisticsInfo___ctor(ClassStatisticsInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassStatisticsInfo___ctor_41636472(
        ClassStatisticsInfo_o *this,
        int32_t classId,
        int32_t type,
        int64_t typeVal,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.classId = classId;
  this->fields.type = type;
  this->fields.typeVal = typeVal;
}