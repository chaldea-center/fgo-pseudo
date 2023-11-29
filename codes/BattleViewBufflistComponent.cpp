void __fastcall BattleViewBufflistComponent___ctor(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F900B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_40F900B = 1;
  }
  this->fields.height = 120.0;
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_GameObject__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleViewBufflistComponent__setBuffList(
        BattleViewBufflistComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *prefabBuffObject; // x0
  const MethodInfo *v10; // x1
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x8
  unsigned __int64 v15; // x23
  BattleBuffData_ShowBuffData_o *v16; // x22
  float height; // s8
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v19; // x21
  UnityEngine_Transform_o *transform; // x0
  BattleBuffListObjectComponent_o *Component_srcLineSprite; // x0
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  UnityEngine_Object_o *nothingLabel; // x21
  const MethodInfo *v24; // x1
  System_String_o *v25; // x21
  System_String_o *v26; // x0
  System_String_o *v27; // x22
  UILabel_o *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40F9008 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___, buffList);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Add__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&StringLiteral_2453, v8);
    byte_40F9008 = 1;
  }
  prefabBuffObject = this->fields.prefabBuffObject;
  if ( !prefabBuffObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(prefabBuffObject, 0, 0LL);
  BattleViewBufflistComponent__setClearBuffList(this, v10);
  if ( buffList )
  {
    v14 = *(_QWORD *)&buffList->max_length;
    if ( (int)v14 >= 1 )
    {
      v15 = 0LL;
      do
      {
        if ( v15 >= (unsigned int)v14 )
        {
          sub_B17100(v11, v12, v13);
          sub_B170A0();
        }
        v16 = buffList->m_Items[v15];
        height = this->fields.height;
        Object = BaseMonoBehaviour__createObject(
                   (BaseMonoBehaviour_o *)this,
                   this->fields.prefabBuffObject,
                   this->fields.listRoot,
                   0LL,
                   0LL);
        if ( !Object )
          goto LABEL_34;
        v19 = Object;
        transform = UnityEngine_GameObject__get_transform(Object, 0LL);
        if ( !transform )
          goto LABEL_34;
        v31.fields.y = -(float)(height * (float)(int)v15);
        v31.fields.x = 0.0;
        v31.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition(transform, v31, 0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
        {
          Component_srcLineSprite = (BattleBuffListObjectComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                         v19,
                                                                         (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___);
          if ( !Component_srcLineSprite )
            goto LABEL_34;
          BattleBuffListObjectComponent__setData(Component_srcLineSprite, v16, 0LL);
        }
        UnityEngine_GameObject__SetActive(v19, 1, 0LL);
        objList = this->fields.objList;
        if ( !objList )
          goto LABEL_34;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)objList,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_GameObject__Add__);
        LODWORD(v14) = buffList->max_length;
      }
      while ( (__int64)++v15 < (int)v14 );
    }
    nothingLabel = (UnityEngine_Object_o *)this->fields.nothingLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(nothingLabel, 0LL, 0LL) )
    {
      v25 = (System_String_o *)StringLiteral_2453;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get(v25, 0LL);
      if ( !v26 )
        goto LABEL_34;
      v27 = v26;
      if ( !System_String__Equals_43731072(v26, v25, 0LL) )
      {
        v28 = this->fields.nothingLabel;
        if ( !v28 )
          goto LABEL_34;
        UILabel__set_text(v28, v27, 0LL);
      }
      v29 = (UnityEngine_Component_o *)this->fields.nothingLabel;
      if ( !v29 || (gameObject = UnityEngine_Component__get_gameObject(v29, 0LL)) == 0LL )
LABEL_34:
        sub_B170D4();
      UnityEngine_GameObject__SetActive(gameObject, buffList->max_length == 0, 0LL);
    }
    BattleViewBufflistComponent__setBuffListScrollView(this, v24);
  }
}


void __fastcall BattleViewBufflistComponent__setBuffListScrollView(
        BattleViewBufflistComponent_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *uiScrollView; // x0
  UIScrollView_o *v4; // x0

  uiScrollView = this->fields.uiScrollView;
  if ( !uiScrollView || (UIScrollView__ResetPosition(uiScrollView, 0LL), (v4 = this->fields.uiScrollView) == 0LL) )
    sub_B170D4();
  UIScrollView__UpdateScrollbars(v4, 0LL);
}


