void __fastcall OtherUserSortDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  ListViewSort_o *v6; // x19
  struct OtherUserSortDialog_StaticFields *static_fields; // x0
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x19
  System_String_o *v11; // x20
  System_String_o *v12; // x19
  ListViewSort_o *v13; // x20
  struct OtherUserSortDialog_StaticFields *v14; // x0
  __int64 v15; // x19
  System_String_o *v16; // x20
  System_String_o *v17; // x19
  ListViewSort_o *v18; // x20
  struct OtherUserSortDialog_StaticFields *v19; // x0
  int v20; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_41851EB & 1) == 0 )
  {
    sub_B2C35C(&FriendStatus_Kind_TypeInfo, v1);
    sub_B2C35C(&ListViewSort_TypeInfo, v2);
    sub_B2C35C(&OtherUserSortDialog_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_6731/*"FollowerSelect"*/, v4);
    sub_B2C35C(&StringLiteral_6806/*"FriendOperation"*/, v5);
    byte_41851EB = 1;
  }
  v6 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v6, (System_String_o *)StringLiteral_6731/*"FollowerSelect"*/, 11, 0, 0LL);
  static_fields = OtherUserSortDialog_TypeInfo->static_fields;
  static_fields->supportSortInfo = v6;
  sub_B2C2F8(static_fields, v6);
  v20 = 4;
  v8 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v20);
  if ( !v8 )
    goto LABEL_6;
  v10 = v8;
  v11 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                             v8,
                             *(_QWORD *)(*(_QWORD *)v8 + 368LL));
  v20 = *(_DWORD *)j_il2cpp_object_unbox_0(v10);
  v12 = System_String__Concat_44305532((System_String_o *)StringLiteral_6806/*"FriendOperation"*/, v11, 0LL);
  v13 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v13, v12, 3, 0, 0LL);
  v14 = OtherUserSortDialog_TypeInfo->static_fields;
  v14->friendMemberListSortInfo = v13;
  sub_B2C2F8(&v14->friendMemberListSortInfo, v13);
  v20 = 3;
  v8 = j_il2cpp_value_box_0(FriendStatus_Kind_TypeInfo, &v20);
  if ( !v8 )
LABEL_6:
    sub_B2C434(v8, v9);
  v15 = v8;
  v16 = (System_String_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 360LL))(
                             v8,
                             *(_QWORD *)(*(_QWORD *)v8 + 368LL));
  v20 = *(_DWORD *)j_il2cpp_object_unbox_0(v15);
  v17 = System_String__Concat_44305532((System_String_o *)StringLiteral_6806/*"FriendOperation"*/, v16, 0LL);
  v18 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
  ListViewSort___ctor_33914184(v18, v17, 3, 0, 0LL);
  v19 = OtherUserSortDialog_TypeInfo->static_fields;
  v19->friendRequestListSortInfo = v18;
  sub_B2C2F8(&v19->friendRequestListSortInfo, v18);
}


void __fastcall OtherUserSortDialog___ctor(OtherUserSortDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_VoiceCondType_Type__o *v12; // x20

  if ( (byte_41851EA & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__, v6);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo, v7);
    sub_B2C35C(&System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo, v8);
    byte_41851EA = 1;
  }
  v9 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_SortKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v9,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_SortKind___ctor__);
  if ( !v9 )
    goto LABEL_9;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    11,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v9,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_SortKind__Add__);
  this->fields.sortKindList = (struct System_Collections_Generic_List_ListViewSort_SortKind__o *)v9;
  sub_B2C2F8(&this->fields.sortKindList, v9);
  v12 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_ListViewSort_PriorityKind__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v12,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind___ctor__);
  if ( !v12 )
LABEL_9:
    sub_B2C434(v10, v11);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    0,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    4,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v12,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_ListViewSort_PriorityKind__Add__);
  this->fields.priorityKindList = (struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *)v12;
  sub_B2C2F8(&this->fields.priorityKindList, v12);
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
    sub_B2C2F8(p_callbackFunc, 0LL);
    OtherUserSortDialog_CallbackFunc__Invoke(v4, result, 0LL);
  }
}


