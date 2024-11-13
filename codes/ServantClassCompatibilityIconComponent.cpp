void __fastcall ServantClassCompatibilityIconComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Array_o *v11; // x0
  struct System_Single_array *v12; // x19
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  System_Array_o *v19; // x0
  int64_t v20; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *static_fields; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  System_Array_o *v28; // x0
  int64_t v29; // x19
  struct ServantClassCompatibilityIconComponent_StaticFields *v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_RuntimeFieldHandle_o v37; // 0:w1.4
  System_RuntimeFieldHandle_o v38; // 0:w1.4
  System_RuntimeFieldHandle_o v39; // 0:w1.4

  if ( (byte_4B15713 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantClassCompatibilityIconComponent_TypeInfo, v1, v2);
    sub_1BCA7E0(&float___TypeInfo, v3, v4);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003,
      v5,
      v6);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436,
      v7,
      v8);
    sub_1BCA7E0(
      &Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528,
      v9,
      v10);
    byte_4B15713 = 1;
  }
  v11 = (System_Array_o *)sub_1BCA888(float___TypeInfo, 5LL);
  v37.fields.value = Field__PrivateImplementationDetails__657AC32C0816EB8C917333556CB7B41311E802F8A338DA957586A1EFBD925003;
  v12 = (struct System_Single_array *)v11;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v11, v37, 0LL);
  ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_UP = v12;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantClassCompatibilityIconComponent_TypeInfo->static_fields,
    (int64_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Array_o *)sub_1BCA888(float___TypeInfo, 5LL);
  v38.fields.value = Field__PrivateImplementationDetails__8FD8636127BEF610717EDA6C87275DE8FABC7EAFB50E06E32438371EA366A436;
  v20 = (int64_t)v19;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v19, v38, 0LL);
  static_fields = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  static_fields->POSITION_X_DOWN = (struct System_Single_array *)v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->POSITION_X_DOWN, v20, v22, v23, v24, v25, v26, v27);
  v28 = (System_Array_o *)sub_1BCA888(float___TypeInfo, 5LL);
  v39.fields.value = Field__PrivateImplementationDetails__C08A644CA14B47C51D4206B9CD5FD8F3A046D90EF77DC2C18058397DC1F57528;
  v29 = (int64_t)v28;
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_62309300(v28, v39, 0LL);
  v30 = ServantClassCompatibilityIconComponent_TypeInfo->static_fields;
  v30->POSITION_X_CENTER = (struct System_Single_array *)v29;
  sub_1BCA784((PartyOrganizationUtility_o *)&v30->POSITION_X_CENTER, v29, v31, v32, v33, v34, v35, v36);
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
  __int64 v2; // x2
  UnityEngine_Object_o *upIconSprite; // x20
  __int64 v5; // x1
  UISprite_o *gameObject; // x0
  UnityEngine_Object_o *downIconSprite; // x20

  if ( (byte_4B1570F & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, method, v2);
    byte_4B1570F = 1;
  }
  upIconSprite = (UnityEngine_Object_o *)this->fields.upIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
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
    sub_1BCAA3C(gameObject, v5);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Object_o *upIconSprite; // x23
  UnityEngine_Object_o *downIconSprite; // x23
  bool v17; // w0
  DataManager_o *Instance; // x0
  UISprite_o *v19; // x1
  __int64 v20; // x8
  ClassRelationMaster_o *v21; // x25
  unsigned __int64 v22; // x27
  int32_t advIconId; // w24
  int32_t v24; // w23
  int32_t v25; // w26
  const MethodInfo *v26; // x5
  bool v27; // zf
  const MethodInfo *v28; // x5
  const MethodInfo *v29; // x2
  UISprite_o *v30; // x21
  __int64 v31; // x8
  const MethodInfo *v32; // x2
  struct System_Single_array *POSITION_X_DOWN; // x8
  UISprite_o *v34; // x21
  float *v35; // x8
  ServantClassCompatibilityIconComponent_o *v36; // x0
  const MethodInfo *v37; // x5
  __int64 v38; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v40; // x0
  ClassRelationEntity_o *v41; // [xsp+0h] [xbp-70h] BYREF
  ClassRelationEntity_o *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4B15710 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ClassRelationMaster___, *(_QWORD *)&classId, targetClassIds);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&ServantClassCompatibilityIconComponent_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    byte_4B15710 = 1;
  }
  v41 = 0LL;
  entity = 0LL;
  if ( dispMode == 5 )
    goto LABEL_7;
  upIconSprite = (UnityEngine_Object_o *)this->fields.upIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&classId);
  if ( UnityEngine_Object__op_Equality(upIconSprite, 0LL, 0LL) )
    goto LABEL_7;
  downIconSprite = (UnityEngine_Object_o *)this->fields.downIconSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&classId);
  v17 = UnityEngine_Object__op_Equality(downIconSprite, 0LL, 0LL);
  if ( !targetClassIds || v17 || !*(_QWORD *)&targetClassIds->max_length )
  {
LABEL_7:
    ServantClassCompatibilityIconComponent__Clear(this, *(const MethodInfo **)&classId);
    return;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_62;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ClassRelationMaster___);
  v20 = *(_QWORD *)&targetClassIds->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = (ClassRelationMaster_o *)Instance;
    v22 = 0LL;
    advIconId = 0;
    v24 = 0;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
        goto LABEL_63;
      if ( !v21 )
        goto LABEL_62;
      v25 = targetClassIds->m_Items[v22 + 1];
      ClassRelationMaster__TryGetEntity(v21, &entity, classId, v25, 0LL);
      Instance = (DataManager_o *)ClassRelationMaster__TryGetEntity(v21, &v41, v25, classId, 0LL);
      if ( !entity || !v41 )
        break;
      if ( entity->fields.advIconId )
      {
        if ( advIconId == 1 )
          advIconId = 1;
        else
          advIconId = entity->fields.advIconId;
      }
      else if ( !v41->fields.advIconId )
      {
        break;
      }
      if ( v41->fields.advIconId )
        v27 = v24 == 1;
      else
        v27 = 1;
      if ( !v27 )
        v24 = v41->fields.advIconId;
