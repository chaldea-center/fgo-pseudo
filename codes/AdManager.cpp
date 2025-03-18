void __fastcall AdManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C21504 & 1) == 0 )
  {
    sub_1C3B764(&AdManager_TypeInfo, v1);
    sub_1C3B764(&Method_System_Collections_Generic_List_AdImplementation_Base___ctor__, v2);
    sub_1C3B764(&System_Collections_Generic_List_AdImplementation_Base__TypeInfo, v3);
    byte_4C21504 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_AdImplementation_Base__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
  AdManager_TypeInfo->static_fields->_adInstanceList = (struct System_Collections_Generic_List_AdImplementation_Base__o *)v4;
  sub_1C3B708((PartyOrganizationUtility_o *)AdManager_TypeInfo->static_fields, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


void __fastcall AdManager___ctor(AdManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Boolean_array *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C21503 & 1) == 0 )
  {
    sub_1C3B764(&bool___TypeInfo, method);
    sub_1C3B764(&Method_SingletonMonoBehaviour_AdManager___ctor__, v3);
    byte_4C21503 = 1;
  }
  v4 = (struct System_Boolean_array *)sub_1C3B80C(bool___TypeInfo, 3LL);
  this->fields._isInitializedAdLibraries = v4;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields._isInitializedAdLibraries,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_38C8B4C *)Method_SingletonMonoBehaviour_AdManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__Initialize(AdManager_o *this, int32_t adLibrary, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0

  if ( (byte_4C214FA & 1) == 0 )
  {
    sub_1C3B764(&ManagerConfig_TypeInfo, *(_QWORD *)&adLibrary);
    byte_4C214FA = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v5 = ManagerConfig_TypeInfo;
  }
  if ( !v5->static_fields->UseMock )
  {
    if ( adLibrary == 2 )
    {
      AdManager__InitializeAdjust(this, *(const MethodInfo **)&adLibrary);
    }
    else if ( adLibrary != 1 )
    {
      if ( !adLibrary )
        AdManager__InitializeAdjust(this, *(const MethodInfo **)&adLibrary);
      return;
    }
    AdManager__InitializeRepro(this, *(const MethodInfo **)&adLibrary);
  }
}


void __fastcall AdManager__InitializeAdjust(AdManager_o *this, const MethodInfo *method)
{
  AdManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v6; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Adjust_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  AdManager_o *v18; // x1
  Il2CppClass **v19; // x0
  struct System_Boolean_array *v20; // x8

  v2 = this;
  if ( (byte_4C214FB & 1) == 0 )
  {
    sub_1C3B764(&Framework_Core_Ad_AdImplementation_Adjust_TypeInfo, method);
    sub_1C3B764(&AdManager_TypeInfo, v3);
    this = (AdManager_o *)sub_1C3B764(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v4);
    byte_4C214FB = 1;
  }
  isInitializedAdLibraries = v2->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_18;
  if ( !isInitializedAdLibraries->max_length )
    goto LABEL_19;
  if ( isInitializedAdLibraries->m_Items[4] )
    return;
  v6 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v6 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v6->static_fields->_adInstanceList;
  v8 = (Framework_Core_Ad_AdImplementation_Adjust_o *)sub_1C3B9B0(Framework_Core_Ad_AdImplementation_Adjust_TypeInfo);
  Framework_Core_Ad_AdImplementation_Adjust___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Adjust_o *, Il2CppMethodPointer))v8->klass->vtable._4_Initialize.method)(
                          v8,
                          v8->klass->vtable._5_GetAppToken.methodPtr);
  if ( !adInstanceList )
    goto LABEL_18;
  items = adInstanceList->fields._items;
  v16 = Method_System_Collections_Generic_List_AdImplementation_Base__Add__;
  ++adInstanceList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = adInstanceList->fields._size;
  v18 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adInstanceList,
      (Il2CppObject *)this,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    adInstanceList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v18;
    sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)v18, v9, v10, v11, v12, v13, v14);
  }
  v20 = v2->fields._isInitializedAdLibraries;
  if ( !v20 )
LABEL_18:
    sub_1C3B9C0(this, method);
  if ( !v20->max_length )
