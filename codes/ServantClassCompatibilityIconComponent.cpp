void ServantClassCompatibilityIconComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  System_RuntimeFieldHandle_o v2; // x1
  struct System_Single_array *v3; // x19
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Array_o *v10; // x0
  System_RuntimeFieldHandle_o v11; // x1
  System_Array_o *v12; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *static_fields; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Array_o *v20; // x0
  System_RuntimeFieldHandle_o v21; // x1
  System_Array_o *v22; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v23; // x0
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  if ( (byte_596FCD5 & 1) == 0 )
  {
    sub_2213A60(&ServantClassCompatibilityIconComponent_TypeInfo);
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003);
    sub_2213A60(&Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436);
    sub_2213A60(&Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528);
    byte_596FCD5 = 1;
  }
  v1 = (System_Array_o *)sub_2213B20(float___TypeInfo, 5);
  v2.fields.value = Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003;
  v3 = (struct System_Single_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v1, v2, 0);
  ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_UP = v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)ServantClassCompatibilityIconComponent_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Array_o *)sub_2213B20(float___TypeInfo, 5);
  v11.fields.value = Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436;
  v12 = v10;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v10, v11, 0);
  static_fields = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  static_fields->POSITION_X_DOWN = (struct System_Single_array *)v12;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->POSITION_X_DOWN,
    (int32_t)v12,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v20 = (System_Array_o *)sub_2213B20(float___TypeInfo, 5);
  v21.fields.value = Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528;
  v22 = v20;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(v20, v21, 0);
  v23 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v23->POSITION_X_CENTER = (struct System_Single_array *)v22;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v23->POSITION_X_CENTER, (int32_t)v22, v24, v25, v26, v27, v28, v29);
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

  if ( (byte_596FCD1 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FCD1 = 1;
  }
  upIconSprite = (UnityEngine_Object_o *)this->fields.upIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
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
    sub_2213CDC(gameObject, v4);
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
  il2cpp_array_size_t max_length; // x8
  ClassRelationMaster_o *v15; // x24
  unsigned __int64 v16; // x27
  int32_t v17; // w25
  int32_t v18; // w23
  int32_t v19; // w26
  const MethodInfo *v20; // x5
  int32_t advIconId; // w8
  const MethodInfo *v23; // x5
  const MethodInfo *v24; // x2
  UISprite_o *v25; // x21
  __int64 v26; // x8
  const MethodInfo *v27; // x2
  struct System_Single_array *POSITION_X_DOWN; // x8
  float *v29; // x8
  UISprite_o *v30; // x21
  ServantClassCompatibilityIconComponent_o *v31; // x0
  const MethodInfo *v32; // x5
  __int64 v33; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v35; // x0
  ClassRelationEntity_o *v36; // [xsp+0h] [xbp-70h] BYREF
  ClassRelationEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_596FCD2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_ClassRelationMaster___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&ServantClassCompatibilityIconComponent_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596FCD2 = 1;
  }
  v36 = 0;
  entity = 0;
  if ( dispMode == 5 )
    goto LABEL_7;
  upIconSprite = (UnityEngine_Object_o *)this->fields.upIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&classId);
  if ( UnityEngine_Object__op_Equality(upIconSprite, 0, 0) )
    goto LABEL_7;
  downIconSprite = (UnityEngine_Object_o *)this->fields.downIconSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&classId);
  v11 = UnityEngine_Object__op_Equality(downIconSprite, 0, 0);
  if ( !targetClassIds || v11 || !targetClassIds->max_length )
  {
LABEL_7:
    ServantClassCompatibilityIconComponent__Clear(this, *(const MethodInfo **)&classId);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  max_length = targetClassIds->max_length;
  if ( (int)max_length >= 1 )
  {
    v15 = (ClassRelationMaster_o *)Instance;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)max_length )
        goto LABEL_63;
      if ( !v15 )
        goto LABEL_62;
      v19 = targetClassIds->m_Items[v16];
      ClassRelationMaster__TryGetEntity(v15, &entity, classId, v19, 0);
      Instance = (DataManager_o *)ClassRelationMaster__TryGetEntity(v15, &v36, v19, classId, 0);
      if ( !entity || !v36 )
        break;
      if ( entity->fields.advIconId )
      {
        advIconId = v36->fields.advIconId;
        if ( v17 == 1 )
          v17 = 1;
        else
          v17 = entity->fields.advIconId;
      }
      else
      {
        advIconId = v36->fields.advIconId;
        if ( !advIconId )
          break;
      }
      if ( v18 != 1 && advIconId != 0 )
        v18 = advIconId;
