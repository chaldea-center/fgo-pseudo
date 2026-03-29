void SelectTreasureDeviceInfo___ctor(SelectTreasureDeviceInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectTreasureDeviceInfo___ctor_42439708(
        SelectTreasureDeviceInfo_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_array *inputTdChangeParam,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.treasureDevices = inputTdChangeParam;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.treasureDevices,
    (int32_t)inputTdChangeParam,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void SelectTreasureDeviceInfo__AssignTdIndexAutomatically(SelectTreasureDeviceInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v5; // x1
  System_Collections_Generic_IEnumerable_T__o *treasureDevices; // x19
  System_Action_object__o *v7; // x21

  if ( (byte_4D30531 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_SelectTreasureDeviceInfo_TdChangeParam__TypeInfo);
    sub_1C93AD4(&Method_BasicHelper_ForEach_SelectTreasureDeviceInfo_TdChangeParam___);
    sub_1C93AD4(&Method_SelectTreasureDeviceInfo___c__DisplayClass15_0__AssignTdIndexAutomatically_b__0__);
    sub_1C93AD4(&SelectTreasureDeviceInfo___c__DisplayClass15_0_TypeInfo);
    byte_4D30531 = 1;
  }
  v3 = sub_1C93D20(SelectTreasureDeviceInfo___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.treasureDevices, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !v3 )
      sub_1C93D2C(IsNullOrEmpty, v5);
    *(_DWORD *)(v3 + 16) = 1;
    treasureDevices = (System_Collections_Generic_IEnumerable_T__o *)this->fields.treasureDevices;
    v7 = (System_Action_object__o *)sub_1C93D20(System_Action_SelectTreasureDeviceInfo_TdChangeParam__TypeInfo);
    System_Action_object____ctor(
      v7,
      (Il2CppObject *)v3,
      Method_SelectTreasureDeviceInfo___c__DisplayClass15_0__AssignTdIndexAutomatically_b__0__,
      0);
    BasicHelper__ForEach_object_(
      treasureDevices,
      (System_Action_T__o *)v7,
      (const MethodInfo_3190798 *)Method_BasicHelper_ForEach_SelectTreasureDeviceInfo_TdChangeParam___);
  }
}


int32_t SelectTreasureDeviceInfo__get_DialogType(SelectTreasureDeviceInfo_o *this, const MethodInfo *method)
{
  return this->fields.dialogType;
}


System_String_o *SelectTreasureDeviceInfo__get_MessageOnSelected(
        SelectTreasureDeviceInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.messageOnSelected;
}


SelectTreasureDeviceInfo_TdChangeParam_array *SelectTreasureDeviceInfo__get_TdChangeParamArray(
        SelectTreasureDeviceInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.treasureDevices;
}


System_String_o *SelectTreasureDeviceInfo__get_Title(SelectTreasureDeviceInfo_o *this, const MethodInfo *method)
{
  return this->fields.title;
}


void SelectTreasureDeviceInfo_TdChangeParam___ctor(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectTreasureDeviceInfo_TdChangeParam___ctor_42440128(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        int32_t inputId,
        int32_t inputType,
        int32_t tdIndex,
        System_String_o *inputMessage,
        const MethodInfo *method)
{
  SelectTreasureDeviceInfo_TdChangeParam_o *v10; // x23
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.message = inputMessage;
  v10 = (SelectTreasureDeviceInfo_TdChangeParam_o *)((char *)v10 + 24);
  v10[-1].fields._TdIndex_k__BackingField = inputId;
  *(&v10[-1].fields._TdIndex_k__BackingField + 1) = inputType;
  LODWORD(v10->monitor) = tdIndex;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)v10, (int32_t)inputMessage, v11, v12, v13, v14, v15, v16);
}


int32_t SelectTreasureDeviceInfo_TdChangeParam__get_CommandType(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *SelectTreasureDeviceInfo_TdChangeParam__get_Message(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  return this->fields.message;
}


System_String_o *SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_4D30532 & 1) == 0 )
  {
    sub_1C93AD4(&string_TypeInfo);
    byte_4D30532 = 1;
  }
  result = this->fields.message;
  if ( !result )
    return string_TypeInfo->static_fields->Empty;
  return result;
}


int32_t SelectTreasureDeviceInfo_TdChangeParam__get_TdIndex(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  return this->fields._TdIndex_k__BackingField;
}


int32_t SelectTreasureDeviceInfo_TdChangeParam__get_TreasureDeviceId(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


void SelectTreasureDeviceInfo_TdChangeParam__set_TdIndex(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TdIndex_k__BackingField = value;
}


void SelectTreasureDeviceInfo___c__DisplayClass15_0___ctor(
        SelectTreasureDeviceInfo___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectTreasureDeviceInfo___c__DisplayClass15_0___AssignTdIndexAutomatically_b__0(
        SelectTreasureDeviceInfo___c__DisplayClass15_0_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *x,
        const MethodInfo *method)
{
  int32_t tdIndex; // w8

  tdIndex = this->fields.tdIndex;
  this->fields.tdIndex = tdIndex + 1;
  if ( !x )
    sub_1C93D2C(this, 0);
  x->fields._TdIndex_k__BackingField = tdIndex;
}