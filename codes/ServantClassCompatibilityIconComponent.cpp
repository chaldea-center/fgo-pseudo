void ServantClassCompatibilityIconComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Single_array *v3; // x19
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Array_o *v6; // x0
  System_RuntimeFieldHandle_o v7; // x1
  System_Array_o *v8; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Array_o *v12; // x0
  System_RuntimeFieldHandle_o v13; // x1
  System_Array_o *v14; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C2677B & 1) == 0 )
  {
    sub_1C2D490(&ServantClassCompatibilityIconComponent_TypeInfo);
    sub_1C2D490(&float___TypeInfo);
    sub_1C2D490(&Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003);
    sub_1C2D490(&Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436);
    sub_1C2D490(&Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528);
    byte_4C2677B = 1;
  }
  v1 = (System_Array_o *)sub_1C2D538(float___TypeInfo, 5);
  v2.fields.value = Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003;
  v3 = (struct System_Single_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v1, v2, 0);
  ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_UP = v3;
  sub_1C2D434(
    (CGThumbnailListItem_o *)ServantClassCompatibilityIconComponent_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
  v6 = (System_Array_o *)sub_1C2D538(float___TypeInfo, 5);
  v7.fields.value = Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436;
  v8 = v6;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v6, v7, 0);
  static_fields = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  static_fields->POSITION_X_DOWN = (struct System_Single_array *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->POSITION_X_DOWN, (int32_t)v8, v10, v11);
  v12 = (System_Array_o *)sub_1C2D538(float___TypeInfo, 5);
  v13.fields.value = Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528;
  v14 = v12;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_64158640(v12, v13, 0);
  v15 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v15->POSITION_X_CENTER = (struct System_Single_array *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->POSITION_X_CENTER, (int32_t)v14, v16, v17);
}


