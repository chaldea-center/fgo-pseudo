void __fastcall ServantClassCompatibilityIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Array_o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x2
  System_Array_o *v16; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  __int64 v24; // x2
  System_Array_o *v25; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_RuntimeFieldHandle_o v33; // 0:w1.4
  System_RuntimeFieldHandle_o v34; // 0:w1.4
  System_RuntimeFieldHandle_o v35; // 0:w1.4

  if ( (byte_40F9508 & 1) == 0 )
  {
    sub_B16FFC(&ServantClassCompatibilityIconComponent_TypeInfo, v1);
    sub_B16FFC(&float___TypeInfo, v3);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003,
      v4);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436,
      v5);
    sub_B16FFC(
      &Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528,
      v6);
    byte_40F9508 = 1;
  }
  v7 = (System_Array_o *)sub_B17014(float___TypeInfo, 5LL, v2);
  v33.fields.value = Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v7, v33, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
  v16 = (System_Array_o *)sub_B17014(float___TypeInfo, 5LL, v15);
  v34.fields.value = Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v16, v34, 0LL);
  v17 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v17->POSITION_X_DOWN = (struct System_Single_array *)v16;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v17->POSITION_X_DOWN,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v25 = (System_Array_o *)sub_B17014(float___TypeInfo, 5LL, v24);
  v35.fields.value = Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_42629164(v25, v35, 0LL);
  v26 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v26->POSITION_X_CENTER = (struct System_Single_array *)v25;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v26->POSITION_X_CENTER,
    (System_Int32_array **)v25,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
}