LABEL_35:
      LODWORD(max_length) = targetClassIds->max_length;
      if ( (__int64)++v16 >= (int)max_length )
      {
        if ( v17 )
        {
          ServantClassCompatibilityIconComponent__SetIconImage(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            this->fields.upIconSprite,
            v17,
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
              v23);
            v25 = this->fields.upIconSprite;
            Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            if ( !*(&ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo, v13);
              Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            }
            v26 = **(_QWORD **)&Instance[1].fields._DispLog;
            if ( v26 )
            {
              if ( *(_DWORD *)(v26 + 24) <= (unsigned int)dispMode )
                goto LABEL_63;
              ServantClassCompatibilityIconComponent__SetIconPosition(
                (ServantClassCompatibilityIconComponent_o *)Instance,
                v25,
                *(float *)(v26 + 4LL * dispMode + 32),
                v24);
              POSITION_X_DOWN = ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_DOWN;
              if ( POSITION_X_DOWN )
              {
                if ( LODWORD(POSITION_X_DOWN->max_length) > dispMode )
                {
                  v29 = (float *)((char *)POSITION_X_DOWN + 4 * dispMode);
                  v30 = this->fields.downIconSprite;
                  goto LABEL_57;
                }
LABEL_63:
                sub_2213CE4(Instance);
              }
            }
LABEL_62:
            sub_2213CDC(Instance, v13);
          }
          if ( !v13 )
            goto LABEL_62;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.downIconSprite,
                                        0);
          if ( !Instance )
            goto LABEL_62;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          v30 = this->fields.upIconSprite;
LABEL_52:
          Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          if ( !*(&ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo, v13);
            Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          }
          v33 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
          if ( !v33 )
            goto LABEL_62;
          if ( *(_DWORD *)(v33 + 24) <= (unsigned int)dispMode )
            goto LABEL_63;
          v29 = (float *)(v33 + 4LL * dispMode);
LABEL_57:
          ServantClassCompatibilityIconComponent__SetIconPosition(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            v30,
            v29[8],
            v27);
          if ( (dispMode & 0xFFFFFFFE) == 2 )
          {
            Instance = (DataManager_o *)this->fields.upIconSprite;
            if ( !Instance )
              goto LABEL_62;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            GameObjectExtensions__SetLocalScale_42893524(gameObject, 0.8, 0);
            Instance = (DataManager_o *)this->fields.downIconSprite;
            if ( !Instance )
              goto LABEL_62;
            v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
            GameObjectExtensions__SetLocalScale_42893524(v35, 0.8, 0);
          }
        }
        else if ( v18 )
        {
          Instance = (DataManager_o *)this->fields.upIconSprite;
          if ( !Instance )
            goto LABEL_62;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
          if ( !Instance )
            goto LABEL_62;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0);
          ServantClassCompatibilityIconComponent__SetIconImage(v31, this->fields.downIconSprite, v18, dispMode, 0, v32);
          v30 = this->fields.downIconSprite;
          goto LABEL_52;
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
    goto LABEL_35;
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

  if ( (byte_596FCD3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_21282/*"img_arrow_2"*/);
    sub_2213A60(&StringLiteral_21284/*"img_arrow_4"*/);
    sub_2213A60(&StringLiteral_21283/*"img_arrow_3"*/);
    this = (ServantClassCompatibilityIconComponent_o *)sub_2213A60(&StringLiteral_21281/*"img_arrow_1"*/);
    byte_596FCD3 = 1;
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
    v12 = (System_String_o **)&StringLiteral_21282/*"img_arrow_2"*/;
    if ( !advantage )
      v12 = (System_String_o **)&StringLiteral_21284/*"img_arrow_4"*/;
    UISprite__set_spriteName(icon, *v12, 0);
    if ( dispMode == 4 )
    {
      UIWidget__set_width((UIWidget_o *)icon, 22, 0);
      upIconSprite_high = 24;
      goto LABEL_17;
    }
    goto LABEL_14;
  }
  v10 = (System_String_o **)&StringLiteral_21281/*"img_arrow_1"*/;
  if ( !advantage )
    v10 = (System_String_o **)&StringLiteral_21283/*"img_arrow_3"*/;
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
    sub_2213CDC(this, icon);
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
  __int64 v6; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_596FCD4 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    this = (ServantClassCompatibilityIconComponent_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596FCD4 = 1;
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
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
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
    sub_2213CDC(this, icon);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, x, 0);
}