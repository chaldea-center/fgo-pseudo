void SelectGrandServantComponent___ctor(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__List_StandFigureCollect___c *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  int32_t v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_List_object__o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5933107 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect____ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GrandServantIconComponent__TypeInfo);
    sub_21FFC50(&StringLiteral_6127/*"Effect/SelectGrandServant"*/);
    sub_21FFC50(&StringLiteral_17980/*"bit_select_grand_servant"*/);
    byte_5933107 = 1;
  }
  v3 = System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TypeInfo;
  this->fields.isAtTransition = 1;
  this->fields.figureRenderGradientColor = (struct UnityEngine_Color_o)xmmword_E948B0;
  v4 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(v3);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v4,
    (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect____ctor__);
  this->fields.figureCollectDictionary = (struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *)v4;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.figureCollectDictionary,
    (int32_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = StringLiteral_6127/*"Effect/SelectGrandServant"*/;
  this->fields.GrandServantSelectEffectPrefabFolderPath = (struct System_String_o *)StringLiteral_6127/*"Effect/SelectGrandServant"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.GrandServantSelectEffectPrefabFolderPath,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = StringLiteral_17980/*"bit_select_grand_servant"*/;
  this->fields.GrandServantSelectEffectPrefabName = (struct System_String_o *)StringLiteral_17980/*"bit_select_grand_servant"*/;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.GrandServantSelectEffectPrefabName,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GrandServantIconComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GrandServantIconComponent___ctor__);
  this->fields.cachedIconList = (struct System_Collections_Generic_List_GrandServantIconComponent__o *)v25;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.cachedIconList,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void SelectGrandServantComponent__AdjustIconToCenter(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *currentIcon; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_Object_o *centerChild; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *scrollView; // x20
  UnityEngine_Transform_o *cachedTransform; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  struct UIScrollView_o *v14; // x8
  UnityEngine_Object_o *mPanel; // x20
  struct UIScrollView_o *v16; // x8
  struct UIScrollView_o *v17; // x8
  UIRect_o *v18; // x8
  float v19; // s8
  float v20; // s9
  float32x2_t v21; // d10
  float32x2_t v22; // d11
  UnityEngine_Transform_o *v23; // x20
  float v24; // s8
  float v25; // s9
  UICenterOnChild_o *v26; // x19
  unsigned __int64 v27; // [xsp+0h] [xbp-50h]
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_59330EE & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59330EE = 1;
  }
  if ( !this->fields.isDragging && !this->fields.isClickNavigating )
  {
    currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    if ( !UnityEngine_Object__op_Equality(currentIcon, 0, 0) )
    {
      centerChild = (UnityEngine_Object_o *)this->fields.centerChild;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
      if ( !UnityEngine_Object__op_Equality(centerChild, 0, 0) )
      {
        scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
        cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(scrollView, 0, 0);
        if ( ((unsigned __int8)cachedTransform & 1) == 0 )
        {
          v14 = this->fields.scrollView;
          if ( !v14 )
            goto LABEL_32;
          mPanel = (UnityEngine_Object_o *)v14->fields.mPanel;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
          cachedTransform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(mPanel, 0, 0);
          if ( ((unsigned __int8)cachedTransform & 1) == 0 )
          {
            v16 = this->fields.scrollView;
            if ( !v16 )
              goto LABEL_32;
            cachedTransform = (UnityEngine_Transform_o *)v16->fields.mPanel;
            if ( !cachedTransform )
              goto LABEL_32;
            cachedTransform = (UnityEngine_Transform_o *)((__int64 (__fastcall *)(UnityEngine_Transform_o *, void *))cachedTransform->klass[1]._1.generic_class)(
                                                           cachedTransform,
                                                           cachedTransform->klass[1]._1.typeMetadataHandle);
            if ( !cachedTransform )
              goto LABEL_32;
            if ( LODWORD(cachedTransform[1].klass) <= 2 )
              sub_21FFED4(cachedTransform);
            v17 = this->fields.scrollView;
            if ( !v17 )
              goto LABEL_32;
            v18 = (UIRect_o *)v17->fields.mPanel;
            if ( !v18 )
              goto LABEL_32;
            v19 = *(float *)&cachedTransform[2].fields.m_CachedPtr;
            v20 = *(float *)&cachedTransform[1].fields.m_CachedPtr;
            v21.n64_u64[0] = (unsigned __int64)cachedTransform[2].monitor;
            v22.n64_u64[0] = (unsigned __int64)cachedTransform[1].monitor;
            cachedTransform = UIRect__get_cachedTransform(v18, 0);
            if ( !this->fields.currentIcon )
              goto LABEL_32;
            v23 = cachedTransform;
            cachedTransform = UnityEngine_Component__get_transform(
                                (UnityEngine_Component_o *)this->fields.currentIcon,
                                0);
            if ( !cachedTransform )
              goto LABEL_32;
            position = UnityEngine_Transform__get_position(cachedTransform, 0);
            if ( !v23 )
              goto LABEL_32;
            v24 = (float)(v19 + v20) * 0.5;
            v27 = vmul_f32(vadd_f32(v21, v22), (float32x2_t)0x3F0000003F000000LL).n64_u64[0];
            LODWORD(v25) = (unsigned int)UnityEngine_Transform__InverseTransformPoint(v23, position, 0);
            v29.fields.y = *((float *)&v27 + 1);
            LODWORD(v29.fields.x) = v27;
            v29.fields.z = v24;
            if ( vabds_f32(v25, COERCE_FLOAT(UnityEngine_Transform__InverseTransformPoint(v23, v29, 0))) > 0.5 )
            {
              cachedTransform = (UnityEngine_Transform_o *)this->fields.currentIcon;
              if ( cachedTransform )
              {
                v26 = this->fields.centerChild;
                cachedTransform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)cachedTransform, 0);
                if ( v26 )
                {
                  UICenterOnChild__CenterOn_56009592(v26, cachedTransform, 1, 0, 0);
                  return;
                }
              }
LABEL_32:
              sub_21FFECC(cachedTransform, v12);
            }
          }
        }
      }
    }
  }
}


void SelectGrandServantComponent__Awake(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  ;
}


void SelectGrandServantComponent__CleanUpStandFigures(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *figureCollectDictionary; // x0
  __int64 v4; // x1
  __int128 v5; // q0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  UIStandFigureR_o *monitor; // x0
  __int64 v10; // x1
  UIStandFigureR_o *v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *Instance; // x20
  UnityEngine_Coroutine_o *waitLoadCoroutine; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v24; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+40h] [xbp-B0h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v26; // [xsp+60h] [xbp-90h] BYREF

  if ( (byte_59330EF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__List_StandFigureCollect___get_Value__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_21FFC50(&StandFigureCamera_TypeInfo);
    byte_59330EF = 1;
  }
  figureCollectDictionary = this->fields.figureCollectDictionary;
  memset(&v25, 0, sizeof(v25));
  memset(&v26, 0, sizeof(v26));
  if ( !figureCollectDictionary )
    goto LABEL_28;
  System_Collections_Generic_Dictionary_int__object___GetEnumerator(
    &v24,
    (System_Collections_Generic_Dictionary_int__object__o *)figureCollectDictionary,
    (const MethodInfo_3F69144 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___GetEnumerator__);
  v26 = v24;
  while ( System_Collections_Generic_Dictionary_Enumerator_int__object___MoveNext(
            &v26,
            (const MethodInfo_41249BC *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___MoveNext__) )
  {
    if ( !v26.fields._current.fields.value )
      sub_21FFECC(0, v4);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v24,
      (System_Collections_Generic_List_object__o *)v26.fields._current.fields.value,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    v5 = *(_OWORD *)&v24.fields._dictionary;
    v24.fields._dictionary = 0;
    *(_QWORD *)&v24.fields._version = &v25;
    *(_OWORD *)&v25.fields._list = v5;
    v25.fields._current = v24.fields._current.fields.key;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v25,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
      if ( !v6 )
        break;
      current = v25.fields._current;
      if ( !v25.fields._current )
        sub_21FFECC(v6, v7);
      monitor = (UIStandFigureR_o *)v25.fields._current[1].monitor;
      if ( !monitor )
        sub_21FFECC(0, v7);
      UIStandFigureR__ReleaseBodyRenderTexture(monitor, 0);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)current[1].monitor, 0, 0);
      v11 = (UIStandFigureR_o *)current[1].monitor;
      if ( !v11 )
        sub_21FFECC(0, v10);
      UIStandFigureR__KillLoading(v11, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v25,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  }
  System_Collections_Generic_Dictionary_Enumerator_int__object___Dispose(
    &v26,
    (const MethodInfo_4124AE0 *)Method_System_Collections_Generic_Dictionary_Enumerator_int__List_StandFigureCollect___Dispose__);
  StandFigureManager__ReleaseCharaFigure(0);
  if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v12, v13);
  StandFigureCamera__ReleaseRenderTexturesForEffects(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14, v15);
  figureCollectDictionary = (struct System_Collections_Generic_Dictionary_int__List_StandFigureCollect___o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)figureCollectDictionary & 1) != 0 )
  {
    if ( Instance )
    {
      StandFigureManager__Reboot((StandFigureManager_o *)Instance, 0);
      StandFigureManager__ResetCameraRenderState((StandFigureManager_o *)Instance, 0);
      goto LABEL_24;
    }
LABEL_28:
    sub_21FFECC(figureCollectDictionary, method);
  }
LABEL_24:
  waitLoadCoroutine = this->fields.waitLoadCoroutine;
  if ( waitLoadCoroutine )
  {
    UnityEngine_MonoBehaviour__StopCoroutine_83232056((UnityEngine_MonoBehaviour_o *)this, waitLoadCoroutine, 0);
    this->fields.waitLoadCoroutine = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.waitLoadCoroutine, 0, v18, v19, v20, v21, v22, v23);
  }
}


int32_t SelectGrandServantComponent__CompareUserServant(
        SelectGrandServantComponent_o *this,
        SelectGrandServantInfo_o *servantInfoA,
        SelectGrandServantInfo_o *servantInfoB,
        const MethodInfo *method)
{
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x19
  struct UserServantEntity_o *v7; // x20
  int32_t result; // w0
  int32_t lv; // w8
  int32_t v10; // w9
  int32_t SkillMaxCount; // w21
  int32_t CollectionNo; // w21
  __int64 v13; // x1
  __int64 v14; // x2
  __int128 v15; // q1
  int64_t v16; // x0
  __int128 v17; // q0
  __int128 v18; // q1
  int64_t v19; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v20; // [xsp+0h] [xbp-90h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v21; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v22; // [xsp+40h] [xbp-50h]
  int64_t v23; // [xsp+68h] [xbp-28h] BYREF

  if ( (byte_59330F6 & 1) == 0 )
  {
    this = (SelectGrandServantComponent_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_59330F6 = 1;
  }
  v23 = 0;
  if ( !servantInfoA
    || !servantInfoB
    || (UserServantEntity_k__BackingField = servantInfoB->fields._UserServantEntity_k__BackingField) == 0
    || (v7 = servantInfoA->fields._UserServantEntity_k__BackingField,
        this = (SelectGrandServantComponent_o *)UserServantEntity__getFriendshipRank(
                                                  UserServantEntity_k__BackingField,
                                                  0),
        !v7) )
  {
    sub_21FFECC(this, servantInfoA);
  }
  result = (_DWORD)this - UserServantEntity__getFriendshipRank(v7, 0);
  if ( !result )
  {
    lv = UserServantEntity_k__BackingField->fields.lv;
    v10 = v7->fields.lv;
    result = lv - v10;
    if ( lv == v10 )
    {
      SkillMaxCount = UserServantEntity__GetSkillMaxCount(UserServantEntity_k__BackingField, 0);
      result = SkillMaxCount - UserServantEntity__GetSkillMaxCount(v7, 0);
      if ( !result )
      {
        CollectionNo = UserServantEntity__getCollectionNo(v7, 0);
        result = CollectionNo - UserServantEntity__getCollectionNo(UserServantEntity_k__BackingField, 0);
        if ( !result )
        {
          v15 = *(_OWORD *)&v7->fields.id.fields.fakeValue;
          *(_OWORD *)&v22.fields.currentCryptoKey = *(_OWORD *)&v7->fields.id.fields.currentCryptoKey;
          *(_OWORD *)&v22.fields.fakeValue = v15;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v13, v14);
          v21 = v22;
          v16 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v21, 0);
          v18 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
          v17 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
          v23 = v16;
          *(_OWORD *)&v20.fields.currentCryptoKey = v18;
          *(_OWORD *)&v20.fields.fakeValue = v17;
          v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v20, 0);
          return System_Int64__CompareTo_76929328((int64_t)&v23, v19, 0);
        }
      }
    }
  }
  return result;
}


void SelectGrandServantComponent__DestroycOnfirmServantDialog(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *confirmServantDialog; // x20
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  UnityEngine_Component_o *v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *gameObject; // x20

  if ( (byte_59330FC & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59330FC = 1;
  }
  confirmServantDialog = (UnityEngine_Object_o *)this->fields.confirmServantDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(confirmServantDialog, 0, 0) )
  {
    v12 = (UnityEngine_Component_o *)this->fields.confirmServantDialog;
    if ( !v12 )
      sub_21FFECC(0, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v12, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13, v14);
    UnityEngine_Object__Destroy_83246496(gameObject, 0);
  }
  this->fields.confirmServantDialog = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.confirmServantDialog, 0, v6, v7, v8, v9, v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void SelectGrandServantComponent__DisplayFigureWithEffect(
        SelectGrandServantComponent_o *this,
        int32_t needNum,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *figureCollectDictionary; // x0
  _BOOL8 v6; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *shinyInstance; // x20
  __int64 v11; // x2
  Il2CppObject *v12; // x19
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+10h] [xbp-40h] BYREF
  Il2CppObject *value; // [xsp+28h] [xbp-28h] BYREF

  if ( (byte_59330F2 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StandFigureCamera_TypeInfo);
    byte_59330F2 = 1;
  }
  figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.figureCollectDictionary;
  value = 0;
  memset(&v13, 0, sizeof(v13));
  if ( !figureCollectDictionary )
    goto LABEL_21;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          figureCollectDictionary,
          needNum,
          &value,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__) )
    return;
  figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)value;
  if ( !value )
    goto LABEL_21;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)value,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_StandFigureCollect__GetEnumerator__);
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v13,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__MoveNext__);
    if ( !v6 )
      break;
    if ( !v13.fields._current )
      sub_21FFECC(v6, v7);
    BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v13.fields._current[1].monitor, 1, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_StandFigureCollect__Dispose__);
  shinyInstance = (UnityEngine_Object_o *)this->fields.shinyInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( !UnityEngine_Object__op_Implicit(shinyInstance, 0) )
    goto LABEL_16;
  figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.shinyInstance;
  if ( !figureCollectDictionary
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)figureCollectDictionary, 0, 0),
        (figureCollectDictionary = (System_Collections_Generic_Dictionary_int__object__o *)this->fields.shinyInstance) == 0) )
  {
LABEL_21:
    sub_21FFECC(figureCollectDictionary, *(_QWORD *)&needNum);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)figureCollectDictionary, 1, 0);
