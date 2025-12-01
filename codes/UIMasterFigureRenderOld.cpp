void UIMasterFigureRenderOld___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  unsigned int v3; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Vector2; // x0
  struct UIMasterFigureRenderOld_StaticFields *static_fields; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  unsigned int v12; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v13; // x0
  struct UIMasterFigureRenderOld_StaticFields *v14; // x8
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  unsigned int v21; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v22; // x0
  struct UIMasterFigureRenderOld_StaticFields *v23; // x8
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4CC8CE5 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Array_AsReadOnly_Vector2___);
    sub_1C713B0(&UIMasterFigureRenderOld_TypeInfo);
    sub_1C713B0(&UnityEngine_Vector2___TypeInfo);
    byte_4CC8CE5 = 1;
  }
  *(_OWORD *)&UIMasterFigureRenderOld_TypeInfo->static_fields->MAIN_SIZE_X = xmmword_CEF680;
  v1 = sub_1C71458(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v1 )
    goto LABEL_17;
  v3 = *(_DWORD *)(v1 + 24);
  if ( !v3 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 32) = 0;
  if ( v3 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 40) = 0;
  if ( v3 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 48) = 0;
  Only_Vector2 = System_Array__AsReadOnly_Vector2_(
                   (UnityEngine_Vector2_array *)v1,
                   (const MethodInfo_32147B0 *)Method_System_Array_AsReadOnly_Vector2___);
  static_fields = UIMasterFigureRenderOld_TypeInfo->static_fields;
  static_fields->bodyTopTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)Only_Vector2;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&static_fields->bodyTopTable,
    (int32_t)Only_Vector2,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v1 = sub_1C71458(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v1 )
    goto LABEL_17;
  v12 = *(_DWORD *)(v1 + 24);
  if ( !v12
    || (*(_QWORD *)(v1 + 32) = 0x443F8000447F8000LL, v12 == 1)
    || (*(_QWORD *)(v1 + 40) = 0x443F8000447F8000LL, v12 <= 2) )
  {
LABEL_16:
    sub_1C71610(v1);
  }
  *(_QWORD *)(v1 + 48) = 0x443F8000447F8000LL;
  v13 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v1,
          (const MethodInfo_32147B0 *)Method_System_Array_AsReadOnly_Vector2___);
  v14 = UIMasterFigureRenderOld_TypeInfo->static_fields;
  v14->bodyTextureSizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v13;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v14->bodyTextureSizeTable, (int32_t)v13, v15, v16, v17, v18, v19, v20);
  v1 = sub_1C71458(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v1 )
LABEL_17:
    sub_1C71608(v1, v2);
  v21 = *(_DWORD *)(v1 + 24);
  if ( !v21 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 32) = 0x443F8000447F8000LL;
  if ( v21 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 40) = 0x443F8000447F8000LL;
  if ( v21 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v1 + 48) = 0x443F8000447F8000LL;
  v22 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v1,
          (const MethodInfo_32147B0 *)Method_System_Array_AsReadOnly_Vector2___);
  v23 = UIMasterFigureRenderOld_TypeInfo->static_fields;
  v23->bodySizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v22;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v23->bodySizeTable, (int32_t)v22, v24, v25, v26, v27, v28, v29);
}


void UIMasterFigureRenderOld___ctor(UIMasterFigureRenderOld_o *this, const MethodInfo *method)
{
  UITweenRenderer___ctor((UITweenRenderer_o *)this, 0);
}