LABEL_36:
      LODWORD(v20) = targetClassIds->max_length;
      if ( (__int64)++v22 >= (int)v20 )
      {
        if ( advIconId )
        {
          ServantClassCompatibilityIconComponent__SetIconImage(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            this->fields.upIconSprite,
            advIconId,
            dispMode,
            1,
            v26);
          v19 = this->fields.downIconSprite;
          if ( v24 )
          {
            ServantClassCompatibilityIconComponent__SetIconImage(
              (ServantClassCompatibilityIconComponent_o *)Instance,
              v19,
              v24,
              dispMode,
              0,
              v28);
            v30 = this->fields.upIconSprite;
            Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            if ( !ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo, v19);
              Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
            }
            v31 = **(_QWORD **)&Instance[1].fields._DispLog;
            if ( v31 )
            {
              if ( *(_DWORD *)(v31 + 24) <= (unsigned int)dispMode )
                goto LABEL_63;
              ServantClassCompatibilityIconComponent__SetIconPosition(
                (ServantClassCompatibilityIconComponent_o *)Instance,
                v30,
                *(float *)(v31 + 4LL * dispMode + 32),
                v29);
              POSITION_X_DOWN = ServantClassCompatibilityIconComponent_TypeInfo->static_fields->POSITION_X_DOWN;
              if ( POSITION_X_DOWN )
              {
                if ( POSITION_X_DOWN->max_length > dispMode )
                {
                  v34 = this->fields.downIconSprite;
                  v35 = (float *)((char *)POSITION_X_DOWN + 4 * dispMode);
                  goto LABEL_58;
                }
LABEL_63:
                sub_1BCAA44(Instance, v19);
              }
            }
LABEL_62:
            sub_1BCAA3C(Instance, v19);
          }
          if ( !v19 )
            goto LABEL_62;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject(
                                        (UnityEngine_Component_o *)this->fields.downIconSprite,
                                        0LL);
          if ( !Instance )
            goto LABEL_62;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          v34 = this->fields.upIconSprite;
LABEL_53:
          Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          if ( !ServantClassCompatibilityIconComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(ServantClassCompatibilityIconComponent_TypeInfo, v19);
            Instance = (DataManager_o *)ServantClassCompatibilityIconComponent_TypeInfo;
          }
          v38 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 16LL);
          if ( !v38 )
            goto LABEL_62;
          if ( *(_DWORD *)(v38 + 24) <= (unsigned int)dispMode )
            goto LABEL_63;
          v35 = (float *)(v38 + 4LL * dispMode);
