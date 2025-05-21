void __fastcall ServantClassCompatibilityIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Array_o *v6; // x0
  struct System_Single_array *v7; // x19
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  System_Array_o *v10; // x0
  System_Array_o *v11; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Array_o *v15; // x0
  System_Array_o *v16; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_RuntimeFieldHandle_o v20; // 0:w1.4
  System_RuntimeFieldHandle_o v21; // 0:w1.4
  System_RuntimeFieldHandle_o v22; // 0:w1.4

  if ( (byte_4B43F5F & 1) == 0 )
  {
    sub_1BDB878(&ServantClassCompatibilityIconComponent_TypeInfo, v1);
    sub_1BDB878(&float___TypeInfo, v2);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003,
      v3);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436,
      v4);
    sub_1BDB878(
      &Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528,
      v5);
    byte_4B43F5F = 1;
  }
  v6 = (System_Array_o *)sub_1BDB920(float___TypeInfo, 5LL);
  v20.fields.value = Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003;
  v7 = (struct System_Single_array *)v6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v6, v20, 0LL);
  ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_UP = v7;
  sub_1BDB81C(
    (CGThumbnailListItem_o *)ServantClassCompatibilityIconComponent_TypeInfo->static_fields,
    (int32_t)v7,
    v8,
    v9);
  v10 = (System_Array_o *)sub_1BDB920(float___TypeInfo, 5LL);
  v21.fields.value = Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436;
  v11 = v10;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v10, v21, 0LL);
  static_fields = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  static_fields->POSITION_X_DOWN = (struct System_Single_array *)v11;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->POSITION_X_DOWN, (int32_t)v11, v13, v14);
  v15 = (System_Array_o *)sub_1BDB920(float___TypeInfo, 5LL);
  v22.fields.value = Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528;
  v16 = v15;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_63272576(v15, v22, 0LL);
  v17 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v17->POSITION_X_CENTER = (struct System_Single_array *)v16;
  sub_1BDB81C((CGThumbnailListItem_o *)&v17->POSITION_X_CENTER, (int32_t)v16, v18, v19);
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

  if ( (byte_4B43F5B & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_Object_TypeInfo, method);
    byte_4B43F5B = 1;
  }
  upIconSprite = (UnityEngine_Object_o *)this->fields.upIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(upIconSprite, 0LL, 0LL) )
  {
    gameObject = this->fields.upIconSprite;
    if ( !gameObject )
      goto LABEL_18;
    UISprite__set_spriteName(gameObject, 0LL, 0LL);
    gameObject = this->fields.upIconSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
  }
  downIconSprite = (UnityEngine_Object_o *)this->fields.downIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
