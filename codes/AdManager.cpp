void __fastcall AdManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_List_object__o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B157B4 & 1) == 0 )
  {
    sub_1BCA7E0(&AdManager_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AdImplementation_Base___ctor__, v4, v5);
    sub_1BCA7E0(&System_Collections_Generic_List_AdImplementation_Base__TypeInfo, v6, v7);
    byte_4B157B4 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_AdImplementation_Base__TypeInfo,
                                                      v1,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
  AdManager_TypeInfo->static_fields->_adInstanceList = (struct System_Collections_Generic_List_AdImplementation_Base__o *)v8;
  sub_1BCA784((PartyOrganizationUtility_o *)AdManager_TypeInfo->static_fields, (int64_t)v8, v9, v10, v11, v12, v13, v14);
}


void __fastcall AdManager___ctor(AdManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct System_Boolean_array *v6; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  if ( (byte_4B157B3 & 1) == 0 )
  {
    sub_1BCA7E0(&bool___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AdManager___ctor__, v4, v5);
    byte_4B157B3 = 1;
  }
  v6 = (struct System_Boolean_array *)sub_1BCA888(bool___TypeInfo, 3LL);
  this->fields._isInitializedAdLibraries = v6;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields._isInitializedAdLibraries,
    (int64_t)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_AdManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__Initialize(AdManager_o *this, int32_t adLibrary, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0

  if ( (byte_4B157AA & 1) == 0 )
  {
    sub_1BCA7E0(&ManagerConfig_TypeInfo, *(_QWORD *)&adLibrary, method);
    byte_4B157AA = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, *(_QWORD *)&adLibrary);
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
  __int64 v2; // x2
  __int64 v3; // x3
  AdManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v10; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Adjust_o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  AdManager_o *v22; // x1
  Il2CppClass **v23; // x0
  struct System_Boolean_array *v24; // x8

  v4 = this;
  if ( (byte_4B157AB & 1) == 0 )
  {
    sub_1BCA7E0(&Framework_Core_Ad_AdImplementation_Adjust_TypeInfo, method, v2);
    sub_1BCA7E0(&AdManager_TypeInfo, v5, v6);
    this = (AdManager_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v7, v8);
    byte_4B157AB = 1;
  }
  isInitializedAdLibraries = v4->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_18;
  if ( !isInitializedAdLibraries->max_length )
    goto LABEL_19;
  if ( isInitializedAdLibraries->m_Items[4] )
    return;
  v10 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, method);
    v10 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v10->static_fields->_adInstanceList;
  v12 = (Framework_Core_Ad_AdImplementation_Adjust_o *)sub_1BCAA2C(
                                                         Framework_Core_Ad_AdImplementation_Adjust_TypeInfo,
                                                         method,
                                                         v2,
                                                         v3);
  Framework_Core_Ad_AdImplementation_Adjust___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Adjust_o *, Il2CppMethodPointer))v12->klass->vtable._4_Initialize.method)(
                          v12,
                          v12->klass->vtable._5_GetAppToken.methodPtr);
  if ( !adInstanceList )
    goto LABEL_18;
  items = adInstanceList->fields._items;
  v20 = Method_System_Collections_Generic_List_AdImplementation_Base__Add__;
  ++adInstanceList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = adInstanceList->fields._size;
  v22 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adInstanceList,
      (Il2CppObject *)this,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    adInstanceList->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v22;
    sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v22, v13, v14, v15, v16, v17, v18);
  }
  v24 = v4->fields._isInitializedAdLibraries;
  if ( !v24 )
LABEL_18:
    sub_1BCAA3C(this, method);
  if ( !v24->max_length )
LABEL_19:
    sub_1BCAA44(this, method);
  v24->m_Items[4] = 1;
}


