void AdManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C268C4 & 1) == 0 )
  {
    sub_1C2D490(&AdManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_AdImplementation_Base__TypeInfo);
    byte_4C268C4 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_AdImplementation_Base__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
  AdManager_TypeInfo->static_fields->_adInstanceList = (struct System_Collections_Generic_List_AdImplementation_Base__o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)AdManager_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AdManager___ctor(AdManager_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C268C3 & 1) == 0 )
  {
    sub_1C2D490(&bool___TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_AdManager___ctor__);
    byte_4C268C3 = 1;
  }
  v3 = (struct System_Boolean_array *)sub_1C2D538(bool___TypeInfo, 3);
  this->fields._isInitializedAdLibraries = v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._isInitializedAdLibraries, (int32_t)v3, v4, v5);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39D40E4 *)Method_SingletonMonoBehaviour_AdManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void AdManager__Initialize(AdManager_o *this, int32_t adLibrary, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0

  if ( (byte_4C268BA & 1) == 0 )
  {
    sub_1C2D490(&ManagerConfig_TypeInfo);
    byte_4C268BA = 1;
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


void AdManager__InitializeAdjust(AdManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AdManager_o *v3; // x19
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v5; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Adjust_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  AdManager_o *v13; // x1
  Il2CppClass **v14; // x0
  struct System_Boolean_array *v15; // x8

  v3 = this;
  if ( (byte_4C268BB & 1) == 0 )
  {
    sub_1C2D490(&Framework_Core_Ad_AdImplementation_Adjust_TypeInfo);
    sub_1C2D490(&AdManager_TypeInfo);
    this = (AdManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__);
    byte_4C268BB = 1;
  }
  isInitializedAdLibraries = v3->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_18;
  if ( !LODWORD(isInitializedAdLibraries->max_length) )
    goto LABEL_19;
  if ( isInitializedAdLibraries->m_Items[0] )
    return;
  v5 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v5 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v5->static_fields->_adInstanceList;
  v7 = (Framework_Core_Ad_AdImplementation_Adjust_o *)sub_1C2D6DC(Framework_Core_Ad_AdImplementation_Adjust_TypeInfo);
  Framework_Core_Ad_AdImplementation_Adjust___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_18;
  this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Adjust_o *, const MethodInfo *))v7->klass->vtable._4_Initialize.methodPtr)(
                          v7,
                          v7->klass->vtable._4_Initialize.method);
  if ( !adInstanceList )
    goto LABEL_18;
  items = adInstanceList->fields._items;
  v11 = Method_System_Collections_Generic_List_AdImplementation_Base__Add__;
  ++adInstanceList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = adInstanceList->fields._size;
  v13 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adInstanceList,
      (Il2CppObject *)this,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    adInstanceList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v13;
    sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
  }
  v15 = v3->fields._isInitializedAdLibraries;
  if ( !v15 )
LABEL_18:
    sub_1C2D6EC(this, method);
  if ( !LODWORD(v15->max_length) )
LABEL_19:
    sub_1C2D6F4(this, method, v2);
  v15->m_Items[0] = 1;
}