void __fastcall ServantClassCompatibilityIconComponent___ctor(
        ServantClassCompatibilityIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantClassCompatibilityIconComponent__Clear(
        ServantClassCompatibilityIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *upIconSprite; // x20
  UISprite_o *v4; // x0
  UnityEngine_Component_o *v5; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Object_o *downIconSprite; // x20
  UISprite_o *v8; // x0
  UnityEngine_Component_o *v9; // x0
  UnityEngine_GameObject_o *v10; // x0

  if ( (byte_40F9504 & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, method);
    byte_40F9504 = 1;
  }
  upIconSprite = (UnityEngine_Object_o *)this->fields.upIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(upIconSprite, 0LL, 0LL) )
  {
    v4 = this->fields.upIconSprite;
    if ( !v4 )
      goto LABEL_20;
    UISprite__set_spriteName(v4, 0LL, 0LL);
    v5 = (UnityEngine_Component_o *)this->fields.upIconSprite;
    if ( !v5 )
      goto LABEL_20;
    gameObject = UnityEngine_Component__get_gameObject(v5, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  downIconSprite = (UnityEngine_Object_o *)this->fields.downIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(downIconSprite, 0LL, 0LL) )
  {
    v8 = this->fields.downIconSprite;
    if ( v8 )
    {
      UISprite__set_spriteName(v8, 0LL, 0LL);
      v9 = (UnityEngine_Component_o *)this->fields.downIconSprite;
      if ( v9 )
      {
        v10 = UnityEngine_Component__get_gameObject(v9, 0LL);
        if ( v10 )
        {
          UnityEngine_GameObject__SetActive(v10, 0, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B170D4();
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassCompatibilityIconComponent__SetIcon(
        ServantClassCompatibilityIconComponent_o *this,
        int32_t classId,
        System_Int32_array *targetClassIds,
        int32_t dispMode,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Object_o *upIconSprite; // x23
  UnityEngine_Object_o *downIconSprite; // x23
  bool v14; // w0
  WebViewManager_o *Instance; // x0
  ClassRelationMaster_o *MasterData_WarQuestSelectionMaster; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  __int64 v19; // x8
  ClassRelationMaster_o *v20; // x25
  unsigned __int64 v21; // x27
  int32_t advIconId; // w24
  int32_t v23; // w23
  int32_t v24; // w26
  const MethodInfo *v25; // x5
  bool v26; // zf
  UnityEngine_Component_o *v27; // x0
  UnityEngine_GameObject_o *v28; // x0
  UnityEngine_Component_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x0
  ServantClassCompatibilityIconComponent_o *v31; // x0
  const MethodInfo *v32; // x5
  UISprite_o *v33; // x1
  UISprite_o *v34; // x21
  UISprite_c *klass; // x8
  struct System_Single_array *POSITION_X_DOWN; // x8
  UISprite_o *v37; // x1
  float v38; // s0
  UnityEngine_Component_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  ServantClassCompatibilityIconComponent_o *v41; // x0
  const MethodInfo *v42; // x5
  struct UISprite_o *v43; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Int32_array *buckets; // x8
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Component_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  ClassRelationEntity_o *v50; // [xsp+8h] [xbp-68h] BYREF
  ClassRelationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40F9505 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_ClassRelationMaster___, *(_QWORD *)&classId);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v9);
    sub_B16FFC(&ServantClassCompatibilityIconComponent_TypeInfo, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F9505 = 1;
  }
  entity = 0LL;
  v50 = 0LL;
  if ( dispMode == 5 )
    goto LABEL_8;
  upIconSprite = (UnityEngine_Object_o *)this->fields.upIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(upIconSprite, 0LL, 0LL) )
    goto LABEL_8;
  downIconSprite = (UnityEngine_Object_o *)this->fields.downIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v14 = UnityEngine_Object__op_Equality(downIconSprite, 0LL, 0LL);
  if ( !targetClassIds || v14 || !*(_QWORD *)&targetClassIds->max_length )
  {
LABEL_8:
    ServantClassCompatibilityIconComponent__Clear(this, *(const MethodInfo **)&classId);
    return;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  MasterData_WarQuestSelectionMaster = (ClassRelationMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v19 = *(_QWORD *)&targetClassIds->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = MasterData_WarQuestSelectionMaster;
    v21 = 0LL;
    advIconId = 0;
    v23 = 0;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
        goto LABEL_67;
      if ( !v20 )
        goto LABEL_66;
      v24 = targetClassIds->m_Items[v21 + 1];
      ClassRelationMaster__TryGetEntity(v20, &entity, classId, v24, 0LL);
      MasterData_WarQuestSelectionMaster = (ClassRelationMaster_o *)ClassRelationMaster__TryGetEntity(
                                                                      v20,
                                                                      &v50,
                                                                      v24,
                                                                      classId,
                                                                      0LL);
      if ( !entity || !v50 )
        break;
      if ( entity->fields.advIconId )
      {
        if ( advIconId == 1 )
          advIconId = 1;
        else
          advIconId = entity->fields.advIconId;
      }
      else if ( !v50->fields.advIconId )
      {
        break;
      }
      if ( v50->fields.advIconId )
        v26 = v23 == 1;
      else
        v26 = 1;
      if ( !v26 )
        v23 = v50->fields.advIconId;
LABEL_38:
      LODWORD(v19) = targetClassIds->max_length;
      if ( (__int64)++v21 >= (int)v19 )
      {
        if ( advIconId )
        {
          ServantClassCompatibilityIconComponent__SetIconImage(
            (ServantClassCompatibilityIconComponent_o *)MasterData_WarQuestSelectionMaster,
            this->fields.upIconSprite,
            advIconId,
            dispMode,
            1,
            v25);
          v33 = this->fields.downIconSprite;
          if ( v23 )
          {
            ServantClassCompatibilityIconComponent__SetIconImage(v31, v33, v23, dispMode, 0, v32);
            v34 = this->fields.upIconSprite;
            MasterData_WarQuestSelectionMaster = (ClassRelationMaster_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            if ( (BYTE3(ServantClassCompatibilityIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo);
              MasterData_WarQuestSelectionMaster = (ClassRelationMaster_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            }
            klass = (UISprite_c *)MasterData_WarQuestSelectionMaster[2].fields._lookup->klass;
            if ( klass )
            {
              if ( LODWORD(klass->_1.namespaze) <= dispMode )
                goto LABEL_67;
              ServantClassCompatibilityIconComponent__SetIconPosition(
                (ServantClassCompatibilityIconComponent_o *)MasterData_WarQuestSelectionMaster,
                v34,
                *((float *)&klass->_1.byval_arg.data + dispMode),
                v18);
              POSITION_X_DOWN = ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_DOWN;
              if ( POSITION_X_DOWN )
              {
                if ( POSITION_X_DOWN->max_length > dispMode )
                {
                  v37 = this->fields.downIconSprite;
                  v38 = POSITION_X_DOWN->m_Items[dispMode + 1];
                  goto LABEL_62;
                }
LABEL_67:
                sub_B17100(MasterData_WarQuestSelectionMaster, v17, v18);
                sub_B170A0();
              }
            }
LABEL_66:
            sub_B170D4();
          }
          if ( !v33 )
            goto LABEL_66;
          gameObject = UnityEngine_Component__get_gameObject(
                         (UnityEngine_Component_o *)this->fields.downIconSprite,
                         0LL);
          if ( !gameObject )
            goto LABEL_66;
          UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
          v43 = this->fields.upIconSprite;
LABEL_56:
          MasterData_WarQuestSelectionMaster = (ClassRelationMaster_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          if ( (BYTE3(ServantClassCompatibilityIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo);
            MasterData_WarQuestSelectionMaster = (ClassRelationMaster_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          }
          buckets = MasterData_WarQuestSelectionMaster[2].fields._lookup->fields.buckets;
          if ( !buckets )
            goto LABEL_66;
          if ( buckets->max_length <= dispMode )
            goto LABEL_67;
          v38 = *(float *)&buckets->m_Items[dispMode + 1];
          v37 = v43;
LABEL_62:
          ServantClassCompatibilityIconComponent__SetIconPosition(
            (ServantClassCompatibilityIconComponent_o *)MasterData_WarQuestSelectionMaster,
            v37,
            v38,
            v18);
          if ( (dispMode & 0xFFFFFFFE) == 2 )
          {
            v46 = (UnityEngine_Component_o *)this->fields.upIconSprite;
            if ( !v46 )
              goto LABEL_66;
            v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
            GameObjectExtensions__SetLocalScale_27422124(v47, 0.8, 0LL);
            v48 = (UnityEngine_Component_o *)this->fields.downIconSprite;
            if ( !v48 )
              goto LABEL_66;
            v49 = UnityEngine_Component__get_gameObject(v48, 0LL);
            GameObjectExtensions__SetLocalScale_27422124(v49, 0.8, 0LL);
          }
        }
        else if ( v23 )
        {
          v39 = (UnityEngine_Component_o *)this->fields.upIconSprite;
          if ( !v39 )
            goto LABEL_66;
          v40 = UnityEngine_Component__get_gameObject(v39, 0LL);
          if ( !v40 )
            goto LABEL_66;
          UnityEngine_GameObject__SetActive(v40, 0, 0LL);
          ServantClassCompatibilityIconComponent__SetIconImage(v41, this->fields.downIconSprite, v23, dispMode, 0, v42);
          v43 = this->fields.downIconSprite;
          goto LABEL_56;
        }
        return;
      }
    }
    v27 = (UnityEngine_Component_o *)this->fields.upIconSprite;
    if ( !v27 )
      goto LABEL_66;
    v28 = UnityEngine_Component__get_gameObject(v27, 0LL);
    if ( !v28 )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(v28, 0, 0LL);
    v29 = (UnityEngine_Component_o *)this->fields.downIconSprite;
    if ( !v29 )
      goto LABEL_66;
    v30 = UnityEngine_Component__get_gameObject(v29, 0LL);
    if ( !v30 )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive(v30, 0, 0LL);
    goto LABEL_38;
  }
}


void __fastcall ServantClassCompatibilityIconComponent__SetIconImage(
        ServantClassCompatibilityIconComponent_o *this,
        UISprite_o *icon,
        int32_t iconId,
        int32_t dispMode,
        bool advantage,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o **v14; // x8
  System_String_o **v15; // x9
  int32_t height; // w1
  UISpriteData_o *AtlasSprite; // x0
  UISpriteData_o *v18; // x0

  if ( (byte_40F9506 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_19349, icon);
    sub_B16FFC(&StringLiteral_19351, v10);
    sub_B16FFC(&StringLiteral_19350, v11);
    sub_B16FFC(&StringLiteral_19348, v12);
    byte_40F9506 = 1;
  }
  if ( !icon )
    goto LABEL_18;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  if ( iconId == 1 )
  {
    v14 = (System_String_o **)&StringLiteral_19348;
    v15 = (System_String_o **)&StringLiteral_19350;
  }
  else
  {
    v14 = (System_String_o **)&StringLiteral_19349;
    v15 = (System_String_o **)&StringLiteral_19351;
  }
  if ( !advantage )
    v14 = v15;
  UISprite__set_spriteName(icon, *v14, 0LL);
  if ( dispMode != 4 )
  {
    AtlasSprite = UISprite__GetAtlasSprite(icon, 0LL);
    if ( AtlasSprite )
    {
      UIWidget__set_width((UIWidget_o *)icon, AtlasSprite->fields.width, 0LL);
      v18 = UISprite__GetAtlasSprite(icon, 0LL);
      if ( v18 )
      {
        height = v18->fields.height;
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_B170D4();
  }
  UIWidget__set_width((UIWidget_o *)icon, 22, 0LL);
  if ( iconId == 1 )
    height = 32;
  else
    height = 24;
LABEL_17:
  UIWidget__set_height((UIWidget_o *)icon, height, 0LL);
}


void __fastcall ServantClassCompatibilityIconComponent__SetIconPosition(
        ServantClassCompatibilityIconComponent_o *this,
        UISprite_o *icon,
        float x,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *v9; // x0

  if ( (byte_40F9507 & 1) == 0 )
  {
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, icon);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F9507 = 1;
  }
  if ( !icon )
    goto LABEL_12;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
  if ( !gameObject )
    goto LABEL_12;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              gameObject,
                              (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_srcLineSprite, 0LL, 0LL) )
  {
    if ( Component_srcLineSprite )
    {
      *(float *)&Component_srcLineSprite->fields.mMapCtrl_SpotRoadInfo = x;
      *((float *)&Component_srcLineSprite->fields.mStateEndAct + 1) = x;
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
  GameObjectExtensions__SetLocalPositionX(v9, x, 0LL);
}