void __fastcall AdManager__InitializeRepro(AdManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  AdManager_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v10; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Repro_o *v12; // x21
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  AdManager_o *v22; // x1
  Il2CppClass **v23; // x0
  struct System_Boolean_array *v24; // x8

  v4 = this;
  if ( (byte_4B157AC & 1) == 0 )
  {
    sub_1BCA7E0(&Framework_Core_Ad_AdImplementation_Repro_TypeInfo, method, v2);
    sub_1BCA7E0(&AdManager_TypeInfo, v5, v6);
    this = (AdManager_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v7, v8);
    byte_4B157AC = 1;
  }
  isInitializedAdLibraries = v4->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_18;
  if ( isInitializedAdLibraries->max_length <= 1 )
    goto LABEL_19;
  if ( isInitializedAdLibraries->m_Items[5] )
    return;
  v10 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, method);
    v10 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v10->static_fields->_adInstanceList;
  v12 = (Framework_Core_Ad_AdImplementation_Repro_o *)sub_1BCAA2C(
                                                        Framework_Core_Ad_AdImplementation_Repro_TypeInfo,
                                                        method,
                                                        v2,
                                                        v3);
  Framework_Core_Ad_AdImplementation_Repro___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_18;
  this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Repro_o *, Il2CppMethodPointer))v12->klass->vtable._4_Initialize.method)(
                          v12,
                          v12->klass->vtable._5_GetAppToken.methodPtr);
  if ( !adInstanceList )
    goto LABEL_18;
  items = adInstanceList->fields._items;
  v20 = Method_System_Collections_Generic_List_AdImplementation_Base__Add__;
  ++adInstanceList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = adInstanceList->fields._size;
  v22 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adInstanceList,
      (Il2CppObject *)this,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = &items->obj.klass + size;
    adInstanceList->fields._size = size + 1;
    v23[4] = (Il2CppClass *)v22;
    sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 4), (int64_t)v22, v13, v14, v15, v16, v17, v18);
  }
  v24 = v4->fields._isInitializedAdLibraries;
  if ( !v24 )
LABEL_18:
    sub_1BCAA3C(this, method);
  if ( v24->max_length <= 1 )
LABEL_19:
    sub_1BCAA44(this, method);
  v24->m_Items[5] = 1;
}


