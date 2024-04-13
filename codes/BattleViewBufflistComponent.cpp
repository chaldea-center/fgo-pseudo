void __fastcall BattleViewBufflistComponent___ctor(BattleViewBufflistComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E7DDB & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_GameObject__TypeInfo, v5, v6, v7);
    byte_42E7DDB = 1;
  }
  this->fields.height = 120.0;
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.objList = (struct System_Collections_Generic_List_GameObject__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleViewBufflistComponent__UpdateBuffListScrollView(
        BattleViewBufflistComponent_o *this,
        bool isHideAttribute,
        const MethodInfo *method)
{
  __int64 v3; // x3
  UnityEngine_Object_o *stateTitleObj; // x20
  UIWidget_o *v7; // x0
  __int64 v8; // x1
  struct UIScrollView_o *uiScrollView; // x8
  struct UIScrollView_o **p_uiScrollView; // x21
  UnityEngine_Object_o *v11; // x20
  struct UIScrollView_o *v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  __int64 v15; // x8
  int32_t v16; // w1
  struct UIScrollView_o *v17; // x8
  UnityEngine_Object_o *v18; // x20
  struct UIScrollView_o *v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8

  if ( (byte_42E7DDA & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, isHideAttribute, (_DWORD)method, v3);
    byte_42E7DDA = 1;
  }
  stateTitleObj = (UnityEngine_Object_o *)this->fields.stateTitleObj;
  if ( isHideAttribute )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UIWidget_o *)UnityEngine_Object__op_Inequality(stateTitleObj, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) != 0
      && GameObjectExtensions__GetLocalPositionY(this->fields.stateTitleObj, 0LL) <= -20.0 )
    {
      GameObjectExtensions__SetLocalPositionY(this->fields.stateTitleObj, 0.0, 0LL);
    }
    p_uiScrollView = &this->fields.uiScrollView;
    uiScrollView = this->fields.uiScrollView;
    if ( !uiScrollView )
      goto LABEL_60;
    v11 = *(UnityEngine_Object_o **)&uiScrollView->fields.mPlane.fields.m_Normal.fields.x;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UIWidget_o *)UnityEngine_Object__op_Inequality(v11, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( !*p_uiScrollView )
        goto LABEL_60;
      v7 = *(UIWidget_o **)&(*p_uiScrollView)->fields.mPlane.fields.m_Normal.fields.x;
      if ( !v7 )
        goto LABEL_60;
      if ( UIPanel__get_height((UIPanel_o *)v7, 0LL) <= 300.0 )
      {
        if ( *p_uiScrollView )
        {
          v7 = *(UIWidget_o **)&(*p_uiScrollView)->fields.mPlane.fields.m_Normal.fields.x;
          if ( v7 )
          {
            ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer, float, float, float, float))v7->klass->vtable._18_SetRect.method)(
              v7,
              v7->klass->vtable._19_ParentHasChanged.methodPtr,
              0.0,
              -11.0,
              670.0,
              298.0);
            GameObjectExtensions__SetLocalPositionY(this->fields.barObject, -196.0, 0LL);
            v12 = this->fields.uiScrollView;
            if ( v12 )
            {
              v13 = *(_QWORD *)&v12->fields.showScrollBars;
              if ( v13 )
              {
                v7 = *(UIWidget_o **)(v13 + 40);
                if ( v7 )
                {
                  UIWidget__set_height(v7, 312, 0LL);
                  if ( *p_uiScrollView )
                  {
                    v14 = *(_QWORD *)&(*p_uiScrollView)->fields.showScrollBars;
                    if ( v14 )
                    {
                      v7 = *(UIWidget_o **)(v14 + 48);
                      if ( v7 )
                      {
                        UIWidget__set_width(v7, 26, 0LL);
                        if ( *p_uiScrollView )
                        {
                          v15 = *(_QWORD *)&(*p_uiScrollView)->fields.showScrollBars;
                          if ( v15 )
                          {
                            v7 = *(UIWidget_o **)(v15 + 48);
                            if ( v7 )
                            {
                              v16 = 312;
LABEL_56:
                              UIWidget__set_height(v7, v16, 0LL);
                              goto LABEL_57;
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
        goto LABEL_60;
      }
    }
  }
  else
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UIWidget_o *)UnityEngine_Object__op_Inequality(stateTitleObj, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) != 0
      && GameObjectExtensions__GetLocalPositionY(this->fields.stateTitleObj, 0LL) > -20.0 )
    {
      GameObjectExtensions__SetLocalPositionY(this->fields.stateTitleObj, -20.0, 0LL);
    }
    p_uiScrollView = &this->fields.uiScrollView;
    v17 = this->fields.uiScrollView;
    if ( !v17 )
      goto LABEL_60;
    v18 = *(UnityEngine_Object_o **)&v17->fields.mPlane.fields.m_Normal.fields.x;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v7 = (UIWidget_o *)UnityEngine_Object__op_Inequality(v18, 0LL, 0LL);
    if ( ((unsigned __int8)v7 & 1) != 0 )
    {
      if ( !*p_uiScrollView )
        goto LABEL_60;
      v7 = *(UIWidget_o **)&(*p_uiScrollView)->fields.mPlane.fields.m_Normal.fields.x;
      if ( !v7 )
        goto LABEL_60;
      if ( UIPanel__get_height((UIPanel_o *)v7, 0LL) <= 298.0 )
      {
        if ( *p_uiScrollView )
        {
          v7 = *(UIWidget_o **)&(*p_uiScrollView)->fields.mPlane.fields.m_Normal.fields.x;
          if ( v7 )
          {
            ((void (__fastcall *)(UIWidget_o *, Il2CppMethodPointer, float, float, float, float))v7->klass->vtable._18_SetRect.method)(
              v7,
              v7->klass->vtable._19_ParentHasChanged.methodPtr,
              0.0,
              -23.0,
              670.0,
              300.0);
            GameObjectExtensions__SetLocalPositionY(this->fields.barObject, -207.0, 0LL);
            v19 = this->fields.uiScrollView;
            if ( v19 )
            {
              v20 = *(_QWORD *)&v19->fields.showScrollBars;
              if ( v20 )
              {
                v7 = *(UIWidget_o **)(v20 + 40);
                if ( v7 )
                {
                  UIWidget__set_height(v7, 298, 0LL);
                  if ( *p_uiScrollView )
                  {
                    v21 = *(_QWORD *)&(*p_uiScrollView)->fields.showScrollBars;
                    if ( v21 )
                    {
                      v7 = *(UIWidget_o **)(v21 + 48);
                      if ( v7 )
                      {
                        UIWidget__set_width(v7, 26, 0LL);
                        if ( *p_uiScrollView )
                        {
                          v22 = *(_QWORD *)&(*p_uiScrollView)->fields.showScrollBars;
                          if ( v22 )
                          {
                            v7 = *(UIWidget_o **)(v22 + 48);
                            if ( v7 )
                            {
                              v16 = 298;
                              goto LABEL_56;
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
LABEL_60:
        sub_B5D69C(v7, v8);
      }
    }
  }
LABEL_57:
  v7 = (UIWidget_o *)*p_uiScrollView;
  if ( !*p_uiScrollView )
    goto LABEL_60;
  UIScrollView__ResetPosition((UIScrollView_o *)v7, 0LL);
  v7 = (UIWidget_o *)*p_uiScrollView;
  if ( !*p_uiScrollView )
    goto LABEL_60;
  UIScrollView__UpdateScrollbars((UIScrollView_o *)v7, 0LL);
}


void __fastcall BattleViewBufflistComponent__setBuffList(
        BattleViewBufflistComponent_o *this,
        BattleBuffData_ShowBuffData_array *buffList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_GameObject_o *prefabBuffObject; // x0
  const MethodInfo *v19; // x1
  __int64 v20; // x8
  unsigned __int64 v21; // x24
  int v22; // w25
  BattleBuffData_ShowBuffData_o *v23; // x21
  float height; // s8
  UnityEngine_Object_o *Object; // x22
  UnityEngine_GameObject_o *v26; // x23
  UnityEngine_Object_o *nothingLabel; // x21
  const MethodInfo *v28; // x1
  System_String_o *v29; // x21
  System_String_o *v30; // x22
  __int64 v31; // x0
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E7DD7 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___,
      (_DWORD)buffList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Add__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_2516/*"BATTLE_NOBUFFLIST"*/, v15, v16, v17);
    byte_42E7DD7 = 1;
  }
  prefabBuffObject = this->fields.prefabBuffObject;
  if ( !prefabBuffObject )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(prefabBuffObject, 0, 0LL);
  BattleViewBufflistComponent__setClearBuffList(this, v19);
  if ( buffList )
  {
    v20 = *(_QWORD *)&buffList->max_length;
    if ( (int)v20 >= 1 )
    {
      v21 = 0LL;
      v22 = 0;
      do
      {
        if ( v21 >= (unsigned int)v20 )
        {
          v31 = sub_B5D6C8(prefabBuffObject);
          sub_B5D668(v31, 0LL);
        }
        v23 = buffList->m_Items[v21];
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
          v32.fields.y = -(float)((float)(height * (float)(int)v21) + (float)v22);
          v32.fields.x = 0.0;
          v32.fields.z = 0.0;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)prefabBuffObject, v32, 0LL);
          prefabBuffObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                           (UnityEngine_GameObject_o *)Object,
                                                           (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_BattleBuffListObjectComponent___);
          if ( !prefabBuffObject )
            goto LABEL_34;
          v26 = prefabBuffObject;
          BattleBuffListObjectComponent__SetData((BattleBuffListObjectComponent_o *)prefabBuffObject, v23, 0LL);
          prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.objList;
          if ( !prefabBuffObject )
            goto LABEL_34;
          v22 += LODWORD(v26[3].monitor);
          System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
            (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)prefabBuffObject,
            (EventMissionProgressRequest_Argument_ProgressData_o *)Object,
            (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_GameObject__Add__);
        }
        LODWORD(v20) = buffList->max_length;
        ++v21;
      }
      while ( (__int64)v21 < (int)v20 );
    }
    nothingLabel = (UnityEngine_Object_o *)this->fields.nothingLabel;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Inequality(nothingLabel, 0LL, 0LL) )
      goto LABEL_32;
    v29 = (System_String_o *)StringLiteral_2516/*"BATTLE_NOBUFFLIST"*/;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    prefabBuffObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(v29, 0LL);
    if ( prefabBuffObject )
    {
      v30 = (System_String_o *)prefabBuffObject;
      if ( !System_String__Equals_44565128((System_String_o *)prefabBuffObject, v29, 0LL) )
      {
        prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.nothingLabel;
        if ( !prefabBuffObject )
          goto LABEL_34;
        UILabel__set_text((UILabel_o *)prefabBuffObject, v30, 0LL);
      }
      prefabBuffObject = (UnityEngine_GameObject_o *)this->fields.nothingLabel;
      if ( prefabBuffObject )
      {
        prefabBuffObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)prefabBuffObject, 0LL);
        if ( prefabBuffObject )
        {
          UnityEngine_GameObject__SetActive(prefabBuffObject, buffList->max_length == 0, 0LL);
LABEL_32:
          BattleViewBufflistComponent__setBuffListScrollView(this, v28);
          return;
        }
      }
    }
LABEL_34:
    sub_B5D69C(prefabBuffObject, buffList);
  }
}


void __fastcall BattleViewBufflistComponent__setBuffListScrollView(
        BattleViewBufflistComponent_o *this,
        const MethodInfo *method)
{
  UIScrollView_o *uiScrollView; // x0

  uiScrollView = this->fields.uiScrollView;
  if ( !uiScrollView
    || (UIScrollView__ResetPosition(uiScrollView, 0LL), (uiScrollView = this->fields.uiScrollView) == 0LL) )
  {
    sub_B5D69C(uiScrollView, method);
  }
  UIScrollView__UpdateScrollbars(uiScrollView, 0LL);
}


void __fastcall BattleViewBufflistComponent__setClassIcon(
        BattleViewBufflistComponent_o *this,
        BattleServantData_o *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  UnityEngine_Object_o *servantClassIconComponent; // x21
  UnityEngine_Component_o *ClassId; // x0
  __int64 v23; // x1
  int32_t EnemyNameEffect; // w0
  struct UnityEngine_GameObject_o **p_enemyNameEffectPrefab; // x21
  UnityEngine_Object_o *enemyNameEffectPrefab; // x23
  int32_t v27; // w22
  UnityEngine_Object_o *v28; // x23
  System_String_o *NameEffectPath; // x22
  AssetData_o *AssetStorage; // x0
  UILabel_o *Object_WarBoardWaitTimeSetting; // x22
  UnityEngine_Transform_o *transform; // x23
  System_Int32_array **v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  UILabel_o *nameLabel; // x20

  if ( (byte_42E7DD9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject____68882800, v9, v10, v11);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_18232/*"dialog_title"*/, v18, v19, v20);
    byte_42E7DD9 = 1;
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
    v27 = EnemyNameEffect;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(enemyNameEffectPrefab, 0LL, 0LL) )
    {
      v28 = (UnityEngine_Object_o *)*p_enemyNameEffectPrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35620236(v28, 0LL);
    }
    if ( v27 )
    {
      if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
      }
      NameEffectPath = ServantAssetLoadManager__getNameEffectPath(v27, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetStorage = AssetManager__getAssetStorage(NameEffectPath, 0LL);
      if ( AssetStorage )
        Object_WarBoardWaitTimeSetting = (UILabel_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        AssetStorage,
                                                        (System_String_o *)StringLiteral_18232/*"dialog_title"*/,
                                                        (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
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
      v33 = (System_Int32_array **)UnityEngine_Object__Instantiate_UILabel_(
                                     Object_WarBoardWaitTimeSetting,
                                     transform,
                                     (const MethodInfo_1E66414 *)Method_UnityEngine_Object_Instantiate_GameObject____68882800);
      *p_enemyNameEffectPrefab = (struct UnityEngine_GameObject_o *)v33;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.enemyNameEffectPrefab, v33, v34, v35, v36, v37, v38, v39);
    }
    nameLabel = this->fields.nameInfo.fields.nameLabel;
    ClassId = (UnityEngine_Component_o *)BattleServantData__getServantShortName(data, 0LL);
    if ( nameLabel )
    {
      UILabel__set_text(nameLabel, (System_String_o *)ClassId, 0LL);
      return;
    }
LABEL_35:
    sub_B5D69C(ClassId, v23);
  }
}


void __fastcall BattleViewBufflistComponent__setClearBuffList(
        BattleViewBufflistComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  struct System_Collections_Generic_List_GameObject__o *objList; // x0
  Il2CppObject *current; // x20
  const MethodInfo *v22; // x1
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7DD8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E7DD8 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  objList = this->fields.objList;
  if ( !objList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)objList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields.current;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  objList = this->fields.objList;
  if ( !objList )
LABEL_12:
    sub_B5D69C(objList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)objList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_GameObject__Clear__);
  BattleViewBufflistComponent__setBuffListScrollView(this, v22);
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
    sub_B5D69C(barObject, isClose);
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
    sub_B5D69C(listRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)listRoot, 1, 0LL);
}