LABEL_16:
  v12 = value;
  if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, *(_QWORD *)&needNum, v11);
  StandFigureCamera__SetupEffects((System_Collections_Generic_List_StandFigureCollect__o *)v12, 0);
}


void SelectGrandServantComponent__EndGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  struct System_Action_UserServantEntity__o *effectEndCallback; // x8

  SelectGrandServantComponent__ReleaseGrandServantSelectEffect(this, method);
  effectEndCallback = this->fields.effectEndCallback;
  if ( !effectEndCallback )
    sub_21FFECC(v3, v4);
  ((void (__fastcall *)(intptr_t, struct UserServantEntity_o *, intptr_t))effectEndCallback->fields.invoke_impl)(
    effectEndCallback->fields.method_code,
    this->fields.selectUserServantEntity,
    effectEndCallback->fields.method);
}


System_String_o *SelectGrandServantComponent__GetSelectGrandConfirmServantDialogName(
        SelectGrandServantComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_IEnumerable_UserServantEntity__o *UserServantEntities; // x19
  SelectGrandServantComponent___c_c *v9; // x8
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__63_0; // x20
  Il2CppObject *v12; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct SelectGrandServantComponent___c_StaticFields *v19; // x0
  MissionNaviTransitionBoardItem_o *p__9__63_0; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  SelectGrandServantComponent___c_c *v25; // x8
  struct SelectGrandServantComponent___c_StaticFields *v26; // x9
  Il2CppObject *v27; // x21
  struct SelectGrandServantComponent___c_StaticFields *v28; // x0
  __int64 *v29; // x8

  if ( (byte_59330FB & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantGrandMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Any_UserServantEntity___);
    sub_21FFC50(&System_Func_UserServantEntity__bool__TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent___c__GetSelectGrandConfirmServantDialogName_b__63_0__);
    sub_21FFC50(&Method_SelectGrandServantComponent___c__GetSelectGrandConfirmServantDialogName_b__63_1__);
    sub_21FFC50(&SelectGrandServantComponent___c_TypeInfo);
    sub_21FFC50(&StringLiteral_13183/*"SelectGrandConfirmServantDialog"*/);
    this = (SelectGrandServantComponent_o *)sub_21FFC50(&StringLiteral_13184/*"SelectGrandConfirmServantDialogWhenDuplicateGroup"*/);
    byte_59330FB = 1;
  }
  if ( !userServantEntity )
    goto LABEL_29;
  if ( UserServantEntity__IsExtra1(userServantEntity, 0) )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
    this = (SelectGrandServantComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
    if ( this )
    {
      UserServantEntities = UserServantGrandMaster__GetUserServantEntities((UserServantGrandMaster_o *)this, 0);
      v9 = SelectGrandServantComponent___c_TypeInfo;
      if ( !*(&SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo, v6, v7);
        v9 = SelectGrandServantComponent___c_TypeInfo;
      }
      static_fields = v9->static_fields;
      _9__63_0 = (System_Func_object__bool__o *)static_fields->__9__63_0;
      if ( !_9__63_0 )
      {
        if ( !*(&v9->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v9, v6, v7);
          static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
        }
        v12 = (Il2CppObject *)static_fields->__9;
        _9__63_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserServantEntity__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__63_0,
          v12,
          Method_SelectGrandServantComponent___c__GetSelectGrandConfirmServantDialogName_b__63_0__,
          0);
        v19 = SelectGrandServantComponent___c_TypeInfo->static_fields;
        v19->__9__63_0 = (struct System_Func_UserServantEntity__bool__o *)_9__63_0;
        p__9__63_0 = (MissionNaviTransitionBoardItem_o *)&v19->__9__63_0;
LABEL_24:
        sub_21FFBF4(p__9__63_0, (int32_t)_9__63_0, v13, v14, v15, v16, v17, v18);
        goto LABEL_25;
      }
      goto LABEL_25;
    }
LABEL_29:
    sub_21FFECC(this, userServantEntity);
  }
  if ( !UserServantEntity__IsExtra2(userServantEntity, 0) )
  {
LABEL_27:
    v29 = &StringLiteral_13183/*"SelectGrandConfirmServantDialog"*/;
    return (System_String_o *)*v29;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v21, v22);
  this = (SelectGrandServantComponent_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantGrandMaster___);
  if ( !this )
    goto LABEL_29;
  UserServantEntities = UserServantGrandMaster__GetUserServantEntities((UserServantGrandMaster_o *)this, 0);
  v25 = SelectGrandServantComponent___c_TypeInfo;
  if ( !*(&SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo, v23, v24);
    v25 = SelectGrandServantComponent___c_TypeInfo;
  }
  v26 = v25->static_fields;
  _9__63_0 = (System_Func_object__bool__o *)v26->__9__63_1;
  if ( !_9__63_0 )
  {
    if ( !*(&v25->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v25, v23, v24);
      v26 = SelectGrandServantComponent___c_TypeInfo->static_fields;
    }
    v27 = (Il2CppObject *)v26->__9;
    _9__63_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_UserServantEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__63_0,
      v27,
      Method_SelectGrandServantComponent___c__GetSelectGrandConfirmServantDialogName_b__63_1__,
      0);
    v28 = SelectGrandServantComponent___c_TypeInfo->static_fields;
    v28->__9__63_1 = (struct System_Func_UserServantEntity__bool__o *)_9__63_0;
    p__9__63_0 = (MissionNaviTransitionBoardItem_o *)&v28->__9__63_1;
    goto LABEL_24;
  }
LABEL_25:
  if ( !System_Linq_Enumerable__Any_object__58935448(
          (System_Collections_Generic_IEnumerable_TSource__o *)UserServantEntities,
          (System_Func_TSource__bool__o *)_9__63_0,
          (const MethodInfo_3834898 *)Method_System_Linq_Enumerable_Any_UserServantEntity___) )
    goto LABEL_27;
  v29 = &StringLiteral_13184/*"SelectGrandConfirmServantDialogWhenDuplicateGroup"*/;
  return (System_String_o *)*v29;
}


void SelectGrandServantComponent__LoadGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *GrandServantSelectEffectPrefabFolderPath; // x20
  AssetLoader_LoadEndDataHandler_o *v4; // x21
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x1

  if ( (byte_59330FF & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent__LoadGrandServantSelectEffect_b__67_0__);
    byte_59330FF = 1;
  }
  GrandServantSelectEffectPrefabFolderPath = this->fields.GrandServantSelectEffectPrefabFolderPath;
  v4 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v4,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent__LoadGrandServantSelectEffect_b__67_0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5, v6);
  if ( !AssetManager__loadAssetStorage(GrandServantSelectEffectPrefabFolderPath, v4, 1, 0, 0) )
    SelectGrandServantComponent__EndGrandServantSelectEffect(this, v7);
}


void SelectGrandServantComponent__OnAfterGenerateFigure(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *v6; // x20

  if ( (byte_59330F1 & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_2269/*"AdjustIconToCenter"*/);
    byte_59330F1 = 1;
  }
  if ( this->fields.isAtTransition )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v4, v5);
    if ( !v6 )
      sub_21FFECC(Instance, v4);
    CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
    this->fields.isAtTransition = 0;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83229692(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2269/*"AdjustIconToCenter"*/,
    0);
  UnityEngine_MonoBehaviour__Invoke((UnityEngine_MonoBehaviour_o *)this, (System_String_o *)StringLiteral_2269/*"AdjustIconToCenter"*/, 0.1, 0);
}


void SelectGrandServantComponent__OnApplicationPause(
        SelectGrandServantComponent_o *this,
        bool isPaused,
        const MethodInfo *method)
{
  UIScrollView_o *transform; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct UIScrollView_o *scrollView; // x8
  struct UICenterOnChild_o *centerOnChild; // x20
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct UIScrollView_o *v21; // x8
  UIScrollView_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  UnityEngine_Object_o *currentIcon; // x20
  UICenterOnChild_o *centerChild; // x20

  if ( (byte_5933106 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_2269/*"AdjustIconToCenter"*/);
    byte_5933106 = 1;
  }
  if ( !isPaused && !this->fields.isClickNavigating )
  {
    UnityEngine_MonoBehaviour__CancelInvoke_83229692(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2269/*"AdjustIconToCenter"*/,
      0);
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      centerOnChild = scrollView->fields.centerOnChild;
      scrollView->fields.centerOnChild = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&scrollView->fields.centerOnChild, 0, v7, v8, v9, v10, v11, v12);
      transform = this->fields.scrollView;
      if ( transform )
      {
        UIScrollView__Press(transform, 0, 0);
        v21 = this->fields.scrollView;
        if ( v21 )
        {
          v21->fields.centerOnChild = centerOnChild;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v21->fields.centerOnChild,
            (int32_t)centerOnChild,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20);
          v22 = this->fields.scrollView;
          if ( !byte_5931940 )
          {
            transform = (UIScrollView_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931940 = 1;
          }
          if ( v22 )
          {
            UIScrollView__set_currentMomentum(v22, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            transform = this->fields.scrollView;
            if ( transform )
            {
              UIScrollView__DisableSpring(transform, 0);
              currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
              if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23, v24);
              if ( !UnityEngine_Object__op_Inequality(currentIcon, 0, 0) )
                goto LABEL_18;
              transform = (UIScrollView_o *)this->fields.currentIcon;
              if ( transform )
              {
                centerChild = this->fields.centerChild;
                transform = (UIScrollView_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)transform,
                                                0);
                if ( centerChild )
                {
                  UICenterOnChild__CenterOn_56009592(centerChild, (UnityEngine_Transform_o *)transform, 1, 1, 0);
LABEL_18:
                  this->fields.isDragging = 0;
                  return;
                }
              }
            }
          }
        }
      }
    }
    sub_21FFECC(transform, v6);
  }
}


