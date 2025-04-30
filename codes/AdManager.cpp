void __fastcall AdManager___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x19
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A4DA3F & 1) == 0 )
  {
    sub_1B863B8(&AdManager_TypeInfo, v1);
    sub_1B863B8(&Method_System_Collections_Generic_List_AdImplementation_Base___ctor__, v2);
    sub_1B863B8(&System_Collections_Generic_List_AdImplementation_Base__TypeInfo, v3);
    byte_4A4DA3F = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_AdImplementation_Base__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
  AdManager_TypeInfo->static_fields->_adInstanceList = (struct System_Collections_Generic_List_AdImplementation_Base__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)AdManager_TypeInfo->static_fields, (int32_t)v4, v5, v6);
}


void __fastcall AdManager___ctor(AdManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Boolean_array *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A4DA3E & 1) == 0 )
  {
    sub_1B863B8(&bool___TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AdManager___ctor__, v3);
    byte_4A4DA3E = 1;
  }
  v4 = (struct System_Boolean_array *)sub_1B86460(bool___TypeInfo, 3LL);
  this->fields._isInitializedAdLibraries = v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._isInitializedAdLibraries, (int32_t)v4, v5, v6);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3839A98 *)Method_SingletonMonoBehaviour_AdManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AdManager__Initialize(AdManager_o *this, int32_t adLibrary, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0

  if ( (byte_4A4DA35 & 1) == 0 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, *(_QWORD *)&adLibrary);
    byte_4A4DA35 = 1;
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  AdManager_o *v14; // x1
  Il2CppClass **v15; // x0
  struct System_Boolean_array *v16; // x8

  v2 = this;
  if ( (byte_4A4DA36 & 1) == 0 )
  {
    sub_1B863B8(&Framework_Core_Ad_AdImplementation_Adjust_TypeInfo, method);
    sub_1B863B8(&AdManager_TypeInfo, v3);
    this = (AdManager_o *)sub_1B863B8(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v4);
    byte_4A4DA36 = 1;
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
  v8 = (Framework_Core_Ad_AdImplementation_Adjust_o *)sub_1B86604(Framework_Core_Ad_AdImplementation_Adjust_TypeInfo);
  Framework_Core_Ad_AdImplementation_Adjust___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Adjust_o *, Il2CppMethodPointer))v8->klass->vtable._4_Initialize.method)(
                          v8,
                          v8->klass->vtable._5_GetAppToken.methodPtr);
  if ( !adInstanceList )
    goto LABEL_18;
  items = adInstanceList->fields._items;
  v12 = Method_System_Collections_Generic_List_AdImplementation_Base__Add__;
  ++adInstanceList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = adInstanceList->fields._size;
  v14 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adInstanceList,
      (Il2CppObject *)this,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    adInstanceList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v14;
    sub_1B8635C((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
  }
  v16 = v2->fields._isInitializedAdLibraries;
  if ( !v16 )
LABEL_18:
    sub_1B86614(this, method);
  if ( !v16->max_length )
LABEL_19:
    sub_1B8661C(this, method);
  v16->m_Items[4] = 1;
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  AdManager_o *v14; // x1
  Il2CppClass **v15; // x0
  struct System_Boolean_array *v16; // x8

  v2 = this;
  if ( (byte_4A4DA37 & 1) == 0 )
  {
    sub_1B863B8(&Framework_Core_Ad_AdImplementation_Repro_TypeInfo, method);
    sub_1B863B8(&AdManager_TypeInfo, v3);
    this = (AdManager_o *)sub_1B863B8(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__, v4);
    byte_4A4DA37 = 1;
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
  v8 = (Framework_Core_Ad_AdImplementation_Repro_o *)sub_1B86604(Framework_Core_Ad_AdImplementation_Repro_TypeInfo);
  Framework_Core_Ad_AdImplementation_Repro___ctor(v8, 0LL);
  if ( !v8 )
    goto LABEL_18;
  this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Repro_o *, Il2CppMethodPointer))v8->klass->vtable._4_Initialize.method)(
                          v8,
                          v8->klass->vtable._5_GetAppToken.methodPtr);
  if ( !adInstanceList )
    goto LABEL_18;
  items = adInstanceList->fields._items;
  v12 = Method_System_Collections_Generic_List_AdImplementation_Base__Add__;
  ++adInstanceList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = adInstanceList->fields._size;
  v14 = this;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adInstanceList,
      (Il2CppObject *)this,
      *(const MethodInfo_35FC958 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    adInstanceList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v14;
    sub_1B8635C((CGThumbnailListItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
  }
  v16 = v2->fields._isInitializedAdLibraries;
  if ( !v16 )
LABEL_18:
    sub_1B86614(this, method);
  if ( v16->max_length <= 1 )
LABEL_19:
    sub_1B8661C(this, method);
  v16->m_Items[5] = 1;
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  AdManager_c *v13; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v15; // x21

  if ( (byte_4A4DA3A & 1) == 0 )
  {
    sub_1B863B8(&System_Action_AdImplementation_Base__TypeInfo, regId);
    sub_1B863B8(&AdManager_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v5);
    sub_1B863B8(&Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__, v6);
    sub_1B863B8(&AdManager___c__DisplayClass12_0_TypeInfo, v7);
    byte_4A4DA3A = 1;
  }
  v8 = sub_1B86604(AdManager___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = regId;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)regId, v11, v12);
  v13 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v13 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v13->static_fields->_adInstanceList;
  v15 = (System_Action_object__o *)sub_1B86604(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1B86614(v9, v10);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v15,
    (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  AdManager_c *v13; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v15; // x21

  if ( (byte_4A4DA38 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_AdImplementation_Base__TypeInfo, friendCode);
    sub_1B863B8(&AdManager_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v5);
    sub_1B863B8(&Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__, v6);
    sub_1B863B8(&AdManager___c__DisplayClass10_0_TypeInfo, v7);
    byte_4A4DA38 = 1;
  }
  v8 = sub_1B86604(AdManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 16) = friendCode;
  sub_1B8635C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)friendCode, v11, v12);
  v13 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v13 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v13->static_fields->_adInstanceList;
  v15 = (System_Action_object__o *)sub_1B86604(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1B86614(v9, v10);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v15,
    (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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

  if ( (byte_4A4DA39 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&questId);
    sub_1B863B8(&AdManager_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v5);
    sub_1B863B8(&Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__, v6);
    sub_1B863B8(&AdManager___c__DisplayClass11_0_TypeInfo, v7);
    byte_4A4DA39 = 1;
  }
  v8 = sub_1B86604(AdManager___c__DisplayClass11_0_TypeInfo);
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
  v13 = (System_Action_object__o *)sub_1B86604(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v8,
    Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1B86614(v9, v10);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v13,
    (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void __fastcall AdManager__SetUserId(AdManager_o *this, int64_t userId, const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int64_t v7; // [xsp+8h] [xbp-18h] BYREF

  v7 = userId;
  v4 = System_Int64__ToString((int64_t)&v7, 0LL);
  this->fields._userIdStr = v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._userIdStr, (int32_t)v4, v5, v6);
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  AdManager_c *v24; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v26; // x20

  if ( (byte_4A4DA3B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&category);
    sub_1B863B8(&AdManager_TypeInfo, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v14);
    sub_1B863B8(&Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, v15);
    sub_1B863B8(&AdManager___c__DisplayClass13_0_TypeInfo, v16);
    byte_4A4DA3B = 1;
  }
  v17 = sub_1B86604(AdManager___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_8;
  *(_DWORD *)(v17 + 16) = category;
  *(_DWORD *)(v17 + 20) = checkPoint;
  *(_DWORD *)(v17 + 24) = num;
  *(_DWORD *)(v17 + 28) = num2;
  *(_QWORD *)(v17 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 32), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 40) = propertyStr;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 40), (int32_t)propertyStr, v22, v23);
  v24 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v24 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v24->static_fields->_adInstanceList;
  v26 = (System_Action_object__o *)sub_1B86604(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(v26, (Il2CppObject *)v17, Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, 0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1B86614(v18, v19);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v26,
    (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  AdManager_c *v24; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v26; // x20

  if ( (byte_4A4DA3C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&actionId);
    sub_1B863B8(&AdManager_TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v12);
    sub_1B863B8(&Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__, v13);
    sub_1B863B8(&AdManager___c__DisplayClass14_0_TypeInfo, v14);
    byte_4A4DA3C = 1;
  }
  v15 = sub_1B86604(AdManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_DWORD *)(v15 + 16) = actionId;
  *(double *)(v15 + 24) = price;
  *(_QWORD *)(v15 + 32) = currency;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 32), (int32_t)currency, v18, v19);
  *(_QWORD *)(v15 + 40) = transactionId;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 40), (int32_t)transactionId, v20, v21);
  *(_QWORD *)(v15 + 48) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 48), (int32_t)this, v22, v23);
  v24 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v24 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v24->static_fields->_adInstanceList;
  v26 = (System_Action_object__o *)sub_1B86604(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v15,
    Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1B86614(v16, v17);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v26,
    (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  AdManager_c *v24; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v26; // x20

  if ( (byte_4A4DA3D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_AdImplementation_Base__TypeInfo, *(_QWORD *)&actionId);
    sub_1B863B8(&AdManager_TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__, v12);
    sub_1B863B8(&Method_AdManager___c__DisplayClass15_0__TrackPurchaseExternal_b__0__, v13);
    sub_1B863B8(&AdManager___c__DisplayClass15_0_TypeInfo, v14);
    byte_4A4DA3D = 1;
  }
  v15 = sub_1B86604(AdManager___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_DWORD *)(v15 + 16) = actionId;
  *(double *)(v15 + 24) = price;
  *(_QWORD *)(v15 + 32) = currency;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 32), (int32_t)currency, v18, v19);
  *(_QWORD *)(v15 + 40) = transactionId;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 40), (int32_t)transactionId, v20, v21);
  *(_QWORD *)(v15 + 48) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 48), (int32_t)this, v22, v23);
  v24 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v24 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v24->static_fields->_adInstanceList;
  v26 = (System_Action_object__o *)sub_1B86604(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v26,
    (Il2CppObject *)v15,
    Method_AdManager___c__DisplayClass15_0__TrackPurchaseExternal_b__0__,
    0LL);
  if ( !adInstanceList )
LABEL_8:
    sub_1B86614(v16, v17);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v26,
    (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, 0LL);
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
    sub_1B86614(this, ad);
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
    sub_1B86614(this, ad);
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
    sub_1B86614(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, void *, double))ad->klass->vtable._12_TrackPurchaseExternal.method)(
    ad,
    (unsigned int)this->fields.actionId,
    this->fields.currency,
    this->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass[1]._1.image,
    this->fields.price);
}