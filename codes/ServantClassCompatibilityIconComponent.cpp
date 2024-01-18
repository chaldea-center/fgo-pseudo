void __fastcall ServantClassCompatibilityIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Array_o *v14; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Array_o *v22; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_RuntimeFieldHandle_o v30; // 0:w1.4
  System_RuntimeFieldHandle_o v31; // 0:w1.4
  System_RuntimeFieldHandle_o v32; // 0:w1.4

  if ( (byte_4189E77 & 1) == 0 )
  {
    sub_B2C35C(&ServantClassCompatibilityIconComponent_TypeInfo, v1);
    sub_B2C35C(&float___TypeInfo, v2);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003,
      v3);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436,
      v4);
    sub_B2C35C(
      &Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528,
      v5);
    byte_4189E77 = 1;
  }
  v6 = (System_Array_o *)sub_B2C374(float___TypeInfo, 5LL);
  v30.fields.value = Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v6, v30, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v6;
  sub_B2C2F8(static_fields, (System_Int32_array **)v6, v8, v9, v10, v11, v12, v13);
  v14 = (System_Array_o *)sub_B2C374(float___TypeInfo, 5LL);
  v31.fields.value = Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v14, v31, 0LL);
  v15 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v15->POSITION_X_DOWN = (struct System_Single_array *)v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->POSITION_X_DOWN,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v22 = (System_Array_o *)sub_B2C374(float___TypeInfo, 5LL);
  v32.fields.value = Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43133304(v22, v32, 0LL);
  v23 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v23->POSITION_X_CENTER = (struct System_Single_array *)v22;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v23->POSITION_X_CENTER,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
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

  if ( (byte_4189E73 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189E73 = 1;
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
    sub_B2C434(gameObject, v4);
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
  DataManager_o *Instance; // x0
  UISprite_o *v16; // x1
  __int64 v17; // x8
  ClassRelationMaster_o *v18; // x25
  unsigned __int64 v19; // x27
  int32_t advIconId; // w24
  int32_t v21; // w23
  int32_t v22; // w26
  const MethodInfo *v23; // x5
  bool v24; // zf
  const MethodInfo *v25; // x5
  const MethodInfo *v26; // x2
  UISprite_o *v27; // x21
  System_Collections_Generic_List_string__c *klass; // x8
  const MethodInfo *v29; // x2
  struct System_Single_array *POSITION_X_DOWN; // x8
  UISprite_o *v31; // x1
  float v32; // s0
  ServantClassCompatibilityIconComponent_o *v33; // x0
  const MethodInfo *v34; // x5
  struct UISprite_o *v35; // x21
  struct System_String_array *items; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v38; // x0
  __int64 v39; // x0
  ClassRelationEntity_o *v40; // [xsp+8h] [xbp-68h] BYREF
  ClassRelationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_4189E74 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ClassRelationMaster___, *(_QWORD *)&classId);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    sub_B2C35C(&ServantClassCompatibilityIconComponent_TypeInfo, v10);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4189E74 = 1;
  }
  entity = 0LL;
  v40 = 0LL;
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
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v17 = *(_QWORD *)&targetClassIds->max_length;
  if ( (int)v17 >= 1 )
  {
    v18 = (ClassRelationMaster_o *)Instance;
    v19 = 0LL;
    advIconId = 0;
    v21 = 0;
    while ( 1 )
    {
      if ( v19 >= (unsigned int)v17 )
        goto LABEL_67;
      if ( !v18 )
        goto LABEL_66;
      v22 = targetClassIds->m_Items[v19 + 1];
      ClassRelationMaster__TryGetEntity(v18, &entity, classId, v22, 0LL);
      Instance = (DataManager_o *)ClassRelationMaster__TryGetEntity(v18, &v40, v22, classId, 0LL);
      if ( !entity || !v40 )
        break;
      if ( entity->fields.advIconId )
      {
        if ( advIconId == 1 )
          advIconId = 1;
        else
          advIconId = entity->fields.advIconId;
      }
      else if ( !v40->fields.advIconId )
      {
        break;
      }
      if ( v40->fields.advIconId )
        v24 = v21 == 1;
      else
        v24 = 1;
      if ( !v24 )
        v21 = v40->fields.advIconId;
LABEL_38:
      LODWORD(v17) = targetClassIds->max_length;
      if ( (__int64)++v19 >= (int)v17 )
      {
        if ( advIconId )
        {
          ServantClassCompatibilityIconComponent__SetIconImage(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            this->fields.upIconSprite,
            advIconId,
            dispMode,
            1,
            v23);
          v16 = this->fields.downIconSprite;
          if ( v21 )
          {
            ServantClassCompatibilityIconComponent__SetIconImage(
              (ServantClassCompatibilityIconComponent_o *)Instance,
              v16,
              v21,
              dispMode,
              0,
              v25);
            v27 = this->fields.upIconSprite;
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
                v27,
                *((float *)&klass->_1.byval_arg.data + dispMode),
                v26);
              POSITION_X_DOWN = ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_DOWN;
              if ( POSITION_X_DOWN )
              {
                if ( POSITION_X_DOWN->max_length > dispMode )
                {
                  v31 = this->fields.downIconSprite;
                  v32 = POSITION_X_DOWN->m_Items[dispMode + 1];
                  goto LABEL_62;
                }
LABEL_67:
                v39 = sub_B2C460(Instance);
                sub_B2C400(v39, 0LL);
              }
            }
LABEL_66:
            sub_B2C434(Instance, v16);
          }
          if ( !v16 )
            goto LABEL_66;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.downIconSprite,
                                        0LL);
          if ( !Instance )
            goto LABEL_66;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          v35 = this->fields.upIconSprite;
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
          v32 = *((float *)items->m_Items + dispMode);
          v31 = v35;
LABEL_62:
          ServantClassCompatibilityIconComponent__SetIconPosition(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            v31,
            v32,
            v29);
          if ( (dispMode & 0xFFFFFFFE) == 2 )
          {
            Instance = (DataManager_o *)this->fields.upIconSprite;
            if ( !Instance )
              goto LABEL_66;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_31328080(gameObject, 0.8, 0LL);
            Instance = (DataManager_o *)this->fields.downIconSprite;
            if ( !Instance )
              goto LABEL_66;
            v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_31328080(v38, 0.8, 0LL);
          }
        }
        else if ( v21 )
        {
          Instance = (DataManager_o *)this->fields.upIconSprite;
          if ( !Instance )
            goto LABEL_66;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_66;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          ServantClassCompatibilityIconComponent__SetIconImage(v33, this->fields.downIconSprite, v21, dispMode, 0, v34);
          v35 = this->fields.downIconSprite;
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_String_o **v13; // x8
  System_String_o **v14; // x9
  int32_t downIconSprite_high; // w1

  if ( (byte_4189E75 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_19423/*"img_arrow_2"*/, icon);
    sub_B2C35C(&StringLiteral_19425/*"img_arrow_4"*/, v10);
    sub_B2C35C(&StringLiteral_19424/*"img_arrow_3"*/, v11);
    this = (ServantClassCompatibilityIconComponent_o *)sub_B2C35C(&StringLiteral_19422/*"img_arrow_1"*/, v12);
    byte_4189E75 = 1;
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
    v13 = (System_String_o **)&StringLiteral_19422/*"img_arrow_1"*/;
    v14 = (System_String_o **)&StringLiteral_19424/*"img_arrow_3"*/;
  }
  else
  {
    v13 = (System_String_o **)&StringLiteral_19423/*"img_arrow_2"*/;
    v14 = (System_String_o **)&StringLiteral_19425/*"img_arrow_4"*/;
  }
  if ( !advantage )
    v13 = v14;
  UISprite__set_spriteName(icon, *v13, 0LL);
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
    sub_B2C434(this, icon);
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
  __int64 v6; // x1
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4189E76 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, icon);
    this = (ServantClassCompatibilityIconComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4189E76 = 1;
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
                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B2C434(this, icon);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, x, 0LL);
}