void AdManager__InitializeRepro(AdManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AdManager_o *v3; // x19
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v5; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Repro_o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  AdManager_o *v13; // x1
  Il2CppClass **v14; // x0
  struct System_Boolean_array *v15; // x8

  v3 = this;
  if ( (byte_4C268BC & 1) == 0 )
  {
    sub_1C2D490(&Framework_Core_Ad_AdImplementation_Repro_TypeInfo);
    sub_1C2D490(&AdManager_TypeInfo);
    this = (AdManager_o *)sub_1C2D490(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__);
    byte_4C268BC = 1;
  }
  isInitializedAdLibraries = v3->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_18;
  if ( LODWORD(isInitializedAdLibraries->max_length) <= 1 )
    goto LABEL_19;
  if ( isInitializedAdLibraries->m_Items[1] )
    return;
  v5 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v5 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v5->static_fields->_adInstanceList;
  v7 = (Framework_Core_Ad_AdImplementation_Repro_o *)sub_1C2D6DC(Framework_Core_Ad_AdImplementation_Repro_TypeInfo);
  Framework_Core_Ad_AdImplementation_Repro___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_18;
  this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Repro_o *, const MethodInfo *))v7->klass->vtable._4_Initialize.methodPtr)(
                          v7,
                          v7->klass->vtable._4_Initialize.method);
  if ( !adInstanceList )
    goto LABEL_18;
  items = adInstanceList->fields._items;
  v11 = Method_System_Collections_Generic_List_AdImplementation_Base__Add__;
  ++adInstanceList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = adInstanceList->fields._size;
  v13 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adInstanceList,
      (Il2CppObject *)this,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    adInstanceList->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v13;
    sub_1C2D434((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
  }
  v15 = v3->fields._isInitializedAdLibraries;
  if ( !v15 )
LABEL_18:
    sub_1C2D6EC(this, method);
  if ( LODWORD(v15->max_length) <= 1 )
LABEL_19:
    sub_1C2D6F4(this, method, v2);
  v15->m_Items[1] = 1;
}


void AdManager__SendPushRegistrationId(AdManager_o *this, System_String_o *regId, const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AdManager_c *v9; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v11; // x21

  if ( (byte_4C268BF & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AdImplementation_Base__TypeInfo);
    sub_1C2D490(&AdManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_1C2D490(&Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__);
    sub_1C2D490(&AdManager___c__DisplayClass12_0_TypeInfo);
    byte_4C268BF = 1;
  }
  v4 = sub_1C2D6DC(AdManager___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = regId;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)regId, v7, v8);
  v9 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v9 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v9->static_fields->_adInstanceList;
  v11 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v11,
    (Il2CppObject *)v4,
    Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__,
    0);
  if ( !adInstanceList )
