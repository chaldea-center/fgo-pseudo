void __fastcall ServantClassCompatibilityIconComponent___cctor(const MethodInfo *method)
{
  System_Array_o *v1; // x0
  struct System_Single_array *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3
  System_Array_o *v5; // x0
  System_Array_o *v6; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_Array_o *v10; // x0
  System_Array_o *v11; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_RuntimeFieldHandle_o v15; // 0:w1.4
  System_RuntimeFieldHandle_o v16; // 0:w1.4
  System_RuntimeFieldHandle_o v17; // 0:w1.4

  if ( (byte_4A5A6A9 & 1) == 0 )
  {
    sub_1B885B0(&ServantClassCompatibilityIconComponent_TypeInfo);
    sub_1B885B0(&float___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003);
    sub_1B885B0(&Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436);
    sub_1B885B0(&Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528);
    byte_4A5A6A9 = 1;
  }
  v1 = (System_Array_o *)sub_1B88658(float___TypeInfo, 5LL);
  v15.fields.value = Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003;
  v2 = (struct System_Single_array *)v1;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v1, v15, 0LL);
  ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_UP = v2;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)ServantClassCompatibilityIconComponent_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
  v5 = (System_Array_o *)sub_1B88658(float___TypeInfo, 5LL);
  v16.fields.value = Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436;
  v6 = v5;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v5, v16, 0LL);
  static_fields = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  static_fields->POSITION_X_DOWN = (struct System_Single_array *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->POSITION_X_DOWN, (int32_t)v6, v8, v9);
  v10 = (System_Array_o *)sub_1B88658(float___TypeInfo, 5LL);
  v17.fields.value = Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528;
  v11 = v10;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v10, v17, 0LL);
  v12 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v12->POSITION_X_CENTER = (struct System_Single_array *)v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v12->POSITION_X_CENTER, (int32_t)v11, v13, v14);
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

  if ( (byte_4A5A6A5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6A5 = 1;
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
    sub_1B8880C(gameObject, v4);
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
  __int64 v25; // x8
  const MethodInfo *v26; // x2
  struct System_Single_array *POSITION_X_DOWN; // x8
  UISprite_o *v28; // x21
  float *v29; // x8
  ServantClassCompatibilityIconComponent_o *v30; // x0
  const MethodInfo *v31; // x5
  __int64 v32; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v34; // x0
  ClassRelationEntity_o *v35; // [xsp+0h] [xbp-70h] BYREF
  ClassRelationEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5A6A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ClassRelationMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ServantClassCompatibilityIconComponent_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A6A6 = 1;
  }
  v35 = 0LL;
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
  v11 = UnityEngine_Object__op_Equality(downIconSprite, 0LL, 0LL);
  if ( !targetClassIds || v11 || !*(_QWORD *)&targetClassIds->max_length )
  {
LABEL_7:
    ServantClassCompatibilityIconComponent__Clear(this, *(const MethodInfo **)&classId);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ClassRelationMaster___);
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
        goto LABEL_63;
      if ( !v15 )
        goto LABEL_62;
      v19 = targetClassIds->m_Items[v16 + 1];
      ClassRelationMaster__TryGetEntity(v15, &entity, classId, v19, 0LL);
      Instance = (DataManager_o *)ClassRelationMaster__TryGetEntity(v15, &v35, v19, classId, 0LL);
      if ( !entity || !v35 )
        break;
      if ( entity->fields.advIconId )
      {
        if ( advIconId == 1 )
          advIconId = 1;
        else
          advIconId = entity->fields.advIconId;
      }
      else if ( !v35->fields.advIconId )
      {
        break;
      }
      if ( v35->fields.advIconId )
        v21 = v18 == 1;
      else
        v21 = 1;
      if ( !v21 )
        v18 = v35->fields.advIconId;
LABEL_36:
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
                v23);
              POSITION_X_DOWN = ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_DOWN;
              if ( POSITION_X_DOWN )
              {
                if ( POSITION_X_DOWN->max_length > dispMode )
                {
                  v28 = this->fields.downIconSprite;
                  v29 = (float *)((char *)POSITION_X_DOWN + 4 * dispMode);
                  goto LABEL_58;
                }
LABEL_63:
                sub_1B88814(Instance, v13);
              }
            }
LABEL_62:
            sub_1B8880C(Instance, v13);
          }
          if ( !v13 )
            goto LABEL_62;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.downIconSprite,
                                        0LL);
          if ( !Instance )
            goto LABEL_62;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          v28 = this->fields.upIconSprite;
LABEL_53:
          Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          if ( !ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo);
            Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          }
          v32 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
          if ( !v32 )
            goto LABEL_62;
          if ( *(_DWORD *)(v32 + 24) <= (unsigned int)dispMode )
            goto LABEL_63;
          v29 = (float *)(v32 + 4LL * dispMode);
LABEL_58:
          ServantClassCompatibilityIconComponent__SetIconPosition(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            v28,
            v29[8],
            v26);
          if ( (dispMode & 0xFFFFFFFE) == 2 )
          {
            Instance = (DataManager_o *)this->fields.upIconSprite;
            if ( !Instance )
              goto LABEL_62;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_33726240(gameObject, 0.8, 0LL);
            Instance = (DataManager_o *)this->fields.downIconSprite;
            if ( !Instance )
              goto LABEL_62;
            v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_33726240(v34, 0.8, 0LL);
          }
        }
        else if ( v18 )
        {
          Instance = (DataManager_o *)this->fields.upIconSprite;
          if ( !Instance )
            goto LABEL_62;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_62;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          ServantClassCompatibilityIconComponent__SetIconImage(v30, this->fields.downIconSprite, v18, dispMode, 0, v31);
          v28 = this->fields.downIconSprite;
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
  System_String_o **v10; // x8
  int32_t upIconSprite_high; // w1
  System_String_o **v12; // x8

  if ( (byte_4A5A6A7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20244/*"img_arrow_2"*/);
    sub_1B885B0(&StringLiteral_20246/*"img_arrow_4"*/);
    sub_1B885B0(&StringLiteral_20245/*"img_arrow_3"*/);
    this = (ServantClassCompatibilityIconComponent_o *)sub_1B885B0(&StringLiteral_20243/*"img_arrow_1"*/);
    byte_4A5A6A7 = 1;
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
    v12 = (System_String_o **)&StringLiteral_20244/*"img_arrow_2"*/;
    if ( !advantage )
      v12 = (System_String_o **)&StringLiteral_20246/*"img_arrow_4"*/;
    UISprite__set_spriteName(icon, *v12, 0LL);
    if ( dispMode == 4 )
    {
      UIWidget__set_width((UIWidget_o *)icon, 22, 0LL);
      upIconSprite_high = 24;
      goto LABEL_17;
    }
    goto LABEL_14;
  }
  v10 = (System_String_o **)&StringLiteral_20243/*"img_arrow_1"*/;
  if ( !advantage )
    v10 = (System_String_o **)&StringLiteral_20245/*"img_arrow_3"*/;
  UISprite__set_spriteName(icon, *v10, 0LL);
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
    sub_1B8880C(this, icon);
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
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A5A6A8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
    this = (ServantClassCompatibilityIconComponent_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A6A8 = 1;
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
                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
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
    sub_1B8880C(this, icon);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, x, 0LL);
}