void SelectGrandServantComponent__OnCenterFinished(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  SelectGrandServantComponent_o *v2; // x19
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8
  const MethodInfo *v4; // x2
  __int64 v5; // x2
  struct UICenterOnChild_o *centerChild; // x8
  UnityEngine_Object_o *mCenteredObject; // x20
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Component_object; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *currentIcon; // x21
  UIScrollView_o *scrollView; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct GrandServantIconComponent_o *v20; // x8
  System_Collections_Generic_List_object__o *v21; // x20
  System_Action_object__o *v22; // x21
  const MethodInfo *v23; // x2
  struct GrandServantIconComponent_o *v24; // x8

  v2 = this;
  if ( (byte_59330ED & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GrandServantIconComponent__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_GrandServantIconComponent___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    this = (SelectGrandServantComponent_o *)sub_21FFC50(&Method_SelectGrandServantComponent__OnCenterFinished_b__49_0__);
    byte_59330ED = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_30;
  this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
  if ( !this )
    goto LABEL_30;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, cachedIconList->fields._size > 1, 0);
  SelectGrandServantComponent__SetBackButtonColliderEnable(v2, 1, v4);
  centerChild = v2->fields.centerChild;
  v2->fields.isClickNavigating = 0;
  if ( !centerChild )
    goto LABEL_30;
  mCenteredObject = (UnityEngine_Object_o *)centerChild->fields.mCenteredObject;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v5);
  this = (SelectGrandServantComponent_o *)UnityEngine_Object__op_Equality(mCenteredObject, 0, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    if ( !mCenteredObject )
      goto LABEL_30;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)mCenteredObject,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_GrandServantIconComponent___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    this = (SelectGrandServantComponent_o *)UnityEngine_Object__op_Equality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0,
                                              0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( v2->fields.isDragging )
        goto LABEL_18;
      currentIcon = (UnityEngine_Object_o *)v2->fields.currentIcon;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v11);
      this = (SelectGrandServantComponent_o *)UnityEngine_Object__op_Equality(
                                                (UnityEngine_Object_o *)Component_object,
                                                currentIcon,
                                                0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
LABEL_18:
        scrollView = v2->fields.scrollView;
        if ( !byte_5931940 )
        {
          this = (SelectGrandServantComponent_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
          byte_5931940 = 1;
        }
        if ( scrollView )
        {
          UIScrollView__set_currentMomentum(scrollView, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
          this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
          if ( this )
          {
            UIScrollView__DisableSpring((UIScrollView_o *)this, 0);
            v2->fields.isDragging = 0;
            v2->fields.currentIcon = (struct GrandServantIconComponent_o *)Component_object;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v2->fields.currentIcon,
              (int32_t)Component_object,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19);
            this = (SelectGrandServantComponent_o *)v2->fields.currentIcon;
            if ( this )
            {
              GrandServantIconComponent__OnSelected((GrandServantIconComponent_o *)this, method);
              BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v2->fields.glowEffect, 1, 0);
              this = (SelectGrandServantComponent_o *)v2->fields.glowEffect;
              if ( this )
              {
                NGUIGlow__UpdateTexture((NGUIGlow_o *)this, 0);
                v20 = v2->fields.currentIcon;
                if ( v20 )
                {
                  this = (SelectGrandServantComponent_o *)v2->fields.decideButton;
                  if ( this )
                  {
                    UICommonButton__SetButtonEnable(
                      (UICommonButton_o *)this,
                      v20->fields._CanSelectGrand_k__BackingField,
                      1,
                      0);
                    v21 = (System_Collections_Generic_List_object__o *)v2->fields.cachedIconList;
                    v22 = (System_Action_object__o *)sub_21FFEBC(System_Action_GrandServantIconComponent__TypeInfo);
                    System_Action_object____ctor(
                      v22,
                      (Il2CppObject *)v2,
                      Method_SelectGrandServantComponent__OnCenterFinished_b__49_0__,
                      0);
                    if ( v21 )
                    {
                      System_Collections_Generic_List_object___ForEach(
                        v21,
                        (System_Action_T__o *)v22,
                        (const MethodInfo_445054C *)Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__);
                      this = (SelectGrandServantComponent_o *)v2->fields.figureRoot;
                      if ( this )
                      {
                        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                        v24 = v2->fields.currentIcon;
                        if ( v24 )
                        {
                          SelectGrandServantComponent__SetFigure(
                            v2,
                            v24->fields._UserServantEntity_k__BackingField,
                            v23);
                          return;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_30:
        sub_21FFECC(this, method);
      }
    }
  }
}


void SelectGrandServantComponent__OnClickBack(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0

  if ( (byte_59330F7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SelectGrandServantComponent_OnClickBack__);
    byte_59330F7 = 1;
  }
  v3 = Method_SelectGrandServantComponent_OnClickBack__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickBack__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_21FFC68(Method_SelectGrandServantComponent_OnClickBack__);
  v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  ActionExtensions__Call(this->fields.onClickBackAction, 0);
}


void SelectGrandServantComponent__OnClickDecide(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *confirmServantDialog; // x20
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AssetData_o *AssetStorage; // x20
  const MethodInfo *v10; // x1
  UserServantEntity_o *CurrentUserServantEntity; // x0
  const MethodInfo *v12; // x2
  System_String_o *SelectGrandConfirmServantDialogName; // x0
  __int64 v14; // x1
  Il2CppObject *Component_object; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  SelectGrandConfirmServantDialog_o *v26; // x20
  GrandGraphEntity_o *grandGraphEntity; // x21
  const MethodInfo *v28; // x1
  UserServantEntity_o *v29; // x22
  SelectGrandConfirmServantDialog_ClickDelegate_o *v30; // x23

  if ( (byte_59330FA & 1) == 0 )
  {
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&SelectGrandConfirmServantDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SelectGrandConfirmServantDialog___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_SelectGrandConfirmServantDialog___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent_OnClickDecide__);
    sub_21FFC50(&Method_SelectGrandServantComponent__OnClickDecide_b__62_0__);
    sub_21FFC50(&StringLiteral_7445/*"GrandServantList"*/);
    byte_59330FA = 1;
  }
  confirmServantDialog = (UnityEngine_Object_o *)this->fields.confirmServantDialog;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Inequality(confirmServantDialog, 0, 0) )
  {
    v5 = Method_SelectGrandServantComponent_OnClickDecide__;
    if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_SelectGrandServantComponent_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v7, v8);
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)StringLiteral_7445/*"GrandServantList"*/, 0);
    CurrentUserServantEntity = SelectGrandServantComponent__get_CurrentUserServantEntity(this, v10);
    SelectGrandConfirmServantDialogName = SelectGrandServantComponent__GetSelectGrandConfirmServantDialogName(
                                            (SelectGrandServantComponent_o *)CurrentUserServantEntity,
                                            CurrentUserServantEntity,
                                            v12);
    if ( !AssetStorage )
      goto LABEL_17;
    SelectGrandConfirmServantDialogName = (System_String_o *)AssetData__GetObject_object__58323140(
                                                               AssetStorage,
                                                               SelectGrandConfirmServantDialogName,
                                                               (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
    if ( !SelectGrandConfirmServantDialogName )
      goto LABEL_17;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)SelectGrandConfirmServantDialogName,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SelectGrandConfirmServantDialog___);
    SelectGrandConfirmServantDialogName = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
    if ( !SelectGrandConfirmServantDialogName )
      goto LABEL_17;
    transform = UnityEngine_GameObject__get_transform(
                  (UnityEngine_GameObject_o *)SelectGrandConfirmServantDialogName,
                  0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
    v19 = UnityEngine_Object__Instantiate_object__59506996(
            Component_object,
            transform,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_SelectGrandConfirmServantDialog___);
    this->fields.confirmServantDialog = (struct SelectGrandConfirmServantDialog_o *)v19;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.confirmServantDialog,
      (int32_t)v19,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v26 = this->fields.confirmServantDialog;
    grandGraphEntity = this->fields.grandGraphEntity;
    v29 = SelectGrandServantComponent__get_CurrentUserServantEntity(this, v28);
    v30 = (SelectGrandConfirmServantDialog_ClickDelegate_o *)sub_21FFEBC(SelectGrandConfirmServantDialog_ClickDelegate_TypeInfo);
    SelectGrandConfirmServantDialog_ClickDelegate___ctor(
      v30,
      (Il2CppObject *)this,
      Method_SelectGrandServantComponent__OnClickDecide_b__62_0__,
      0);
    if ( !v26 )
LABEL_17:
      sub_21FFECC(SelectGrandConfirmServantDialogName, v14);
    SelectGrandConfirmServantDialog__OpenConfirm(v26, grandGraphEntity, v29, v30, 0);
  }
}


void SelectGrandServantComponent__OnClickLeftArrow(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  SelectGrandServantComponent_o *v2; // x19
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  int32_t v8; // w20
  struct System_Collections_Generic_List_GrandServantIconComponent__o *v9; // x8
  UICenterOnChild_o *centerChild; // x19

  v2 = this;
  if ( (byte_59330F9 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
    sub_21FFC50(&Method_SelectGrandServantComponent_OnClickLeftArrow__);
    this = (SelectGrandServantComponent_o *)sub_21FFC50(&StringLiteral_2269/*"AdjustIconToCenter"*/);
    byte_59330F9 = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_21;
  if ( cachedIconList->fields._size > 1 && !v2->fields.isDragging )
  {
    v2->fields.isClickNavigating = 1;
    UnityEngine_MonoBehaviour__CancelInvoke_83229692(
      (UnityEngine_MonoBehaviour_o *)v2,
      (System_String_o *)StringLiteral_2269/*"AdjustIconToCenter"*/,
      0);
    this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
    if ( this )
    {
      UIScrollView__Press((UIScrollView_o *)this, 0, 0);
      this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        v6 = Method_SelectGrandServantComponent_OnClickLeftArrow__;
        if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickLeftArrow__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_21FFC68(Method_SelectGrandServantComponent_OnClickLeftArrow__);
        v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
        this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
        if ( this )
        {
          this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___IndexOf(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)v2->fields.currentIcon,
                                                    (const MethodInfo_44507B0 *)Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
          v8 = (_DWORD)this - 1;
          if ( (int)this - 1 < 0 )
          {
            v9 = v2->fields.cachedIconList;
            if ( !v9 )
              goto LABEL_21;
            v8 = v9->fields._size - 1;
          }
          SelectGrandServantComponent__ResetDisplay(v2, method);
          this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
          if ( this )
          {
            centerChild = v2->fields.centerChild;
            this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      v8,
                                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
            if ( this )
            {
              this = (SelectGrandServantComponent_o *)UnityEngine_Component__get_transform(
                                                        (UnityEngine_Component_o *)this,
                                                        0);
              if ( centerChild )
              {
                UICenterOnChild__CenterOn_56009592(centerChild, (UnityEngine_Transform_o *)this, 1, 0, 0);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_21FFECC(this, method);
  }
  v4 = Method_SelectGrandServantComponent_OnClickLeftArrow__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickLeftArrow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_SelectGrandServantComponent_OnClickLeftArrow__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
}


void SelectGrandServantComponent__OnClickRightArrow(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  SelectGrandServantComponent_o *v2; // x19
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  struct System_Collections_Generic_List_GrandServantIconComponent__o *v8; // x8
  int v9; // w20
  int32_t size; // w21
  UICenterOnChild_o *centerChild; // x19

  v2 = this;
  if ( (byte_59330F8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
    sub_21FFC50(&Method_SelectGrandServantComponent_OnClickRightArrow__);
    this = (SelectGrandServantComponent_o *)sub_21FFC50(&StringLiteral_2269/*"AdjustIconToCenter"*/);
    byte_59330F8 = 1;
  }
  cachedIconList = v2->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_19;
  if ( cachedIconList->fields._size > 1 && !v2->fields.isDragging )
  {
    v2->fields.isClickNavigating = 1;
    UnityEngine_MonoBehaviour__CancelInvoke_83229692(
      (UnityEngine_MonoBehaviour_o *)v2,
      (System_String_o *)StringLiteral_2269/*"AdjustIconToCenter"*/,
      0);
    this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
    if ( this )
    {
      UIScrollView__Press((UIScrollView_o *)this, 0, 0);
      this = (SelectGrandServantComponent_o *)v2->fields.scrollView;
      if ( this )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 0, 0);
        v6 = Method_SelectGrandServantComponent_OnClickRightArrow__;
        if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickRightArrow__ + 83) & 2) != 0 )
          v6 = (_QWORD *)sub_21FFC68(Method_SelectGrandServantComponent_OnClickRightArrow__);
        v7 = (System_Reflection_MethodBase_o *)sub_21FFC34(v6, v6[4]);
        OverwriteAssetSoundName__PlaySystemSe(v7, 7, 0, 0);
        this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
        if ( this )
        {
          this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___IndexOf(
                                                    (System_Collections_Generic_List_object__o *)this,
                                                    (Il2CppObject *)v2->fields.currentIcon,
                                                    (const MethodInfo_44507B0 *)Method_System_Collections_Generic_List_GrandServantIconComponent__IndexOf__);
          v8 = v2->fields.cachedIconList;
          if ( v8 )
          {
            v9 = (int)this;
            size = v8->fields._size;
            SelectGrandServantComponent__ResetDisplay(v2, method);
            this = (SelectGrandServantComponent_o *)v2->fields.cachedIconList;
            if ( this )
            {
              centerChild = v2->fields.centerChild;
              this = (SelectGrandServantComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                        (System_Collections_Generic_List_object__o *)this,
                                                        (v9 + 1) % size,
                                                        (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
              if ( this )
              {
                this = (SelectGrandServantComponent_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
                if ( centerChild )
                {
                  UICenterOnChild__CenterOn_56009592(centerChild, (UnityEngine_Transform_o *)this, 1, 0, 0);
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_19:
    sub_21FFECC(this, method);
  }
  v4 = Method_SelectGrandServantComponent_OnClickRightArrow__;
  if ( (*((_BYTE *)Method_SelectGrandServantComponent_OnClickRightArrow__ + 83) & 2) != 0 )
    v4 = (_QWORD *)sub_21FFC68(Method_SelectGrandServantComponent_OnClickRightArrow__);
  v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v4, v4[4]);
  OverwriteAssetSoundName__PlaySystemSe(v5, 2, 0, 0);
}


void SelectGrandServantComponent__OnDecideGrandServantSelect(
        SelectGrandServantComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x19
  UnityEngine_GameObject_o *bitEffectRoot; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  AvalonSceneManager_c *v23; // x8
  CommonUI_o *v24; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v26; // x21

  if ( (byte_59330FE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SelectGrandServantComponent___c__DisplayClass66_0__OnDecideGrandServantSelect_b__0__);
    sub_21FFC50(&SelectGrandServantComponent___c__DisplayClass66_0_TypeInfo);
    byte_59330FE = 1;
  }
  v5 = sub_21FFEBC(SelectGrandServantComponent___c__DisplayClass66_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_9;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = userServantEntity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)userServantEntity, v14, v15, v16, v17, v18, v19);
  bitEffectRoot = this->fields.bitEffectRoot;
  if ( !bitEffectRoot )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(bitEffectRoot, 1, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v23 = AvalonSceneManager_TypeInfo;
  v24 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v21, v22);
    v23 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v23->static_fields->DEFAULT_FADE_TIME;
  v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v5,
    Method_SelectGrandServantComponent___c__DisplayClass66_0__OnDecideGrandServantSelect_b__0__,
    0);
  if ( !v24 )
LABEL_9:
    sub_21FFECC(bitEffectRoot, v7);
  CommonUI__maskFadeout(v24, 1, DEFAULT_FADE_TIME, v26, 0);
}


void SelectGrandServantComponent__OnDisable(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  __int64 v4; // x1
  __int64 v5; // x2
  struct UnityEngine_GameObject_o **p_auroraInstance; // x20
  UnityEngine_Object_o *auroraInstance; // x21
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Object_o *v10; // x21
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UnityEngine_GameObject_o **p_shinyInstance; // x20
  UnityEngine_Object_o *shinyInstance; // x21
  __int64 v19; // x1
  __int64 v20; // x2
  UnityEngine_Object_o *v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct UnityEngine_GameObject_o **p_particleInstanceBack; // x20
  UnityEngine_Object_o *particleInstanceBack; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *v32; // x21
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  MissionNaviTransitionBoardItem_o *p_particleInstanceFront; // x19
  UnityEngine_Object_o *v40; // x20
  struct UnityEngine_GameObject_o *particleInstanceFront; // t1
  __int64 v42; // x1
  __int64 v43; // x2
  UnityEngine_Object_o *klass; // x20
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7

  if ( (byte_5933104 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_2269/*"AdjustIconToCenter"*/);
    byte_5933104 = 1;
  }
  UnityEngine_MonoBehaviour__CancelInvoke_83229692(
    (UnityEngine_MonoBehaviour_o *)this,
    (System_String_o *)StringLiteral_2269/*"AdjustIconToCenter"*/,
    0);
  SelectGrandServantComponent__CleanUpStandFigures(this, v3);
  p_auroraInstance = &this->fields.auroraInstance;
  auroraInstance = (UnityEngine_Object_o *)this->fields.auroraInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( UnityEngine_Object__op_Inequality(auroraInstance, 0, 0) )
  {
    v10 = (UnityEngine_Object_o *)*p_auroraInstance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    UnityEngine_Object__Destroy_83246496(v10, 0);
    *p_auroraInstance = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.auroraInstance, 0, v11, v12, v13, v14, v15, v16);
  }
  p_shinyInstance = &this->fields.shinyInstance;
  shinyInstance = (UnityEngine_Object_o *)this->fields.shinyInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  if ( UnityEngine_Object__op_Inequality(shinyInstance, 0, 0) )
  {
    v21 = (UnityEngine_Object_o *)*p_shinyInstance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    UnityEngine_Object__Destroy_83246496(v21, 0);
    *p_shinyInstance = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.shinyInstance, 0, v22, v23, v24, v25, v26, v27);
  }
  p_particleInstanceBack = &this->fields.particleInstanceBack;
  particleInstanceBack = (UnityEngine_Object_o *)this->fields.particleInstanceBack;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
  if ( UnityEngine_Object__op_Inequality(particleInstanceBack, 0, 0) )
  {
    v32 = (UnityEngine_Object_o *)*p_particleInstanceBack;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
    UnityEngine_Object__Destroy_83246496(v32, 0);
    *p_particleInstanceBack = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.particleInstanceBack, 0, v33, v34, v35, v36, v37, v38);
  }
  particleInstanceFront = this->fields.particleInstanceFront;
  p_particleInstanceFront = (MissionNaviTransitionBoardItem_o *)&this->fields.particleInstanceFront;
  v40 = (UnityEngine_Object_o *)particleInstanceFront;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
  if ( UnityEngine_Object__op_Inequality(v40, 0, 0) )
  {
    klass = (UnityEngine_Object_o *)p_particleInstanceFront->klass;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42, v43);
    UnityEngine_Object__Destroy_83246496(klass, 0);
    p_particleInstanceFront->klass = 0;
    sub_21FFBF4(p_particleInstanceFront, 0, v45, v46, v47, v48, v49, v50);
  }
}


void SelectGrandServantComponent__OnDragStarted(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x1
  const MethodInfo *v4; // x1

  if ( (byte_59330F3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_2269/*"AdjustIconToCenter"*/);
    byte_59330F3 = 1;
  }
  v3 = (System_String_o *)StringLiteral_2269/*"AdjustIconToCenter"*/;
  this->fields.isDragging = 1;
  UnityEngine_MonoBehaviour__CancelInvoke_83229692((UnityEngine_MonoBehaviour_o *)this, v3, 0);
  SelectGrandServantComponent__ResetDisplay(this, v4);
}


void SelectGrandServantComponent__OnEnable(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  Il2CppObject *Instance; // x20
  UnityEngine_Transform_o *transform; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *ComponentInChildren_object; // x20
  UnityEngine_Transform_o *Child; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *auroraEffect; // x21
  UnityEngine_Transform_o *v15; // x20
  Il2CppObject *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  Il2CppObject *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x0
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  Il2CppObject *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7

  if ( (byte_5933105 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_UIStandFigureRender___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    byte_5933105 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3, v4);
  transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0);
  if ( ((unsigned __int8)transform & 1) == 0 )
  {
    if ( !Instance )
      goto LABEL_18;
    ComponentInChildren_object = UnityEngine_Component__GetComponentInChildren_object_(
                                   (UnityEngine_Component_o *)Instance,
                                   1,
                                   (const MethodInfo_37EDB8C *)Method_UnityEngine_Component_GetComponentInChildren_UIStandFigureRender___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    transform = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(
                                             (UnityEngine_Object_o *)ComponentInChildren_object,
                                             0,
                                             0);
    if ( ((unsigned __int8)transform & 1) == 0 )
    {
      if ( ComponentInChildren_object )
      {
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0);
        if ( transform )
        {
          if ( UnityEngine_Transform__get_childCount(transform, 0) < 1 )
            return;
          transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)ComponentInChildren_object, 0);
          if ( transform )
          {
            Child = UnityEngine_Transform__GetChild(transform, 0, 0);
            auroraEffect = (Il2CppObject *)this->fields.auroraEffect;
            v15 = Child;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
            v16 = UnityEngine_Object__Instantiate_object__59506996(
                    auroraEffect,
                    v15,
                    (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
            this->fields.auroraInstance = (struct UnityEngine_GameObject_o *)v16;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.auroraInstance,
              (int32_t)v16,
              v17,
              v18,
              v19,
              v20,
              v21,
              v22);
            v23 = UnityEngine_Object__Instantiate_object__59506996(
                    (Il2CppObject *)this->fields.shinyEffect,
                    v15,
                    (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
            this->fields.shinyInstance = (struct UnityEngine_GameObject_o *)v23;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.shinyInstance,
              (int32_t)v23,
              v24,
              v25,
              v26,
              v27,
              v28,
              v29);
            v30 = UnityEngine_Object__Instantiate_object__59506996(
                    (Il2CppObject *)this->fields.particleEffectFront,
                    v15,
                    (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
            this->fields.particleInstanceFront = (struct UnityEngine_GameObject_o *)v30;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.particleInstanceFront,
              (int32_t)v30,
              v31,
              v32,
              v33,
              v34,
              v35,
              v36);
            v37 = UnityEngine_Object__Instantiate_object__59506996(
                    (Il2CppObject *)this->fields.particleEffectBack,
                    v15,
                    (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
            this->fields.particleInstanceBack = (struct UnityEngine_GameObject_o *)v37;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.particleInstanceBack,
              (int32_t)v37,
              v38,
              v39,
              v40,
              v41,
              v42,
              v43);
            return;
          }
        }
      }
LABEL_18:
      sub_21FFECC(transform, v7);
    }
  }
}


void SelectGrandServantComponent__OnEndGrandSetupRequest(
        SelectGrandServantComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  BaseDialog_o *confirmServantDialog; // x20
  System_Action_o *v8; // x0
  intptr_t v9; // x2
  System_Action_o *v10; // x21

  if ( (byte_59330FD & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent_DestroycOnfirmServantDialog__);
    sub_21FFC50(&Method_SelectGrandServantComponent__OnEndGrandSetupRequest_b__65_0__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_59330FD = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
  {
    Instance = SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( !Instance )
      goto LABEL_9;
    MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
    confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v9 = Method_SelectGrandServantComponent_DestroycOnfirmServantDialog__;
  }
  else
  {
    confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
    v8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    v9 = Method_SelectGrandServantComponent__OnEndGrandSetupRequest_b__65_0__;
  }
  v10 = v8;
  System_Action___ctor(v8, (Il2CppObject *)this, v9, 0);
  if ( !confirmServantDialog )
LABEL_9:
    sub_21FFECC(Instance, v6);
  BaseDialog__SafeClose(confirmServantDialog, v10, 0);
}


void SelectGrandServantComponent__OnValidate(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_59330E9 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Application_TypeInfo);
    byte_59330E9 = 1;
  }
  if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, method, v2);
  UnityEngine_Application__get_isPlaying(0);
}


void SelectGrandServantComponent__PlayGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  AssetData_o *grandServantSelectEffectAssetData; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *Object_object__58323140; // x20
  UnityEngine_GameObject_o *bitEffectRoot; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *Component_object; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  const MethodInfo *v25; // x3
  struct SelectGrandServantEffectComponent_o *selectGrandServantEffectComponent; // x20
  System_Action_o *v27; // x21
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7

  if ( (byte_5933100 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssetData_GetObject_GameObject____91482112);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_SelectGrandServantEffectComponent___);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent_EndGrandServantSelectEffect__);
    byte_5933100 = 1;
  }
  grandServantSelectEffectAssetData = this->fields.grandServantSelectEffectAssetData;
  if ( !grandServantSelectEffectAssetData )
    goto LABEL_7;
  Object_object__58323140 = AssetData__GetObject_object__58323140(
                              grandServantSelectEffectAssetData,
                              this->fields.GrandServantSelectEffectPrefabName,
                              (const MethodInfo_379F0C4 *)Method_AssetData_GetObject_GameObject____91482112);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Object_object__58323140, 0, 0) )
  {
    bitEffectRoot = this->fields.bitEffectRoot;
    if ( !bitEffectRoot )
      goto LABEL_15;
    transform = UnityEngine_GameObject__get_transform(bitEffectRoot, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
    v11 = UnityEngine_Object__Instantiate_object__59506996(
            Object_object__58323140,
            transform,
            (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GameObject____91575024);
    this->fields.grandServantSelectEffectObj = (struct UnityEngine_GameObject_o *)v11;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSelectEffectObj,
      (int32_t)v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    bitEffectRoot = this->fields.grandServantSelectEffectObj;
    if ( !bitEffectRoot )
      goto LABEL_15;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         bitEffectRoot,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_SelectGrandServantEffectComponent___);
    this->fields.selectGrandServantEffectComponent = (struct SelectGrandServantEffectComponent_o *)Component_object;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectGrandServantEffectComponent,
      (int32_t)Component_object,
      v19,
      v20,
      v21,
      v22,
      v23,
      v24);
    bitEffectRoot = (UnityEngine_GameObject_o *)this->fields.selectGrandServantEffectComponent;
    if ( !bitEffectRoot
      || (SelectGrandServantEffectComponent__Setup(
            (SelectGrandServantEffectComponent_o *)bitEffectRoot,
            this->fields.beforeUserServantEntity,
            this->fields.selectUserServantEntity,
            v25),
          selectGrandServantEffectComponent = this->fields.selectGrandServantEffectComponent,
          v27 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo),
          System_Action___ctor(
            v27,
            (Il2CppObject *)this,
            Method_SelectGrandServantComponent_EndGrandServantSelectEffect__,
            0),
          !selectGrandServantEffectComponent) )
    {
LABEL_15:
      sub_21FFECC(bitEffectRoot, method);
    }
    selectGrandServantEffectComponent->fields.endAct = v27;
    selectGrandServantEffectComponent->fields.isPlayReq = 1;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&selectGrandServantEffectComponent->fields.endAct,
      (int32_t)v27,
      v28,
      v29,
      v30,
      v31,
      v32,
      v33);
  }
  else
  {
LABEL_7:
    SelectGrandServantComponent__EndGrandServantSelectEffect(this, method);
  }
}


void SelectGrandServantComponent__RefreshDisplayAfterEndShowServantStatus(
        SelectGrandServantComponent_o *this,
        bool isModify,
        int32_t questId,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v9; // x24
  CommonUI_o *Instance; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UserServantEntity_o **v18; // x20
  __int64 v19; // x2
  SelectGrandServantComponent___c_c *v20; // x8
  CommonUI_o *v21; // x19
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x9
  System_Action_o *_9__71_0; // x20
  Il2CppObject *v24; // x21
  struct SelectGrandServantComponent___c_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x21
  System_Func_object__bool__o *v33; // x22
  CommonUI_c *klass; // x8
  CommonUI_o *v35; // x21
  __int64 v36; // x9
  int *p_offset; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x1
  __int64 v41; // x21
  bool v42; // w23
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  __int64 v48; // x1
  const MethodInfo *v49; // x2
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  GrandServantIconComponent_o *v54; // x0
  __int64 v55; // x1
  const MethodInfo *v56; // x2
  GrandServantIconComponent_o *v57; // x21
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // [xsp+18h] [xbp-38h]

  if ( (byte_5933102 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_GrandServantIconComponent___);
    sub_21FFC50(&System_Func_GrandServantIconComponent__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SelectGrandServantComponent___c__RefreshDisplayAfterEndShowServantStatus_b__71_0__);
    sub_21FFC50(&Method_SelectGrandServantComponent___c__DisplayClass71_0__RefreshDisplayAfterEndShowServantStatus_b__1__);
    sub_21FFC50(&SelectGrandServantComponent___c__DisplayClass71_0_TypeInfo);
    sub_21FFC50(&SelectGrandServantComponent___c_TypeInfo);
    byte_5933102 = 1;
  }
  v9 = sub_21FFEBC(SelectGrandServantComponent___c__DisplayClass71_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_55;
  *(_QWORD *)(v9 + 16) = userServantEntity;
  v18 = (UserServantEntity_o **)(v9 + 16);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 16), (int32_t)userServantEntity, v12, v13, v14, v15, v16, v17);
  if ( questId >= 1 )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = SelectGrandServantComponent___c_TypeInfo;
    v21 = Instance;
    if ( !*(&SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo, v11, v19);
      v20 = SelectGrandServantComponent___c_TypeInfo;
    }
    static_fields = v20->static_fields;
    _9__71_0 = static_fields->__9__71_0;
    if ( !_9__71_0 )
    {
      if ( !*(&v20->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v20, v11, v19);
        static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
      }
      v24 = (Il2CppObject *)static_fields->__9;
      _9__71_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__71_0,
        v24,
        Method_SelectGrandServantComponent___c__RefreshDisplayAfterEndShowServantStatus_b__71_0__,
        0);
      v25 = SelectGrandServantComponent___c_TypeInfo->static_fields;
      v25->__9__71_0 = _9__71_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->__9__71_0, (int32_t)_9__71_0, v26, v27, v28, v29, v30, v31);
    }
    if ( v21 )
    {
      CommonUI__CloseServantStatusDialog(v21, _9__71_0, 0);
      return;
    }