LABEL_8:
    sub_1C2D6EC(v5, v6);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v11,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void AdManager__SetFriendCode(AdManager_o *this, System_String_o *friendCode, const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AdManager_c *v9; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v11; // x21

  if ( (byte_4C268BD & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AdImplementation_Base__TypeInfo);
    sub_1C2D490(&AdManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_1C2D490(&Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__);
    sub_1C2D490(&AdManager___c__DisplayClass10_0_TypeInfo);
    byte_4C268BD = 1;
  }
  v4 = sub_1C2D6DC(AdManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = friendCode;
  sub_1C2D434((CGThumbnailListItem_o *)(v4 + 16), (int32_t)friendCode, v7, v8);
  v9 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v9 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v9->static_fields->_adInstanceList;
  v11 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(v11, (Il2CppObject *)v4, Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__, 0);
  if ( !adInstanceList )
LABEL_8:
    sub_1C2D6EC(v5, v6);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v11,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void AdManager__SetOpenedStoryQuest(AdManager_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  AdManager_c *v7; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v9; // x21

  if ( (byte_4C268BE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AdImplementation_Base__TypeInfo);
    sub_1C2D490(&AdManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_1C2D490(&Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__);
    sub_1C2D490(&AdManager___c__DisplayClass11_0_TypeInfo);
    byte_4C268BE = 1;
  }
  v4 = sub_1C2D6DC(AdManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_8;
  *(_DWORD *)(v4 + 16) = questId;
  v7 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v7 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v7->static_fields->_adInstanceList;
  v9 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v9,
    (Il2CppObject *)v4,
    Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__,
    0);
  if ( !adInstanceList )
LABEL_8:
    sub_1C2D6EC(v5, v6);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v9,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void AdManager__SetUserId(AdManager_o *this, int64_t userId, const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int64_t v7; // [xsp+8h] [xbp-18h] BYREF

  v7 = userId;
  v4 = System_Int64__ToString((int64_t)&v7, 0);
  this->fields._userIdStr = v4;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields._userIdStr, (int32_t)v4, v5, v6);
}


void AdManager__TrackEvent(
        AdManager_o *this,
        int32_t category,
        int32_t checkPoint,
        int32_t num,
        int32_t num2,
        System_String_o *propertyStr,
        const MethodInfo *method)
{
  __int64 v13; // x22
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  AdManager_c *v20; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v22; // x20

  if ( (byte_4C268C0 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AdImplementation_Base__TypeInfo);
    sub_1C2D490(&AdManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_1C2D490(&Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__);
    sub_1C2D490(&AdManager___c__DisplayClass13_0_TypeInfo);
    byte_4C268C0 = 1;
  }
  v13 = sub_1C2D6DC(AdManager___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_8;
  *(_DWORD *)(v13 + 16) = category;
  *(_DWORD *)(v13 + 20) = checkPoint;
  *(_DWORD *)(v13 + 24) = num;
  *(_DWORD *)(v13 + 28) = num2;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 40) = propertyStr;
  sub_1C2D434((CGThumbnailListItem_o *)(v13 + 40), (int32_t)propertyStr, v18, v19);
  v20 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v20 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v20->static_fields->_adInstanceList;
  v22 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(v22, (Il2CppObject *)v13, Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, 0);
  if ( !adInstanceList )
LABEL_8:
    sub_1C2D6EC(v14, v15);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v22,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void AdManager__TrackPurchase(
        AdManager_o *this,
        int32_t actionId,
        double price,
        System_String_o *currency,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  AdManager_c *v20; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v22; // x20

  if ( (byte_4C268C1 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AdImplementation_Base__TypeInfo);
    sub_1C2D490(&AdManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_1C2D490(&Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__);
    sub_1C2D490(&AdManager___c__DisplayClass14_0_TypeInfo);
    byte_4C268C1 = 1;
  }
  v11 = sub_1C2D6DC(AdManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_8;
  *(_DWORD *)(v11 + 16) = actionId;
  *(double *)(v11 + 24) = price;
  *(_QWORD *)(v11 + 32) = currency;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)currency, v14, v15);
  *(_QWORD *)(v11 + 40) = transactionId;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 40), (int32_t)transactionId, v16, v17);
  *(_QWORD *)(v11 + 48) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 48), (int32_t)this, v18, v19);
  v20 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v20 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v20->static_fields->_adInstanceList;
  v22 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v11,
    Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__,
    0);
  if ( !adInstanceList )
LABEL_8:
    sub_1C2D6EC(v12, v13);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v22,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void AdManager__TrackPurchaseExternal(
        AdManager_o *this,
        int32_t actionId,
        double price,
        System_String_o *currency,
        System_String_o *transactionId,
        const MethodInfo *method)
{
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  AdManager_c *v20; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v22; // x20

  if ( (byte_4C268C2 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_AdImplementation_Base__TypeInfo);
    sub_1C2D490(&AdManager_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_1C2D490(&Method_AdManager___c__DisplayClass15_0__TrackPurchaseExternal_b__0__);
    sub_1C2D490(&AdManager___c__DisplayClass15_0_TypeInfo);
    byte_4C268C2 = 1;
  }
  v11 = sub_1C2D6DC(AdManager___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_8;
  *(_DWORD *)(v11 + 16) = actionId;
  *(double *)(v11 + 24) = price;
  *(_QWORD *)(v11 + 32) = currency;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 32), (int32_t)currency, v14, v15);
  *(_QWORD *)(v11 + 40) = transactionId;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 40), (int32_t)transactionId, v16, v17);
  *(_QWORD *)(v11 + 48) = this;
  sub_1C2D434((CGThumbnailListItem_o *)(v11 + 48), (int32_t)this, v18, v19);
  v20 = AdManager_TypeInfo;
  if ( !AdManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo);
    v20 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v20->static_fields->_adInstanceList;
  v22 = (System_Action_object__o *)sub_1C2D6DC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v11,
    Method_AdManager___c__DisplayClass15_0__TrackPurchaseExternal_b__0__,
    0);
  if ( !adInstanceList )
