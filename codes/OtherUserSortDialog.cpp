void __fastcall OtherUserSortDialog___cctor(const MethodInfo *method)
{
  ListViewSort_o *v1; // x19
  struct OtherUserSortDialog_StaticFields *static_fields; // x0
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x19
  System_String_o *v6; // x20
  System_String_o *v7; // x19
  ListViewSort_o *v8; // x20
  struct OtherUserSortDialog_StaticFields *v9; // x0
  __int64 v10; // x19
  System_String_o *v11; // x20
  System_String_o *v12; // x19
  ListViewSort_o *v13; // x20
  struct OtherUserSortDialog_StaticFields *v14; // x0
  int v15; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_42ADBDB & 1) == 0 )
  {
    sub_B52984(&FriendStatus_Kind_TypeInfo);
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&OtherUserSortDialog_TypeInfo);
    sub_B52984(&StringLiteral_6775/*"FollowerSelect"*/);
    sub_B52984(&StringLiteral_6852/*"FriendOperation"*/);
    byte_42ADBDB = 1;
  }
  v1 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v1, (System_String_o *)StringLiteral_6775/*"FollowerSelect"*/, 11, 0, 0LL);
  static_fields = OtherUserSortDialog_TypeInfo->static_fields;
  static_fields->supportSortInfo = v1;
  sub_B52920(static_fields);
  v15 = 4;
  v3 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v15);
  if ( !v3 )
    goto LABEL_6;
  v5 = v3;
  v6 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(
                            v3,
                            *(_QWORD *)(*(_QWORD *)v3 + 368LL));
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v5);
  v7 = System_String__Concat_44568316((System_String_o *)StringLiteral_6852/*"FriendOperation"*/, v6, 0LL);
  v8 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v8, v7, 3, 0, 0LL);
  v9 = OtherUserSortDialog_TypeInfo->static_fields;
  v9->friendMemberListSortInfo = v8;
  sub_B52920(&v9->friendMemberListSortInfo);
  v15 = 3;
  v3 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v15);
  if ( !v3 )
LABEL_6:
    sub_B52A5C(v3, v4);
  v10 = v3;
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 360LL))(
                             v3,
                             *(_QWORD *)(*(_QWORD *)v3 + 368LL));
  v15 = *(_DWORD *)j_il2cpp_object_unbox_0(v10);
  v12 = System_String__Concat_44568316((System_String_o *)StringLiteral_6852/*"FriendOperation"*/, v11, 0LL);
  v13 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
  ListViewSort___ctor_33999208(v13, v12, 3, 0, 0LL);
  v14 = OtherUserSortDialog_TypeInfo->static_fields;
  v14->friendRequestListSortInfo = v13;
  sub_B52920(&v14->friendRequestListSortInfo);
}


