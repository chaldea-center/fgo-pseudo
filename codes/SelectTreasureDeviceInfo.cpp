void __fastcall SelectTreasureDeviceInfo___ctor(SelectTreasureDeviceInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectTreasureDeviceInfo___ctor_40883484(
        SelectTreasureDeviceInfo_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_array *inputTdChangeParam,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.treasureDevices = inputTdChangeParam;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.treasureDevices, (int32_t)inputTdChangeParam, v5, v6);
}


void __fastcall SelectTreasureDeviceInfo__AssignTdIndexAutomatically(
        SelectTreasureDeviceInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerable_T__o *treasureDevices; // x19
  System_Action_object__o *v10; // x21

  if ( (byte_4B1C075 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_SelectTreasureDeviceInfo_TdChangeParam__TypeInfo, method);
    sub_1BCAFF8(&Method_BasicHelper_ForEach_SelectTreasureDeviceInfo_TdChangeParam___, v3);
    sub_1BCAFF8(&Method_SelectTreasureDeviceInfo___c__DisplayClass15_0__AssignTdIndexAutomatically_b__0__, v4);
    sub_1BCAFF8(&SelectTreasureDeviceInfo___c__DisplayClass15_0_TypeInfo, v5);
    byte_4B1C075 = 1;
  }
  v6 = sub_1BCB244(SelectTreasureDeviceInfo___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.treasureDevices, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !v6 )
      sub_1BCB254(IsNullOrEmpty, v8);
    *(_DWORD *)(v6 + 16) = 1;
    treasureDevices = (System_Collections_Generic_IEnumerable_T__o *)this->fields.treasureDevices;
    v10 = (System_Action_object__o *)sub_1BCB244(System_Action_SelectTreasureDeviceInfo_TdChangeParam__TypeInfo);
    System_Action_object____ctor(
      v10,
      (Il2CppObject *)v6,
      Method_SelectTreasureDeviceInfo___c__DisplayClass15_0__AssignTdIndexAutomatically_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      treasureDevices,
      (System_Action_T__o *)v10,
      (const MethodInfo_3006B3C *)Method_BasicHelper_ForEach_SelectTreasureDeviceInfo_TdChangeParam___);
  }
}


int32_t __fastcall SelectTreasureDeviceInfo__get_DialogType(SelectTreasureDeviceInfo_o *this, const MethodInfo *method)
{
  return this->fields.dialogType;
}


System_String_o *__fastcall SelectTreasureDeviceInfo__get_MessageOnSelected(
        SelectTreasureDeviceInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.messageOnSelected;
}


SelectTreasureDeviceInfo_TdChangeParam_array *__fastcall SelectTreasureDeviceInfo__get_TdChangeParamArray(
        SelectTreasureDeviceInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.treasureDevices;
}


System_String_o *__fastcall SelectTreasureDeviceInfo__get_Title(
        SelectTreasureDeviceInfo_o *this,
        const MethodInfo *method)
{
  return this->fields.title;
}


void __fastcall SelectTreasureDeviceInfo_TdChangeParam___ctor(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectTreasureDeviceInfo_TdChangeParam___ctor_40883904(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        int32_t inputId,
        int32_t inputType,
        int32_t tdIndex,
        System_String_o *inputMessage,
        const MethodInfo *method)
{
  SelectTreasureDeviceInfo_TdChangeParam_o *v10; // x23
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields.message = inputMessage;
  v10 = (SelectTreasureDeviceInfo_TdChangeParam_o *)((char *)v10 + 24);
  v10[-1].fields._TdIndex_k__BackingField = inputId;
  *(&v10[-1].fields._TdIndex_k__BackingField + 1) = inputType;
  LODWORD(v10->monitor) = tdIndex;
  sub_1BCAF9C((CGThumbnailListItem_o *)v10, (int32_t)inputMessage, v11, v12);
}


int32_t __fastcall SelectTreasureDeviceInfo_TdChangeParam__get_CommandType(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *__fastcall SelectTreasureDeviceInfo_TdChangeParam__get_Message(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  return this->fields.message;
}


System_String_o *__fastcall SelectTreasureDeviceInfo_TdChangeParam__get_MessageDefaultEmpty(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  System_String_o *result; // x0

  if ( (byte_4B1C076 & 1) == 0 )
  {
    sub_1BCAFF8(&string_TypeInfo, method);
    byte_4B1C076 = 1;
  }
  result = this->fields.message;
  if ( !result )
    return string_TypeInfo->static_fields->Empty;
  return result;
}


int32_t __fastcall SelectTreasureDeviceInfo_TdChangeParam__get_TdIndex(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  return this->fields._TdIndex_k__BackingField;
}


int32_t __fastcall SelectTreasureDeviceInfo_TdChangeParam__get_TreasureDeviceId(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        const MethodInfo *method)
{
  return this->fields.id;
}


void __fastcall SelectTreasureDeviceInfo_TdChangeParam__set_TdIndex(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._TdIndex_k__BackingField = value;
}


void __fastcall SelectTreasureDeviceInfo___c__DisplayClass15_0___ctor(
        SelectTreasureDeviceInfo___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectTreasureDeviceInfo___c__DisplayClass15_0___AssignTdIndexAutomatically_b__0(
        SelectTreasureDeviceInfo___c__DisplayClass15_0_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_o *x,
        const MethodInfo *method)
{
  int32_t tdIndex; // w8

  tdIndex = this->fields.tdIndex;
  this->fields.tdIndex = tdIndex + 1;
  if ( !x )
    sub_1BCB254(this, 0LL);
  x->fields._TdIndex_k__BackingField = tdIndex;
}