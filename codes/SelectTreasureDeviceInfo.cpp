void __fastcall SelectTreasureDeviceInfo___ctor(SelectTreasureDeviceInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SelectTreasureDeviceInfo___ctor_39601672(
        SelectTreasureDeviceInfo_o *this,
        SelectTreasureDeviceInfo_TdChangeParam_array *inputTdChangeParam,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.treasureDevices = inputTdChangeParam;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.treasureDevices,
    (int64_t)inputTdChangeParam,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SelectTreasureDeviceInfo__AssignTdIndexAutomatically(
        SelectTreasureDeviceInfo_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x20
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_Collections_Generic_IEnumerable_T__o *treasureDevices; // x19
  System_Action_object__o *v17; // x21

  if ( (byte_4B15D88 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SelectTreasureDeviceInfo_TdChangeParam__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_BasicHelper_ForEach_SelectTreasureDeviceInfo_TdChangeParam___, v5, v6);
    sub_1BCA7E0(&Method_SelectTreasureDeviceInfo___c__DisplayClass15_0__AssignTdIndexAutomatically_b__0__, v7, v8);
    sub_1BCA7E0(&SelectTreasureDeviceInfo___c__DisplayClass15_0_TypeInfo, v9, v10);
    byte_4B15D88 = 1;
  }
  v11 = sub_1BCAA2C(SelectTreasureDeviceInfo___c__DisplayClass15_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.treasureDevices, 0LL);
  if ( !IsNullOrEmpty )
  {
    if ( !v11 )
      sub_1BCAA3C(IsNullOrEmpty, v13);
    *(_DWORD *)(v11 + 16) = 1;
    treasureDevices = (System_Collections_Generic_IEnumerable_T__o *)this->fields.treasureDevices;
    v17 = (System_Action_object__o *)sub_1BCAA2C(
                                       System_Action_SelectTreasureDeviceInfo_TdChangeParam__TypeInfo,
                                       v13,
                                       v14,
                                       v15);
    System_Action_object____ctor(
      v17,
      (Il2CppObject *)v11,
      Method_SelectTreasureDeviceInfo___c__DisplayClass15_0__AssignTdIndexAutomatically_b__0__,
      0LL);
    BasicHelper__ForEach_object_(
      treasureDevices,
      (System_Action_T__o *)v17,
      (const MethodInfo_2EFFC84 *)Method_BasicHelper_ForEach_SelectTreasureDeviceInfo_TdChangeParam___);
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


void __fastcall SelectTreasureDeviceInfo_TdChangeParam___ctor_39602092(
        SelectTreasureDeviceInfo_TdChangeParam_o *this,
        int32_t inputId,
        int32_t inputType,
        int32_t tdIndex,
        System_String_o *inputMessage,
        const MethodInfo *method)
{
  SelectTreasureDeviceInfo_TdChangeParam_o *v10; // x23
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields.message = inputMessage;
  v10 = (SelectTreasureDeviceInfo_TdChangeParam_o *)((char *)v10 + 24);
  v10[-1].fields._TdIndex_k__BackingField = inputId;
  *(&v10[-1].fields._TdIndex_k__BackingField + 1) = inputType;
  LODWORD(v10->monitor) = tdIndex;
  sub_1BCA784((PartyOrganizationUtility_o *)v10, (int64_t)inputMessage, v11, v12, v13, v14, v15, v16);
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
  __int64 v2; // x2
  System_String_o *result; // x0

  if ( (byte_4B15D89 & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, method, v2);
    byte_4B15D89 = 1;
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
    sub_1BCAA3C(this, 0LL);
  x->fields._TdIndex_k__BackingField = tdIndex;
}