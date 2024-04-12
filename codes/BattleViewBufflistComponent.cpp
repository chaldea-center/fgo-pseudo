void __fastcall BattleViewBufflistComponent___ctor(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42AFC79 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_B52984(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_42AFC79 = 1;
  }
  this->fields.height = 120.0;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v3;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.objList, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  this->fields.isAttributeAndNotPlayer = -1;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


bool __fastcall BattleViewBufflistComponent__IsAttributeAndNotPlayer(
        BattleViewBufflistComponent_o *this,
        const MethodInfo *method)
{
  if ( (byte_42AFC78 & 1) == 0 )
  {
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&StringLiteral_11746/*"SERVANT_ATTRIBUTE_FORMAT"*/);
    byte_42AFC78 = 1;
  }
  if ( (this->fields.isAttributeAndNotPlayer & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    this->fields.isAttributeAndNotPlayer = LocalizationManager__ContainsKey((System_String_o *)StringLiteral_11746/*"SERVANT_ATTRIBUTE_FORMAT"*/, 0LL);
  }
  this->fields.isAttributeAndNotPlayer = 0;
  return 0;
}


void __fastcall BattleViewBufflistComponent__setBuffList(
        BattleViewBufflistComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *prefabBuffObject; // x0
  const MethodInfo *v6; // x1
  __int64 v7; // x8
  unsigned __int64 v8; // x24
  int v9; // w25
  BattleBuffData_ShowBuffData_o *v10; // x21
  float height; // s8
  UnityEngine_Object_o *Object; // x22
  UnityEngine_GameObject_o *v13; // x23
  UnityEngine_Object_o *nothingLabel; // x21
  const MethodInfo *v15; // x1
  System_String_o *v16; // x21
  System_String_o *v17; // x22
  __int64 v18; // x0
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42AFC74 & 1) == 0 )
  {
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&StringLiteral_2495/*"BATTLE_NOBUFFLIST"*/);
    byte_42AFC74 = 1;
  }
  prefabBuffObject = this->fields.prefabBuffObject;
  if ( !prefabBuffObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(prefabBuffObject, 0, 0LL);
  BattleViewBufflistComponent__setClearBuffList(this, v6);
  if ( buffList )
  {
    v7 = *(_QWORD *)&buffList->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      v9 = 0;
      do
      {
        if ( v8 >= (unsigned int)v7 )
        {
          v18 = sub_B52A88(prefabBuffObject);
          sub_B52A28(v18, 0LL);
        }
        v10 = buffList->m_Items[v8];
        height = this->fields.height;
        Object = (UnityEngine_Object_o *)BaseMonoBehaviour__createObject(
                                           (BaseMonoBehaviour_o *)this,
                                           this->fields.prefabBuffObject,
                                           this->fields.listRoot,
                                           0LL,
                                           0LL);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        prefabBuffObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality(Object, 0LL, 0LL);
        if ( ((unsigned __int8)prefabBuffObject & 1) == 0 )
        {
          if ( !Object )
            goto LABEL_34;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Object, 1, 0LL);
          prefabBuffObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                                           (UnityEngine_GameObject_o *)Object,
                                                           0LL);
          if ( !prefabBuffObject )
            goto LABEL_34;
          v19.fields.y = -(float)((float)(height * (float)(int)v8) + (float)v9);
          v19.fields.x = 0.0;
          v19.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)prefabBuffObject, v19, 0LL);
          prefabBuffObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)Object,
                                                           (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___);
          if ( !prefabBuffObject )
            goto LABEL_34;
          v13 = prefabBuffObject;
          BattleBuffListObjectComponent__SetData((BattleBuffListObjectComponent_o *)prefabBuffObject, v10, 0LL);
          prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.objList;
          if ( !prefabBuffObject )
            goto LABEL_34;
          v9 += LODWORD(v13[3].monitor);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)prefabBuffObject,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
            (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
        LODWORD(v7) = buffList->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
    }
    nothingLabel = (UnityEngine_Object_o *)this->fields.nothingLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(nothingLabel, 0LL, 0LL) )
      goto LABEL_32;
    v16 = (System_String_o *)StringLiteral_2495/*"BATTLE_NOBUFFLIST"*/;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    prefabBuffObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v16, 0LL);
    if ( prefabBuffObject )
    {
      v17 = (System_String_o *)prefabBuffObject;
      if ( !System_String__Equals_44555656((System_String_o *)prefabBuffObject, v16, 0LL) )
      {
        prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.nothingLabel;
        if ( !prefabBuffObject )
          goto LABEL_34;
        UILabel__set_text((UILabel_o *)prefabBuffObject, v17, 0LL);
      }
      prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.nothingLabel;
      if ( prefabBuffObject )
      {
        prefabBuffObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)prefabBuffObject, 0LL);
        if ( prefabBuffObject )
        {
          UnityEngine_GameObject__SetActive(prefabBuffObject, buffList->max_length == 0, 0LL);
LABEL_32:
          BattleViewBufflistComponent__setBuffListScrollView(this, v15);
          return;
        }
      }
    }