LABEL_55:
    sub_21FFECC(Instance, v11);
  }
  if ( isModify )
  {
    cachedIconList = this->fields.cachedIconList;
    v33 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_GrandServantIconComponent__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v33,
      (Il2CppObject *)v9,
      Method_SelectGrandServantComponent___c__DisplayClass71_0__RefreshDisplayAfterEndShowServantStatus_b__1__,
      0);
    Instance = (CommonUI_o *)System_Linq_Enumerable__Where_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)cachedIconList,
                               (System_Func_TSource__bool__o *)v33,
                               (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_GrandServantIconComponent___);
    if ( !Instance )
      goto LABEL_55;
    klass = Instance->klass;
    v35 = Instance;
    v36 = *(unsigned __int16 *)&Instance->klass->_2.rank;
    if ( *(_WORD *)&Instance->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_GrandServantIconComponent__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo )
      {
        --v36;
        p_offset += 4;
        if ( !v36 )
          goto LABEL_19;
      }
      v38 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_19:
      v38 = sub_2237E2C(Instance, System_Collections_Generic_IEnumerable_GrandServantIconComponent__TypeInfo, 0);
    }
    v39 = (*(__int64 (__fastcall **)(CommonUI_o *, _QWORD))v38)(v35, *(_QWORD *)(v38 + 8));
    v62 = v39;
    if ( !v39 )
      sub_21FFECC(v39, v40);
    v41 = v39;
    v42 = 0;
    while ( 1 )
    {
      v43 = *(_QWORD *)v41;
      v44 = *(unsigned __int16 *)(*(_QWORD *)v41 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v41 + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v45 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_27;
        }
        v46 = v43 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_27:
        v46 = sub_2237E2C(v41, System_Collections_IEnumerator_TypeInfo, 0);
      }
      v47 = (*(__int64 (__fastcall **)(__int64, _QWORD))v46)(v41, *(_QWORD *)(v46 + 8));
      if ( (v47 & 1) == 0 )
        break;
      if ( !v62 )
        sub_21FFECC(v47, v48);
      v50 = *(_QWORD *)v62;
      v51 = *(unsigned __int16 *)(*(_QWORD *)v62 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v62 + 302LL) )
      {
        v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_GrandServantIconComponent__c **)v52 - 1) != System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_35;
        }
        v53 = v50 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_35:
        v53 = sub_2237E2C(v62, System_Collections_Generic_IEnumerator_GrandServantIconComponent__TypeInfo, 0);
      }
      v54 = (GrandServantIconComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v62, *(_QWORD *)(v53 + 8));
      v57 = v54;
      if ( !v54 )
        sub_21FFECC(0, v55);
      GrandServantIconComponent__SetServant(v54, *v18, v56);
      v42 = v42 || v57->fields._IsSelected_k__BackingField;
      v41 = v62;
    }
    if ( v62 )
    {
      v58 = *(_QWORD *)v62;
      v59 = *(unsigned __int16 *)(*(_QWORD *)v62 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v62 + 302LL) )
      {
        v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v60 - 1) != System_IDisposable_TypeInfo )
        {
          --v59;
          v60 += 4;
          if ( !v59 )
            goto LABEL_47;
        }
        v61 = v58 + 16LL * *v60 + 312;
      }
      else
      {
LABEL_47:
        v61 = sub_2237E2C(v62, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v61)(v62, *(_QWORD *)(v61 + 8));
    }
    if ( v42 )
      SelectGrandServantComponent__SetFigure(this, *v18, v49);
  }
}


void SelectGrandServantComponent__ReleaseGrandServantSelectEffect(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *GrandServantSelectEffectPrefabFolderPath; // x19

  if ( (byte_5933101 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5933101 = 1;
  }
  this->fields.selectGrandServantEffectComponent = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectGrandServantEffectComponent,
    0,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  GrandServantSelectEffectPrefabFolderPath = this->fields.GrandServantSelectEffectPrefabFolderPath;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9, v10);
  AssetManager__releaseAssetStorage(GrandServantSelectEffectPrefabFolderPath, 0);
}