void __fastcall OtherUserSortDialog__Close(
        OtherUserSortDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Action_o *v6; // x20

  if ( (byte_41851D9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_OtherUserSortDialog_EndClose__, v5);
    byte_41851D9 = 1;
  }
  OtherUserSortDialog__SetEnableButtons(this, 0, method);
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_OtherUserSortDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL);
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

  if ( (byte_41851DD & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickCancel__, method);
    byte_41851DD = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
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

  if ( (byte_41851DC & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickDecide__, method);
    byte_41851DC = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_OtherUserSortDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickDecide__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    baseSortInfo = this->fields.baseSortInfo;
    if ( !baseSortInfo
      || (ListViewSort__Set(baseSortInfo, this->fields.operationSortInfo, 0LL),
          (operationSortInfo = this->fields.operationSortInfo) == 0LL) )
    {
      sub_B2C434(baseSortInfo, v6);
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

  if ( (byte_41851E6 & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickPriorityBondUp__, method);
    byte_41851E6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityBondUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityBondUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickPriorityBondUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(v6, v7);
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

  if ( (byte_41851E8 & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickPriorityDropUp__, method);
    byte_41851E8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityDropUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityDropUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickPriorityDropUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(v6, v7);
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

  if ( (byte_41851E5 & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__, method);
    byte_41851E5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickPriorityEquipExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(v6, v7);
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

  if ( (byte_41851E3 & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__, method);
    byte_41851E3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickPriorityFriendPointUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(v6, v7);
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

  if ( (byte_41851E4 & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__, method);
    byte_41851E4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickPriorityMasterExpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(v6, v7);
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

  if ( (byte_41851E2 & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickPriorityNone__, method);
    byte_41851E2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityNone__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityNone__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickPriorityNone__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(v6, v7);
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

  if ( (byte_41851E7 & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickPriorityQpUp__, method);
    byte_41851E7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickPriorityQpUp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickPriorityQpUp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickPriorityQpUp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(v6, v7);
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

  if ( (byte_41851E1 & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickSortAttack__, method);
    byte_41851E1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortAttack__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortAttack__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickSortAttack__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(v6, v7);
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

  if ( (byte_41851E0 & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickSortHp__, method);
    byte_41851E0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortHp__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortHp__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickSortHp__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(v6, v7);
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

  if ( (byte_41851DF & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickSortLevel__, method);
    byte_41851DF = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLevel__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLevel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickSortLevel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(v6, v7);
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

  if ( (byte_41851DE & 1) == 0 )
  {
    sub_B2C35C(&Method_OtherUserSortDialog_OnClickSortLoginAccess__, method);
    byte_41851DE = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_OtherUserSortDialog_OnClickSortLoginAccess__;
    if ( (*((_BYTE *)Method_OtherUserSortDialog_OnClickSortLoginAccess__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_OtherUserSortDialog_OnClickSortLoginAccess__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, v5);
    operationSortInfo = this->fields.operationSortInfo;
    if ( !operationSortInfo )
      sub_B2C434(v6, v7);
    operationSortInfo->fields.sortKind = 11;
    OtherUserSortDialog__SetSortButtonSelect(this, v7);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall OtherUserSortDialog__Open(
        OtherUserSortDialog_o *this,
        int32_t kind,
        ListViewSort_o *sort,
        OtherUserSortDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  UILabel_o *sortTitleLabel; // x21
  System_String_o *SortKindText; // x0
  const MethodInfo *v23; // x1
  UILabel_o *sortExplanationLabel; // x21
  UILabel_o *priorityTitleLabel; // x21
  UILabel_o *priorityExplanationLabel; // x21
  UILabel_o *decideLabel; // x21
  UILabel_o *cancelLabel; // x21
  struct ListViewSort_o **p_baseSortInfo; // x21
  int32_t modeKind; // w8
  OtherUserSortDialog_c *v31; // x0
  struct ListViewSort_o *friendMemberListSortInfo; // x1
  OtherUserSortDialog_c *v33; // x0
  OtherUserSortDialog_c *v34; // x0
  ListViewSort_o *v35; // x20
  ListViewSort_o *v36; // x21
  struct UILabel_array *sortButtonLabels; // x8
  __int64 v38; // x22
  int max_length; // w9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x23
  UILabel_o *v41; // x20
  struct UILabel_array *priorityButtonLabels; // x8
  __int64 v43; // x22
  int v44; // w9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x23
  UILabel_o *v46; // x20
  const MethodInfo *v47; // x2
  System_Action_o *v48; // x20
  __int64 v49; // x0

  if ( (byte_41851D8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&ListViewSort_TypeInfo, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, v11);
    sub_B2C35C(&LocalizationManager_TypeInfo, v12);
    sub_B2C35C(&Method_OtherUserSortDialog_EndOpen__, v13);
    sub_B2C35C(&OtherUserSortDialog_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_9847/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, v15);
    sub_B2C35C(&StringLiteral_9845/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, v16);
    sub_B2C35C(&StringLiteral_9842/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, v17);
    sub_B2C35C(&StringLiteral_9844/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, v18);
    sub_B2C35C(&StringLiteral_9843/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, v19);
    sub_B2C35C(&StringLiteral_9846/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, v20);
    byte_41851D8 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    this->fields.modeKind = kind;
    sub_B2C2F8(&this->fields.callbackFunc, callback);
    sortTitleLabel = this->fields.sortTitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9847/*"OTHER_USER_SORT_DIALOG_SORT_TITLE"*/, 0LL);
    if ( !sortTitleLabel )
      goto LABEL_59;
    UILabel__set_text(sortTitleLabel, SortKindText, 0LL);
    sortExplanationLabel = this->fields.sortExplanationLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9846/*"OTHER_USER_SORT_DIALOG_SORT_DETAIL"*/, 0LL);
    if ( !sortExplanationLabel )
      goto LABEL_59;
    UILabel__set_text(sortExplanationLabel, SortKindText, 0LL);
    priorityTitleLabel = this->fields.priorityTitleLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9845/*"OTHER_USER_SORT_DIALOG_PRIORITY_TITLE"*/, 0LL);
    if ( !priorityTitleLabel )
      goto LABEL_59;
    UILabel__set_text(priorityTitleLabel, SortKindText, 0LL);
    priorityExplanationLabel = this->fields.priorityExplanationLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9844/*"OTHER_USER_SORT_DIALOG_PRIORITY_DETAIL"*/, 0LL);
    if ( !priorityExplanationLabel )
      goto LABEL_59;
    UILabel__set_text(priorityExplanationLabel, SortKindText, 0LL);
    decideLabel = this->fields.decideLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9843/*"OTHER_USER_SORT_DIALOG_DECIDE"*/, 0LL);
    if ( !decideLabel )
      goto LABEL_59;
    UILabel__set_text(decideLabel, SortKindText, 0LL);
    cancelLabel = this->fields.cancelLabel;
    SortKindText = LocalizationManager__Get((System_String_o *)StringLiteral_9842/*"OTHER_USER_SORT_DIALOG_CANCEL"*/, 0LL);
    if ( !cancelLabel )
      goto LABEL_59;
    UILabel__set_text(cancelLabel, SortKindText, 0LL);
    if ( sort )
    {
      this->fields.baseSortInfo = sort;
      p_baseSortInfo = &this->fields.baseSortInfo;
      sub_B2C2F8(&this->fields.baseSortInfo, sort);
LABEL_34:
      v35 = *p_baseSortInfo;
      if ( *p_baseSortInfo )
      {
        this->fields.openedSortKind = v35->fields.sortKind;
        this->fields.openedPriorityKind = v35->fields.priorityKind;
        v36 = (ListViewSort_o *)sub_B2C42C(ListViewSort_TypeInfo);
        ListViewSort___ctor_33914748(v36, v35, 0LL);
        this->fields.operationSortInfo = v36;
        sub_B2C2F8(&this->fields.operationSortInfo, v36);
        sortButtonLabels = this->fields.sortButtonLabels;
        if ( sortButtonLabels )
        {
          v38 = 0LL;
          while ( 1 )
          {
            max_length = sortButtonLabels->max_length;
            if ( (int)v38 >= max_length )
              break;
            if ( (unsigned int)v38 >= max_length )
            {
LABEL_60:
              v49 = sub_B2C460(SortKindText);
              sub_B2C400(v49, 0LL);
            }
            sortKindList = this->fields.sortKindList;
            if ( sortKindList )
            {
              v41 = sortButtonLabels->m_Items[v38];
              if ( sortKindList->fields._size <= (unsigned int)v38 )
                System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
              if ( this->fields.operationSortInfo )
              {
                SortKindText = ListViewSort__GetSortKindText(
                                 this->fields.operationSortInfo,
                                 sortKindList->fields._items->m_Items[v38 + 1],
                                 0LL);
                if ( v41 )
                {
                  UILabel__set_text(v41, SortKindText, 0LL);
                  sortButtonLabels = this->fields.sortButtonLabels;
                  ++v38;
                  if ( sortButtonLabels )
                    continue;
                }
              }
            }
            goto LABEL_59;
          }
          OtherUserSortDialog__SetSortButtonSelect(this, v23);
          priorityButtonLabels = this->fields.priorityButtonLabels;
          if ( priorityButtonLabels )
          {
            v43 = 0LL;
            while ( 1 )
            {
              v44 = priorityButtonLabels->max_length;
              if ( (int)v43 >= v44 )
                break;
              if ( (unsigned int)v43 >= v44 )
                goto LABEL_60;
              priorityKindList = this->fields.priorityKindList;
              if ( priorityKindList )
              {
                v46 = priorityButtonLabels->m_Items[v43];
                if ( priorityKindList->fields._size <= (unsigned int)v43 )
                  System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
                if ( this->fields.operationSortInfo )
                {
                  SortKindText = ListViewSort__GetOtherUserPriorityKindText(
                                   this->fields.operationSortInfo,
                                   priorityKindList->fields._items->m_Items[v43 + 1],
                                   0LL);
                  if ( v46 )
                  {
                    UILabel__set_text(v46, SortKindText, 0LL);
                    priorityButtonLabels = this->fields.priorityButtonLabels;
                    ++v43;
                    if ( priorityButtonLabels )
                      continue;
                  }
                }
              }
              goto LABEL_59;
            }
            OtherUserSortDialog__SetPriorityButtonSelect(this, v23);
            SortKindText = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this,
                                                0LL);
            if ( SortKindText )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)SortKindText, 1, 0LL);
              OtherUserSortDialog__SetEnableButtons(this, 1, v47);
              this->fields.state = 1;
              v48 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(v48, (Il2CppObject *)this, Method_OtherUserSortDialog_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
              return;
            }
          }
        }
      }
LABEL_59:
      sub_B2C434(SortKindText, v23);
    }
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v34 = OtherUserSortDialog_TypeInfo;
        if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
          v34 = OtherUserSortDialog_TypeInfo;
        }
        friendMemberListSortInfo = v34->static_fields->friendMemberListSortInfo;
      }
      else
      {
        if ( modeKind != 2 )
        {
          p_baseSortInfo = &this->fields.baseSortInfo;
          goto LABEL_32;
        }
        v31 = OtherUserSortDialog_TypeInfo;
        if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
          v31 = OtherUserSortDialog_TypeInfo;
        }
        friendMemberListSortInfo = v31->static_fields->friendRequestListSortInfo;
      }
    }
    else
    {
      v33 = OtherUserSortDialog_TypeInfo;
      if ( (BYTE3(OtherUserSortDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OtherUserSortDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OtherUserSortDialog_TypeInfo);
        v33 = OtherUserSortDialog_TypeInfo;
      }
      friendMemberListSortInfo = v33->static_fields->supportSortInfo;
    }
    this->fields.baseSortInfo = friendMemberListSortInfo;
    p_baseSortInfo = &this->fields.baseSortInfo;
    sub_B2C2F8(&this->fields.baseSortInfo, friendMemberListSortInfo);
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
        v9 = sub_B2C460(this);
        sub_B2C400(v9, 0LL);
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
    sub_B2C434(this, isEnable);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICommonButton_array *priorityButtons; // x8
  __int64 v6; // x21
  struct UISprite_array *prioritySprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_PriorityKind__o *priorityKindList; // x24
  Il2CppClass **v10; // x8
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_41851DB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_PriorityKind__get_Item__, method);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v3);
    this = (OtherUserSortDialog_o *)sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v4);
    byte_41851DB = 1;
  }
  priorityButtons = v2->fields.priorityButtons;
  if ( !priorityButtons )
LABEL_17:
    sub_B2C434(this, method);
  v6 = 0LL;
  while ( (int)v6 < (signed int)priorityButtons->max_length )
  {
    prioritySprites = v2->fields.prioritySprites;
    if ( prioritySprites )
    {
      if ( (unsigned int)v6 >= prioritySprites->max_length )
      {
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
      }
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        priorityKindList = v2->fields.priorityKindList;
        if ( priorityKindList )
        {
          v10 = &prioritySprites->obj.klass + v6;
          if ( priorityKindList->fields._size <= (unsigned int)v6 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( v10[4] )
          {
            v11 = (UISprite_o *)v10[4];
            v12 = (System_String_o **)(operationSortInfo->fields.priorityKind == priorityKindList->fields._items->m_Items[v6 + 1]
                                     ? &StringLiteral_16956/*"btn_bg_03"*/
                                     : &StringLiteral_16957/*"btn_bg_04"*/);
            UISprite__set_spriteName(v11, *v12, 0LL);
            priorityButtons = v2->fields.priorityButtons;
            ++v6;
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UICommonButton_array *sortButtons; // x8
  __int64 v6; // x21
  struct UISprite_array *sortSprites; // x8
  struct ListViewSort_o *operationSortInfo; // x9
  struct System_Collections_Generic_List_ListViewSort_SortKind__o *sortKindList; // x24
  Il2CppClass **v10; // x8
  UISprite_o *v11; // x0
  System_String_o **v12; // x8
  __int64 v13; // x0

  v2 = this;
  if ( (byte_41851DA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ListViewSort_SortKind__get_Item__, method);
    sub_B2C35C(&StringLiteral_16957/*"btn_bg_04"*/, v3);
    this = (OtherUserSortDialog_o *)sub_B2C35C(&StringLiteral_16956/*"btn_bg_03"*/, v4);
    byte_41851DA = 1;
  }
  sortButtons = v2->fields.sortButtons;
  if ( !sortButtons )
LABEL_17:
    sub_B2C434(this, method);
  v6 = 0LL;
  while ( (int)v6 < (signed int)sortButtons->max_length )
  {
    sortSprites = v2->fields.sortSprites;
    if ( sortSprites )
    {
      if ( (unsigned int)v6 >= sortSprites->max_length )
      {
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
      }
      operationSortInfo = v2->fields.operationSortInfo;
      if ( operationSortInfo )
      {
        sortKindList = v2->fields.sortKindList;
        if ( sortKindList )
        {
          v10 = &sortSprites->obj.klass + v6;
          if ( sortKindList->fields._size <= (unsigned int)v6 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
          if ( v10[4] )
          {
            v11 = (UISprite_o *)v10[4];
            v12 = (System_String_o **)(operationSortInfo->fields.sortKind == sortKindList->fields._items->m_Items[v6 + 1]
                                     ? &StringLiteral_16956/*"btn_bg_03"*/
                                     : &StringLiteral_16957/*"btn_bg_04"*/);
            UISprite__set_spriteName(v11, *v12, 0LL);
            sortButtons = v2->fields.sortButtons;
            ++v6;
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

  if ( (byte_41851D6 & 1) == 0 )
  {
    sub_B2C35C(&OtherUserSortDialog_CallbackFunc_TypeInfo, value);
    byte_41851D6 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_B2C728(v8);
  OtherUserSortDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall OtherUserSortDialog__get_closeBtnPath(
        OtherUserSortDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_41851E9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_15477/*"Window/CancelButton"*/, method);
    byte_41851E9 = 1;
  }
  return (System_String_o *)StringLiteral_15477/*"Window/CancelButton"*/;
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

  if ( (byte_41851D7 & 1) == 0 )
  {
    sub_B2C35C(&OtherUserSortDialog_CallbackFunc_TypeInfo, value);
    byte_41851D7 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (OtherUserSortDialog_o *)sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_418527A & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_418527A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall OtherUserSortDialog_CallbackFunc__EndInvoke(
        OtherUserSortDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
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
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
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
            v16 = sub_AC5258(v21, class_0, v10, v12);
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