void __fastcall ServantClassIconComponent___ctor(ServantClassIconComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantClassIconComponent__Clear(ServantClassIconComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v9; // x1
  UISprite_o *v10; // x0
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *nameLabel; // x20

  if ( (byte_42E9C8D & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42E9C8D = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v10 = this->fields.iconSprite;
    if ( !v10 )
      goto LABEL_22;
    UISprite__set_spriteName(v10, 0LL, 0LL);
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
  {
    v10 = this->fields.nameSprite;
    if ( !v10 )
      goto LABEL_22;
    UISprite__set_spriteName(v10, 0LL, 0LL);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    v10 = (UISprite_o *)this->fields.nameLabel;
    if ( v10 )
    {
      UILabel__set_text((UILabel_o *)v10, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      return;
    }
LABEL_22:
    sub_B5D69C(v10, v9);
  }
}


int32_t __fastcall ServantClassIconComponent__GetIconSpriteScaledWidth(
        ServantClassIconComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *transform; // x0
  int m_CachedPtr; // w19
  float v10; // s0

  if ( (byte_42E9C93 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E9C93 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(iconSprite, 0LL, 0LL) )
    return 0;
  transform = (UnityEngine_Component_o *)this->fields.iconSprite;
  if ( !transform
    || (m_CachedPtr = transform[6].fields.m_CachedPtr,
        (transform = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(transform, 0LL)) == 0LL) )
  {
    sub_B5D69C(transform, v6);
  }
  v10 = COERCE_FLOAT(UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)transform, 0LL))
      * (float)m_CachedPtr;
  return UnityEngine_Mathf__FloorToInt(v10, 0LL);
}


void __fastcall ServantClassIconComponent__Set(
        ServantClassIconComponent_o *this,
        int32_t classId,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  ServantClassIconComponent__SetImage(this, classId, 2, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__SetColor(
        ServantClassIconComponent_o *this,
        UnityEngine_Color_o col,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Object_o *iconSprite; // x20
  __int64 v11; // x1
  UIWidget_o *v12; // x0
  UnityEngine_Object_o *nameSprite; // x20
  UnityEngine_Object_o *nameLabel; // x20
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = col.fields.a;
  b = col.fields.b;
  g = col.fields.g;
  r = col.fields.r;
  if ( (byte_42E9C92 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v3, v4);
    byte_42E9C92 = 1;
  }
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.iconSprite;
    if ( !v12 )
      goto LABEL_22;
    v15.fields.r = r;
    v15.fields.g = g;
    v15.fields.b = b;
    v15.fields.a = a;
    UIWidget__set_color(v12, v15, 0LL);
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.nameSprite;
    if ( !v12 )
      goto LABEL_22;
    v16.fields.r = r;
    v16.fields.g = g;
    v16.fields.b = b;
    v16.fields.a = a;
    UIWidget__set_color(v12, v16, 0LL);
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    v12 = (UIWidget_o *)this->fields.nameLabel;
    if ( v12 )
    {
      v17.fields.b = b;
      v17.fields.a = a;
      v17.fields.r = r;
      v17.fields.g = g;
      UIWidget__set_color(v12, v17, 0LL);
      return;
    }
LABEL_22:
    sub_B5D69C(v12, v11);
  }
}


void __fastcall ServantClassIconComponent__SetImage(
        ServantClassIconComponent_o *this,
        int32_t classId,
        int32_t frameType,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  DataManager_o *Instance; // x0
  __int64 v23; // x1
  WarEntity_o *Entity; // x0
  UnityEngine_Object_o *iconSprite; // x22
  WarEntity_o *v26; // x21
  UISprite_o *v27; // x22
  int32_t longName_high; // w23
  UnityEngine_Object_o *nameSprite; // x22
  UISprite_o *v30; // x22
  int32_t v31; // w23
  UnityEngine_Object_o *nameLabel; // x20
  System_String_o *age; // x1

  if ( (byte_42E9C91 & 1) == 0 )
  {
    sub_B5D5C4(&AtlasManager_TypeInfo, classId, frameType, method);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantClassMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v10, v11, v12);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_1/*""*/, v19, v20, v21);
    byte_42E9C91 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantClassMaster___);
  if ( !Instance )
    goto LABEL_38;
  Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
             (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
             classId,
             (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
  iconSprite = (UnityEngine_Object_o *)this->fields.iconSprite;
  v26 = Entity;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(iconSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v27 = this->fields.iconSprite;
    if ( v26 )
    {
      longName_high = HIDWORD(v26->fields.longName);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetClassIcon(v27, longName_high, frameType, 0LL);
    }
    else
    {
      if ( !v27 )
        goto LABEL_38;
      UISprite__set_spriteName(this->fields.iconSprite, 0LL, 0LL);
    }
  }
  nameSprite = (UnityEngine_Object_o *)this->fields.nameSprite;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  Instance = (DataManager_o *)UnityEngine_Object__op_Inequality(nameSprite, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    v30 = this->fields.nameSprite;
    if ( v26 )
    {
      v31 = HIDWORD(v26->fields.longName);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__SetClassTextIcon(v30, v31, frameType, 0LL);
    }
    else
    {
      if ( !v30 )
        goto LABEL_38;
      UISprite__set_spriteName(this->fields.nameSprite, 0LL, 0LL);
    }
  }
  nameLabel = (UnityEngine_Object_o *)this->fields.nameLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(nameLabel, 0LL, 0LL) )
  {
    Instance = (DataManager_o *)this->fields.nameLabel;
    if ( v26 )
    {
      if ( Instance )
      {
        age = v26->fields.age;
LABEL_37:
        UILabel__set_text((UILabel_o *)Instance, age, 0LL);
        return;
      }
    }
    else if ( Instance )
    {
      age = (System_String_o *)StringLiteral_1/*""*/;
      goto LABEL_37;
    }
LABEL_38:
    sub_B5D69C(Instance, v23);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__SetWithClassOverWrite(
        ServantClassIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t classId,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  DataManager_o *Instance; // x0
  __int64 v13; // x1
  int32_t FrameType_30842504; // w2
  const MethodInfo *v15; // x3

  if ( (byte_42E9C90 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, svtId, limitCount, *(_QWORD *)&classId);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9, v10, v11);
    byte_42E9C90 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v13);
  }
  FrameType_30842504 = ServantExceedMaster__GetFrameType_30842504(
                         (ServantExceedMaster_o *)Instance,
                         svtId,
                         limitCount,
                         0,
                         0LL);
  ServantClassIconComponent__SetImage(this, classId, FrameType_30842504, v15);
}


void __fastcall ServantClassIconComponent__Set_27486708(
        ServantClassIconComponent_o *this,
        int32_t classId,
        int32_t rarity,
        const MethodInfo *method)
{
  int32_t FrameTypeImage; // w2
  const MethodInfo *v8; // x3

  if ( (byte_42E9C8E & 1) == 0 )
  {
    sub_B5D5C4(&Rarity_TypeInfo, classId, rarity, method);
    byte_42E9C8E = 1;
  }
  if ( (BYTE3(Rarity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Rarity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Rarity_TypeInfo);
  FrameTypeImage = Rarity__getFrameTypeImage(rarity, 0, 0LL);
  ServantClassIconComponent__SetImage(this, classId, FrameTypeImage, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantClassIconComponent__Set_27486844(
        ServantClassIconComponent_o *this,
        int32_t svtId,
        int32_t limitCount,
        int32_t exceedCount,
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
  DataManager_o *Instance; // x0
  __int64 v19; // x1
  WarEntity_o *Entity; // x23
  const MethodInfo *v21; // x3

  if ( (byte_42E9C8F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantExceedMaster___, svtId, limitCount, *(_QWORD *)&exceedCount);
    sub_B5D5C4(&Method_DataManager_GetMasterData_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15, v16, v17);
    byte_42E9C8F = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantMaster___)) == 0LL
    || (Entity = DataMasterBase_WarMaster__WarEntity__int___GetEntity(
                   (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
                   svtId,
                   (const MethodInfo_23FAE10 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_ServantExceedMaster___)) == 0LL
    || (Instance = (DataManager_o *)ServantExceedMaster__GetFrameType_30842504(
                                      (ServantExceedMaster_o *)Instance,
                                      svtId,
                                      limitCount,
                                      exceedCount,
                                      0LL),
        !Entity) )
  {
    sub_B5D69C(Instance, v19);
  }
  ServantClassIconComponent__SetImage(this, Entity->fields.startType, (int32_t)Instance, v21);
}