void __fastcall AdManager__SendPushRegistrationId(AdManager_o *this, System_String_o *regId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  AdManager_c *v25; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v27; // x21

  if ( (byte_4B157AF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AdImplementation_Base__TypeInfo, regId, method);
    sub_1BCA7E0(&AdManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v7, v8);
    sub_1BCA7E0(&Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__, v9, v10);
    sub_1BCA7E0(&AdManager___c__DisplayClass12_0_TypeInfo, v11, v12);
    byte_4B157AF = 1;
  }
  v13 = sub_1BCAA2C(AdManager___c__DisplayClass12_0_TypeInfo, regId, method, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_8;
  *(_QWORD *)(v13 + 16) = regId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)regId, v16, v17, v18, v19, v20, v21);
  v25 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, v22);
    v25 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v25->static_fields->_adInstanceList;
  v27 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AdImplementation_Base__TypeInfo, v22, v23, v24);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)v13,
    Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1BCAA3C(v14, v15);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v27,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetFriendCode(AdManager_o *this, System_String_o *friendCode, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  AdManager_c *v25; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v27; // x21

  if ( (byte_4B157AD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AdImplementation_Base__TypeInfo, friendCode, method);
    sub_1BCA7E0(&AdManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v7, v8);
    sub_1BCA7E0(&Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__, v9, v10);
    sub_1BCA7E0(&AdManager___c__DisplayClass10_0_TypeInfo, v11, v12);
    byte_4B157AD = 1;
  }
  v13 = sub_1BCAA2C(AdManager___c__DisplayClass10_0_TypeInfo, friendCode, method, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_8;
  *(_QWORD *)(v13 + 16) = friendCode;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 16), (int64_t)friendCode, v16, v17, v18, v19, v20, v21);
  v25 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, v22);
    v25 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v25->static_fields->_adInstanceList;
  v27 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AdImplementation_Base__TypeInfo, v22, v23, v24);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)v13,
    Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1BCAA3C(v14, v15);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v27,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__SetOpenedStoryQuest(AdManager_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  AdManager_c *v18; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v20; // x21

  if ( (byte_4B157AE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&questId, method);
    sub_1BCA7E0(&AdManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v7, v8);
    sub_1BCA7E0(&Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__, v9, v10);
    sub_1BCA7E0(&AdManager___c__DisplayClass11_0_TypeInfo, v11, v12);
    byte_4B157AE = 1;
  }
  v13 = sub_1BCAA2C(AdManager___c__DisplayClass11_0_TypeInfo, *(_QWORD *)&questId, method, v3);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  if ( !v13 )
    goto LABEL_8;
  *(_DWORD *)(v13 + 16) = questId;
  v18 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, v15);
    v18 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v18->static_fields->_adInstanceList;
  v20 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AdImplementation_Base__TypeInfo, v15, v16, v17);
  System_Action_object____ctor(
    v20,
    (Il2CppObject *)v13,
    Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1BCAA3C(v14, v15);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v20,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields._userIdStr, (int64_t)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x22
  __int64 v22; // x0
  __int64 v23; // x1
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
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  AdManager_c *v39; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v41; // x20

  if ( (byte_4B157B0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&category, *(_QWORD *)&checkPoint);
    sub_1BCA7E0(&AdManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v15, v16);
    sub_1BCA7E0(&Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, v17, v18);
    sub_1BCA7E0(&AdManager___c__DisplayClass13_0_TypeInfo, v19, v20);
    byte_4B157B0 = 1;
  }
  v21 = sub_1BCAA2C(
          AdManager___c__DisplayClass13_0_TypeInfo,
          *(_QWORD *)&category,
          *(_QWORD *)&checkPoint,
          *(_QWORD *)&num);
  System_Object___ctor((Il2CppObject *)v21, 0LL);
  if ( !v21 )
    goto LABEL_8;
  *(_DWORD *)(v21 + 16) = category;
  *(_DWORD *)(v21 + 20) = checkPoint;
  *(_DWORD *)(v21 + 24) = num;
  *(_DWORD *)(v21 + 28) = num2;
  *(_QWORD *)(v21 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 32), (int64_t)this, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v21 + 40) = propertyStr;
  sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 40), (int64_t)propertyStr, v30, v31, v32, v33, v34, v35);
  v39 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, v36);
    v39 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v39->static_fields->_adInstanceList;
  v41 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AdImplementation_Base__TypeInfo, v36, v37, v38);
  System_Action_object____ctor(v41, (Il2CppObject *)v21, Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, 0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1BCAA3C(v22, v23);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v41,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  AdManager_c *v43; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v45; // x20

  if ( (byte_4B157B1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&actionId, currency);
    sub_1BCA7E0(&AdManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v13, v14);
    sub_1BCA7E0(&Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__, v15, v16);
    sub_1BCA7E0(&AdManager___c__DisplayClass14_0_TypeInfo, v17, v18);
    byte_4B157B1 = 1;
  }
  v19 = sub_1BCAA2C(AdManager___c__DisplayClass14_0_TypeInfo, *(_QWORD *)&actionId, currency, transactionId);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_8;
  *(_DWORD *)(v19 + 16) = actionId;
  *(double *)(v19 + 24) = price;
  *(_QWORD *)(v19 + 32) = currency;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)currency, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 40) = transactionId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)transactionId, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v19 + 48) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 48), (int64_t)this, v34, v35, v36, v37, v38, v39);
  v43 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, v40);
    v43 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v43->static_fields->_adInstanceList;
  v45 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AdImplementation_Base__TypeInfo, v40, v41, v42);
  System_Action_object____ctor(
    v45,
    (Il2CppObject *)v19,
    Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1BCAA3C(v20, v21);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v45,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  AdManager_c *v43; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v45; // x20

  if ( (byte_4B157B2 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&actionId, currency);
    sub_1BCA7E0(&AdManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v13, v14);
    sub_1BCA7E0(&Method_AdManager___c__DisplayClass15_0__TrackPurchaseExternal_b__0__, v15, v16);
    sub_1BCA7E0(&AdManager___c__DisplayClass15_0_TypeInfo, v17, v18);
    byte_4B157B2 = 1;
  }
  v19 = sub_1BCAA2C(AdManager___c__DisplayClass15_0_TypeInfo, *(_QWORD *)&actionId, currency, transactionId);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    goto LABEL_8;
  *(_DWORD *)(v19 + 16) = actionId;
  *(double *)(v19 + 24) = price;
  *(_QWORD *)(v19 + 32) = currency;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 32), (int64_t)currency, v22, v23, v24, v25, v26, v27);
  *(_QWORD *)(v19 + 40) = transactionId;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 40), (int64_t)transactionId, v28, v29, v30, v31, v32, v33);
  *(_QWORD *)(v19 + 48) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v19 + 48), (int64_t)this, v34, v35, v36, v37, v38, v39);
  v43 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, v40);
    v43 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v43->static_fields->_adInstanceList;
  v45 = (System_Action_object__o *)sub_1BCAA2C(System_Action_AdImplementation_Base__TypeInfo, v40, v41, v42);
  System_Action_object____ctor(
    v45,
    (Il2CppObject *)v19,
    Method_AdManager___c__DisplayClass15_0__TrackPurchaseExternal_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1BCAA3C(v20, v21);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v45,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, 0LL);
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
    sub_1BCAA3C(this, ad);
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
    sub_1BCAA3C(this, ad);
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
    sub_1BCAA3C(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, void *, double))ad->klass->vtable._12_TrackPurchaseExternal.method)(
    ad,
    (unsigned int)this->fields.actionId,
    this->fields.currency,
    this->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass[1]._1.image,
    this->fields.price);
}