LABEL_8:
    sub_1C2D6EC(v12, v13);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v22,
    (const MethodInfo_378A5C4 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void AdManager___c__DisplayClass10_0___ctor(AdManager___c__DisplayClass10_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdManager___c__DisplayClass10_0___SetFriendCode_b__0(
        AdManager___c__DisplayClass10_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  if ( !ad )
    sub_1C2D6EC(this, 0);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, struct System_String_o *, const MethodInfo *))ad->klass->vtable._7_SetFriendCode.methodPtr)(
    ad,
    this->fields.friendCode,
    ad->klass->vtable._7_SetFriendCode.method);
}


void AdManager___c__DisplayClass11_0___ctor(AdManager___c__DisplayClass11_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdManager___c__DisplayClass11_0___SetOpenedStoryQuest_b__0(
        AdManager___c__DisplayClass11_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  if ( !ad )
    sub_1C2D6EC(this, 0);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, const MethodInfo *))ad->klass->vtable._8_SetOpenedStoryQuest.methodPtr)(
    ad,
    (unsigned int)this->fields.questId,
    ad->klass->vtable._8_SetOpenedStoryQuest.method);
}


void AdManager___c__DisplayClass12_0___ctor(AdManager___c__DisplayClass12_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdManager___c__DisplayClass12_0___SendPushRegistrationId_b__0(
        AdManager___c__DisplayClass12_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  if ( !ad )
    sub_1C2D6EC(this, 0);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, struct System_String_o *, const MethodInfo *))ad->klass->vtable._9_SendPushRegistrationId.methodPtr)(
    ad,
    this->fields.regId,
    ad->klass->vtable._9_SendPushRegistrationId.method);
}


void AdManager___c__DisplayClass13_0___ctor(AdManager___c__DisplayClass13_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdManager___c__DisplayClass13_0___TrackEvent_b__0(
        AdManager___c__DisplayClass13_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  struct AdManager_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !ad )
    sub_1C2D6EC(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, _QWORD, _QWORD, _QWORD, struct System_String_o *, struct System_String_o *, const MethodInfo *))ad->klass->vtable._10_TrackEvent.methodPtr)(
    ad,
    (unsigned int)this->fields.category,
    (unsigned int)this->fields.checkPoint,
    (unsigned int)this->fields.num,
    (unsigned int)this->fields.num2,
    _4__this->fields._userIdStr,
    this->fields.propertyStr,
    ad->klass->vtable._10_TrackEvent.method);
}


void AdManager___c__DisplayClass14_0___ctor(AdManager___c__DisplayClass14_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdManager___c__DisplayClass14_0___TrackPurchase_b__0(
        AdManager___c__DisplayClass14_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  struct AdManager_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !ad )
    sub_1C2D6EC(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, const MethodInfo *, double))ad->klass->vtable._11_TrackPurchase.methodPtr)(
    ad,
    (unsigned int)this->fields.actionId,
    this->fields.currency,
    this->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass->vtable._11_TrackPurchase.method,
    this->fields.price);
}


void AdManager___c__DisplayClass15_0___ctor(AdManager___c__DisplayClass15_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AdManager___c__DisplayClass15_0___TrackPurchaseExternal_b__0(
        AdManager___c__DisplayClass15_0_o *this,
        Framework_Core_Ad_AdImplementation_Base_o *ad,
        const MethodInfo *method)
{
  struct AdManager_o *_4__this; // x9

  _4__this = this->fields.__4__this;
  if ( !_4__this || !ad )
    sub_1C2D6EC(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, const MethodInfo *, double))ad->klass->vtable._12_TrackPurchaseExternal.methodPtr)(
    ad,
    (unsigned int)this->fields.actionId,
    this->fields.currency,
    this->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass->vtable._12_TrackPurchaseExternal.method,
    this->fields.price);
}