System_String_array *UIMasterFigureRenderOld__GetAssetNameList(
        int32_t genderType,
        int32_t equipId,
        int32_t overWriteEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x19
  System_Int32_c *v8; // x0
  int32_t *v9; // x1
  DataManager_o *Instance; // x0
  __int64 v11; // x1
  Il2CppObject *Entity; // x0
  void **p_monitor; // x9
  __int64 v14; // x10
  Il2CppClass *klass; // x21
  void *v16; // x22
  int32_t v17; // w0
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_String_o *v25; // x21
  int v26; // w8
  Il2CppObject *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int v35; // [xsp+Ch] [xbp-44h] BYREF
  int32_t v36; // [xsp+18h] [xbp-38h] BYREF
  int32_t v37; // [xsp+1Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v38; // 0:x0.16

  if ( (byte_4CC8CDB & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C713B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_8947/*"MasterFigure/equip{0:D5}"*/);
    byte_4CC8CDB = 1;
  }
  v7 = sub_1C71458(string___TypeInfo, 1);
  if ( overWriteEquipId )
  {
    v8 = int_TypeInfo;
    v9 = &v37;
    v37 = overWriteEquipId;
    goto LABEL_26;
  }
  if ( equipId < 1 )
    goto LABEL_22;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_30;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_22;
  p_monitor = &Entity[4].monitor;
  if ( genderType == 2 )
    p_monitor = &Entity[5].monitor;
  v14 = 4;
  if ( genderType == 2 )
    v14 = 5;
  klass = Entity[v14].klass;
  v16 = *p_monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v38.fields.currentCryptoKey = klass;
  *(_QWORD *)&v38.fields.fakeValue = v16;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v38, 0);
  if ( v17 < 1 )
    goto LABEL_22;
  v36 = v17;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v36);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_8947/*"MasterFigure/equip{0:D5}"*/, v18, 0);
  if ( !v7 )
    goto LABEL_30;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_31;
  *(_QWORD *)(v7 + 32) = Instance;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)Instance, v19, v20, v21, v22, v23, v24);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_31;
  v25 = *(System_String_o **)(v7 + 32);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v25, 0) )
  {
LABEL_22:
    v8 = int_TypeInfo;
    if ( genderType == 2 )
      v26 = 2;
    else
      v26 = 1;
    v35 = v26;
    v9 = &v35;
LABEL_26:
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(v8, v9);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_8947/*"MasterFigure/equip{0:D5}"*/, v27, 0);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 24) )
      {
        *(_QWORD *)(v7 + 32) = Instance;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)Instance, v28, v29, v30, v31, v32, v33);
        return (System_String_array *)v7;
      }
LABEL_31:
      sub_1C71610(Instance);
    }
LABEL_30:
    sub_1C71608(Instance, v11);
  }
  return (System_String_array *)v7;
}