void __fastcall OtherUserSortDialog___ctor(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_VoiceCondType_Type__o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v6; // x20

  if ( (byte_42ADBDA & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
    sub_B52984(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
    sub_B52984(&System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
    byte_42ADBDA = 1;
  }
  v3 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v3,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v3 )
    goto LABEL_9;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    11,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    3,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    5,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v3,
    6,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.sortKindList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v3;
  sub_B52920(&this->fields.sortKindList);
  v6 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v6,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
  if ( !v6 )
LABEL_9:
    sub_B52A5C(v4, v5);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    0,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    1,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    2,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    3,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    4,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    5,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v6,
    6,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  this->fields.priorityKindList = (struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *)v6;
  sub_B52920(&this->fields.priorityKindList);
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall OtherUserSortDialog__Awake(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  BaseDialog__Awake((BaseDialog_o *)this, 0LL);
}


void __fastcall OtherUserSortDialog__Callback(OtherUserSortDialog_o *this, bool result, const MethodInfo *method)
{
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x0
  OtherUserSortDialog_CallbackFunc_o *v4; // x19
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B52920(p_callbackFunc);
    OtherUserSortDialog_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall OtherUserSortDialog__Close(
        OtherUserSortDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20

  if ( (byte_42ADBC9 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_OtherUserSortDialog_EndClose__);
    byte_42ADBC9 = 1;
  }
  OtherUserSortDialog__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B52920(&this->fields.closeCallbackFunc);
  this->fields.state = 4;
  v5 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_OtherUserSortDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v5, 0LL);
}


void __fastcall OtherUserSortDialog__EndClose(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B52920(p_closeCallbackFunc);
    System_Action__Invoke(v4, 0LL);
  }
}


void __fastcall OtherUserSortDialog__EndOpen(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall OtherUserSortDialog__Init(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall OtherUserSortDialog__OnClickCancel(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2

  if ( (byte_42ADBCD & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickCancel__);
    byte_42ADBCD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, v5);
    OtherUserSortDialog__Callback(this, 0, v6);
  }
}


void __fastcall OtherUserSortDialog__OnClickDecide(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x1
  ListViewSort_o *baseSortInfo; // x0
  const MethodInfo *v8; // x2
  struct ListViewSort_o *operationSortInfo; // x8
  bool v10; // w1

  if ( (byte_42ADBCC & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickDecide__);
    byte_42ADBCC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickDecide__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_B52A5C(baseSortInfo, v6);
    }
    v10 = this->fields.openedSortKind != operationSortInfo->fields.sortKind
       || this->fields.openedPriorityKind != operationSortInfo->fields.priorityKind;
    OtherUserSortDialog__Callback(this, v10, v8);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityBondUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42ADBD6 & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    byte_42ADBD6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityBondUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityBondUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(v6, v7);
    operationSortInfo->fields.priorityKind = 4;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityDropUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42ADBD8 & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    byte_42ADBD8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityDropUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityDropUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(v6, v7);
    operationSortInfo->fields.priorityKind = 6;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityEquipExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42ADBD5 & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    byte_42ADBD5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(v6, v7);
    operationSortInfo->fields.priorityKind = 3;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityFriendPointUp(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42ADBD3 & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    byte_42ADBD3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(v6, v7);
    operationSortInfo->fields.priorityKind = 1;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityMasterExpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42ADBD4 & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    byte_42ADBD4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(v6, v7);
    operationSortInfo->fields.priorityKind = 2;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityNone(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42ADBD2 & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickPriorityNone__);
    byte_42ADBD2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityNone__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityNone__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickPriorityNone__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(v6, v7);
    operationSortInfo->fields.priorityKind = 0;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickPriorityQpUp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42ADBD7 & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    byte_42ADBD7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityQpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityQpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(v6, v7);
    operationSortInfo->fields.priorityKind = 5;
    OtherUserSortDialog__SetPriorityButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortAttack(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42ADBD1 & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickSortAttack__);
    byte_42ADBD1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortAttack__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(v6, v7);
    operationSortInfo->fields.sortKind = 6;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortHp(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42ADBD0 & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickSortHp__);
    byte_42ADBD0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortHp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortHp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(v6, v7);
    operationSortInfo->fields.sortKind = 5;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLevel(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42ADBCF & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickSortLevel__);
    byte_42ADBCF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLevel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(v6, v7);
    operationSortInfo->fields.sortKind = 3;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__OnClickSortLoginAccess(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2
  __int64 v6; // x0
  const MethodInfo *v7; // x1
  struct ListViewSort_o *operationSortInfo; // x8

  if ( (byte_42ADBCE & 1) == 0 )
  {
    sub_B52984(&Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    byte_42ADBCE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLoginAccess__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLoginAccess__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B5298C(Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    v4 = (System_Reflection_MethodBase_o *)sub_B52968(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B52A5C(v6, v7);
    operationSortInfo->fields.sortKind = 11;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


void __fastcall OtherUserSortDialog__Open(
        OtherUserSortDialog_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        OtherUserSortDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UILabel_o *sortTitleLabel; // x21
  System_String_o *SortKindText; // x0
  const MethodInfo *v11; // x1
  UILabel_o *sortExplanationLabel; // x21
  UILabel_o *priorityTitleLabel; // x21
  UILabel_o *priorityExplanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  struct ListViewSort_o **p_baseSortInfo; // x21
  int32_t modeKind; // w8
  OtherUserSortDialog_c *v19; // x0
  struct ListViewSort_o *friendMemberListSortInfo; // x1
  OtherUserSortDialog_c *v21; // x0
  OtherUserSortDialog_c *v22; // x0
  ListViewSort_o *v23; // x20
  ListViewSort_o *v24; // x21
  struct UILabel_array *sortButtonLabels; // x8
  __int64 v26; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x23
  UILabel_o *v29; // x20
  struct UILabel_array *priorityButtonLabels; // x8
  __int64 v31; // x22
  int v32; // w9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x23
  UILabel_o *v34; // x20
  const MethodInfo *v35; // x2
  System_Action_o *v36; // x20
  __int64 v37; // x0

  if ( (byte_42ADBC8 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&ListViewSort_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_OtherUserSortDialog_EndOpen__);
    sub_B52984(&OtherUserSortDialog_TypeInfo);
    sub_B52984(&StringLiteral_9911/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/);
    sub_B52984(&StringLiteral_9909/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/);
    sub_B52984(&StringLiteral_9906/*"OTHER_USER_SORT_DIALOG_CANCEL"*/);
    sub_B52984(&StringLiteral_9908/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/);
    sub_B52984(&StringLiteral_9907/*"OTHER_USER_SORT_DIALOG_DECIDE"*/);
    sub_B52984(&StringLiteral_9910/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/);
    byte_42ADBC8 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    this->fields.modeKind = kind;
    sub_B52920(&this->fields.callbackFunc);
    sortTitleLabel = this->fields.sortTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9911/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, 0LL);
    if ( !sortTitleLabel )
      goto LABEL_59;
    UILabel__set_text(sortTitleLabel, SortKindText, 0LL);
    sortExplanationLabel = this->fields.sortExplanationLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9910/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, 0LL);
    if ( !sortExplanationLabel )
      goto LABEL_59;
    UILabel__set_text(sortExplanationLabel, SortKindText, 0LL);
    priorityTitleLabel = this->fields.priorityTitleLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9909/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, 0LL);
    if ( !priorityTitleLabel )
      goto LABEL_59;
    UILabel__set_text(priorityTitleLabel, SortKindText, 0LL);
    priorityExplanationLabel = this->fields.priorityExplanationLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9908/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, 0LL);
    if ( !priorityExplanationLabel )
      goto LABEL_59;
    UILabel__set_text(priorityExplanationLabel, SortKindText, 0LL);
    decideLabel = this->fields.decideLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9907/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_59;
    UILabel__set_text(decideLabel, SortKindText, 0LL);
    cancelLabel = this->fields.cancelLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9906/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_59;
    UILabel__set_text(cancelLabel, SortKindText, 0LL);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      p_baseSortInfo = &this->fields.baseSortInfo;
      sub_B52920(&this->fields.baseSortInfo);
LABEL_34:
      v23 = *p_baseSortInfo;
      if ( *p_baseSortInfo )
      {
        this->fields.openedSortKind = v23->fields.sortKind;
        this->fields.openedPriorityKind = v23->fields.priorityKind;
        v24 = (ListViewSort_o *)sub_B52A54(ListViewSort_TypeInfo);
        ListViewSort___ctor_33999772(v24, v23, 0LL);
        this->fields.operationSortInfo = v24;
        sub_B52920(&this->fields.operationSortInfo);
        sortButtonLabels = this->fields.sortButtonLabels;
        if ( sortButtonLabels )
        {
          v26 = 0LL;
          while ( 1 )
          {
            max_length = sortButtonLabels->max_length;
            if ( (int)v26 >= max_length )
              break;
            if ( (unsigned int)v26 >= max_length )
            {
LABEL_60:
              v37 = sub_B52A88(SortKindText);
              sub_B52A28(v37, 0LL);
            }
            sortKindList = this->fields.sortKindList;
            if ( sortKindList )
            {
              v29 = sortButtonLabels->m_Items[v26];
              if ( sortKindList->fields._size <= (unsigned int)v26 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
              if ( this->fields.operationSortInfo )
              {
                SortKindText = ListViewSort__GetSortKindText(
                                 this->fields.operationSortInfo,
                                 sortKindList->fields._items->m_Items[v26 + 1],
                                 0LL);
                if ( v29 )
                {
                  UILabel__set_text(v29, SortKindText, 0LL);
                  sortButtonLabels = this->fields.sortButtonLabels;
                  ++v26;
                  if ( sortButtonLabels )
                    continue;
                }
              }
            }
            goto LABEL_59;
          }
          OtherUserSortDialog__SetSortButtonSelect(this, v11);
          priorityButtonLabels = this->fields.priorityButtonLabels;
          if ( priorityButtonLabels )
          {
            v31 = 0LL;
            while ( 1 )
            {
              v32 = priorityButtonLabels->max_length;
              if ( (int)v31 >= v32 )
                break;
              if ( (unsigned int)v31 >= v32 )
                goto LABEL_60;
              priorityKindList = this->fields.priorityKindList;
              if ( priorityKindList )
              {
                v34 = priorityButtonLabels->m_Items[v31];
                if ( priorityKindList->fields._size <= (unsigned int)v31 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
                if ( this->fields.operationSortInfo )
                {
                  SortKindText = ListViewSort__GetOtherUserPriorityKindText(
                                   this->fields.operationSortInfo,
                                   priorityKindList->fields._items->m_Items[v31 + 1],
                                   0LL);
                  if ( v34 )
                  {
                    UILabel__set_text(v34, SortKindText, 0LL);
                    priorityButtonLabels = this->fields.priorityButtonLabels;
                    ++v31;
                    if ( priorityButtonLabels )
                      continue;
                  }
                }
              }
              goto LABEL_59;
            }
            OtherUserSortDialog__SetPriorityButtonSelect(this, v11);
            SortKindText = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( SortKindText )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SortKindText, 1, 0LL);
              OtherUserSortDialog__SetEnableButtons(this, 1, v35);
              this->fields.state = 1;
              v36 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
              System_Action___ctor(v36, (Il2CppObject *)this, Method_OtherUserSortDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v36, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_59:
      sub_B52A5C(SortKindText, v11);
    }
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v22 = OtherUserSortDialog_TypeInfo;
        if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
          v22 = OtherUserSortDialog_TypeInfo;
        }
        friendMemberListSortInfo = v22->static_fields->friendMemberListSortInfo;
      }
      else
      {
        if ( modeKind != 2 )
        {
          p_baseSortInfo = &this->fields.baseSortInfo;
          goto LABEL_32;
        }
        v19 = OtherUserSortDialog_TypeInfo;
        if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
          v19 = OtherUserSortDialog_TypeInfo;
        }
        friendMemberListSortInfo = v19->static_fields->friendRequestListSortInfo;
      }
    }
    else
    {
      v21 = OtherUserSortDialog_TypeInfo;
      if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v21 = OtherUserSortDialog_TypeInfo;
      }
      friendMemberListSortInfo = v21->static_fields->supportSortInfo;
    }
    this->fields.baseSortInfo = friendMemberListSortInfo;
    p_baseSortInfo = &this->fields.baseSortInfo;
    sub_B52920(&this->fields.baseSortInfo);
LABEL_32:
    SortKindText = (System_String_o *)*p_baseSortInfo;
    if ( !*p_baseSortInfo )
      goto LABEL_59;
    ListViewSort__Load((ListViewSort_o *)SortKindText, 0LL);
    goto LABEL_34;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog__SetEnableButtons(
        OtherUserSortDialog_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct UICommonButton_array *sortButtons; // x21
  int max_length; // w8
  OtherUserSortDialog_o *v5; // x19
  unsigned int v7; // w22
  bool v8; // w20
  __int64 v9; // x0

  sortButtons = this->fields.sortButtons;
  if ( !sortButtons )
    goto LABEL_10;
  max_length = sortButtons->max_length;
  v5 = this;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v9 = sub_B52A88(this);
        sub_B52A28(v9, 0LL);
      }
      this = (OtherUserSortDialog_o *)sortButtons->m_Items[v7];
      if ( !this )
        break;
      UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, isEnable, 0LL);
      max_length = sortButtons->max_length;
      if ( (int)++v7 >= max_length )
        goto LABEL_7;
    }
LABEL_10:
    sub_B52A5C(this, isEnable);
  }
LABEL_7:
  this = (OtherUserSortDialog_o *)v5->fields.decideButton;
  if ( !this )
    goto LABEL_10;
  v8 = isEnable;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v8, 0LL);
  this = (OtherUserSortDialog_o *)v5->fields.cancelButton;
  if ( !this )
    goto LABEL_10;
  UICommonButton__SetButtonEnableWithCollider((UICommonButton_o *)this, v8, 0LL);
}


void __fastcall OtherUserSortDialog__SetPriorityButtonSelect(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  OtherUserSortDialog_o *v2; // x19
  struct UICommonButton_array *priorityButtons; // x8
  __int64 v4; // x21
  struct UISprite_array *prioritySprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x24
  Il2CppClass **v8; // x8
  UISprite_o *v9; // x0
  System_String_o **v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_42ADBCB & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__);
    sub_B52984(&StringLiteral_17075/*"btn_bg_04"*/);
    this = (OtherUserSortDialog_o *)sub_B52984(&StringLiteral_17074/*"btn_bg_03"*/);
    byte_42ADBCB = 1;
  }
  priorityButtons = v2->fields.priorityButtons;
  if ( !priorityButtons )
LABEL_17:
    sub_B52A5C(this, method);
  v4 = 0LL;
  while ( (int)v4 < (signed int)priorityButtons->max_length )
  {
    prioritySprites = v2->fields.prioritySprites;
    if ( prioritySprites )
    {
      if ( (unsigned int)v4 >= prioritySprites->max_length )
      {
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        priorityKindList = v2->fields.priorityKindList;
        if ( priorityKindList )
        {
          v8 = &prioritySprites->obj.klass + v4;
          if ( priorityKindList->fields._size <= (unsigned int)v4 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          if ( v8[4] )
          {
            v9 = (UISprite_o *)v8[4];
            v10 = (System_String_o **)(operationSortInfo->fields.priorityKind == priorityKindList->fields._items->m_Items[v4 + 1]
                                     ? &StringLiteral_17074/*"btn_bg_03"*/
                                     : &StringLiteral_17075/*"btn_bg_04"*/);
            UISprite__set_spriteName(v9, *v10, 0LL);
            priorityButtons = v2->fields.priorityButtons;
            ++v4;
            if ( priorityButtons )
              continue;
          }
        }
      }
    }
    goto LABEL_17;
  }
}


void __fastcall OtherUserSortDialog__SetSortButtonSelect(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  OtherUserSortDialog_o *v2; // x19
  struct UICommonButton_array *sortButtons; // x8
  __int64 v4; // x21
  struct UISprite_array *sortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x24
  Il2CppClass **v8; // x8
  UISprite_o *v9; // x0
  System_String_o **v10; // x8
  __int64 v11; // x0

  v2 = this;
  if ( (byte_42ADBCA & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__);
    sub_B52984(&StringLiteral_17075/*"btn_bg_04"*/);
    this = (OtherUserSortDialog_o *)sub_B52984(&StringLiteral_17074/*"btn_bg_03"*/);
    byte_42ADBCA = 1;
  }
  sortButtons = v2->fields.sortButtons;
  if ( !sortButtons )
LABEL_17:
    sub_B52A5C(this, method);
  v4 = 0LL;
  while ( (int)v4 < (signed int)sortButtons->max_length )
  {
    sortSprites = v2->fields.sortSprites;
    if ( sortSprites )
    {
      if ( (unsigned int)v4 >= sortSprites->max_length )
      {
        v11 = sub_B52A88(this);
        sub_B52A28(v11, 0LL);
      }
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        sortKindList = v2->fields.sortKindList;
        if ( sortKindList )
        {
          v8 = &sortSprites->obj.klass + v4;
          if ( sortKindList->fields._size <= (unsigned int)v4 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
          if ( v8[4] )
          {
            v9 = (UISprite_o *)v8[4];
            v10 = (System_String_o **)(operationSortInfo->fields.sortKind == sortKindList->fields._items->m_Items[v4 + 1]
                                     ? &StringLiteral_17074/*"btn_bg_03"*/
                                     : &StringLiteral_17075/*"btn_bg_04"*/);
            UISprite__set_spriteName(v9, *v10, 0LL);
            sortButtons = v2->fields.sortButtons;
            ++v4;
            if ( sortButtons )
              continue;
          }
        }
      }
    }
    goto LABEL_17;
  }
}


void __fastcall OtherUserSortDialog__add_callbackFunc(
        OtherUserSortDialog_o *this,
        OtherUserSortDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  OtherUserSortDialog_o *v11; // x0
  OtherUserSortDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42ADBC6 & 1) == 0 )
  {
    sub_B52984(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    byte_42ADBC6 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (OtherUserSortDialog_CallbackFunc_c *)v8->klass != OtherUserSortDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_B52D50(v8);
  OtherUserSortDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall OtherUserSortDialog__get_closeBtnPath(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_42ADBD9 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_15582/*"Window/CancelButton"*/);
    byte_42ADBD9 = 1;
  }
  return (System_String_o *)StringLiteral_15582/*"Window/CancelButton"*/;
}


void __fastcall OtherUserSortDialog__remove_callbackFunc(
        OtherUserSortDialog_o *this,
        OtherUserSortDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct OtherUserSortDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct OtherUserSortDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  OtherUserSortDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42ADBC7 & 1) == 0 )
  {
    sub_B52984(&OtherUserSortDialog_CallbackFunc_TypeInfo);
    byte_42ADBC7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (OtherUserSortDialog_CallbackFunc_c *)v8->klass != OtherUserSortDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_B52D50(v8);
  OtherUserSortDialog__Awake(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog_CallbackFunc___ctor(
        OtherUserSortDialog_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall OtherUserSortDialog_CallbackFunc__BeginInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42AD3FC & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD3FC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall OtherUserSortDialog_CallbackFunc__EndInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog_CallbackFunc__Invoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  OtherUserSortDialog_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  OtherUserSortDialog_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  OtherUserSortDialog_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (OtherUserSortDialog_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AEB880(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}