LABEL_34:
    sub_B52A5C(prefabBuffObject, buffList);
  }
}


void __fastcall BattleViewBufflistComponent__setBuffListScrollView(
        BattleViewBufflistComponent_o *this,
        const MethodInfo *method)
{
  long double v2; // q8
  __int64 v4; // x1
  UnityEngine_Object_o *stateTitleObj; // x20
  UnityEngine_Component_o *v6; // x0
  struct UIScrollView_o *uiScrollView; // x8
  struct UIScrollView_o **p_uiScrollView; // x21
  UnityEngine_Object_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  struct UIScrollView_o *v11; // x8
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8

  if ( (byte_42AFC76 & 1) == 0 )
  {
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFC76 = 1;
  }
  if ( !BattleViewBufflistComponent__IsAttributeAndNotPlayer(this, method) )
  {
    p_uiScrollView = &this->fields.uiScrollView;
    goto LABEL_32;
  }
  stateTitleObj = (UnityEngine_Object_o *)this->fields.stateTitleObj;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(stateTitleObj, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0
    && GameObjectExtensions__GetLocalPositionY(this->fields.stateTitleObj, 0LL) > -20.0 )
  {
    GameObjectExtensions__SetLocalPositionY(this->fields.stateTitleObj, -20.0, 0LL);
  }
  p_uiScrollView = &this->fields.uiScrollView;
  uiScrollView = this->fields.uiScrollView;
  if ( !uiScrollView )
    goto LABEL_35;
  v9 = *(UnityEngine_Object_o **)&uiScrollView->fields.mPlane.fields.m_Normal.fields.x;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v6 = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(v9, 0LL, 0LL);
  if ( ((unsigned __int8)v6 & 1) != 0 )
  {
    if ( !*p_uiScrollView )
      goto LABEL_35;
    v6 = *(UnityEngine_Component_o **)&(*p_uiScrollView)->fields.mPlane.fields.m_Normal.fields.x;
    if ( !v6 )
      goto LABEL_35;
    LODWORD(v2) = 1133903872;
    if ( UIPanel__get_height((UIPanel_o *)v6, 0LL) < 300.0 )
    {
      v6 = (UnityEngine_Component_o *)*p_uiScrollView;
      if ( *p_uiScrollView )
      {
        gameObject = UnityEngine_Component__get_gameObject(v6, 0LL);
        GameObjectExtensions__SetLocalPositionY(gameObject, 0.0, 0LL);
        if ( *p_uiScrollView )
        {
          v6 = *(UnityEngine_Component_o **)&(*p_uiScrollView)->fields.mPlane.fields.m_Normal.fields.x;
          if ( v6 )
          {
            ((void (__fastcall *)(UnityEngine_Component_o *, _QWORD, float, float, float, long double))v6->klass[1]._2.genericContainerHandle)(
              v6,
              *(_QWORD *)&v6->klass[1]._2.instance_size,
              0.0,
              -23.0,
              670.0,
              v2);
            GameObjectExtensions__SetLocalPositionY(this->fields.barObject, -207.0, 0LL);
            v11 = this->fields.uiScrollView;
            if ( v11 )
            {
              v12 = *(_QWORD *)&v11->fields.showScrollBars;
              if ( v12 )
              {
                v6 = *(UnityEngine_Component_o **)(v12 + 40);
                if ( v6 )
                {
                  UIWidget__set_height((UIWidget_o *)v6, 300, 0LL);
                  if ( *p_uiScrollView )
                  {
                    v13 = *(_QWORD *)&(*p_uiScrollView)->fields.showScrollBars;
                    if ( v13 )
                    {
                      v6 = *(UnityEngine_Component_o **)(v13 + 48);
                      if ( v6 )
                      {
                        UIWidget__set_width((UIWidget_o *)v6, 26, 0LL);
                        if ( *p_uiScrollView )
                        {
                          v14 = *(_QWORD *)&(*p_uiScrollView)->fields.showScrollBars;
                          if ( v14 )
                          {
                            v6 = *(UnityEngine_Component_o **)(v14 + 48);
                            if ( v6 )
                            {
                              UIWidget__set_height((UIWidget_o *)v6, 300, 0LL);
                              goto LABEL_32;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_35:
      sub_B52A5C(v6, v4);
    }
  }
LABEL_32:
  v6 = (UnityEngine_Component_o *)*p_uiScrollView;
  if ( !*p_uiScrollView )
    goto LABEL_35;
  UIScrollView__ResetPosition((UIScrollView_o *)v6, 0LL);
  v6 = (UnityEngine_Component_o *)*p_uiScrollView;
  if ( !*p_uiScrollView )
    goto LABEL_35;
  UIScrollView__UpdateScrollbars((UIScrollView_o *)v6, 0LL);
}


void __fastcall BattleViewBufflistComponent__setClassIcon(
        BattleViewBufflistComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  UnityEngine_Object_o *servantClassIconComponent; // x21
  UnityEngine_Component_o *ClassId; // x0
  __int64 v7; // x1
  int32_t EnemyNameEffect; // w0
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x21
  UnityEngine_Object_o *enemyNameEffectPrefab; // x23
  int32_t v11; // w22
  UnityEngine_Object_o *v12; // x23
  System_String_o *NameEffectPath; // x22
  AssetData_o *AssetStorage; // x0
  UILabel_o *Object_WarBoardWaitTimeSetting; // x22
  UnityEngine_Transform_o *transform; // x23
  System_Int32_array **v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UILabel_o *nameLabel; // x20

  if ( (byte_42AFC77 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    sub_B52984(&AssetManager_TypeInfo);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject____68654656);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&ServantAssetLoadManager_TypeInfo);
    sub_B52984(&StringLiteral_18138/*"dialog_title"*/);
    byte_42AFC77 = 1;
  }
  servantClassIconComponent = (UnityEngine_Object_o *)this->fields.nameInfo.fields.servantClassIconComponent;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  ClassId = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(servantClassIconComponent, 0LL, 0LL);
  if ( ((unsigned __int8)ClassId & 1) != 0 )
  {
    if ( !data )
      goto LABEL_35;
    ClassId = (UnityEngine_Component_o *)BattleServantData__getClassId(data, 0LL);
    if ( !this->fields.nameInfo.fields.servantClassIconComponent )
      goto LABEL_35;
    ServantClassIconComponent__SetImage(
      this->fields.nameInfo.fields.servantClassIconComponent,
      (int32_t)ClassId,
      data->fields._frameType_k__BackingField,
      0LL);
    EnemyNameEffect = BattleServantData__getEnemyNameEffect(data, 0LL);
    p_enemyNameEffectPrefab = &this->fields.enemyNameEffectPrefab;
    enemyNameEffectPrefab = (UnityEngine_Object_o *)this->fields.enemyNameEffectPrefab;
    v11 = EnemyNameEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0LL, 0LL) )
    {
      v12 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35616956(v12, 0LL);
    }
    if ( v11 )
    {
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v11, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0LL);
      if ( AssetStorage )
        Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        AssetStorage,
                                                        (System_String_o *)StringLiteral_18138/*"dialog_title"*/,
                                                        (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
      else
        Object_WarBoardWaitTimeSetting = 0LL;
      ClassId = (UnityEngine_Component_o *)this->fields.nameInfo.fields.nameLabel;
      if ( !ClassId )
        goto LABEL_35;
      transform = UnityEngine_Component__get_transform(ClassId, 0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v17 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     Object_WarBoardWaitTimeSetting,
                                     transform,
                                     (const MethodInfo_1F712F4 *)Method_UnityEngine_Object_Instantiate_GameObject____68654656);
      *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v17;
      sub_B52920((BattleServantConfConponent_o *)&this->fields.enemyNameEffectPrefab, v17, v18, v19, v20, v21, v22, v23);
    }
    nameLabel = this->fields.nameInfo.fields.nameLabel;
    ClassId = (UnityEngine_Component_o *)BattleServantData__getServantShortName(data, 0LL);
    if ( nameLabel )
    {
      UILabel__set_text(nameLabel, (System_String_o *)ClassId, 0LL);
      return;
    }
LABEL_35:
    sub_B52A5C(ClassId, v7);
  }
}


void __fastcall BattleViewBufflistComponent__setClearBuffList(
        BattleViewBufflistComponent_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v5; // x1
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42AFC75 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42AFC75 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objList,
    (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v6.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35616956((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  objList = this->fields.objList;
  if ( !objList )
LABEL_12:
    sub_B52A5C(objList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objList,
    (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_GameObject__Clear__);
  BattleViewBufflistComponent__setBuffListScrollView(this, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleViewBufflistComponent__setHide(
        BattleViewBufflistComponent_o *this,
        bool isClose,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *barObject; // x0

  if ( isClose )
    BattleViewBufflistComponent__setClearBuffList(this, (const MethodInfo *)isClose);
  barObject = this->fields.barObject;
  if ( !barObject
    || (UnityEngine_GameObject__SetActive(barObject, 0, 0LL),
        (barObject = (UnityEngine_GameObject_o *)this->fields.listRoot) == 0LL)
    || (barObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)barObject, 0LL)) == 0LL )
  {
    sub_B52A5C(barObject, isClose);
  }
  UnityEngine_GameObject__SetActive(barObject, 0, 0LL);
}


void __fastcall BattleViewBufflistComponent__setShow(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *listRoot; // x0
  const MethodInfo *v4; // x1

  listRoot = (UnityEngine_Component_o *)this->fields.listRoot;
  if ( !listRoot
    || (listRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(listRoot, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0LL),
        BattleViewBufflistComponent__setBuffListScrollView(this, v4),
        (listRoot = (UnityEngine_Component_o *)this->fields.barObject) == 0LL) )
  {
    sub_B52A5C(listRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0LL);
}