LABEL_19:
    sub_1C3B9C8(this, method);
  v20->m_Items[4] = 1;
}


void __fastcall AdManager__InitializeRepro(AdManager_o *this, const MethodInfo *method)
{
  AdManager_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v6; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Repro_o *v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  AdManager_o *v18; // x1
  Il2CppClass **v19; // x0
  struct System_Boolean_array *v20; // x8

  v2 = this;
  if ( (byte_4C214FC & 1) == 0 )
  {
    sub_1C3B764(&Framework_Core_Ad_AdImplementation_Repro_TypeInfo, method);
    sub_1C3B764(&AdManager_TypeInfo, v3);
    this = (AdManager_o *)sub_1C3B764(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v4);
    byte_4C214FC = 1;
  }
  isInitializedAdLibraries = v2->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_18;
  if ( isInitializedAdLibraries->max_length <= 1 )
    goto LABEL_19;
  if ( isInitializedAdLibraries->m_Items[5] )
    return;
  v6 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v6 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v6->static_fields->_adInstanceList;
  v8 = (Framework_Core_Ad_AdImplementation_Repro_o *)sub_1C3B9B0(Framework_Core_Ad_AdImplementation_Repro_TypeInfo);
  Framework_Core_Ad_AdImplementation_Repro___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Repro_o *, Il2CppMethodPointer))v8->klass->vtable._4_Initialize.method)(
                          v8,
                          v8->klass->vtable._5_GetAppToken.methodPtr);
  if ( !adInstanceList )
    goto LABEL_18;
  items = adInstanceList->fields._items;
  v16 = Method_System_Collections_Generic_List_AdImplementation_Base__Add__;
  ++adInstanceList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = adInstanceList->fields._size;
  v18 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adInstanceList,
      (Il2CppObject *)this,
      *(const MethodInfo_368BC6C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    adInstanceList->fields._size = size + 1;
    v19[4] = (Il2CppClass *)v18;
    sub_1C3B708((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)v18, v9, v10, v11, v12, v13, v14);
  }
  v20 = v2->fields._isInitializedAdLibraries;
  if ( !v20 )
LABEL_18:
    sub_1C3B9C0(this, method);
  if ( v20->max_length <= 1 )
LABEL_19:
    sub_1C3B9C8(this, method);
  v20->m_Items[5] = 1;
}