void SelectGrandServantComponent__ResetDisplay(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *currentIcon; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x2
  void *scrollView; // x0
  System_Collections_Generic_List_object__o *cachedIconList; // x20
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__56_0; // x21
  Il2CppObject *v11; // x22
  struct SelectGrandServantComponent___c_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  const MethodInfo *v19; // x2

  if ( (byte_59330F4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_GrandServantIconComponent__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent___c__ResetDisplay_b__56_0__);
    sub_21FFC50(&SelectGrandServantComponent___c_TypeInfo);
    byte_59330F4 = 1;
  }
  currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(currentIcon, 0, 0) )
  {
    scrollView = this->fields.currentIcon;
    if ( !scrollView )
      goto LABEL_17;
    GrandServantIconComponent__OnUnselected((GrandServantIconComponent_o *)scrollView, v5);
  }
  cachedIconList = (System_Collections_Generic_List_object__o *)this->fields.cachedIconList;
  scrollView = SelectGrandServantComponent___c_TypeInfo;
  if ( !*(&SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo, v5, v6);
    scrollView = SelectGrandServantComponent___c_TypeInfo;
  }
  static_fields = (struct SelectGrandServantComponent___c_StaticFields *)*((_QWORD *)scrollView + 23);
  _9__56_0 = (System_Action_object__o *)static_fields->__9__56_0;
  if ( !_9__56_0 )
  {
    if ( !*((_DWORD *)scrollView + 57) )
    {
      j_il2cpp_runtime_class_init_0(scrollView, v5, v6);
      static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    }
    v11 = (Il2CppObject *)static_fields->__9;
    _9__56_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_GrandServantIconComponent__TypeInfo);
    System_Action_object____ctor(_9__56_0, v11, Method_SelectGrandServantComponent___c__ResetDisplay_b__56_0__, 0);
    v12 = SelectGrandServantComponent___c_TypeInfo->static_fields;
    v12->__9__56_0 = (struct System_Action_GrandServantIconComponent__o *)_9__56_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v12->__9__56_0, (int32_t)_9__56_0, v13, v14, v15, v16, v17, v18);
  }
  if ( !cachedIconList
    || (System_Collections_Generic_List_object___ForEach(
          cachedIconList,
          (System_Action_T__o *)_9__56_0,
          (const MethodInfo_445054C *)Method_System_Collections_Generic_List_GrandServantIconComponent__ForEach__),
        BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.glowEffect, 0, 0),
        (scrollView = this->fields.scrollView) == 0) )
  {
LABEL_17:
    sub_21FFECC(scrollView, v5);
  }
  UIScrollView__DisableSpring((UIScrollView_o *)scrollView, 0);
  SelectGrandServantComponent__SetBackButtonColliderEnable(this, 0, v19);
}


// local variable allocation has failed, the output may be wrong!
void SelectGrandServantComponent__SetBackButtonColliderEnable(
        SelectGrandServantComponent_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *backButtonObject; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Component_object; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *v11; // x19

  if ( (byte_59330F5 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59330F5 = 1;
  }
  backButtonObject = this->fields.backButtonObject;
  if ( !backButtonObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       backButtonObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  backButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                                   (UnityEngine_Object_o *)Component_object,
                                                   0,
                                                   0);
  if ( ((unsigned __int8)backButtonObject & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_16;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)Component_object, isEnable, 0);
  }
  backButtonObject = this->fields.backButtonObject;
  if ( !backButtonObject )
LABEL_16:
    sub_21FFECC(backButtonObject, isEnable);
  v11 = UnityEngine_GameObject__GetComponent_object_(
          backButtonObject,
          (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
  backButtonObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)v11, 0);
  if ( ((unsigned __int8)backButtonObject & 1) != 0 )
  {
    if ( v11 )
    {
      UIButtonColor__set_state((UIButtonColor_o *)v11, 0, 0);
      return;
    }
    goto LABEL_16;
  }
}


void SelectGrandServantComponent__SetFigure(
        SelectGrandServantComponent_o *this,
        UserServantEntity_o *userServantEntity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  void *Master_object; // x0
  __int64 v8; // x1
  SvtMultiPortraitMaster_o *v9; // x23
  int32_t ServantId; // w20
  int32_t v11; // w22
  System_Collections_Generic_List_SvtMultiPortraitEntity__o *EntityListOrderBy; // x21
  UIStandFigureR_o *v13; // x21
  System_Action_o *v14; // x23
  UnityEngine_Object_o *v15; // x21
  Il2CppObject *v16; // x0
  const MethodInfo *v17; // x2
  int32_t size; // w20
  _BOOL8 v19; // x0
  const MethodInfo *v20; // x2
  bool v21; // w22
  System_Collections_Generic_List_object__o *v22; // x23
  int32_t v23; // w23
  int v24; // w29
  SvtMultiPortraitEntity_o *v25; // x24
  __int64 v26; // x25
  int32_t portraitImageId; // w26
  System_Action_o *v28; // x27
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  UnityEngine_Object_o *gameObject; // x26
  Il2CppObject *v36; // x0
  struct System_Int32_array *commonPosition; // x8
  struct System_Int32_array *v38; // x8
  UnityEngine_GameObject_o *figureRoot; // x25
  int32_t v40; // w26
  System_Action_o *v41; // x27
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  UnityEngine_Component_o *v48; // x25
  struct System_Int32_array *v49; // x8
  struct System_Int32_array *v50; // x8
  System_Collections_Generic_List_object__o *v51; // x26
  StandFigureCollect_o *v52; // x27
  System_String_o *v53; // x2
  System_String_o *v54; // x3
  int32_t v55; // w4
  int32_t v56; // w5
  bool v57; // w6
  bool v58; // w7
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  System_Collections_IEnumerator_o *MultiPortrait; // x0
  struct UnityEngine_Coroutine_o *started; // x0
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  UnityEngine_GameObject_o *v71; // x21
  System_Action_o *v72; // x23
  UIStandFigureR_o *RenderPrefabWithEffect; // x22
  System_Collections_Generic_List_object__o *v74; // x20
  StandFigureCollect_o *v75; // x21
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  struct System_Object_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  Il2CppClass **v85; // x0
  Il2CppObject *v86; // x2
  int32_t v87; // [xsp+2Ch] [xbp-74h] BYREF
  Il2CppObject *value; // [xsp+30h] [xbp-70h] BYREF
  Il2CppObject *v89; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_59330F0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_StandFigureCollect___);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent_OnAfterGenerateFigure__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
    sub_21FFC50(&StandFigureCollect_TypeInfo);
    sub_21FFC50(&StringLiteral_13557/*"StandFigureR({0})"*/);
    byte_59330F0 = 1;
  }
  value = 0;
  v89 = 0;
  SelectGrandServantComponent__CleanUpStandFigures(this, (const MethodInfo *)userServantEntity);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_SvtMultiPortraitMaster___);
  if ( !userServantEntity )
    goto LABEL_59;
  v9 = (SvtMultiPortraitMaster_o *)Master_object;
  ServantId = UserServantEntity__GetServantId(userServantEntity, -1, 0);
  Master_object = (void *)UserServantEntity__GetFigureImage(userServantEntity, 1, -1, 0);
  if ( !v9 )
    goto LABEL_59;
  v11 = (int)Master_object;
  EntityListOrderBy = SvtMultiPortraitMaster__GetEntityListOrderBy(v9, ServantId, (int32_t)Master_object, 3, 0);
  GameObjectHelper__SetActiveSafely(this->fields.figureRoot, 1, 0);
  Master_object = (void *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)EntityListOrderBy, 0);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
  {
    if ( EntityListOrderBy )
    {
      size = EntityListOrderBy->fields._size;
      Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_StandFigureManager__get_Instance__);
      if ( Master_object )
      {
        *((_DWORD *)Master_object + 18) = size;
        Master_object = this->fields.figureCollectDictionary;
        if ( Master_object )
        {
          v19 = System_Collections_Generic_Dictionary_int__object___TryGetValue(
                  (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
                  size,
                  &v89,
                  (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__);
          v21 = v19;
          if ( !v19 )
          {
            v22 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v22,
              (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
            Master_object = this->fields.figureCollectDictionary;
            v89 = (Il2CppObject *)v22;
            if ( !Master_object )
              goto LABEL_59;
            System_Collections_Generic_Dictionary_int__object___set_Item(
              (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
              size,
              (Il2CppObject *)v22,
              (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
          }
          if ( EntityListOrderBy->fields._size < 1 )
          {
LABEL_50:
            MultiPortrait = SelectGrandServantComponent__WaitLoadMultiPortrait(
                              (SelectGrandServantComponent_o *)v19,
                              (System_Collections_Generic_List_StandFigureCollect__o *)v89,
                              v20);
            started = UnityEngine_MonoBehaviour__StartCoroutine_83231452(
                        (UnityEngine_MonoBehaviour_o *)this,
                        MultiPortrait,
                        0);
            this->fields.waitLoadCoroutine = started;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&this->fields.waitLoadCoroutine,
              (int32_t)started,
              v65,
              v66,
              v67,
              v68,
              v69,
              v70);
            goto LABEL_58;
          }
          v23 = 0;
          while ( 1 )
          {
            Master_object = System_Collections_Generic_List_object___get_Item(
                              (System_Collections_Generic_List_object__o *)EntityListOrderBy,
                              v23,
                              (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SvtMultiPortraitEntity__get_Item__);
            if ( !Master_object )
              break;
            v24 = *((_DWORD *)Master_object + 9);
            v25 = (SvtMultiPortraitEntity_o *)Master_object;
            if ( v21 )
            {
              Master_object = v89;
              if ( !v89 )
                break;
              Master_object = System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)v89,
                                v23,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
              if ( !Master_object )
                break;
              v26 = *((_QWORD *)Master_object + 3);
              BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v26, 1, 0);
              portraitImageId = v25->fields.portraitImageId;
              v28 = 0;
              if ( v23 == EntityListOrderBy->fields._size - 1 )
              {
                v28 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                System_Action___ctor(
                  v28,
                  (Il2CppObject *)this,
                  Method_SelectGrandServantComponent_OnAfterGenerateFigure__,
                  0);
              }
              if ( !v26 )
                break;
              UIStandFigureR__SetCharacterForImageIdWithEffect(
                (UIStandFigureR_o *)v26,
                portraitImageId,
                8,
                0,
                0,
                v23,
                v28,
                0,
                1,
                1,
                0);
              UIStandFigureR__SetDepth((UIStandFigureR_o *)v26, v24 + 1, 0);
              *(_QWORD *)(v26 + 136) = v25;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 136), (int32_t)v25, v29, v30, v31, v32, v33, v34);
              gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)v26,
                                                     0);
              v87 = v25->fields.portraitImageId;
              v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v87);
              Master_object = System_String__Format((System_String_o *)StringLiteral_13557/*"StandFigureR({0})"*/, v36, 0);
              if ( !gameObject )
                break;
              UnityEngine_Object__set_name(gameObject, (System_String_o *)Master_object, 0);
              commonPosition = v25->fields.commonPosition;
              if ( commonPosition && SLODWORD(commonPosition->max_length) >= 2 )
              {
                Master_object = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v26, 0);
                v38 = v25->fields.commonPosition;
                if ( !v38 )
                  break;
                if ( LODWORD(v38->max_length) < 2 )
                  goto LABEL_60;
                GameObjectExtensions__SetLocalPosition_42876120(
                  (UnityEngine_GameObject_o *)Master_object,
                  (float)v38->m_Items[0],
                  (float)v38->m_Items[1],
                  0);
              }
            }
            else
            {
              figureRoot = this->fields.figureRoot;
              v40 = *((_DWORD *)Master_object + 8);
              if ( v23 == EntityListOrderBy->fields._size - 1 )
              {
                v41 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
                System_Action___ctor(
                  v41,
                  (Il2CppObject *)this,
                  Method_SelectGrandServantComponent_OnAfterGenerateFigure__,
                  0);
              }
              else
              {
                v41 = 0;
              }
              Master_object = StandFigureManager__CreatePrefabForImageIdWithEffect(
                                figureRoot,
                                v40,
                                8,
                                0,
                                v24 + 1,
                                v23,
                                v41,
                                0,
                                -1,
                                0,
                                0,
                                1,
                                0);
              if ( !Master_object )
                break;
              v48 = (UnityEngine_Component_o *)Master_object;
              *((_QWORD *)Master_object + 17) = v25;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)((char *)Master_object + 136),
                (int32_t)v25,
                v42,
                v43,
                v44,
                v45,
                v46,
                v47);
              v49 = v25->fields.commonPosition;
              if ( v49 && SLODWORD(v49->max_length) >= 2 )
              {
                Master_object = UnityEngine_Component__get_gameObject(v48, 0);
                v50 = v25->fields.commonPosition;
                if ( !v50 )
                  break;
                if ( LODWORD(v50->max_length) < 2 )
LABEL_60:
                  sub_21FFED4(Master_object);
                GameObjectExtensions__SetLocalPosition_42876120(
                  (UnityEngine_GameObject_o *)Master_object,
                  (float)v50->m_Items[0],
                  (float)v50->m_Items[1],
                  0);
              }
              v51 = (System_Collections_Generic_List_object__o *)v89;
              v52 = (StandFigureCollect_o *)sub_21FFEBC(StandFigureCollect_TypeInfo);
              StandFigureCollect___ctor(v52, v25, (UIStandFigureR_o *)v48, 0);
              if ( !v51 )
                break;
              items = v51->fields._items;
              v60 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
              ++v51->fields._version;
              if ( !items )
                break;
              v61 = v51->fields._size;
              if ( (unsigned int)v61 >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v51,
                  (Il2CppObject *)v52,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
              }
              else
              {
                v62 = &items->obj.klass + v61;
                v51->fields._size = v61 + 1;
                v62[4] = (Il2CppClass *)v52;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v62 + 4), (int32_t)v52, v53, v54, v55, v56, v57, v58);
              }
            }
            if ( ++v23 >= EntityListOrderBy->fields._size )
              goto LABEL_50;
          }
        }
      }
    }