void __fastcall BattleViewBufflistComponent__setClassIcon(
        BattleViewBufflistComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *servantClassIconComponent; // x21
  int32_t ClassId; // w0
  int32_t EnemyNameEffect; // w0
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x21
  UnityEngine_Object_o *enemyNameEffectPrefab; // x23
  int32_t v15; // w22
  UnityEngine_Object_o *v16; // x23
  System_String_o *NameEffectPath; // x22
  AssetData_o *AssetStorage; // x0
  UILabel_o *Object_WarBoardWaitTimeSetting; // x22
  UnityEngine_Component_o *nameLabel; // x0
  UnityEngine_Transform_o *transform; // x23
  System_Int32_array **v22; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  UILabel_o *v29; // x20
  System_String_o *ServantShortName; // x0

  if ( (byte_40F900A & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, data);
    sub_B16FFC(&AssetManager_TypeInfo, v5);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject____66874888, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(&ServantAssetLoadManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_17939, v9);
    byte_40F900A = 1;
  }
  servantClassIconComponent = (UnityEngine_Object_o *)this->fields.nameInfo.fields.servantClassIconComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(servantClassIconComponent, 0LL, 0LL) )
  {
    if ( !data )
      goto LABEL_35;
    ClassId = BattleServantData__getClassId(data, 0LL);
    if ( !this->fields.nameInfo.fields.servantClassIconComponent )
      goto LABEL_35;
    ServantClassIconComponent__SetImage(
      this->fields.nameInfo.fields.servantClassIconComponent,
      ClassId,
      data->fields._frameType_k__BackingField,
      0LL);
    EnemyNameEffect = BattleServantData__getEnemyNameEffect(data, 0LL);
    p_enemyNameEffectPrefab = &this->fields.enemyNameEffectPrefab;
    enemyNameEffectPrefab = (UnityEngine_Object_o *)this->fields.enemyNameEffectPrefab;
    v15 = EnemyNameEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0LL, 0LL) )
    {
      v16 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_34809464(v16, 0LL);
    }
    if ( v15 )
    {
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v15, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0LL);
      if ( AssetStorage )
        Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        AssetStorage,
                                                        (System_String_o *)StringLiteral_17939,
                                                        (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
      else
        Object_WarBoardWaitTimeSetting = 0LL;
      nameLabel = (UnityEngine_Component_o *)this->fields.nameInfo.fields.nameLabel;
      if ( !nameLabel )
        goto LABEL_35;
      transform = UnityEngine_Component__get_transform(nameLabel, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v22 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     Object_WarBoardWaitTimeSetting,
                                     transform,
                                     (const MethodInfo_19DE348 *)Method_UnityEngine_Object_Instantiate_GameObject____66874888);
      *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v22;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.enemyNameEffectPrefab, v22, v23, v24, v25, v26, v27, v28);
    }
    v29 = this->fields.nameInfo.fields.nameLabel;
    ServantShortName = BattleServantData__getServantShortName(data, 0LL);
    if ( v29 )
    {
      UILabel__set_text(v29, ServantShortName, 0LL);
      return;
    }
LABEL_35:
    sub_B170D4();
  }
}


void __fastcall BattleViewBufflistComponent__setClearBuffList(
        BattleViewBufflistComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v10; // x0
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F9009 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40F9009 = 1;
  }
  memset(&v12, 0, sizeof(v12));
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v12,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objList,
    (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v12,
            (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v12.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v12,
    (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v10 = this->fields.objList;
  if ( !v10 )
LABEL_12:
    sub_B170D4();
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v10,
    (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  BattleViewBufflistComponent__setBuffListScrollView(this, v11);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewBufflistComponent__setHide(
        BattleViewBufflistComponent_o *this,
        bool isClose,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *barObject; // x0
  UnityEngine_Component_o *listRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( isClose )
    BattleViewBufflistComponent__setClearBuffList(this, (const MethodInfo *)isClose);
  barObject = this->fields.barObject;
  if ( !barObject
    || (UnityEngine_GameObject__SetActive(barObject, 0, 0LL),
        (listRoot = (UnityEngine_Component_o *)this->fields.listRoot) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject(listRoot, 0LL)) == 0LL )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall BattleViewBufflistComponent__setShow(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *listRoot; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *barObject; // x0

  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (gameObject = UnityEngine_Component__get_gameObject(listRoot, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        BattleViewBufflistComponent__setBuffListScrollView(this, v5),
        (barObject = this->fields.barObject) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(barObject, 1, 0LL);
}