UnityEngine_Texture2D_o *UIMasterFigureRenderOld__GetBodyAlphaTexture(
        UIMasterFigureRenderOld_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  AssetData_o *v4; // x19

  if ( (byte_4CC8CE2 & 1) == 0 )
  {
    sub_1C713B0(&Method_AssetData_GetObject_Texture2D____78637000);
    this = (UIMasterFigureRenderOld_o *)sub_1C713B0(&StringLiteral_16632/*"a"*/);
    byte_4CC8CE2 = 1;
  }
  if ( !dataList )
    goto LABEL_9;
  if ( !LODWORD(dataList->max_length) )
    goto LABEL_10;
  this = (UIMasterFigureRenderOld_o *)dataList->m_Items[0];
  if ( !this )
    goto LABEL_9;
  this = (UIMasterFigureRenderOld_o *)AssetData__get_LastName((AssetData_o *)this, 0);
  if ( !LODWORD(dataList->max_length) )
LABEL_10:
    sub_1C71610(this);
  v4 = dataList->m_Items[0];
  this = (UIMasterFigureRenderOld_o *)System_String__Concat_64031724(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_16632/*"a"*/,
                                        0);
  if ( !v4 )
LABEL_9:
    sub_1C71608(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51560868(
                                      v4,
                                      (System_String_o *)this,
                                      (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000);
}


UnityEngine_Vector2_o UIMasterFigureRenderOld__GetBodySize(UIMasterFigureRenderOld_o *this, const MethodInfo *method)
{
  UIMasterFigureRenderOld_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodySizeTable; // x0
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CC8CDF & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1C713B0(&UIMasterFigureRenderOld_TypeInfo);
    byte_4CC8CDF = 1;
  }
  v3 = UIMasterFigureRenderOld_TypeInfo;
  if ( !UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo);
    v3 = UIMasterFigureRenderOld_TypeInfo;
  }
  bodySizeTable = v3->static_fields->bodySizeTable;
  if ( !bodySizeTable )
    sub_1C71608(0, method);
  Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
           bodySizeTable,
           this->fields.dispType,
           (const MethodInfo_3A25C90 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
  y = Item.fields.y;
  x = Item.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Texture2D_o *UIMasterFigureRenderOld__GetBodyTexture(
        UIMasterFigureRenderOld_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  AssetData_array *v3; // x19

  v3 = dataList;
  if ( (byte_4CC8CE1 & 1) == 0 )
  {
    this = (UIMasterFigureRenderOld_o *)sub_1C713B0(&Method_AssetData_GetObject_Texture2D____78637000);
    byte_4CC8CE1 = 1;
  }
  if ( !v3 )
    goto LABEL_9;
  if ( !LODWORD(v3->max_length) )
    goto LABEL_10;
  this = (UIMasterFigureRenderOld_o *)v3->m_Items[0];
  if ( !this )
    goto LABEL_9;
  this = (UIMasterFigureRenderOld_o *)AssetData__get_LastName((AssetData_o *)this, 0);
  if ( !LODWORD(v3->max_length) )
LABEL_10:
    sub_1C71610(this);
  dataList = (AssetData_array *)this;
  this = (UIMasterFigureRenderOld_o *)v3->m_Items[0];
  if ( !this )
LABEL_9:
    sub_1C71608(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__51560868(
                                      (AssetData_o *)this,
                                      (System_String_o *)dataList,
                                      (const MethodInfo_312C1A4 *)Method_AssetData_GetObject_Texture2D____78637000);
}


UnityEngine_Rect_o UIMasterFigureRenderOld__GetBodyUvRect(UIMasterFigureRenderOld_o *this, const MethodInfo *method)
{
  UIMasterFigureRenderOld_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodyTopTable; // x0
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o v6; // kr08_8
  struct UIMasterFigureRenderOld_StaticFields *static_fields; // x8
  float MAIN_SIZE_Y; // s5
  float MAIN_SIZE_X; // s4
  float v10; // s2
  float v11; // s0
  float v12; // s3
  float v13; // s1
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CC8CE0 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_1C713B0(&UIMasterFigureRenderOld_TypeInfo);
    byte_4CC8CE0 = 1;
  }
  v3 = UIMasterFigureRenderOld_TypeInfo;
  if ( !UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo);
    v3 = UIMasterFigureRenderOld_TypeInfo;
  }
  bodyTopTable = v3->static_fields->bodyTopTable;
  if ( !bodyTopTable
    || (Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
                 bodyTopTable,
                 this->fields.dispType,
                 (const MethodInfo_3A25C90 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__),
        (bodyTopTable = UIMasterFigureRenderOld_TypeInfo->static_fields->bodyTextureSizeTable) == 0) )
  {
    sub_1C71608(bodyTopTable, method);
  }
  v6 = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
         bodyTopTable,
         this->fields.dispType,
         (const MethodInfo_3A25C90 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
  static_fields = UIMasterFigureRenderOld_TypeInfo->static_fields;
  MAIN_SIZE_Y = (float)static_fields->MAIN_SIZE_Y;
  MAIN_SIZE_X = (float)static_fields->MAIN_SIZE_X;
  v10 = v6.fields.x / MAIN_SIZE_X;
  v11 = (float)(Item.fields.x + (float)((float)((float)((float)static_fields->BODY_SIZE_X - v6.fields.x) * 0.5) + 1.5))
      / MAIN_SIZE_X;
  v12 = v6.fields.y / MAIN_SIZE_Y;
  v13 = (float)((float)(Item.fields.y + (float)((float)((float)static_fields->BODY_SIZE_Y - v6.fields.y) + 1.5))
              / MAIN_SIZE_Y)
      + 0.25;
  result.fields.m_Height = v12;
  result.fields.m_Width = v10;
  result.fields.m_YMin = v13;
  result.fields.m_XMin = v11;
  return result;
}


System_String_array *UIMasterFigureRenderOld__GetEnemyAssetNameList(int32_t enemyFaceId, const MethodInfo *method)
{
  __int64 v3; // x20
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC8CDC & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&string___TypeInfo);
    sub_1C713B0(&StringLiteral_6038/*"EnemyMasterFigure/figure{0:D5}"*/);
    byte_4CC8CDC = 1;
  }
  v3 = sub_1C71458(string___TypeInfo, 1);
  v14 = enemyFaceId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v5 = System_String__Format((System_String_o *)StringLiteral_6038/*"EnemyMasterFigure/figure{0:D5}"*/, v4, 0);
  if ( !v3 )
    sub_1C71608(v5, v6);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C71610(v5);
  *(_QWORD *)(v3 + 32) = v5;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v5, v7, v8, v9, v10, v11, v12);
  return (System_String_array *)v3;
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFigureRenderOld__MoveAlpha(
        UIMasterFigureRenderOld_o *this,
        float duration,
        float alpha,
        const MethodInfo *method)
{
  long double v4; // q9
  long double v5; // q10
  long double v6; // q11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v10; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  *(float *)&v6 = this->fields.mColor.fields.r;
  *(float *)&v5 = this->fields.mColor.fields.g;
  *(float *)&v4 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UIMasterFigureRenderOld_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
      this,
      this->klass->vtable._39_SetTweenColor.method,
      v6,
      v5,
      v4,
      *(long double *)&alpha);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v10.fields.r = *(float *)&v6;
    v10.fields.g = *(float *)&v5;
    v10.fields.b = *(float *)&v4;
    v10.fields.a = alpha;
    TweenRendererColor__Begin(gameObject, duration, v10, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFigureRenderOld__MoveAlpha_44297936(
        UIMasterFigureRenderOld_o *this,
        float duration,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  long double v6; // q10
  long double v7; // q11
  long double v8; // q12
  long double v11; // q8
  UnityEngine_GameObject_o *gameObject; // x0
  TweenRendererColor_o *v15; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  UnityEngine_Color_o v30; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  v11 = *(long double *)&alpha;
  if ( (byte_4CC8CE3 & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC8CE3 = 1;
  }
  *(float *)&v8 = this->fields.mColor.fields.r;
  *(float *)&v7 = this->fields.mColor.fields.g;
  *(float *)&v6 = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UIMasterFigureRenderOld_o *, const MethodInfo *, System_String_o *, const MethodInfo *, long double, long double, long double, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
      this,
      this->klass->vtable._39_SetTweenColor.method,
      callbackFunc,
      method,
      v8,
      v7,
      v6,
      v11);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0);
    if ( v16 )
    {
      if ( !callbackObject )
        goto LABEL_18;
      UnityEngine_GameObject__SendMessage_71705976(callbackObject, callbackFunc, 0);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v30.fields.r = *(float *)&v8;
    v30.fields.g = *(float *)&v7;
    v30.fields.b = *(float *)&v6;
    v30.fields.a = *(float *)&v11;
    v15 = TweenRendererColor__Begin(gameObject, duration, v30, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
      if ( v16 )
      {
        if ( v15 )
        {
          v15->fields.eventReceiver = callbackObject;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v15->fields.eventReceiver,
            (int32_t)callbackObject,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
          v15->fields.callWhenFinished = callbackFunc;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&v15->fields.callWhenFinished,
            (int32_t)callbackFunc,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29);
          return;
        }
LABEL_18:
        sub_1C71608(v16, v17);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void UIMasterFigureRenderOld__SetAlpha(UIMasterFigureRenderOld_o *this, float alpha, const MethodInfo *method)
{
  long double v3; // q3

  *(float *)&v3 = this->fields.mColor.fields.r;
  ((void (__fastcall *)(UIMasterFigureRenderOld_o *, const MethodInfo *, long double, float, float, long double))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    v3,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    *(long double *)&alpha);
}


void UIMasterFigureRenderOld__SetCharacter(
        UIMasterFigureRenderOld_o *this,
        int32_t dispType,
        int32_t genderType,
        int32_t equipId,
        bool ignoreOriginalOffset,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v12; // x1
  Il2CppObject *Entity; // x0
  void **p_monitor; // x9
  __int64 v15; // x10
  Il2CppClass *klass; // x22
  void *v17; // x23
  int32_t v18; // w0
  int32_t v19; // w22
  Il2CppObject *v20; // x0
  System_String_o *v21; // x23
  int32x2_t v22; // d0
  unsigned __int64 zeroVector; // d0
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v25; // 0:x0.16

  if ( (byte_4CC8CDD & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_DataManager_GetMasterData_EquipImageMaster___);
    sub_1C713B0(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C713B0(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int__GetEntity__);
    sub_1C713B0(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C713B0(&StringLiteral_8947/*"MasterFigure/equip{0:D5}"*/);
    byte_4CC8CDD = 1;
  }
  this->fields.dispType = dispType;
  this->fields.genderType = genderType;
  this->fields.equipId = equipId;
  if ( equipId < 1 )
    goto LABEL_17;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_33;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_3408E80 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_17;
  p_monitor = &Entity[4].monitor;
  if ( genderType == 2 )
    p_monitor = &Entity[5].monitor;
  v15 = 4;
  if ( genderType == 2 )
    v15 = 5;
  klass = Entity[v15].klass;
  v17 = *p_monitor;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v25.fields.currentCryptoKey = klass;
  *(_QWORD *)&v25.fields.fakeValue = v17;
  v18 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_49297952(v25, 0);
  if ( v18 < 1 )
    goto LABEL_17;
  v19 = v18;
  v24 = v18;
  v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24);
  v21 = System_String__Format((System_String_o *)StringLiteral_8947/*"MasterFigure/equip{0:D5}"*/, v20, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__isExistAssetStorage(v21, 0) )
  {
LABEL_17:
    if ( genderType == 2 )
      v19 = 2;
    else
      v19 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EquipImageMaster___);
  if ( !Instance )
    goto LABEL_33;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v19,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int__GetEntity__);
  if ( this->fields.dispType == 2 )
  {
    if ( Instance )
    {
      v22.n64_u64[0] = *(unsigned __int64 *)((char *)&Instance[1].monitor + 4);
LABEL_31:
      zeroVector = vcvt_f32_s32(v22).n64_u64[0];
      goto LABEL_32;
    }
    goto LABEL_33;
  }
  if ( !ignoreOriginalOffset )
  {
    if ( Instance )
    {
      v22.n64_u64[0] = *(unsigned __int64 *)((char *)&Instance[1].klass + 4);
      goto LABEL_31;
    }
LABEL_33:
    sub_1C71608(Instance, v12);
  }
  if ( !byte_4CC0BE9 )
  {
    sub_1C713B0(&UnityEngine_Vector2_TypeInfo);
    byte_4CC0BE9 = 1;
  }
  zeroVector = (unsigned __int64)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
LABEL_32:
  this->fields.dispOffset = (struct UnityEngine_Vector2_o)zeroVector;
}


void UIMasterFigureRenderOld__SetEnemy(
        UIMasterFigureRenderOld_o *this,
        int32_t enemyBattleId,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CC8CDE & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EnemyMstBattleMaster___);
    sub_1C713B0(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__TryGetEntity__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC8CDE = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EnemyMstBattleMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               enemyBattleId,
                               (const MethodInfo_3408ECC *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !entity )
LABEL_9:
    sub_1C71608(Instance, v6);
  this->fields.dispOffset = (struct UnityEngine_Vector2_o)vcvt_f32_s32(*(int32x2_t *)((char *)&entity[2].klass + 4)).n64_u64[0];
}


void UIMasterFigureRenderOld__SetLayer(UIMasterFigureRenderOld_o *this, int32_t layer, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x1
  const MethodInfo *v8; // x3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C71608(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIMasterFigureRenderOld__SetLayer_44298468(this, transform, layer, v8);
  }
}


void UIMasterFigureRenderOld__SetLayer_44298468(
        UIMasterFigureRenderOld_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIMasterFigureRenderOld_o *v6; // x21
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int32_t *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  const MethodInfo *v18; // x3
  __int64 naturalAligment; // x10
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x19
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0

  v6 = this;
  if ( (byte_4CC8CE4 & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    this = (UIMasterFigureRenderOld_o *)sub_1C713B0(&UnityEngine_Transform_TypeInfo);
    byte_4CC8CE4 = 1;
  }
  if ( !tf
    || (this = (UIMasterFigureRenderOld_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
LABEL_33:
    sub_1C71608(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  if ( !Enumerator )
    sub_1C71608(0, v7);
  while ( 1 )
  {
    klass = Enumerator->klass;
    v10 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(Enumerator, *(_QWORD *)(v12 + 8))
        & 1) == 0 )
      break;
    v13 = Enumerator->klass;
    v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_17:
      v16 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       Enumerator,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_1C719A4(v17);
        goto LABEL_33;
      }
    }
    UIMasterFigureRenderOld__SetLayer_44298468(v6, v17, layer, v18);
  }
  v20 = sub_1C714EC(Enumerator, System_IDisposable_TypeInfo);
  if ( v20 )
  {
    v21 = *(_QWORD *)v20;
    v22 = v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v24 - 1) != System_IDisposable_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_28;
      }
      v25 = v21 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_28:
      v25 = sub_1C47738(v20, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
  }
}