void ServantClassCompatibilityIconComponent___ctor(
        ServantClassCompatibilityIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ServantClassCompatibilityIconComponent__Clear(
        ServantClassCompatibilityIconComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *upIconSprite; // x20
  __int64 v4; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *downIconSprite; // x20

  if ( (byte_4C26777 & 1) == 0 )
  {
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C26777 = 1;
  }
  upIconSprite = (UnityEngine_Object_o *)this->fields.upIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(upIconSprite, 0, 0) )
  {
    gameObject = this->fields.upIconSprite;
    if ( !gameObject )
      goto LABEL_18;
    UISprite__set_spriteName(gameObject, 0, 0);
    gameObject = this->fields.upIconSprite;
    if ( !gameObject )
      goto LABEL_18;
    gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_18;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  downIconSprite = (UnityEngine_Object_o *)this->fields.downIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(downIconSprite, 0, 0) )
  {
    gameObject = this->fields.downIconSprite;
    if ( gameObject )
    {
      UISprite__set_spriteName(gameObject, 0, 0);
      gameObject = this->fields.downIconSprite;
      if ( gameObject )
      {
        gameObject = (UISprite_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
          return;
        }
      }
    }
LABEL_18:
    sub_1C2D6EC(gameObject, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void ServantClassCompatibilityIconComponent__SetIcon(
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
  const MethodInfo *v14; // x2
  il2cpp_array_size_t max_length; // x8
  ClassRelationMaster_o *v16; // x25
  unsigned __int64 v17; // x27
  int32_t advIconId; // w24
  int32_t v19; // w23
  int32_t v20; // w26
  const MethodInfo *v21; // x5
  bool v22; // zf
  const MethodInfo *v23; // x5
  UISprite_o *v24; // x21
  __int64 v25; // x8
  struct System_Single_array *POSITION_X_DOWN; // x8
  UISprite_o *v27; // x21
  float *v28; // x8
  ServantClassCompatibilityIconComponent_o *v29; // x0
  const MethodInfo *v30; // x5
  __int64 v31; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v33; // x0
  ClassRelationEntity_o *v34; // [xsp+0h] [xbp-70h] BYREF
  ClassRelationEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C26778 & 1) == 0 )
  {
    sub_1C2D490(&Method_DataManager_GetMasterData_ClassRelationMaster___);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    sub_1C2D490(&ServantClassCompatibilityIconComponent_TypeInfo);
    sub_1C2D490(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C26778 = 1;
  }
  v34 = 0;
  entity = 0;
  if ( dispMode == 5 )
    goto LABEL_7;
  upIconSprite = (UnityEngine_Object_o *)this->fields.upIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(upIconSprite, 0, 0) )
    goto LABEL_7;
  downIconSprite = (UnityEngine_Object_o *)this->fields.downIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v11 = UnityEngine_Object__op_Equality(downIconSprite, 0, 0);
  if ( !targetClassIds || v11 || !targetClassIds->max_length )
  {
LABEL_7:
    ServantClassCompatibilityIconComponent__Clear(this, *(const MethodInfo **)&classId);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39D3CCC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30CE950 *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  max_length = targetClassIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v16 = (ClassRelationMaster_o *)Instance;
    v17 = 0;
    advIconId = 0;
    v19 = 0;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)max_length )
        goto LABEL_63;
      if ( !v16 )
        goto LABEL_62;
      v20 = targetClassIds->m_Items[v17];
      ClassRelationMaster__TryGetEntity(v16, &entity, classId, v20, 0);
      Instance = (DataManager_o *)ClassRelationMaster__TryGetEntity(v16, &v34, v20, classId, 0);
      if ( !entity || !v34 )
        break;
      if ( entity->fields.advIconId )
      {
        if ( advIconId == 1 )
          advIconId = 1;
        else
          advIconId = entity->fields.advIconId;
      }
      else if ( !v34->fields.advIconId )
      {
        break;
      }
      if ( v34->fields.advIconId )
        v22 = v19 == 1;
      else
        v22 = 1;
      if ( !v22 )
        v19 = v34->fields.advIconId;
LABEL_36:
      LODWORD(max_length) = targetClassIds->max_length;
      if ( (__int64)++v17 >= (int)max_length )
      {
        if ( advIconId )
        {
          ServantClassCompatibilityIconComponent__SetIconImage(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            this->fields.upIconSprite,
            advIconId,
            dispMode,
            1,
            v21);
          v13 = this->fields.downIconSprite;
          if ( v19 )
          {
            ServantClassCompatibilityIconComponent__SetIconImage(
              (ServantClassCompatibilityIconComponent_o *)Instance,
              v13,
              v19,
              dispMode,
              0,
              v23);
            v24 = this->fields.upIconSprite;
            Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            if ( !ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo);
              Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            }
            v25 = **(_QWORD **)&Instance[1].fields._DispLog;
            if ( v25 )
            {
              if ( *(_DWORD *)(v25 + 24) <= (unsigned int)dispMode )
                goto LABEL_63;
              ServantClassCompatibilityIconComponent__SetIconPosition(
                (ServantClassCompatibilityIconComponent_o *)Instance,
                v24,
                *(float *)(v25 + 4LL * dispMode + 32),
                v14);
              POSITION_X_DOWN = ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_DOWN;
              if ( POSITION_X_DOWN )
              {
                if ( LODWORD(POSITION_X_DOWN->max_length) > dispMode )
                {
                  v27 = this->fields.downIconSprite;
                  v28 = (float *)((char *)POSITION_X_DOWN + 4 * dispMode);
                  goto LABEL_58;
                }
LABEL_63:
                sub_1C2D6F4(Instance, v13, v14);
              }
            }
LABEL_62:
            sub_1C2D6EC(Instance, v13);
          }
          if ( !v13 )
            goto LABEL_62;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.downIconSprite,
                                        0);
          if ( !Instance )
            goto LABEL_62;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          v27 = this->fields.upIconSprite;
LABEL_53:
          Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          if ( !ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo);
            Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          }
          v31 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
          if ( !v31 )
            goto LABEL_62;
          if ( *(_DWORD *)(v31 + 24) <= (unsigned int)dispMode )
            goto LABEL_63;
          v28 = (float *)(v31 + 4LL * dispMode);