LABEL_59:
    sub_21FFECC(Master_object, v8);
  }
  Master_object = this->fields.figureCollectDictionary;
  if ( !Master_object )
    goto LABEL_59;
  if ( !System_Collections_Generic_Dictionary_int__object___TryGetValue(
          (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
          1,
          &value,
          (const MethodInfo_3F6A7E4 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___TryGetValue__) )
  {
    v71 = this->fields.figureRoot;
    v72 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v72, (Il2CppObject *)this, Method_SelectGrandServantComponent_OnAfterGenerateFigure__, 0);
    RenderPrefabWithEffect = StandFigureManager__CreateRenderPrefabWithEffect(
                               v71,
                               ServantId,
                               v11,
                               8,
                               0,
                               1,
                               v72,
                               0,
                               -1,
                               0,
                               0);
    v74 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_StandFigureCollect__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v74,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_StandFigureCollect___ctor__);
    v75 = (StandFigureCollect_o *)sub_21FFEBC(StandFigureCollect_TypeInfo);
    StandFigureCollect___ctor(v75, 0, RenderPrefabWithEffect, 0);
    if ( v74 )
    {
      v82 = v74->fields._items;
      v83 = Method_System_Collections_Generic_List_StandFigureCollect__Add__;
      ++v74->fields._version;
      if ( v82 )
      {
        v84 = v74->fields._size;
        if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v74,
            (Il2CppObject *)v75,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &v82->obj.klass + v84;
          v74->fields._size = v84 + 1;
          v85[4] = (Il2CppClass *)v75;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v85 + 4), (int32_t)v75, v76, v77, v78, v79, v80, v81);
        }
        Master_object = this->fields.figureCollectDictionary;
        value = (Il2CppObject *)v74;
        if ( Master_object )
        {
          v86 = (Il2CppObject *)v74;
          size = 1;
          System_Collections_Generic_Dictionary_int__object___set_Item(
            (System_Collections_Generic_Dictionary_int__object__o *)Master_object,
            1,
            v86,
            (const MethodInfo_3F68CF4 *)Method_System_Collections_Generic_Dictionary_int__List_StandFigureCollect___set_Item__);
          goto LABEL_58;
        }
      }
    }
    goto LABEL_59;
  }
  Master_object = System_Linq_Enumerable__First_object_(
                    (System_Collections_Generic_IEnumerable_TSource__o *)value,
                    (const MethodInfo_384C73C *)Method_System_Linq_Enumerable_First_StandFigureCollect___);
  if ( !Master_object )
    goto LABEL_59;
  v13 = (UIStandFigureR_o *)*((_QWORD *)Master_object + 3);
  v14 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_SelectGrandServantComponent_OnAfterGenerateFigure__, 0);
  if ( !v13 )
    goto LABEL_59;
  UIStandFigureR__SetCharacterWithEffect(v13, ServantId, v11, 8, 0, 0, 0.0, v14, 0, 0);
  UIStandFigureR__SetDepth(v13, 1, 0);
  v15 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0);
  v87 = ServantId;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v87);
  Master_object = System_String__Format((System_String_o *)StringLiteral_13557/*"StandFigureR({0})"*/, v16, 0);
  if ( !v15 )
    goto LABEL_59;
  UnityEngine_Object__set_name(v15, (System_String_o *)Master_object, 0);
  size = 1;
LABEL_58:
  SelectGrandServantComponent__DisplayFigureWithEffect(this, size, v17);
}


void SelectGrandServantComponent__SetUp(
        SelectGrandServantComponent_o *this,
        GrandGraphEntity_o *grandGraphEntity,
        System_Collections_Generic_List_SelectGrandServantInfo__o *servantInfos,
        System_Action_o *onClickBack,
        System_Action_UserServantEntity__o *onDecideGrand,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_Action_object__o *v13; // x23
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
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  const MethodInfo *v44; // x2
  const MethodInfo *v45; // x1
  __int64 v46; // x1
  __int64 v47; // x2
  StandFigureCamera_c *v48; // x0
  struct UnityEngine_Color_o figureRenderGradientColor; // [xsp+0h] [xbp-60h]

  if ( (byte_59330EA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UserServantEntity__TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent_OnDecideGrandServantSelect__);
    sub_21FFC50(&StandFigureCamera_TypeInfo);
    byte_59330EA = 1;
  }
  this->fields.onClickBackAction = onClickBack;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onClickBackAction,
    (int32_t)onClickBack,
    (System_String_o *)servantInfos,
    (System_String_o *)onClickBack,
    (int32_t)onDecideGrand,
    (int32_t)method,
    v6,
    v7);
  v13 = (System_Action_object__o *)sub_21FFEBC(System_Action_UserServantEntity__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent_OnDecideGrandServantSelect__,
    0);
  this->fields.onDecideGrandAction = (struct System_Action_UserServantEntity__o *)v13;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.onDecideGrandAction,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  this->fields.effectEndCallback = onDecideGrand;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.effectEndCallback,
    (int32_t)onDecideGrand,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  this->fields.selectUserServantEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.selectUserServantEntity,
    0,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  this->fields.beforeUserServantEntity = 0;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.beforeUserServantEntity,
    0,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  this->fields.grandGraphEntity = grandGraphEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandGraphEntity,
    (int32_t)grandGraphEntity,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43);
  SelectGrandServantComponent__SetUpServantInfo(this, servantInfos, v44);
  SelectGrandServantComponent__SetUpUI(this, v45);
  v48 = StandFigureCamera_TypeInfo;
  figureRenderGradientColor = this->fields.figureRenderGradientColor;
  if ( !*(&StandFigureCamera_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(StandFigureCamera_TypeInfo, v46, v47);
    v48 = StandFigureCamera_TypeInfo;
  }
  v48->static_fields->figureRenderGradientColor = figureRenderGradientColor;
}


void SelectGrandServantComponent__SetUpServantInfo(
        SelectGrandServantComponent_o *this,
        System_Collections_Generic_List_SelectGrandServantInfo__o *servantInfos,
        const MethodInfo *method)
{
  System_Comparison_T__o *v5; // x21
  Il2CppObject *Item; // x0
  Il2CppObject *v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  SelectGrandServantComponent___c_c *v10; // x0
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x8
  System_Func_object__int__o *_9__48_0; // x21
  Il2CppObject *v13; // x22
  struct SelectGrandServantComponent___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_List_object__o *v22; // x21
  System_Collections_Generic_List_object__o *v23; // x20
  System_Collections_Generic_List_object__o *v24; // x22
  int32_t v25; // w23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 size; // x10
  __int64 v39; // x8
  System_Collections_Generic_List_object__o *v40; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v42; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x0
  __int64 v44; // x2
  int32_t minimumRequiredElementNum; // w8
  int monitor; // w26
  Il2CppObject *v47; // x20
  float v48; // s8
  float v49; // s8
  unsigned int v50; // w9
  unsigned int v51; // w8
  int32_t v52; // w21
  signed int v53; // w9
  Il2CppObject *grandServantIconComponent; // x22
  SelectGrandServantInfo_o *v55; // x23
  __int64 v56; // x1
  __int64 v57; // x2
  UnityEngine_Transform_o *transform; // x24
  Il2CppObject *v59; // x22
  System_Action_int__o *v60; // x24
  System_Action_T1__T2__T3__o *v61; // x25
  const MethodInfo *v62; // x5
  System_String_o *v63; // x2
  System_String_o *v64; // x3
  int32_t v65; // w4
  int32_t v66; // w5
  bool v67; // w6
  bool v68; // w7
  Il2CppClass *klass; // x8
  _QWORD *v70; // x9
  __int64 monitor_low; // x10
  __int64 v72; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct UICenterOnChild_o *centerChild; // x20
  MissionNaviTransitionBoardItem_o *p_onFinished; // x20
  System_Delegate_o *onFinished; // t1
  SpringPanel_OnFinished_o *v84; // x22
  System_Delegate_o *v85; // x0
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  System_Delegate_o *v92; // x8
  System_Delegate_c *v93; // x1
  struct UIScrollView_o *scrollView; // x20
  System_Delegate_o *onDragStarted; // t1
  UIScrollView_OnDragNotification_o *v96; // x22
  System_Delegate_o *v97; // x0
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  struct System_Collections_Generic_List_GrandServantIconComponent__o *cachedIconList; // x8

  if ( (byte_59330EC & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&System_Action_bool__int__UserServantEntity__TypeInfo);
    sub_21FFC50(&System_Comparison_SelectGrandServantInfo__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_AsEnumerable_SelectGrandServantInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Concat_SelectGrandServantInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_SelectGrandServantInfo__int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Reverse_SelectGrandServantInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_SelectGrandServantInfo___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
    sub_21FFC50(&System_Func_SelectGrandServantInfo__int__TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_UICenterOnChild___);
    sub_21FFC50(&Method_System_Collections_Generic_List_SelectGrandServantInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SelectGrandServantInfo__Sort__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SelectGrandServantInfo___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_SelectGrandServantInfo__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GrandServantIconComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&UIScrollView_OnDragNotification_TypeInfo);
    sub_21FFC50(&SpringPanel_OnFinished_TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent_CompareUserServant__);
    sub_21FFC50(&Method_SelectGrandServantComponent_OnCenterFinished__);
    sub_21FFC50(&Method_SelectGrandServantComponent_OnDragStarted__);
    sub_21FFC50(&Method_SelectGrandServantComponent_RefreshDisplayAfterEndShowServantStatus__);
    sub_21FFC50(&Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__);
    sub_21FFC50(&Method_SelectGrandServantComponent___c__SetUpServantInfo_b__48_0__);
    sub_21FFC50(&SelectGrandServantComponent___c_TypeInfo);
    byte_59330EC = 1;
  }
  v5 = (System_Comparison_T__o *)sub_21FFEBC(System_Comparison_SelectGrandServantInfo__TypeInfo);
  System_Comparison_object____ctor(v5, (Il2CppObject *)this, Method_SelectGrandServantComponent_CompareUserServant__, 0);
  if ( !servantInfos )
    goto LABEL_69;
  System_Collections_Generic_List_object___Sort_71636404(
    (System_Collections_Generic_List_object__o *)servantInfos,
    v5,
    (const MethodInfo_44515B4 *)Method_System_Collections_Generic_List_SelectGrandServantInfo__Sort__);
  v10 = SelectGrandServantComponent___c_TypeInfo;
  if ( !*(&SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo, v8, v9);
    v10 = SelectGrandServantComponent___c_TypeInfo;
  }
  static_fields = v10->static_fields;
  _9__48_0 = (System_Func_object__int__o *)static_fields->__9__48_0;
  if ( !_9__48_0 )
  {
    if ( !*(&v10->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v10, v8, v9);
      static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    }
    v13 = (Il2CppObject *)static_fields->__9;
    _9__48_0 = (System_Func_object__int__o *)sub_21FFEBC(System_Func_SelectGrandServantInfo__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__48_0,
      v13,
      Method_SelectGrandServantComponent___c__SetUpServantInfo_b__48_0__,
      0);
    v14 = SelectGrandServantComponent___c_TypeInfo->static_fields;
    v14->__9__48_0 = (struct System_Func_SelectGrandServantInfo__int__o *)_9__48_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v14->__9__48_0, (int32_t)_9__48_0, v15, v16, v17, v18, v19, v20);
  }
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderBy_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)servantInfos,
                                                               (System_Func_TSource__TKey__o *)_9__48_0,
                                                               (const MethodInfo_38556D8 *)Method_System_Linq_Enumerable_OrderBy_SelectGrandServantInfo__int___);
  v22 = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__ToList_object_(
                                                       v21,
                                                       (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_SelectGrandServantInfo___);
  v23 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SelectGrandServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SelectGrandServantInfo___ctor__);
  v24 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SelectGrandServantInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v24,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SelectGrandServantInfo___ctor__);
  if ( !v22 )
    goto LABEL_69;
  if ( v22->fields._size >= 1 )
  {
    v25 = 0;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v22,
               v25,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_SelectGrandServantInfo__get_Item__);
      v7 = Item;
      if ( !v25 || (v25 & 1) != 0 )
      {
        if ( !v23 )
          goto LABEL_69;
        items = v23->fields._items;
        v37 = Method_System_Collections_Generic_List_SelectGrandServantInfo__Add__;
        ++v23->fields._version;
        if ( !items )
          goto LABEL_69;
        size = v23->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v39 = v37[4];
          v40 = v23;
LABEL_26:
          System_Collections_Generic_List_object___AddWithResize(
            v40,
            v7,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v39 + 192) + 112LL));
          continue;
        }
        v35 = &items->obj.klass + size;
        v23->fields._size = size + 1;
      }
      else
      {
        if ( !v24 )
          goto LABEL_69;
        v32 = v24->fields._items;
        v33 = Method_System_Collections_Generic_List_SelectGrandServantInfo__Add__;
        ++v24->fields._version;
        if ( !v32 )
          goto LABEL_69;
        v34 = v24->fields._size;
        if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
        {
          v39 = v33[4];
          v40 = v24;
          goto LABEL_26;
        }
        v35 = &v32->obj.klass + v34;
        v24->fields._size = v34 + 1;
      }
      v35[4] = (Il2CppClass *)v7;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)v7, v26, v27, v28, v29, v30, v31);
    }
    while ( ++v25 < v22->fields._size );
  }
  v41 = System_Linq_Enumerable__AsEnumerable_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v24,
          (const MethodInfo_38354B8 *)Method_System_Linq_Enumerable_AsEnumerable_SelectGrandServantInfo___);
  v42 = System_Linq_Enumerable__Reverse_object_(
          v41,
          (const MethodInfo_38568D4 *)Method_System_Linq_Enumerable_Reverse_SelectGrandServantInfo___);
  v43 = System_Linq_Enumerable__Concat_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          v42,
          (const MethodInfo_3842BB4 *)Method_System_Linq_Enumerable_Concat_SelectGrandServantInfo___);
  Item = (Il2CppObject *)System_Linq_Enumerable__ToArray_object_(
                           v43,
                           (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_SelectGrandServantInfo___);
  if ( !Item )
LABEL_69:
    sub_21FFECC(Item, v7);
  minimumRequiredElementNum = this->fields.minimumRequiredElementNum;
  monitor = (int)Item[1].monitor;
  v47 = Item;
  if ( minimumRequiredElementNum > monitor && monitor > 1 )
  {
    v48 = (float)minimumRequiredElementNum;
    if ( !byte_5931FBB )
    {
      sub_21FFC50(&System_Math_TypeInfo);
      byte_5931FBB = 1;
    }
    v49 = v48 / (float)monitor;
    Item = (Il2CppObject *)System_Math_TypeInfo;
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v7, v44);
    v50 = vcvtps_s32_f32(v49);
    if ( ceilf(v49) == INFINITY )
      v51 = 0x80000000;
    else
      v51 = v50;
    monitor = v51 * LODWORD(v47[1].monitor);
  }
  if ( monitor >= 1 )
  {
    v52 = 0;
    do
    {
      v53 = (signed int)v47[1].monitor;
      if ( v52 % v53 >= (unsigned int)v53 )
        sub_21FFED4(Item);
      Item = (Il2CppObject *)this->fields.wrapContent;
      if ( !Item )
        goto LABEL_69;
      grandServantIconComponent = (Il2CppObject *)this->fields.grandServantIconComponent;
      v55 = (SelectGrandServantInfo_o *)*((_QWORD *)&v47[2].klass + (unsigned int)(v52 % v53));
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)Item, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56, v57);
      v59 = UnityEngine_Object__Instantiate_object__59506996(
              grandServantIconComponent,
              transform,
              (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_GrandServantIconComponent___);
      BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v59, 1, 0);
      v60 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v60,
        (Il2CppObject *)this,
        (intptr_t)Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__,
        0);
      v61 = (System_Action_T1__T2__T3__o *)sub_21FFEBC(System_Action_bool__int__UserServantEntity__TypeInfo);
      System_Action_bool__int__object____ctor(
        v61,
        (Il2CppObject *)this,
        Method_SelectGrandServantComponent_RefreshDisplayAfterEndShowServantStatus__,
        0);
      if ( !v59 )
        goto LABEL_69;
      GrandServantIconComponent__Init(
        (GrandServantIconComponent_o *)v59,
        v55,
        v52,
        v60,
        (System_Action_bool__int__UserServantEntity__o *)v61,
        v62);
      Item = (Il2CppObject *)this->fields.cachedIconList;
      if ( !Item )
        goto LABEL_69;
      klass = Item[1].klass;
      v70 = Method_System_Collections_Generic_List_GrandServantIconComponent__Add__;
      ++HIDWORD(Item[1].monitor);
      if ( !klass )
        goto LABEL_69;
      monitor_low = SLODWORD(Item[1].monitor);
      if ( (unsigned int)monitor_low >= LODWORD(klass->_1.namespaze) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)Item,
          v59,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
      }
      else
      {
        v72 = (__int64)klass + 8 * monitor_low;
        LODWORD(Item[1].monitor) = monitor_low + 1;
        *(_QWORD *)(v72 + 32) = v59;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v72 + 32), (int32_t)v59, v63, v64, v65, v66, v67, v68);
      }
    }
    while ( monitor != ++v52 );
  }
  Item = (Il2CppObject *)this->fields.wrapContent;
  if ( !Item )
    goto LABEL_69;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Item, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_UICenterOnChild___);
  this->fields.centerChild = (struct UICenterOnChild_o *)Component_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.centerChild,
    (int32_t)Component_object,
    v75,
    v76,
    v77,
    v78,
    v79,
    v80);
  centerChild = this->fields.centerChild;
  if ( !centerChild )
    goto LABEL_69;
  onFinished = (System_Delegate_o *)centerChild->fields.onFinished;
  p_onFinished = (MissionNaviTransitionBoardItem_o *)&centerChild->fields.onFinished;
  v84 = (SpringPanel_OnFinished_o *)sub_21FFEBC(SpringPanel_OnFinished_TypeInfo);
  SpringPanel_OnFinished___ctor(v84, (Il2CppObject *)this, Method_SelectGrandServantComponent_OnCenterFinished__, 0);
  v85 = System_Delegate__Combine(onFinished, (System_Delegate_o *)v84, 0);
  v92 = v85;
  if ( v85 )
  {
    v93 = (System_Delegate_c *)SpringPanel_OnFinished_TypeInfo;
    if ( (SpringPanel_OnFinished_c *)v85->klass != SpringPanel_OnFinished_TypeInfo )
      goto LABEL_64;
    p_onFinished->klass = (MissionNaviTransitionBoardItem_c *)v85;
    if ( v85->klass != v93 )
      goto LABEL_64;
  }
  else
  {
    p_onFinished->klass = 0;
  }
  sub_21FFBF4(p_onFinished, (int32_t)v85, v86, v87, v88, v89, v90, v91);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.wrapContent, 1, 0);
  Item = (Il2CppObject *)this->fields.wrapContent;
  if ( !Item )
    goto LABEL_69;
  UIWrapContent__SortAlphabetically((UIWrapContent_o *)Item, 0);
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_69;
  onDragStarted = (System_Delegate_o *)scrollView->fields.onDragStarted;
  p_onFinished = (MissionNaviTransitionBoardItem_o *)&scrollView->fields.onDragStarted;
  v96 = (UIScrollView_OnDragNotification_o *)sub_21FFEBC(UIScrollView_OnDragNotification_TypeInfo);
  UIScrollView_OnDragNotification___ctor(
    v96,
    (Il2CppObject *)this,
    Method_SelectGrandServantComponent_OnDragStarted__,
    0);
  v97 = System_Delegate__Combine(onDragStarted, (System_Delegate_o *)v96, 0);
  v92 = v97;
  if ( !v97 )
    goto LABEL_65;
  v93 = (System_Delegate_c *)UIScrollView_OnDragNotification_TypeInfo;
  if ( (UIScrollView_OnDragNotification_c *)v97->klass != UIScrollView_OnDragNotification_TypeInfo
    || (p_onFinished->klass = (MissionNaviTransitionBoardItem_c *)v97, v97->klass != v93) )
  {
LABEL_64:
    sub_220024C(v92, v93, v86, v87);
LABEL_65:
    p_onFinished->klass = 0;
  }
  sub_21FFBF4(p_onFinished, (int32_t)v92, v86, v87, v98, v99, v100, v101);
  cachedIconList = this->fields.cachedIconList;
  if ( !cachedIconList )
    goto LABEL_69;
  Item = (Il2CppObject *)this->fields.scrollView;
  if ( !Item )
    goto LABEL_69;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Item, cachedIconList->fields._size > 1, 0);
}


