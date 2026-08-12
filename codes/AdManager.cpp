void AdManager___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596FD99 & 1) == 0 )
  {
    sub_2213A60(&AdManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
    sub_2213A60(&System_Collections_Generic_List_AdImplementation_Base__TypeInfo);
    byte_596FD99 = 1;
  }
  v1 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AdImplementation_Base__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_AdImplementation_Base___ctor__);
  AdManager_TypeInfo->static_fields->_adInstanceList = (struct System_Collections_Generic_List_AdImplementation_Base__o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AdManager_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AdManager___ctor(AdManager_o *this, const MethodInfo *method)
{
  struct System_Boolean_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596FD98 & 1) == 0 )
  {
    sub_2213A60(&bool___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_AdManager___ctor__);
    byte_596FD98 = 1;
  }
  v3 = (struct System_Boolean_array *)sub_2213B20(bool___TypeInfo, 3);
  this->fields._isInitializedAdLibraries = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._isInitializedAdLibraries,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_AdManager___ctor__);
}


// local variable allocation has failed, the output may be wrong!
void AdManager__Initialize(AdManager_o *this, int32_t adLibrary, const MethodInfo *method)
{
  ManagerConfig_c *v5; // x0

  if ( (byte_596FD8F & 1) == 0 )
  {
    sub_2213A60(&ManagerConfig_TypeInfo);
    byte_596FD8F = 1;
  }
  v5 = ManagerConfig_TypeInfo;
  if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
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


void AdManager__InitializeAdjust(AdManager_o *this, const MethodInfo *method)
{
  AdManager_o *v2; // x19
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v4; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Adjust_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  AdManager_o *v16; // x1
  Il2CppClass **v17; // x0
  struct System_Boolean_array *v18; // x8

  v2 = this;
  if ( (byte_596FD90 & 1) == 0 )
  {
    sub_2213A60(&Framework_Core_Ad_AdImplementation_Adjust_TypeInfo);
    sub_2213A60(&AdManager_TypeInfo);
    this = (AdManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__);
    byte_596FD90 = 1;
  }
  isInitializedAdLibraries = v2->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_18;
  if ( !LODWORD(isInitializedAdLibraries->max_length) )
    goto LABEL_19;
  if ( isInitializedAdLibraries->m_Items[0] )
    return;
  v4 = AdManager_TypeInfo;
  if ( !*(&AdManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, method);
    v4 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v4->static_fields->_adInstanceList;
  v6 = (Framework_Core_Ad_AdImplementation_Adjust_o *)sub_2213CCC(Framework_Core_Ad_AdImplementation_Adjust_TypeInfo);
  Framework_Core_Ad_AdImplementation_Adjust___ctor(v6, 0);
  if ( !v6 )
    goto LABEL_18;
  this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Adjust_o *, const MethodInfo *))v6->klass->vtable._4_Initialize.methodPtr)(
                          v6,
                          v6->klass->vtable._4_Initialize.method);
  if ( !adInstanceList )
    goto LABEL_18;
  items = adInstanceList->fields._items;
  v14 = Method_System_Collections_Generic_List_AdImplementation_Base__Add__;
  ++adInstanceList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = adInstanceList->fields._size;
  v16 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adInstanceList,
      (Il2CppObject *)this,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    adInstanceList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
  }
  v18 = v2->fields._isInitializedAdLibraries;
  if ( !v18 )
LABEL_18:
    sub_2213CDC(this, method);
  if ( !LODWORD(v18->max_length) )
LABEL_19:
    sub_2213CE4(this);
  v18->m_Items[0] = 1;
}


void AdManager__InitializeRepro(AdManager_o *this, const MethodInfo *method)
{
  AdManager_o *v2; // x19
  struct System_Boolean_array *isInitializedAdLibraries; // x8
  AdManager_c *v4; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x20
  Framework_Core_Ad_AdImplementation_Repro_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  AdManager_o *v16; // x1
  Il2CppClass **v17; // x0
  struct System_Boolean_array *v18; // x8

  v2 = this;
  if ( (byte_596FD91 & 1) == 0 )
  {
    sub_2213A60(&Framework_Core_Ad_AdImplementation_Repro_TypeInfo);
    sub_2213A60(&AdManager_TypeInfo);
    this = (AdManager_o *)sub_2213A60(&Method_System_Collections_Generic_List_AdImplementation_Base__Add__);
    byte_596FD91 = 1;
  }
  isInitializedAdLibraries = v2->fields._isInitializedAdLibraries;
  if ( !isInitializedAdLibraries )
    goto LABEL_18;
  if ( (isInitializedAdLibraries->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_19;
  if ( isInitializedAdLibraries->m_Items[1] )
    return;
  v4 = AdManager_TypeInfo;
  if ( !*(&AdManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, method);
    v4 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v4->static_fields->_adInstanceList;
  v6 = (Framework_Core_Ad_AdImplementation_Repro_o *)sub_2213CCC(Framework_Core_Ad_AdImplementation_Repro_TypeInfo);
  Framework_Core_Ad_AdImplementation_Repro___ctor(v6, 0);
  if ( !v6 )
    goto LABEL_18;
  this = (AdManager_o *)((__int64 (__fastcall *)(Framework_Core_Ad_AdImplementation_Repro_o *, const MethodInfo *))v6->klass->vtable._4_Initialize.methodPtr)(
                          v6,
                          v6->klass->vtable._4_Initialize.method);
  if ( !adInstanceList )
    goto LABEL_18;
  items = adInstanceList->fields._items;
  v14 = Method_System_Collections_Generic_List_AdImplementation_Base__Add__;
  ++adInstanceList->fields._version;
  if ( !items )
    goto LABEL_18;
  size = adInstanceList->fields._size;
  v16 = this;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      adInstanceList,
      (Il2CppObject *)this,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &items->obj.klass + size;
    adInstanceList->fields._size = size + 1;
    v17[4] = (Il2CppClass *)v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v17 + 4), (int32_t)v16, v7, v8, v9, v10, v11, v12);
  }
  v18 = v2->fields._isInitializedAdLibraries;
  if ( !v18 )
LABEL_18:
    sub_2213CDC(this, method);
  if ( (v18->max_length & 0xFFFFFFFE) == 0 )
LABEL_19:
    sub_2213CE4(this);
  v18->m_Items[1] = 1;
}