LABEL_58:
          ServantClassCompatibilityIconComponent__SetIconPosition(
            (ServantClassCompatibilityIconComponent_o *)Instance,
            v34,
            v35[8],
            v32);
          if ( (dispMode & 0xFFFFFFFE) == 2 )
          {
            Instance = (DataManager_o *)this->fields.upIconSprite;
            if ( !Instance )
              goto LABEL_62;
            gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_34333164(gameObject, 0.8, 0LL);
            Instance = (DataManager_o *)this->fields.downIconSprite;
            if ( !Instance )
              goto LABEL_62;
            v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
            GameObjectExtensions__SetLocalScale_34333164(v40, 0.8, 0LL);
          }
        }
        else if ( v24 )
        {
          Instance = (DataManager_o *)this->fields.upIconSprite;
          if ( !Instance )
            goto LABEL_62;
          Instance = (DataManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0LL);
          if ( !Instance )
            goto LABEL_62;
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, 0, 0LL);
          ServantClassCompatibilityIconComponent__SetIconImage(v36, this->fields.downIconSprite, v24, dispMode, 0, v37);
          v34 = this->fields.downIconSprite;
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


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassCompatibilityIconComponent__SetIconImage(
        ServantClassCompatibilityIconComponent_o *this,
        UISprite_o *icon,
        int32_t iconId,
        int32_t dispMode,
        bool advantage,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o **v16; // x8
  int32_t upIconSprite_high; // w1
  System_String_o **v18; // x8

  if ( (byte_4B15711 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_20458/*"img_arrow_2"*/, icon, *(_QWORD *)&iconId);
    sub_1BCA7E0(&StringLiteral_20460/*"img_arrow_4"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_20459/*"img_arrow_3"*/, v12, v13);
    this = (ServantClassCompatibilityIconComponent_o *)sub_1BCA7E0(&StringLiteral_20457/*"img_arrow_1"*/, v14, v15);
    byte_4B15711 = 1;
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
    v18 = (System_String_o **)&StringLiteral_20458/*"img_arrow_2"*/;
    if ( !advantage )
      v18 = (System_String_o **)&StringLiteral_20460/*"img_arrow_4"*/;
    UISprite__set_spriteName(icon, *v18, 0LL);
    if ( dispMode == 4 )
    {
      UIWidget__set_width((UIWidget_o *)icon, 22, 0LL);
      upIconSprite_high = 24;
      goto LABEL_17;
    }
    goto LABEL_14;
  }
  v16 = (System_String_o **)&StringLiteral_20457/*"img_arrow_1"*/;
  if ( !advantage )
    v16 = (System_String_o **)&StringLiteral_20459/*"img_arrow_3"*/;
  UISprite__set_spriteName(icon, *v16, 0LL);
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
    sub_1BCAA3C(this, icon);
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
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *Component_object; // x20
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4B15712 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_TweenPosition___, icon, method);
    this = (ServantClassCompatibilityIconComponent_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B15712 = 1;
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
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_TweenPosition___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
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
    sub_1BCAA3C(this, icon);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)icon, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, x, 0LL);
}