void SelectGrandServantComponent__SetUpUI(SelectGrandServantComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *backButtonObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UILabel_o *headerMessageLabel; // x20
  System_String_o *bitEffectRoot; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x2
  UISprite_o *headerMessageBgSprite; // x20
  __int64 v12; // x2
  struct UISprite_array *arrowSprite; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v15; // x23
  UISprite_o *v16; // x20
  struct UICommonButton_o *decideButton; // x8
  unsigned __int128 v18; // [xsp+0h] [xbp-50h] BYREF

  if ( (byte_59330EB & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_436/*"#606060"*/);
    sub_21FFC50(&StringLiteral_21504/*"img_selected_frame"*/);
    sub_21FFC50(&StringLiteral_9763/*"Name_BG_Gradation"*/);
    sub_21FFC50(&StringLiteral_12022/*"SELECT_GRAND_HEADER_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_21626/*"img_txt_grand_class"*/);
    sub_21FFC50(&StringLiteral_21239/*"img_arrow"*/);
    byte_59330EB = 1;
  }
  backButtonObject = this->fields.backButtonObject;
  v18 = 0u;
  AndroidBackKeyManager__AddBackKeyTarget(backButtonObject, 0);
  headerMessageLabel = this->fields.headerMessageLabel;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
  bitEffectRoot = LocalizationManager__Get((System_String_o *)StringLiteral_12022/*"SELECT_GRAND_HEADER_MESSAGE"*/, 0);
  if ( !headerMessageLabel )
    goto LABEL_20;
  UILabel__set_text(headerMessageLabel, bitEffectRoot, 0);
  headerMessageBgSprite = this->fields.headerMessageBgSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v10);
  AtlasManager__SetGrandServantListImage(headerMessageBgSprite, (System_String_o *)StringLiteral_21626/*"img_txt_grand_class"*/, 0);
  bitEffectRoot = (System_String_o *)this->fields.headerMessageBgSprite;
  if ( !bitEffectRoot )
    goto LABEL_20;
  ((void (__fastcall *)(System_String_o *, void *))bitEffectRoot->klass[1]._1.generic_class)(
    bitEffectRoot,
    bitEffectRoot->klass[1]._1.typeMetadataHandle);
  AtlasManager__SetGrandServantListImage(this->fields.nameBgSprite, (System_String_o *)StringLiteral_9763/*"Name_BG_Gradation"*/, 0);
  bitEffectRoot = (System_String_o *)AtlasManager__SetGrandServantListImage(
                                       this->fields.glowSprite,
                                       (System_String_o *)StringLiteral_21504/*"img_selected_frame"*/,
                                       0);
  arrowSprite = this->fields.arrowSprite;
  if ( !arrowSprite )
    goto LABEL_20;
  max_length = arrowSprite->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = 0;
    do
    {
      if ( v15 >= (unsigned int)max_length )
        sub_21FFED4(bitEffectRoot);
      v16 = arrowSprite->m_Items[v15];
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v8, v12);
      bitEffectRoot = (System_String_o *)AtlasManager__SetGrandServantListImage(
                                           v16,
                                           (System_String_o *)StringLiteral_21239/*"img_arrow"*/,
                                           0);
      LODWORD(max_length) = arrowSprite->max_length;
      ++v15;
    }
    while ( (__int64)v15 < (int)max_length );
  }
  bitEffectRoot = (System_String_o *)this->fields.bitEffectRoot;
  if ( !bitEffectRoot
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)bitEffectRoot, 0, 0),
        bitEffectRoot = (System_String_o *)UnityEngine_ColorUtility__TryParseHtmlString(
                                             (System_String_o *)StringLiteral_436/*"#606060"*/,
                                             (UnityEngine_Color_o *)&v18,
                                             0),
        (decideButton = this->fields.decideButton) == 0) )
  {
LABEL_20:
    sub_21FFECC(bitEffectRoot, v8);
  }
  decideButton->fields.specifyDisabledColor = (struct UnityEngine_Color_o)v18;
}


System_Collections_IEnumerator_o *SelectGrandServantComponent__WaitLoadMultiPortrait(
        SelectGrandServantComponent_o *this,
        System_Collections_Generic_List_StandFigureCollect__o *collectList,
        const MethodInfo *method)
{
  __int64 v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  if ( (byte_5933103 & 1) == 0 )
  {
    sub_21FFC50(&SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_TypeInfo);
    byte_5933103 = 1;
  }
  v4 = sub_21FFEBC(SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = collectList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)collectList, v5, v6, v7, v8, v9, v10);
  return (System_Collections_IEnumerator_o *)v4;
}


void SelectGrandServantComponent___LoadGrandServantSelectEffect_b__67_0(
        SelectGrandServantComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1

  this->fields.grandServantSelectEffectAssetData = assetData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.grandServantSelectEffectAssetData,
    (int32_t)assetData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  SelectGrandServantComponent__PlayGrandServantSelectEffect(this, v9);
}


void SelectGrandServantComponent___OnCenterFinished_b__49_0(
        SelectGrandServantComponent_o *this,
        GrandServantIconComponent_o *elm,
        const MethodInfo *method)
{
  UnityEngine_Component_o *currentIcon; // x0
  const MethodInfo *v5; // x2

  currentIcon = (UnityEngine_Component_o *)this->fields.currentIcon;
  if ( !currentIcon
    || (currentIcon = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(currentIcon, 0), !elm) )
  {
    sub_21FFECC(currentIcon, elm);
  }
  GrandServantIconComponent__ApplyOffset(elm, (UnityEngine_Transform_o *)currentIcon, v5);
}