void AdManager__SendPushRegistrationId(AdManager_o *this, System_String_o *regId, const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  AdManager_c *v14; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v16; // x21

  if ( (byte_596FD94 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AdImplementation_Base__TypeInfo);
    sub_2213A60(&AdManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_2213A60(&Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__);
    sub_2213A60(&AdManager___c__DisplayClass12_0_TypeInfo);
    byte_596FD94 = 1;
  }
  v4 = sub_2213CCC(AdManager___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = regId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)regId, v7, v8, v9, v10, v11, v12);
  v14 = AdManager_TypeInfo;
  if ( !*(&AdManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, v13);
    v14 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v14->static_fields->_adInstanceList;
  v16 = (System_Action_object__o *)sub_2213CCC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v4,
    Method_AdManager___c__DisplayClass12_0__SendPushRegistrationId_b__0__,
    0);
  if ( !adInstanceList )
LABEL_8:
    sub_2213CDC(v5, v6);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v16,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void AdManager__SetFriendCode(AdManager_o *this, System_String_o *friendCode, const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  AdManager_c *v14; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v16; // x21

  if ( (byte_596FD92 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AdImplementation_Base__TypeInfo);
    sub_2213A60(&AdManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_2213A60(&Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__);
    sub_2213A60(&AdManager___c__DisplayClass10_0_TypeInfo);
    byte_596FD92 = 1;
  }
  v4 = sub_2213CCC(AdManager___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_8;
  *(_QWORD *)(v4 + 16) = friendCode;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v4 + 16), (int32_t)friendCode, v7, v8, v9, v10, v11, v12);
  v14 = AdManager_TypeInfo;
  if ( !*(&AdManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, v13);
    v14 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v14->static_fields->_adInstanceList;
  v16 = (System_Action_object__o *)sub_2213CCC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(v16, (Il2CppObject *)v4, Method_AdManager___c__DisplayClass10_0__SetFriendCode_b__0__, 0);
  if ( !adInstanceList )
LABEL_8:
    sub_2213CDC(v5, v6);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v16,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void AdManager__SetOpenedStoryQuest(AdManager_o *this, int32_t questId, const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  AdManager_c *v7; // x0
  int v8; // w8
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v10; // x21

  if ( (byte_596FD93 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AdImplementation_Base__TypeInfo);
    sub_2213A60(&AdManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_2213A60(&Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__);
    sub_2213A60(&AdManager___c__DisplayClass11_0_TypeInfo);
    byte_596FD93 = 1;
  }
  v4 = sub_2213CCC(AdManager___c__DisplayClass11_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  if ( !v4 )
    goto LABEL_8;
  v7 = AdManager_TypeInfo;
  v8 = *(&AdManager_TypeInfo->_2.cctor_finished + 1);
  *(_DWORD *)(v4 + 16) = questId;
  if ( !v8 )
  {
    j_il2cpp_runtime_class_init_0(v7, v6);
    v7 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v7->static_fields->_adInstanceList;
  v10 = (System_Action_object__o *)sub_2213CCC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v10,
    (Il2CppObject *)v4,
    Method_AdManager___c__DisplayClass11_0__SetOpenedStoryQuest_b__0__,
    0);
  if ( !adInstanceList )
LABEL_8:
    sub_2213CDC(v5, v6);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v10,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
}


void AdManager__SetUserId(AdManager_o *this, int64_t userId, const MethodInfo *method)
{
  struct System_String_o *v4; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int64_t v11; // [xsp+8h] [xbp-18h] BYREF

  v11 = userId;
  v4 = System_Int64__ToString((int64_t)&v11, 0);
  this->fields._userIdStr = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields._userIdStr, (int32_t)v4, v5, v6, v7, v8, v9, v10);
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
  __int64 v13; // x21
  __int64 v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  AdManager_c *v29; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v31; // x20

  if ( (byte_596FD95 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AdImplementation_Base__TypeInfo);
    sub_2213A60(&AdManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_2213A60(&Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__);
    sub_2213A60(&AdManager___c__DisplayClass13_0_TypeInfo);
    byte_596FD95 = 1;
  }
  v13 = sub_2213CCC(AdManager___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  if ( !v13 )
    goto LABEL_8;
  *(_DWORD *)(v13 + 16) = category;
  *(_DWORD *)(v13 + 20) = checkPoint;
  *(_DWORD *)(v13 + 24) = num;
  *(_DWORD *)(v13 + 28) = num2;
  *(_QWORD *)(v13 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v13 + 40) = propertyStr;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 40), (int32_t)propertyStr, v22, v23, v24, v25, v26, v27);
  v29 = AdManager_TypeInfo;
  if ( !*(&AdManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, v28);
    v29 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v29->static_fields->_adInstanceList;
  v31 = (System_Action_object__o *)sub_2213CCC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(v31, (Il2CppObject *)v13, Method_AdManager___c__DisplayClass13_0__TrackEvent_b__0__, 0);
  if ( !adInstanceList )
LABEL_8:
    sub_2213CDC(v14, v15);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v31,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  AdManager_c *v33; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v35; // x20

  if ( (byte_596FD96 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AdImplementation_Base__TypeInfo);
    sub_2213A60(&AdManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_2213A60(&Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__);
    sub_2213A60(&AdManager___c__DisplayClass14_0_TypeInfo);
    byte_596FD96 = 1;
  }
  v11 = sub_2213CCC(AdManager___c__DisplayClass14_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_8;
  *(_DWORD *)(v11 + 16) = actionId;
  *(double *)(v11 + 24) = price;
  *(_QWORD *)(v11 + 32) = currency;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)currency, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = transactionId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)transactionId, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 48) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)this, v26, v27, v28, v29, v30, v31);
  v33 = AdManager_TypeInfo;
  if ( !*(&AdManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, v32);
    v33 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v33->static_fields->_adInstanceList;
  v35 = (System_Action_object__o *)sub_2213CCC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v35,
    (Il2CppObject *)v11,
    Method_AdManager___c__DisplayClass14_0__TrackPurchase_b__0__,
    0);
  if ( !adInstanceList )
LABEL_8:
    sub_2213CDC(v12, v13);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v35,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  AdManager_c *v33; // x0
  System_Collections_Generic_List_object__o *adInstanceList; // x19
  System_Action_object__o *v35; // x20

  if ( (byte_596FD97 & 1) == 0 )
  {
    sub_2213A60(&System_Action_AdImplementation_Base__TypeInfo);
    sub_2213A60(&AdManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
    sub_2213A60(&Method_AdManager___c__DisplayClass15_0__TrackPurchaseExternal_b__0__);
    sub_2213A60(&AdManager___c__DisplayClass15_0_TypeInfo);
    byte_596FD97 = 1;
  }
  v11 = sub_2213CCC(AdManager___c__DisplayClass15_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    goto LABEL_8;
  *(_DWORD *)(v11 + 16) = actionId;
  *(double *)(v11 + 24) = price;
  *(_QWORD *)(v11 + 32) = currency;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)currency, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 40) = transactionId;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)transactionId, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 48) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)this, v26, v27, v28, v29, v30, v31);
  v33 = AdManager_TypeInfo;
  if ( !*(&AdManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AdManager_TypeInfo, v32);
    v33 = AdManager_TypeInfo;
  }
  adInstanceList = (System_Collections_Generic_List_object__o *)v33->static_fields->_adInstanceList;
  v35 = (System_Action_object__o *)sub_2213CCC(System_Action_AdImplementation_Base__TypeInfo);
  System_Action_object____ctor(
    v35,
    (Il2CppObject *)v11,
    Method_AdManager___c__DisplayClass15_0__TrackPurchaseExternal_b__0__,
    0);
  if ( !adInstanceList )
LABEL_8:
    sub_2213CDC(v12, v13);
  System_Collections_Generic_List_object___ForEach(
    adInstanceList,
    (System_Action_T__o *)v35,
    (const MethodInfo_4484684 *)Method_System_Collections_Generic_List_AdImplementation_Base__ForEach__);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, 0);
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
    sub_2213CDC(this, ad);
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
    sub_2213CDC(this, ad);
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
    sub_2213CDC(this, ad);
  ((void (__fastcall *)(Framework_Core_Ad_AdImplementation_Base_o *, _QWORD, struct System_String_o *, struct System_String_o *, struct System_String_o *, const MethodInfo *, double))ad->klass->vtable._12_TrackPurchaseExternal.methodPtr)(
    ad,
    (unsigned int)this->fields.actionId,
    this->fields.currency,
    this->fields.transactionId,
    _4__this->fields._userIdStr,
    ad->klass->vtable._12_TrackPurchaseExternal.method,
    this->fields.price);
}