LABEL_18:
    sub_1BDBAD4(gameObject, v4);
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
  const MethodInfo *v17; // x2
  __int64 v18; // x8
  ClassRelationMaster_o *v19; // x25
  unsigned __int64 v20; // x27
  int32_t advIconId; // w24
  int32_t v22; // w23
  int32_t v23; // w26
  const MethodInfo *v24; // x5
  bool v25; // zf
  const MethodInfo *v26; // x5
  UISprite_o *v27; // x21
  __int64 v28; // x8
  struct System_Single_array *POSITION_X_DOWN; // x8
  UISprite_o *v30; // x21
  float *v31; // x8
  ServantClassCompatibilityIconComponent_o *v32; // x0
  const MethodInfo *v33; // x5
  __int64 v34; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v36; // x0
  ClassRelationEntity_o *v37; // [xsp+0h] [xbp-70h] BYREF
  ClassRelationEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B43F5C & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_ClassRelationMaster___, *(_QWORD *)&classId);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v9);
    sub_1BDB878(&ServantClassCompatibilityIconComponent_TypeInfo, v10);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_4B43F5C = 1;
  }
  v37 = 0LL;
  entity = 0LL;
  if ( dispMode == 5 )
    goto LABEL_7;
  upIconSprite = (UnityEngine_Object_o *)this->fields.upIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(upIconSprite, 0LL, 0LL) )
    goto LABEL_7;
  downIconSprite = (UnityEngine_Object_o *)this->fields.downIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v14 = UnityEngine_Object__op_Equality(downIconSprite, 0LL, 0LL);
  if ( !targetClassIds || v14 || !*(_QWORD *)&targetClassIds->max_length )
  {
LABEL_7:
    ServantClassCompatibilityIconComponent__Clear(this, *(const MethodInfo **)&classId);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_303395C *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v18 = *(_QWORD *)&targetClassIds->max_length;
  if ( (int)v18 >= 1 )
  {
    v19 = (ClassRelationMaster_o *)Instance;
    v20 = 0LL;
    advIconId = 0;
    v22 = 0;
    while ( 1 )
    {
      if ( v20 >= (unsigned int)v18 )
        goto LABEL_63;
      if ( !v19 )
        goto LABEL_62;
      v23 = targetClassIds->m_Items[v20 + 1];
      ClassRelationMaster__TryGetEntity(v19, &entity, classId, v23, 0LL);
      Instance = (DataManager_o *)ClassRelationMaster__TryGetEntity(v19, &v37, v23, classId, 0LL);
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
        v25 = v22 == 1;
      else
        v25 = 1;
      if ( !v25 )
        v22 = v37->fields.advIconId;
LABEL_36:
      LODWORD(v18) = targetClassIds->max_length;
      if ( (__int64)++v20 >= (int)v18 )
      {
        if ( advIconId )
        {
          ServantClassCompatibilityIconComponent__SetIconImage(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            this->fields.upIconSprite,
            advIconId,
            dispMode,
            1,
            v24);
          v16 = this->fields.downIconSprite;
          if ( v22 )
          {
            ServantClassCompatibilityIconComponent__SetIconImage(
              (ServantClassCompatibilityIconComponent_o *)Instance,
              v16,
              v22,
              dispMode,
              0,
              v26);
            v27 = this->fields.upIconSprite;
            Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            if ( !ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo);
              Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            }
            v28 = **(_QWORD **)&Instance[1].fields._DispLog;
            if ( v28 )
            {
              if ( *(_DWORD *)(v28 + 24) <= (unsigned int)dispMode )
                goto LABEL_63;
              ServantClassCompatibilityIconComponent__SetIconPosition(
                (ServantClassCompatibilityIconComponent_o *)Instance,
                v27,
                *(float *)(v28 + 4LL * dispMode + 32),
                v17);
              POSITION_X_DOWN = ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_DOWN;
              if ( POSITION_X_DOWN )
              {
                if ( POSITION_X_DOWN->max_length > dispMode )
                {
                  v30 = this->fields.downIconSprite;
                  v31 = (float *)((char *)POSITION_X_DOWN + 4 * dispMode);
                  goto LABEL_58;
                }
LABEL_63:
                sub_1BDBADC(Instance, v16, v17);
              }
            }
LABEL_62:
            sub_1BDBAD4(Instance, v16);
          }
          if ( !v16 )
            goto LABEL_62;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.downIconSprite,
                                        0LL);
          if ( !Instance )
            goto LABEL_62;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          v30 = this->fields.upIconSprite;
LABEL_53:
          Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          if ( !ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo);
            Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          }
          v34 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
          if ( !v34 )
            goto LABEL_62;
          if ( *(_DWORD *)(v34 + 24) <= (unsigned int)dispMode )
            goto LABEL_63;
          v31 = (float *)(v34 + 4LL * dispMode);
LABEL_58:
          ServantClassCompatibilityIconComponent__SetIconPosition(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            v30,
            v31[8],
            v17);
          if ( (dispMode & 0xFFFFFFFE) == 2 )
          {
            Instance = (DataManager_o *)this->fields.upIconSprite;
            if ( !Instance )
              goto LABEL_62;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_35213112(gameObject, 0.8, 0LL);
            Instance = (DataManager_o *)this->fields.downIconSprite;
            if ( !Instance )
              goto LABEL_62;
            v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_35213112(v36, 0.8, 0LL);
          }
        }
        else if ( v22 )
        {
          Instance = (DataManager_o *)this->fields.upIconSprite;
          if ( !Instance )
            goto LABEL_62;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_62;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          ServantClassCompatibilityIconComponent__SetIconImage(v32, this->fields.downIconSprite, v22, dispMode, 0, v33);
          v30 = this->fields.downIconSprite;
          goto LABEL_53;
        }
        return;
      }
    }
    Instance = (DataManager_o *)this->fields.upIconSprite;
    if ( !Instance )
      goto LABEL_62;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    Instance = (DataManager_o *)this->fields.downIconSprite;
    if ( !Instance )
      goto LABEL_62;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
    if ( !Instance )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
    goto LABEL_36;
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
  int32_t upIconSprite_high; // w1
  System_String_o **v15; // x8

  if ( (byte_4B43F5D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20314/*"img_arrow_2"*/, icon);
    sub_1BDB878(&StringLiteral_20316/*"img_arrow_4"*/, v10);
    sub_1BDB878(&StringLiteral_20315/*"img_arrow_3"*/, v11);
    this = (ServantClassCompatibilityIconComponent_o *)sub_1BDB878(&StringLiteral_20313/*"img_arrow_1"*/, v12);
    byte_4B43F5D = 1;
  }
  if ( !icon )
    goto LABEL_18;
  this = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)icon,
                                                       0LL);
  if ( !this )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( iconId != 1 )
  {
    v15 = (System_String_o **)&StringLiteral_20314/*"img_arrow_2"*/;
    if ( !advantage )
      v15 = (System_String_o **)&StringLiteral_20316/*"img_arrow_4"*/;
    UISprite__set_spriteName(icon, *v15, 0LL);
    if ( dispMode == 4 )
    {
      UIWidget__set_width((UIWidget_o *)icon, 22, 0LL);
      upIconSprite_high = 24;
      goto LABEL_17;
    }
    goto LABEL_14;
  }
  v13 = (System_String_o **)&StringLiteral_20313/*"img_arrow_1"*/;
  if ( !advantage )
    v13 = (System_String_o **)&StringLiteral_20315/*"img_arrow_3"*/;
  UISprite__set_spriteName(icon, *v13, 0LL);
  if ( dispMode != 4 )
  {
LABEL_14:
    this = (ServantClassCompatibilityIconComponent_o *)UISprite__GetAtlasSprite(icon, 0LL);
    if ( this )
    {
      UIWidget__set_width((UIWidget_o *)icon, (int32_t)this->fields.upIconSprite, 0LL);
      this = (ServantClassCompatibilityIconComponent_o *)UISprite__GetAtlasSprite(icon, 0LL);
      if ( this )
      {
        upIconSprite_high = HIDWORD(this->fields.upIconSprite);
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_1BDBAD4(this, icon);
  }
  UIWidget__set_width((UIWidget_o *)icon, 22, 0LL);
  upIconSprite_high = 32;
LABEL_17:
  UIWidget__set_height((UIWidget_o *)icon, upIconSprite_high, 0LL);
}


void __fastcall ServantClassCompatibilityIconComponent__SetIconPosition(
        ServantClassCompatibilityIconComponent_o *this,
        UISprite_o *icon,
        float x,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B43F5E & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, icon);
    this = (ServantClassCompatibilityIconComponent_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    byte_4B43F5E = 1;
  }
  if ( !icon )
    goto LABEL_11;
  this = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)icon,
                                                       0LL);
  if ( !this )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0LL,
                                                       0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      *(float *)&Component_object[8].klass = x;
      *((float *)&Component_object[8].monitor + 1) = x;
      return;
    }
LABEL_11:
    sub_1BDBAD4(this, icon);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, x, 0LL);
}