// local variable allocation has failed, the output may be wrong!
void SelectGrandServantComponent___OnClickDecide_b__62_0(
        SelectGrandServantComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  UserServantEntity_o *CurrentUserServantEntity; // x20
  UserServantEntity_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int64_t Instance; // x0
  const MethodInfo *v14; // x1
  NetworkManager_ResultCallbackFunc_o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  struct GrandGraphEntity_o *grandGraphEntity; // x8
  SetupGrandServantRequest_o *v19; // x20
  int32_t id; // w21
  __int64 v21; // x2
  __int128 v22; // q1
  BaseDialog_o *confirmServantDialog; // x20
  System_Action_o *v24; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v25; // [xsp+0h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v26; // [xsp+20h] [xbp-50h]

  if ( (byte_5933109 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_NetworkManager_getRequest_SetupGrandServantRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent_DestroycOnfirmServantDialog__);
    sub_21FFC50(&Method_SelectGrandServantComponent_OnEndGrandSetupRequest__);
    sub_21FFC50(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    sub_21FFC50(&UserServantEntity_TypeInfo);
    byte_5933109 = 1;
  }
  if ( isDecide )
  {
    CurrentUserServantEntity = SelectGrandServantComponent__get_CurrentUserServantEntity(
                                 this,
                                 (const MethodInfo *)isDecide);
    v6 = (UserServantEntity_o *)sub_21FFEBC(UserServantEntity_TypeInfo);
    UserServantEntity___ctor_50110044(v6, CurrentUserServantEntity, 0);
    this->fields.beforeUserServantEntity = v6;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.beforeUserServantEntity,
      (int32_t)v6,
      v7,
      v8,
      v9,
      v10,
      v11,
      v12);
    Instance = (int64_t)SingletonTemplate_object___get_Instance((const MethodInfo_476EDF8 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    if ( Instance )
    {
      MissionNotifyManager__StartPause((MissionNotifyManager_o *)Instance, 0);
      v15 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_SelectGrandServantComponent_OnEndGrandSetupRequest__,
        0);
      if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16, v17);
      Instance = (int64_t)NetworkManager__getRequest_object_(
                            v15,
                            (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_SetupGrandServantRequest___);
      grandGraphEntity = this->fields.grandGraphEntity;
      if ( grandGraphEntity )
      {
        v19 = (SetupGrandServantRequest_o *)Instance;
        id = grandGraphEntity->fields.id;
        Instance = (int64_t)SelectGrandServantComponent__get_CurrentUserServantEntity(this, v14);
        if ( Instance )
        {
          v22 = *(_OWORD *)(Instance + 32);
          *(_OWORD *)&v26.fields.currentCryptoKey = *(_OWORD *)(Instance + 16);
          *(_OWORD *)&v26.fields.fakeValue = v22;
          if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v14, v21);
          v25 = v26;
          Instance = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(&v25, 0);
          if ( v19 )
          {
            SetupGrandServantRequest__beginRequest(v19, id, Instance, 0);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_21FFECC(Instance, v14);
  }
  confirmServantDialog = (BaseDialog_o *)this->fields.confirmServantDialog;
  v24 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)this, Method_SelectGrandServantComponent_DestroycOnfirmServantDialog__, 0);
  if ( !confirmServantDialog )
    goto LABEL_15;
  BaseDialog__SafeClose(confirmServantDialog, v24, 0);
}


void SelectGrandServantComponent___OnEndGrandSetupRequest_b__65_0(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  System_Action_T__o *onDecideGrandAction; // x20
  const MethodInfo *v4; // x1
  Il2CppObject *CurrentUserServantEntity; // x1

  if ( (byte_593310A & 1) == 0 )
  {
    sub_21FFC50(&Method_ActionExtensions_Call_UserServantEntity___);
    byte_593310A = 1;
  }
  SelectGrandServantComponent__DestroycOnfirmServantDialog(this, method);
  onDecideGrandAction = (System_Action_T__o *)this->fields.onDecideGrandAction;
  CurrentUserServantEntity = (Il2CppObject *)SelectGrandServantComponent__get_CurrentUserServantEntity(this, v4);
  ActionExtensions__Call_object_(
    onDecideGrandAction,
    CurrentUserServantEntity,
    (const MethodInfo_36CDF5C *)Method_ActionExtensions_Call_UserServantEntity___);
}


// local variable allocation has failed, the output may be wrong!
void SelectGrandServantComponent___SetUpServantInfo_g__OnClickIcon_48_1(
        SelectGrandServantComponent_o *this,
        int32_t index,
        const MethodInfo *method)
{
  UnityEngine_Object_o *currentIcon; // x21
  UIScrollView_o *scrollView; // x0
  __int64 v7; // x1
  struct GrandServantIconComponent_o *v8; // x8
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  const MethodInfo *v11; // x1
  UICenterOnChild_o *centerChild; // x20

  if ( (byte_5933108 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__);
    sub_21FFC50(&StringLiteral_2269/*"AdjustIconToCenter"*/);
    byte_5933108 = 1;
  }
  if ( !this->fields.isDragging )
  {
    currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&index, method);
    scrollView = (UIScrollView_o *)UnityEngine_Object__op_Inequality(currentIcon, 0, 0);
    if ( ((unsigned __int8)scrollView & 1) != 0 )
    {
      v8 = this->fields.currentIcon;
      if ( !v8 )
        goto LABEL_18;
      if ( v8->fields._Index_k__BackingField == index )
        return;
    }
    this->fields.isClickNavigating = 1;
    UnityEngine_MonoBehaviour__CancelInvoke_83229692(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_2269/*"AdjustIconToCenter"*/,
      0);
    scrollView = this->fields.scrollView;
    if ( scrollView )
    {
      UIScrollView__Press(scrollView, 0, 0);
      scrollView = this->fields.scrollView;
      if ( scrollView )
      {
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)scrollView, 0, 0);
        v9 = Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__;
        if ( (*((_BYTE *)Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_21FFC68(Method_SelectGrandServantComponent__SetUpServantInfo_g__OnClickIcon_48_1__);
        v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 7, 0, 0);
        SelectGrandServantComponent__ResetDisplay(this, v11);
        scrollView = (UIScrollView_o *)this->fields.cachedIconList;
        if ( scrollView )
        {
          centerChild = this->fields.centerChild;
          scrollView = (UIScrollView_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)scrollView,
                                           index,
                                           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_GrandServantIconComponent__get_Item__);
          if ( scrollView )
          {
            scrollView = (UIScrollView_o *)UnityEngine_Component__get_transform(
                                             (UnityEngine_Component_o *)scrollView,
                                             0);
            if ( centerChild )
            {
              UICenterOnChild__CenterOn_56009592(centerChild, (UnityEngine_Transform_o *)scrollView, 1, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_18:
    sub_21FFECC(scrollView, v7);
  }
}


UserServantEntity_o *SelectGrandServantComponent__get_CurrentUserServantEntity(
        SelectGrandServantComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *currentIcon; // x20
  __int64 v5; // x1
  bool v6; // w8
  UserServantEntity_o *result; // x0
  struct GrandServantIconComponent_o *v8; // x8

  if ( (byte_59330E8 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_59330E8 = 1;
  }
  currentIcon = (UnityEngine_Object_o *)this->fields.currentIcon;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  v6 = UnityEngine_Object__op_Inequality(currentIcon, 0, 0);
  result = 0;
  if ( v6 )
  {
    v8 = this->fields.currentIcon;
    if ( !v8 )
      sub_21FFECC(0, v5);
    return v8->fields._UserServantEntity_k__BackingField;
  }
  return result;
}


void SelectGrandServantComponent__WaitLoadMultiPortrait_d__73___ctor(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SelectGrandServantComponent__WaitLoadMultiPortrait_d__73__MoveNext(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        const MethodInfo *method)
{
  SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *v2; // x19
  int32_t _1__state; // w22
  struct SelectGrandServantComponent___c__DisplayClass73_0_o *_8__1; // x8
  int32_t v5; // w20
  Il2CppObject *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Collections_Generic_List_StandFigureCollect__o *collectList; // x1
  Il2CppObject *v20; // x20
  System_Func_bool__o *v21; // x21
  UnityEngine_WaitUntil_o *v22; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  v2 = this;
  if ( (byte_593310F & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
    sub_21FFC50(&Method_SelectGrandServantComponent___c__DisplayClass73_0__WaitLoadMultiPortrait_b__0__);
    sub_21FFC50(&SelectGrandServantComponent___c__DisplayClass73_0_TypeInfo);
    this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_593310F = 1;
  }
  _1__state = v2->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      _8__1 = v2->fields.__8__1;
      v2->fields.__1__state = -1;
      if ( _8__1 )
      {
        v5 = 0;
        do
        {
          this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)_8__1->fields.collectList;
          if ( !this )
            break;
          if ( v5 >= SLODWORD(this->fields.__2__current) )
            return _1__state == 0;
          this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)System_Collections_Generic_List_object___get_Item(
                                                                                 (System_Collections_Generic_List_object__o *)this,
                                                                                 v5,
                                                                                 (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_StandFigureCollect__get_Item__);
          if ( !this )
            break;
          this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)this->fields.__2__current;
          if ( !this )
            break;
          UIStandFigureR__EnqueueRenderInfo((UIStandFigureR_o *)this, 0);
          _8__1 = v2->fields.__8__1;
          ++v5;
        }
        while ( _8__1 );
      }
LABEL_12:
      sub_21FFECC(this, method);
    }
  }
  else
  {
    v2->fields.__1__state = -1;
    v6 = (Il2CppObject *)sub_21FFEBC(SelectGrandServantComponent___c__DisplayClass73_0_TypeInfo);
    System_Object___ctor(v6, 0);
    v2->fields.__8__1 = (struct SelectGrandServantComponent___c__DisplayClass73_0_o *)v6;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v2->fields.__8__1, (int32_t)v6, v7, v8, v9, v10, v11, v12);
    this = (SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *)v2->fields.__8__1;
    if ( !this )
      goto LABEL_12;
    collectList = v2->fields.collectList;
    *(_QWORD *)&this->fields.__1__state = collectList;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)collectList, v13, v14, v15, v16, v17, v18);
    v20 = (Il2CppObject *)v2->fields.__8__1;
    v21 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v21,
      v20,
      Method_SelectGrandServantComponent___c__DisplayClass73_0__WaitLoadMultiPortrait_b__0__,
      0);
    v22 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v22, v21, 0);
    v2->fields.__2__current = (Il2CppObject *)v22;
    p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
    sub_21FFBF4(p__2__current, (int32_t)v22, v24, v25, v26, v27, v28, v29);
    p__2__current[-1].fields._BoardType_k__BackingField = 1;
  }
  return _1__state == 0;
}


Il2CppObject *SelectGrandServantComponent__WaitLoadMultiPortrait_d__73__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SelectGrandServantComponent__WaitLoadMultiPortrait_d__73__System_Collections_IEnumerator_Reset(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *SelectGrandServantComponent__WaitLoadMultiPortrait_d__73__System_Collections_IEnumerator_get_Current(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SelectGrandServantComponent__WaitLoadMultiPortrait_d__73__System_IDisposable_Dispose(
        SelectGrandServantComponent__WaitLoadMultiPortrait_d__73_o *this,
        const MethodInfo *method)
{
  ;
}


void SelectGrandServantComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593310B & 1) == 0 )
  {
    sub_21FFC50(&SelectGrandServantComponent___c_TypeInfo);
    byte_593310B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SelectGrandServantComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SelectGrandServantComponent___c_TypeInfo->static_fields->__9 = (struct SelectGrandServantComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SelectGrandServantComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SelectGrandServantComponent___c___ctor(SelectGrandServantComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectGrandServantComponent___c___GetSelectGrandConfirmServantDialogName_b__63_0(
        SelectGrandServantComponent___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return UserServantEntity__IsExtra1(e, 0);
}


bool SelectGrandServantComponent___c___GetSelectGrandConfirmServantDialogName_b__63_1(
        SelectGrandServantComponent___c_o *this,
        UserServantEntity_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  return UserServantEntity__IsExtra2(e, 0);
}


void SelectGrandServantComponent___c___RefreshDisplayAfterEndShowServantStatus_b__71_0(
        SelectGrandServantComponent___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_593310C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593310C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void SelectGrandServantComponent___c___ResetDisplay_b__56_0(
        SelectGrandServantComponent___c_o *this,
        GrandServantIconComponent_o *elm,
        const MethodInfo *method)
{
  if ( !elm )
    sub_21FFECC(this, 0);
  GrandServantIconComponent__ResetOffset(elm, (const MethodInfo *)elm);
}


int32_t SelectGrandServantComponent___c___SetUpServantInfo_b__48_0(
        SelectGrandServantComponent___c_o *this,
        SelectGrandServantInfo_o *e,
        const MethodInfo *method)
{
  if ( !e )
    sub_21FFECC(this, 0);
  if ( e->fields._CanSelectToGrand_k__BackingField )
    return 1;
  else
    return 2;
}


bool SelectGrandServantComponent___c___WaitLoadMultiPortrait_b__73_1(
        SelectGrandServantComponent___c_o *this,
        StandFigureCollect_o *x,
        const MethodInfo *method)
{
  struct UIStandFigureR_o *standFigure_k__BackingField; // x8

  if ( !x || (standFigure_k__BackingField = x->fields._standFigure_k__BackingField) == 0 )
    sub_21FFECC(this, x);
  return standFigure_k__BackingField->fields.isQueuerable;
}


void SelectGrandServantComponent___c__DisplayClass66_0___ctor(
        SelectGrandServantComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SelectGrandServantComponent___c__DisplayClass66_0___OnDecideGrandServantSelect_b__0(
        SelectGrandServantComponent___c__DisplayClass66_0_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SelectGrandServantComponent_o *_4__this; // x8
  struct UserServantEntity_o *userServantEntity; // x1
  SelectGrandServantComponent___c__DisplayClass66_0_o *v10; // x19

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (userServantEntity = this->fields.userServantEntity,
        v10 = this,
        _4__this->fields.selectUserServantEntity = userServantEntity,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.selectUserServantEntity,
          (int32_t)userServantEntity,
          v2,
          v3,
          v4,
          v5,
          v6,
          v7),
        (this = (SelectGrandServantComponent___c__DisplayClass66_0_o *)v10->fields.__4__this) == 0) )
  {
    sub_21FFECC(this, method);
  }
  SelectGrandServantComponent__LoadGrandServantSelectEffect((SelectGrandServantComponent_o *)this, method);
}


void SelectGrandServantComponent___c__DisplayClass71_0___ctor(
        SelectGrandServantComponent___c__DisplayClass71_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectGrandServantComponent___c__DisplayClass71_0___RefreshDisplayAfterEndShowServantStatus_b__1(
        SelectGrandServantComponent___c__DisplayClass71_0_o *this,
        GrandServantIconComponent_o *icon,
        const MethodInfo *method)
{
  SelectGrandServantComponent___c__DisplayClass71_0_o *v4; // x19
  struct UserServantEntity_o *UserServantEntity_k__BackingField; // x8
  __int128 v6; // q1
  struct UserServantEntity_o *userServantEntity; // x8
  __int128 v8; // q1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v10; // [xsp+0h] [xbp-80h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v11; // [xsp+20h] [xbp-60h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v12; // [xsp+40h] [xbp-40h]

  v4 = this;
  if ( (byte_593310D & 1) == 0 )
  {
    this = (SelectGrandServantComponent___c__DisplayClass71_0_o *)sub_21FFC50(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    byte_593310D = 1;
  }
  if ( !icon )
    goto LABEL_9;
  UserServantEntity_k__BackingField = icon->fields._UserServantEntity_k__BackingField;
  if ( !UserServantEntity_k__BackingField )
    goto LABEL_9;
  v6 = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.fakeValue;
  *(_OWORD *)&v12.fields.currentCryptoKey = *(_OWORD *)&UserServantEntity_k__BackingField->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v12.fields.fakeValue = v6;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, icon, method);
  v11 = v12;
  this = (SelectGrandServantComponent___c__DisplayClass71_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                                  &v11,
                                                                  0);
  userServantEntity = v4->fields.userServantEntity;
  if ( !userServantEntity )
LABEL_9:
    sub_21FFECC(this, icon);
  v8 = *(_OWORD *)&userServantEntity->fields.id.fields.fakeValue;
  *(_OWORD *)&v10.fields.currentCryptoKey = *(_OWORD *)&userServantEntity->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v10.fields.fakeValue = v8;
  return this == (SelectGrandServantComponent___c__DisplayClass71_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_55795956(
                                                                          &v10,
                                                                          0);
}


void SelectGrandServantComponent___c__DisplayClass73_0___ctor(
        SelectGrandServantComponent___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SelectGrandServantComponent___c__DisplayClass73_0___WaitLoadMultiPortrait_b__0(
        SelectGrandServantComponent___c__DisplayClass73_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SelectGrandServantComponent___c_c *v4; // x0
  struct System_Collections_Generic_List_StandFigureCollect__o *collectList; // x19
  struct SelectGrandServantComponent___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__73_1; // x20
  Il2CppObject *v8; // x21
  struct SelectGrandServantComponent___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_593310E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_All_StandFigureCollect___);
    sub_21FFC50(&System_Func_StandFigureCollect__bool__TypeInfo);
    sub_21FFC50(&Method_SelectGrandServantComponent___c__WaitLoadMultiPortrait_b__73_1__);
    sub_21FFC50(&SelectGrandServantComponent___c_TypeInfo);
    byte_593310E = 1;
  }
  v4 = SelectGrandServantComponent___c_TypeInfo;
  collectList = this->fields.collectList;
  if ( !*(&SelectGrandServantComponent___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SelectGrandServantComponent___c_TypeInfo, method, v2);
    v4 = SelectGrandServantComponent___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__73_1 = (System_Func_object__bool__o *)static_fields->__9__73_1;
  if ( !_9__73_1 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = SelectGrandServantComponent___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__73_1 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_StandFigureCollect__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__73_1,
      v8,
      Method_SelectGrandServantComponent___c__WaitLoadMultiPortrait_b__73_1__,
      0);
    v9 = SelectGrandServantComponent___c_TypeInfo->static_fields;
    v9->__9__73_1 = (struct System_Func_StandFigureCollect__bool__o *)_9__73_1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__73_1, (int32_t)_9__73_1, v10, v11, v12, v13, v14, v15);
  }
  return System_Linq_Enumerable__All_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)collectList,
           (System_Func_TSource__bool__o *)_9__73_1,
           (const MethodInfo_3831808 *)Method_System_Linq_Enumerable_All_StandFigureCollect___);
}