void __fastcall AdManager__SendPushRegistrationId(AdManager_o *this, System_String_o *regId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  AdManager_c *v17; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v19; // x21

  if ( (byte_4C214FF & 1) == 0 )
  {
    sub_1C3B764(&System_Action_AdImplementation_Base__TypeInfo, regId);
    sub_1C3B764(&AdManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v5);
    sub_1C3B764(&Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__, v6);
    sub_1C3B764(&AdManager___c__DisplayClass12_0_TypeInfo, v7);
    byte_4C214FF = 1;
  }
  v8 = sub_1C3B9B0(AdManager___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = regId;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)regId, v11, v12, v13, v14, v15, v16);
  v17 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v17 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v17->static_fields->_adInstanceList;
  v19 = (System_Action_object__o *)sub_1C3B9B0(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1C3B9C0(v9, v10);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v19,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetFriendCode(AdManager_o *this, System_String_o *friendCode, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  AdManager_c *v17; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v19; // x21

  if ( (byte_4C214FD & 1) == 0 )
  {
    sub_1C3B764(&System_Action_AdImplementation_Base__TypeInfo, friendCode);
    sub_1C3B764(&AdManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v5);
    sub_1C3B764(&Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__, v6);
    sub_1C3B764(&AdManager___c__DisplayClass10_0_TypeInfo, v7);
    byte_4C214FD = 1;
  }
  v8 = sub_1C3B9B0(AdManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = friendCode;
  sub_1C3B708((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)friendCode, v11, v12, v13, v14, v15, v16);
  v17 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v17 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v17->static_fields->_adInstanceList;
  v19 = (System_Action_object__o *)sub_1C3B9B0(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1C3B9C0(v9, v10);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v19,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__SetOpenedStoryQuest(AdManager_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  AdManager_c *v11; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v13; // x21

  if ( (byte_4C214FE & 1) == 0 )
  {
    sub_1C3B764(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&questId);
    sub_1C3B764(&AdManager_TypeInfo, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v5);
    sub_1C3B764(&Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__, v6);
    sub_1C3B764(&AdManager___c__DisplayClass11_0_TypeInfo, v7);
    byte_4C214FE = 1;
  }
  v8 = sub_1C3B9B0(AdManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_DWORD *)(v8 + 16) = questId;
  v11 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v11 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v11->static_fields->_adInstanceList;
  v13 = (System_Action_object__o *)sub_1C3B9B0(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1C3B9C0(v9, v10);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v13,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetUserId(AdManager_o *this, int64_t userId, const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  int64_t v11; // [xsp+8h] [xbp-18h] BYREF

  v11 = userId;
  v4 = System_Int64__ToString((int64_t)&v11, 0LL);
  this->fields._userIdStr = v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields._userIdStr, (int64_t)v4, v5, v6, v7, v8, v9, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__TrackEvent(
        AdManager_o *this,
        int32_t category,
        int32_t checkPoint,
        int32_t num,
        int32_t num2,
        System_String_o *propertyStr,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  AdManager_c *v32; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v34; // x20

  if ( (byte_4C21500 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&category);
    sub_1C3B764(&AdManager_TypeInfo, v13);
    sub_1C3B764(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v14);
    sub_1C3B764(&Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, v15);
    sub_1C3B764(&AdManager___c__DisplayClass13_0_TypeInfo, v16);
    byte_4C21500 = 1;
  }
  v17 = sub_1C3B9B0(AdManager___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_8;
  *(_DWORD *)(v17 + 16) = category;
  *(_DWORD *)(v17 + 20) = checkPoint;
  *(_DWORD *)(v17 + 24) = num;
  *(_DWORD *)(v17 + 28) = num2;
  *(_QWORD *)(v17 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 32), (int64_t)this, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v17 + 40) = propertyStr;
  sub_1C3B708((PartyOrganizationUtility_o *)(v17 + 40), (int64_t)propertyStr, v26, v27, v28, v29, v30, v31);
  v32 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v32 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v32->static_fields->_adInstanceList;
  v34 = (System_Action_object__o *)sub_1C3B9B0(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(v34, (Il2CppObject *)v17, Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, 0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1C3B9C0(v18, v19);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v34,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__TrackPurchase(
        AdManager_o *this,
        int32_t actionId,
        double price,
        System_String_o *currency,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  AdManager_c *v36; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v38; // x20

  if ( (byte_4C21501 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&actionId);
    sub_1C3B764(&AdManager_TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v12);
    sub_1C3B764(&Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__, v13);
    sub_1C3B764(&AdManager___c__DisplayClass14_0_TypeInfo, v14);
    byte_4C21501 = 1;
  }
  v15 = sub_1C3B9B0(AdManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_DWORD *)(v15 + 16) = actionId;
  *(double *)(v15 + 24) = price;
  *(_QWORD *)(v15 + 32) = currency;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)currency, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 40) = transactionId;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 40), (int64_t)transactionId, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v15 + 48) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 48), (int64_t)this, v30, v31, v32, v33, v34, v35);
  v36 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v36 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v36->static_fields->_adInstanceList;
  v38 = (System_Action_object__o *)sub_1C3B9B0(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v38,
    (Il2CppObject *)v15,
    Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1C3B9C0(v16, v17);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v38,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__TrackPurchaseExternal(
        AdManager_o *this,
        int32_t actionId,
        double price,
        System_String_o *currency,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  AdManager_c *v36; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v38; // x20

  if ( (byte_4C21502 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&actionId);
    sub_1C3B764(&AdManager_TypeInfo, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v12);
    sub_1C3B764(&Method_AdManager___c__DisplayClass15_0__TrackPurchaseExternal_b__0__, v13);
    sub_1C3B764(&AdManager___c__DisplayClass15_0_TypeInfo, v14);
    byte_4C21502 = 1;
  }
  v15 = sub_1C3B9B0(AdManager___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_DWORD *)(v15 + 16) = actionId;
  *(double *)(v15 + 24) = price;
  *(_QWORD *)(v15 + 32) = currency;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)currency, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 40) = transactionId;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 40), (int64_t)transactionId, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v15 + 48) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v15 + 48), (int64_t)this, v30, v31, v32, v33, v34, v35);
  v36 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v36 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v36->static_fields->_adInstanceList;
  v38 = (System_Action_object__o *)sub_1C3B9B0(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v38,
    (Il2CppObject *)v15,
    Method_AdManager___c__DisplayClass15_0__TrackPurchaseExternal_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1C3B9C0(v16, v17);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v38,
    (const MethodInfo_368C6AC *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager___c__DisplayClass10_0___ctor(
        AdManager___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AdManager___c__DisplayClass10_0___SetFriendCode_b__0(
        AdManager___c__DisplayClass10_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  if ( !ad )
    sub_1C3B9C0(this, 0LL);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, struct System_String_o *, Il2CppMethodPointer))ad->klass->vtable._7_SetFriendCode.method)(
    ad,
    this->fields.friendCode,
    ad->klass->vtable._8_SetOpenedStoryQuest.methodPtr);
}


void __fastcall AdManager___c__DisplayClass11_0___ctor(
        AdManager___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AdManager___c__DisplayClass11_0___SetOpenedStoryQuest_b__0(
        AdManager___c__DisplayClass11_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  if ( !ad )
    sub_1C3B9C0(this, 0LL);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, Il2CppMethodPointer))ad->klass->vtable._8_SetOpenedStoryQuest.method)(
    ad,
    (unsigned int)this->fields.questId,
    ad->klass->vtable._9_SendPushRegistrationId.methodPtr);
}


