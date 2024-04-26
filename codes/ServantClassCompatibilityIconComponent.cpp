void __fastcall ServantClassCompatibilityIconComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  System_Array_o *v9; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v10; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_Array_o *v17; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v18; // x0
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_RuntimeFieldHandle_o v25; // 0:w1.4
  System_RuntimeFieldHandle_o v26; // 0:w1.4
  System_RuntimeFieldHandle_o v27; // 0:w1.4

  if ( (byte_4352F7B & 1) == 0 )
  {
    sub_B70694(&ServantClassCompatibilityIconComponent_TypeInfo);
    sub_B70694(&float___TypeInfo);
    sub_B70694(&Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003);
    sub_B70694(&Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436);
    sub_B70694(&Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528);
    byte_4352F7B = 1;
  }
  v1 = (System_Array_o *)sub_B706AC(float___TypeInfo, 5LL);
  v25.fields.value = Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v1, v25, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Array_o *)sub_B706AC(float___TypeInfo, 5LL);
  v26.fields.value = Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v9, v26, 0LL);
  v10 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v10->POSITION_X_DOWN = (struct System_Single_array *)v9;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->POSITION_X_DOWN,
    (System_Int32_array **)v9,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Array_o *)sub_B706AC(float___TypeInfo, 5LL);
  v27.fields.value = Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43287264(v17, v27, 0LL);
  v18 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v18->POSITION_X_CENTER = (struct System_Single_array *)v17;
  sub_B70630(
    (BattleServantConfConponent_o *)&v18->POSITION_X_CENTER,
    (System_Int32_array **)v17,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
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
  __int64 v4; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *downIconSprite; // x20

  if ( (byte_4352F77 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352F77 = 1;
  }
  upIconSprite = (UnityEngine_Object_o *)this->fields.upIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(upIconSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.upIconSprite;
    if ( !gameObject )
      goto LABEL_20;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
    gameObject = this->fields.upIconSprite;
    if ( !gameObject )
      goto LABEL_20;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_20;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  downIconSprite = (UnityEngine_Object_o *)this->fields.downIconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(downIconSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.downIconSprite;
    if ( gameObject )
    {
      UISprite__set_spriteName(gameObject, 0LL, 0LL);
      gameObject = this->fields.downIconSprite;
      if ( gameObject )
      {
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
          return;
        }
      }
    }
LABEL_20:
    sub_B7076C(gameObject, v4);
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
  UnityEngine_Object_o *upIconSprite; // x23
  UnityEngine_Object_o *downIconSprite; // x23
  bool v11; // w0
  DataManager_o *Instance; // x0
  UISprite_o *v13; // x1
  __int64 v14; // x8
  ClassRelationMaster_o *v15; // x25
  unsigned __int64 v16; // x27
  int32_t advIconId; // w24
  int32_t v18; // w23
  int32_t v19; // w26
  const MethodInfo *v20; // x5
  bool v21; // zf
  const MethodInfo *v22; // x5
  const MethodInfo *v23; // x2
  UISprite_o *v24; // x21
  System_Collections_Generic_List_string__c *klass; // x8
  const MethodInfo *v26; // x2
  struct System_Single_array *POSITION_X_DOWN; // x8
  UISprite_o *v28; // x1
  float v29; // s0
  ServantClassCompatibilityIconComponent_o *v30; // x0
  const MethodInfo *v31; // x5
  struct UISprite_o *v32; // x21
  struct System_String_array *items; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x0
  ClassRelationEntity_o *v37; // [xsp+8h] [xbp-68h] BYREF
  ClassRelationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4352F78 & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMasterData_ClassRelationMaster___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&ServantClassCompatibilityIconComponent_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4352F78 = 1;
  }
  entity = 0LL;
  v37 = 0LL;
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
  v11 = UnityEngine_Object__op_Equality(downIconSprite, 0LL, 0LL);
  if ( !targetClassIds || v11 || !*(_QWORD *)&targetClassIds->max_length )
  {
LABEL_8:
    ServantClassCompatibilityIconComponent__Clear(this, *(const MethodInfo **)&classId);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v14 = *(_QWORD *)&targetClassIds->max_length;
  if ( (int)v14 >= 1 )
  {
    v15 = (ClassRelationMaster_o *)Instance;
    v16 = 0LL;
    advIconId = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v14 )
        goto LABEL_67;
      if ( !v15 )
        goto LABEL_66;
      v19 = targetClassIds->m_Items[v16 + 1];
      ClassRelationMaster__TryGetEntity(v15, &entity, classId, v19, 0LL);
      Instance = (DataManager_o *)ClassRelationMaster__TryGetEntity(v15, &v37, v19, classId, 0LL);
      if ( !entity || !v37 )
        break;
      if ( entity->fields.advIconId )
      {
        if ( advIconId == 1 )
          advIconId = 1;
        else
          advIconId = entity->fields.advIconId;
      }
      else if ( !v37->fields.advIconId )
      {
        break;
      }
      if ( v37->fields.advIconId )
        v21 = v18 == 1;
      else
        v21 = 1;
      if ( !v21 )
        v18 = v37->fields.advIconId;
LABEL_38:
      LODWORD(v14) = targetClassIds->max_length;
      if ( (__int64)++v16 >= (int)v14 )
      {
        if ( advIconId )
        {
          ServantClassCompatibilityIconComponent__SetIconImage(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            this->fields.upIconSprite,
            advIconId,
            dispMode,
            1,
            v20);
          v13 = this->fields.downIconSprite;
          if ( v18 )
          {
            ServantClassCompatibilityIconComponent__SetIconImage(
              (ServantClassCompatibilityIconComponent_o *)Instance,
              v13,
              v18,
              dispMode,
              0,
              v22);
            v24 = this->fields.upIconSprite;
            Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            if ( (BYTE3(ServantClassCompatibilityIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo);
              Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            }
            klass = Instance[1].fields.saveNameList->klass;
            if ( klass )
            {
              if ( LODWORD(klass->_1.namespaze) <= dispMode )
                goto LABEL_67;
              ServantClassCompatibilityIconComponent__SetIconPosition(
                (ServantClassCompatibilityIconComponent_o *)Instance,
                v24,
                *((float *)&klass->_1.byval_arg.data + dispMode),
                v23);
              POSITION_X_DOWN = ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_DOWN;
              if ( POSITION_X_DOWN )
              {
                if ( POSITION_X_DOWN->max_length > dispMode )
                {
                  v28 = this->fields.downIconSprite;
                  v29 = POSITION_X_DOWN->m_Items[dispMode + 1];
                  goto LABEL_62;
                }
LABEL_67:
                v36 = sub_B70798(Instance);
                sub_B70738(v36, 0LL);
              }
            }
LABEL_66:
            sub_B7076C(Instance, v13);
          }
          if ( !v13 )
            goto LABEL_66;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.downIconSprite,
                                        0LL);
          if ( !Instance )
            goto LABEL_66;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          v32 = this->fields.upIconSprite;
LABEL_56:
          Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          if ( (BYTE3(ServantClassCompatibilityIconComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo);
            Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          }
          items = Instance[1].fields.saveNameList->fields._items;
          if ( !items )
            goto LABEL_66;
          if ( items->max_length <= dispMode )
            goto LABEL_67;
          v29 = *((float *)items->m_Items + dispMode);
          v28 = v32;
LABEL_62:
          ServantClassCompatibilityIconComponent__SetIconPosition(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            v28,
            v29,
            v26);
          if ( (dispMode & 0xFFFFFFFE) == 2 )
          {
            Instance = (DataManager_o *)this->fields.upIconSprite;
            if ( !Instance )
              goto LABEL_66;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_32499584(gameObject, 0.8, 0LL);
            Instance = (DataManager_o *)this->fields.downIconSprite;
            if ( !Instance )
              goto LABEL_66;
            v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_32499584(v35, 0.8, 0LL);
          }
        }
        else if ( v18 )
        {
          Instance = (DataManager_o *)this->fields.upIconSprite;
          if ( !Instance )
            goto LABEL_66;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_66;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          ServantClassCompatibilityIconComponent__SetIconImage(v30, this->fields.downIconSprite, v18, dispMode, 0, v31);
          v32 = this->fields.downIconSprite;
          goto LABEL_56;
        }
        return;
      }
    }
    Instance = (DataManager_o *)this->fields.upIconSprite;
    if ( !Instance )
      goto LABEL_66;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (DataManager_o *)this->fields.downIconSprite;
    if ( !Instance )
      goto LABEL_66;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_66;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
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
  System_String_o **v10; // x8
  System_String_o **v11; // x9
  int32_t downIconSprite_high; // w1

  if ( (byte_4352F79 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_19727/*"img_arrow_2"*/);
    sub_B70694(&StringLiteral_19729/*"img_arrow_4"*/);
    sub_B70694(&StringLiteral_19728/*"img_arrow_3"*/);
    this = (ServantClassCompatibilityIconComponent_o *)sub_B70694(&StringLiteral_19726/*"img_arrow_1"*/);
    byte_4352F79 = 1;
  }
  if ( !icon )
    goto LABEL_18;
  this = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)icon,
                                                       0LL);
  if ( !this )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( iconId == 1 )
  {
    v10 = (System_String_o **)&StringLiteral_19726/*"img_arrow_1"*/;
    v11 = (System_String_o **)&StringLiteral_19728/*"img_arrow_3"*/;
  }
  else
  {
    v10 = (System_String_o **)&StringLiteral_19727/*"img_arrow_2"*/;
    v11 = (System_String_o **)&StringLiteral_19729/*"img_arrow_4"*/;
  }
  if ( !advantage )
    v10 = v11;
  UISprite__set_spriteName(icon, *v10, 0LL);
  if ( dispMode != 4 )
  {
    this = (ServantClassCompatibilityIconComponent_o *)UISprite__GetAtlasSprite(icon, 0LL);
    if ( this )
    {
      UIWidget__set_width((UIWidget_o *)icon, (int32_t)this->fields.downIconSprite, 0LL);
      this = (ServantClassCompatibilityIconComponent_o *)UISprite__GetAtlasSprite(icon, 0LL);
      if ( this )
      {
        downIconSprite_high = HIDWORD(this->fields.downIconSprite);
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_B7076C(this, icon);
  }
  UIWidget__set_width((UIWidget_o *)icon, 22, 0LL);
  if ( iconId == 1 )
    downIconSprite_high = 32;
  else
    downIconSprite_high = 24;
LABEL_17:
  UIWidget__set_height((UIWidget_o *)icon, downIconSprite_high, 0LL);
}


void __fastcall ServantClassCompatibilityIconComponent__SetIconPosition(
        ServantClassCompatibilityIconComponent_o *this,
        UISprite_o *icon,
        float x,
        const MethodInfo *method)
{
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4352F7A & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    this = (ServantClassCompatibilityIconComponent_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4352F7A = 1;
  }
  if ( !icon )
    goto LABEL_12;
  this = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)icon,
                                                       0LL);
  if ( !this )
    goto LABEL_12;
  Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_1D4AE28 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_srcLineSprite,
                                                       0LL,
                                                       0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_srcLineSprite )
    {
      *(float *)&Component_srcLineSprite->fields.mMapCtrl_SpotRoadInfo = x;
      *((float *)&Component_srcLineSprite->fields.mStateEndAct + 1) = x;
      return;
    }
LABEL_12:
    sub_B7076C(this, icon);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, x, 0LL);
}