LABEL_58:
          ServantClassCompatibilityIconComponent__SetIconPosition(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            v27,
            v28[8],
            v14);
          if ( (dispMode & 0xFFFFFFFE) == 2 )
          {
            Instance = (DataManager_o *)this->fields.upIconSprite;
            if ( !Instance )
              goto LABEL_62;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            GameObjectExtensions__SetLocalScale_35920504(gameObject, 0.8, 0);
            Instance = (DataManager_o *)this->fields.downIconSprite;
            if ( !Instance )
              goto LABEL_62;
            v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            GameObjectExtensions__SetLocalScale_35920504(v33, 0.8, 0);
          }
        }
        else if ( v19 )
        {
          Instance = (DataManager_o *)this->fields.upIconSprite;
          if ( !Instance )
            goto LABEL_62;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_62;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          ServantClassCompatibilityIconComponent__SetIconImage(v29, this->fields.downIconSprite, v19, dispMode, 0, v30);
          v27 = this->fields.downIconSprite;
          goto LABEL_53;
        }
        return;
      }
    }
    Instance = (DataManager_o *)this->fields.upIconSprite;
    if ( !Instance )
      goto LABEL_62;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    Instance = (DataManager_o *)this->fields.downIconSprite;
    if ( !Instance )
      goto LABEL_62;
    Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
    if ( !Instance )
      goto LABEL_62;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
    goto LABEL_36;
  }
}


void ServantClassCompatibilityIconComponent__SetIconImage(
        ServantClassCompatibilityIconComponent_o *this,
        UISprite_o *icon,
        int32_t iconId,
        int32_t dispMode,
        bool advantage,
        const MethodInfo *method)
{
  System_String_o **v10; // x8
  int32_t upIconSprite_high; // w1
  System_String_o **v12; // x8

  if ( (byte_4C26779 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_20284/*"img_arrow_2"*/);
    sub_1C2D490(&StringLiteral_20286/*"img_arrow_4"*/);
    sub_1C2D490(&StringLiteral_20285/*"img_arrow_3"*/);
    this = (ServantClassCompatibilityIconComponent_o *)sub_1C2D490(&StringLiteral_20283/*"img_arrow_1"*/);
    byte_4C26779 = 1;
  }
  if ( !icon )
    goto LABEL_18;
  this = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)icon,
                                                       0);
  if ( !this )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  if ( iconId != 1 )
  {
    v12 = (System_String_o **)&StringLiteral_20284/*"img_arrow_2"*/;
    if ( !advantage )
      v12 = (System_String_o **)&StringLiteral_20286/*"img_arrow_4"*/;
    UISprite__set_spriteName(icon, *v12, 0);
    if ( dispMode == 4 )
    {
      UIWidget__set_width((UIWidget_o *)icon, 22, 0);
      upIconSprite_high = 24;
      goto LABEL_17;
    }
    goto LABEL_14;
  }
  v10 = (System_String_o **)&StringLiteral_20283/*"img_arrow_1"*/;
  if ( !advantage )
    v10 = (System_String_o **)&StringLiteral_20285/*"img_arrow_3"*/;
  UISprite__set_spriteName(icon, *v10, 0);
  if ( dispMode != 4 )
  {
LABEL_14:
    this = (ServantClassCompatibilityIconComponent_o *)UISprite__GetAtlasSprite(icon, 0);
    if ( this )
    {
      UIWidget__set_width((UIWidget_o *)icon, (int32_t)this->fields.upIconSprite, 0);
      this = (ServantClassCompatibilityIconComponent_o *)UISprite__GetAtlasSprite(icon, 0);
      if ( this )
      {
        upIconSprite_high = HIDWORD(this->fields.upIconSprite);
        goto LABEL_17;
      }
    }
LABEL_18:
    sub_1C2D6EC(this, icon);
  }
  UIWidget__set_width((UIWidget_o *)icon, 22, 0);
  upIconSprite_high = 32;
LABEL_17:
  UIWidget__set_height((UIWidget_o *)icon, upIconSprite_high, 0);
}


void ServantClassCompatibilityIconComponent__SetIconPosition(
        ServantClassCompatibilityIconComponent_o *this,
        UISprite_o *icon,
        float x,
        const MethodInfo *method)
{
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C2677A & 1) == 0 )
  {
    sub_1C2D490(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    this = (ServantClassCompatibilityIconComponent_o *)sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2677A = 1;
  }
  if ( !icon )
    goto LABEL_11;
  this = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)icon,
                                                       0);
  if ( !this )
    goto LABEL_11;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       (const MethodInfo_3125ED0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantClassCompatibilityIconComponent_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0,
                                                       0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( Component_object )
    {
      *(float *)&Component_object[8].klass = x;
      *((float *)&Component_object[8].monitor + 1) = x;
      return;
    }
LABEL_11:
    sub_1C2D6EC(this, icon);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, x, 0);
}