void __fastcall AdManager___c__DisplayClass12_0___ctor(
        AdManager___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AdManager___c__DisplayClass12_0___SendPushRegistrationId_b__0(
        AdManager___c__DisplayClass12_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  if ( !ad )
    sub_1C3B9C0(this, 0LL);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, struct System_String_o *, Il2CppMethodPointer))ad->klass->vtable._9_SendPushRegistrationId.method)(
    ad,
    this->fields.regId,
    ad->klass->vtable._10_TrackEvent.methodPtr);
}


void __fastcall AdManager___c__DisplayClass13_0___ctor(
        AdManager___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AdManager___c__DisplayClass13_0___TrackEvent_b__0(
        AdManager___c__DisplayClass13_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  struct AdManager_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !ad )
    sub_1C3B9C0(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, _QWORD, _QWORD, _QWORD, struct System_String_o *, struct System_String_o *, Il2CppMethodPointer))ad->klass->vtable._10_TrackEvent.method)(
    ad,
    (unsigned int)this->fields.category,
    (unsigned int)this->fields.checkPoint,
    (unsigned int)this->fields.num,
    (unsigned int)this->fields.num2,
    _4__this->fields._userIdStr,
    this->fields.propertyStr,
    ad->klass->vtable._11_TrackPurchase.methodPtr);
}


void __fastcall AdManager___c__DisplayClass14_0___ctor(
        AdManager___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AdManager___c__DisplayClass14_0___TrackPurchase_b__0(
        AdManager___c__DisplayClass14_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  struct AdManager_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !ad )
    sub_1C3B9C0(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, Il2CppMethodPointer, double))ad->klass->vtable._11_TrackPurchase.method)(
    ad,
    (unsigned int)this->fields.actionId,
    this->fields.currency,
    this->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass->vtable._12_TrackPurchaseExternal.methodPtr,
    this->fields.price);
}


void __fastcall AdManager___c__DisplayClass15_0___ctor(
        AdManager___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall AdManager___c__DisplayClass15_0___TrackPurchaseExternal_b__0(
        AdManager___c__DisplayClass15_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  struct AdManager_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !ad )
    sub_1C3B9C0(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, void *, double))ad->klass->vtable._12_TrackPurchaseExternal.method)(
    ad,
    (unsigned int)this->fields.actionId,
    this->fields.currency,
    this->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass[1]._1.image,
    this->fields.price);
}