void __fastcall ServantClassCompatibilityIconComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Array_o *v16; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Array_o *v24; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v25; // x0
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Array_o *v32; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v33; // x0
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_RuntimeFieldHandle_o v40; // 0:w1.4
  System_RuntimeFieldHandle_o v41; // 0:w1.4
  System_RuntimeFieldHandle_o v42; // 0:w1.4

  if ( (byte_42E9C8B & 1) == 0 )
  {
    sub_B5D5C4(&ServantClassCompatibilityIconComponent_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&float___TypeInfo, v4, v5, v6);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003,
      v7,
      v8,
      v9);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528,
      v13,
      v14,
      v15);
    byte_42E9C8B = 1;
  }
  v16 = (System_Array_o *)sub_B5D5DC(float___TypeInfo, 5LL);
  v40.fields.value = Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v16, v40, 0LL);
  static_fields = (BattleServantConfConponent_o *)ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v16;
  sub_B5D560(static_fields, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  v24 = (System_Array_o *)sub_B5D5DC(float___TypeInfo, 5LL);
  v41.fields.value = Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v24, v41, 0LL);
  v25 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v25->POSITION_X_DOWN = (struct System_Single_array *)v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v25->POSITION_X_DOWN,
    (System_Int32_array **)v24,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Array_o *)sub_B5D5DC(float___TypeInfo, 5LL);
  v42.fields.value = Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_43674272(v32, v42, 0LL);
  v33 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v33->POSITION_X_CENTER = (struct System_Single_array *)v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v33->POSITION_X_CENTER,
    (System_Int32_array **)v32,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
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
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *upIconSprite; // x20
  __int64 v6; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *downIconSprite; // x20

  if ( (byte_42E9C87 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9C87 = 1;
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
    sub_B5D69C(gameObject, v6);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  UnityEngine_Object_o *upIconSprite; // x23
  UnityEngine_Object_o *downIconSprite; // x23
  bool v20; // w0
  DataManager_o *Instance; // x0
  UISprite_o *v22; // x1
  __int64 v23; // x8
  ClassRelationMaster_o *v24; // x25
  unsigned __int64 v25; // x27
  int32_t advIconId; // w24
  int32_t v27; // w23
  int32_t v28; // w26
  const MethodInfo *v29; // x5
  bool v30; // zf
  const MethodInfo *v31; // x5
  const MethodInfo *v32; // x2
  UISprite_o *v33; // x21
  System_Collections_Generic_List_string__c *klass; // x8
  const MethodInfo *v35; // x2
  struct System_Single_array *POSITION_X_DOWN; // x8
  UISprite_o *v37; // x1
  float v38; // s0
  ServantClassCompatibilityIconComponent_o *v39; // x0
  const MethodInfo *v40; // x5
  struct UISprite_o *v41; // x21
  struct System_String_array *items; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v44; // x0
  __int64 v45; // x0
  ClassRelationEntity_o *v46; // [xsp+8h] [xbp-68h] BYREF
  ClassRelationEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E9C88 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMasterData_ClassRelationMaster___,
      classId,
      (_DWORD)targetClassIds,
      *(_QWORD *)&dispMode);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&ServantClassCompatibilityIconComponent_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E9C88 = 1;
  }
  entity = 0LL;
  v46 = 0LL;
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
  v20 = UnityEngine_Object__op_Equality(downIconSprite, 0LL, 0LL);
  if ( !targetClassIds || v20 || !*(_QWORD *)&targetClassIds->max_length )
  {
LABEL_8:
    ServantClassCompatibilityIconComponent__Clear(this, *(const MethodInfo **)&classId);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_66;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v23 = *(_QWORD *)&targetClassIds->max_length;
  if ( (int)v23 >= 1 )
  {
    v24 = (ClassRelationMaster_o *)Instance;
    v25 = 0LL;
    advIconId = 0;
    v27 = 0;
    while ( 1 )
    {
      if ( v25 >= (unsigned int)v23 )
        goto LABEL_67;
      if ( !v24 )
        goto LABEL_66;
      v28 = targetClassIds->m_Items[v25 + 1];
      ClassRelationMaster__TryGetEntity(v24, &entity, classId, v28, 0LL);
      Instance = (DataManager_o *)ClassRelationMaster__TryGetEntity(v24, &v46, v28, classId, 0LL);
      if ( !entity || !v46 )
        break;
      if ( entity->fields.advIconId )
      {
        if ( advIconId == 1 )
          advIconId = 1;
        else
          advIconId = entity->fields.advIconId;
      }
      else if ( !v46->fields.advIconId )
      {
        break;
      }
      if ( v46->fields.advIconId )
        v30 = v27 == 1;
      else
        v30 = 1;
      if ( !v30 )
        v27 = v46->fields.advIconId;
LABEL_38:
      LODWORD(v23) = targetClassIds->max_length;
      if ( (__int64)++v25 >= (int)v23 )
      {
        if ( advIconId )
        {
          ServantClassCompatibilityIconComponent__SetIconImage(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            this->fields.upIconSprite,
            advIconId,
            dispMode,
            1,
            v29);
          v22 = this->fields.downIconSprite;
          if ( v27 )
          {
            ServantClassCompatibilityIconComponent__SetIconImage(
              (ServantClassCompatibilityIconComponent_o *)Instance,
              v22,
              v27,
              dispMode,
              0,
              v31);
            v33 = this->fields.upIconSprite;
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
                v33,
                *((float *)&klass->_1.byval_arg.data + dispMode),
                v32);
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
                v45 = sub_B5D6C8(Instance);
                sub_B5D668(v45, 0LL);
              }
            }
LABEL_66:
            sub_B5D69C(Instance, v22);
          }
          if ( !v22 )
            goto LABEL_66;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.downIconSprite,
                                        0LL);
          if ( !Instance )
            goto LABEL_66;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          v41 = this->fields.upIconSprite;
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
          v38 = *((float *)items->m_Items + dispMode);
          v37 = v41;
LABEL_62:
          ServantClassCompatibilityIconComponent__SetIconPosition(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            v37,
            v38,
            v35);
          if ( (dispMode & 0xFFFFFFFE) == 2 )
          {
            Instance = (DataManager_o *)this->fields.upIconSprite;
            if ( !Instance )
              goto LABEL_66;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_32432652(gameObject, 0.8, 0LL);
            Instance = (DataManager_o *)this->fields.downIconSprite;
            if ( !Instance )
              goto LABEL_66;
            v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_32432652(v44, 0.8, 0LL);
          }
        }
        else if ( v27 )
        {
          Instance = (DataManager_o *)this->fields.upIconSprite;
          if ( !Instance )
            goto LABEL_66;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_66;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          ServantClassCompatibilityIconComponent__SetIconImage(v39, this->fields.downIconSprite, v27, dispMode, 0, v40);
          v41 = this->fields.downIconSprite;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassCompatibilityIconComponent__SetIconImage(
        ServantClassCompatibilityIconComponent_o *this,
        UISprite_o *icon,
        int32_t iconId,
        int32_t dispMode,
        bool advantage,
        const MethodInfo *method)
{
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  System_String_o **v19; // x8
  System_String_o **v20; // x9
  int32_t downIconSprite_high; // w1

  if ( (byte_42E9C89 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19668/*"img_arrow_2"*/, (_DWORD)icon, iconId, *(_QWORD *)&dispMode);
    sub_B5D5C4(&StringLiteral_19670/*"img_arrow_4"*/, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_19669/*"img_arrow_3"*/, v13, v14, v15);
    this = (ServantClassCompatibilityIconComponent_o *)sub_B5D5C4(&StringLiteral_19667/*"img_arrow_1"*/, v16, v17, v18);
    byte_42E9C89 = 1;
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
    v19 = (System_String_o **)&StringLiteral_19667/*"img_arrow_1"*/;
    v20 = (System_String_o **)&StringLiteral_19669/*"img_arrow_3"*/;
  }
  else
  {
    v19 = (System_String_o **)&StringLiteral_19668/*"img_arrow_2"*/;
    v20 = (System_String_o **)&StringLiteral_19670/*"img_arrow_4"*/;
  }
  if ( !advantage )
    v19 = v20;
  UISprite__set_spriteName(icon, *v19, 0LL);
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
    sub_B5D69C(this, icon);
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
  __int64 v4; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  srcLineSprite_o *Component_srcLineSprite; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_42E9C8A & 1) == 0 )
  {
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, (_DWORD)icon, (_DWORD)method, v4);
    this = (ServantClassCompatibilityIconComponent_o *)sub_B5D5C4(&UnityEngine_Object_TypeInfo, v7, v8, v9);
    byte_42E9C8A = 1;
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
                              (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_B5D69C(this, icon);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, x, 0LL);
}