void UIMasterFigureRenderOld___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  __int64 v2; // x0
  __int64 v3; // x1
  unsigned int v4; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *Only_Vector2; // x0
  struct UIMasterFigureRenderOld_StaticFields *static_fields; // x8
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  unsigned int v13; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v14; // x0
  struct UIMasterFigureRenderOld_StaticFields *v15; // x8
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  unsigned int v22; // w8
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *v23; // x0
  struct UIMasterFigureRenderOld_StaticFields *v24; // x8
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7

  if ( (byte_5972187 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_AsReadOnly_Vector2___);
    sub_2213A60(&UIMasterFigureRenderOld_TypeInfo);
    sub_2213A60(&UnityEngine_Vector2___TypeInfo);
    byte_5972187 = 1;
  }
  v1 = UnityEngine_Vector2___TypeInfo;
  *(_OWORD *)&UIMasterFigureRenderOld_TypeInfo->static_fields->MAIN_SIZE_X = xmmword_E9CAF0;
  v2 = sub_2213B20(v1, 3);
  if ( !v2 )
    goto LABEL_17;
  v4 = *(_DWORD *)(v2 + 24);
  if ( !v4 )
    goto LABEL_16;
  *(_QWORD *)(v2 + 32) = 0;
  if ( v4 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v2 + 40) = 0;
  if ( v4 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v2 + 48) = 0;
  Only_Vector2 = System_Array__AsReadOnly_Vector2_(
                   (UnityEngine_Vector2_array *)v2,
                   (const MethodInfo_399276C *)Method_System_Array_AsReadOnly_Vector2___);
  static_fields = UIMasterFigureRenderOld_TypeInfo->static_fields;
  static_fields->bodyTopTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)Only_Vector2;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->bodyTopTable,
    (int32_t)Only_Vector2,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  v2 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v2 )
    goto LABEL_17;
  v13 = *(_DWORD *)(v2 + 24);
  if ( !v13
    || (*(_QWORD *)(v2 + 32) = 0x443F8000447F8000LL, v13 == 1)
    || (*(_QWORD *)(v2 + 40) = 0x443F8000447F8000LL, v13 <= 2) )
  {
LABEL_16:
    sub_2213CE4(v2);
  }
  *(_QWORD *)(v2 + 48) = 0x443F8000447F8000LL;
  v14 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v2,
          (const MethodInfo_399276C *)Method_System_Array_AsReadOnly_Vector2___);
  v15 = UIMasterFigureRenderOld_TypeInfo->static_fields;
  v15->bodyTextureSizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v15->bodyTextureSizeTable,
    (int32_t)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v2 = sub_2213B20(UnityEngine_Vector2___TypeInfo, 3);
  if ( !v2 )
LABEL_17:
    sub_2213CDC(v2, v3);
  v22 = *(_DWORD *)(v2 + 24);
  if ( !v22 )
    goto LABEL_16;
  *(_QWORD *)(v2 + 32) = 0x443F8000447F8000LL;
  if ( v22 == 1 )
    goto LABEL_16;
  *(_QWORD *)(v2 + 40) = 0x443F8000447F8000LL;
  if ( v22 <= 2 )
    goto LABEL_16;
  *(_QWORD *)(v2 + 48) = 0x443F8000447F8000LL;
  v23 = System_Array__AsReadOnly_Vector2_(
          (UnityEngine_Vector2_array *)v2,
          (const MethodInfo_399276C *)Method_System_Array_AsReadOnly_Vector2___);
  v24 = UIMasterFigureRenderOld_TypeInfo->static_fields;
  v24->bodySizeTable = (struct System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *)v23;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v24->bodySizeTable, (int32_t)v23, v25, v26, v27, v28, v29, v30);
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
  int32_t *v8; // x1
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  Il2CppObject *Entity; // x0
  __int64 v12; // x1
  __int64 v13; // x9
  __int64 v14; // x10
  __int64 v15; // x22
  Il2CppClass *klass; // x21
  int32_t v17; // w0
  Il2CppObject *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  __int64 v25; // x1
  System_String_o *v26; // x21
  int v27; // w9
  Il2CppObject *v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  int v36; // [xsp+4h] [xbp-3Ch] BYREF
  int32_t v37; // [xsp+8h] [xbp-38h] BYREF
  int32_t v38; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16

  if ( (byte_597217D & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_9314/*"MasterFigure/equip{0:D5}"*/);
    byte_597217D = 1;
  }
  v7 = sub_2213B20(string___TypeInfo, 1);
  if ( overWriteEquipId )
  {
    v8 = &v38;
    v38 = overWriteEquipId;
    goto LABEL_25;
  }
  if ( equipId < 1 )
    goto LABEL_21;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_29;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_21;
  v13 = 72;
  if ( genderType == 2 )
  {
    v13 = 88;
    v14 = 5;
  }
  else
  {
    v14 = 4;
  }
  v15 = *(__int64 *)((char *)&Entity->klass + v13);
  klass = Entity[v14].klass;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v12);
  *(_QWORD *)&v39.fields.currentCryptoKey = klass;
  *(_QWORD *)&v39.fields.fakeValue = v15;
  v17 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v39, 0);
  if ( v17 < 1 )
    goto LABEL_21;
  v37 = v17;
  v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v37);
  Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_9314/*"MasterFigure/equip{0:D5}"*/, v18, 0);
  if ( !v7 )
    goto LABEL_29;
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_30;
  *(_QWORD *)(v7 + 32) = Instance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)Instance, v19, v20, v21, v22, v23, v24);
  if ( !*(_DWORD *)(v7 + 24) )
    goto LABEL_30;
  v26 = *(System_String_o **)(v7 + 32);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v25);
  if ( !AssetManager__isExistAssetStorage(v26, 0) )
  {
LABEL_21:
    if ( genderType == 2 )
      v27 = 2;
    else
      v27 = 1;
    v8 = &v36;
    v36 = v27;
LABEL_25:
    v28 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, v8);
    Instance = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_9314/*"MasterFigure/equip{0:D5}"*/, v28, 0);
    if ( v7 )
    {
      if ( *(_DWORD *)(v7 + 24) )
      {
        *(_QWORD *)(v7 + 32) = Instance;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)Instance, v29, v30, v31, v32, v33, v34);
        return (System_String_array *)v7;
      }
LABEL_30:
      sub_2213CE4(Instance);
    }
LABEL_29:
    sub_2213CDC(Instance, v10);
  }
  return (System_String_array *)v7;
}


UnityEngine_Texture2D_o *UIMasterFigureRenderOld__GetBodyAlphaTexture(
        UIMasterFigureRenderOld_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  AssetData_o *v4; // x19

  if ( (byte_5972184 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    this = (UIMasterFigureRenderOld_o *)sub_2213A60(&StringLiteral_17306/*"a"*/);
    byte_5972184 = 1;
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
    sub_2213CE4(this);
  v4 = dataList->m_Items[0];
  this = (UIMasterFigureRenderOld_o *)System_String__Concat_75651716(
                                        (System_String_o *)this,
                                        (System_String_o *)StringLiteral_17306/*"a"*/,
                                        0);
  if ( !v4 )
LABEL_9:
    sub_2213CDC(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58532980(
                                      v4,
                                      (System_String_o *)this,
                                      (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
}


UnityEngine_Vector2_o UIMasterFigureRenderOld__GetBodySize(UIMasterFigureRenderOld_o *this, const MethodInfo *method)
{
  UIMasterFigureRenderOld_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodySizeTable; // x0
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_5972181 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_2213A60(&UIMasterFigureRenderOld_TypeInfo);
    byte_5972181 = 1;
  }
  v3 = UIMasterFigureRenderOld_TypeInfo;
  if ( !*(&UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo, method);
    v3 = UIMasterFigureRenderOld_TypeInfo;
  }
  bodySizeTable = v3->static_fields->bodySizeTable;
  if ( !bodySizeTable )
    sub_2213CDC(0, method);
  Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
           bodySizeTable,
           this->fields.dispType,
           (const MethodInfo_474D048 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
  result.fields.y = Item.fields.y;
  result.fields.x = Item.fields.x;
  return result;
}


UnityEngine_Texture2D_o *UIMasterFigureRenderOld__GetBodyTexture(
        UIMasterFigureRenderOld_o *this,
        AssetData_array *dataList,
        const MethodInfo *method)
{
  AssetData_array *v3; // x19

  v3 = dataList;
  if ( (byte_5972183 & 1) == 0 )
  {
    this = (UIMasterFigureRenderOld_o *)sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    byte_5972183 = 1;
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
    sub_2213CE4(this);
  dataList = (AssetData_array *)this;
  this = (UIMasterFigureRenderOld_o *)v3->m_Items[0];
  if ( !this )
LABEL_9:
    sub_2213CDC(this, dataList);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_object__58532980(
                                      (AssetData_o *)this,
                                      (System_String_o *)dataList,
                                      (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
}


UnityEngine_Rect_o UIMasterFigureRenderOld__GetBodyUvRect(UIMasterFigureRenderOld_o *this, const MethodInfo *method)
{
  UIMasterFigureRenderOld_c *v3; // x0
  System_Collections_ObjectModel_ReadOnlyCollection_Vector2__o *bodyTopTable; // x0
  UnityEngine_Vector2_o Item; // kr00_8
  UnityEngine_Vector2_o v6; // kr08_8
  struct UIMasterFigureRenderOld_StaticFields *static_fields; // x8
  float MAIN_SIZE_Y; // s5
  float MAIN_SIZE_X; // s3
  float v10; // s4
  UnityEngine_Rect_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5972182 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
    sub_2213A60(&UIMasterFigureRenderOld_TypeInfo);
    byte_5972182 = 1;
  }
  v3 = UIMasterFigureRenderOld_TypeInfo;
  if ( !*(&UIMasterFigureRenderOld_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(UIMasterFigureRenderOld_TypeInfo, method);
    v3 = UIMasterFigureRenderOld_TypeInfo;
  }
  bodyTopTable = v3->static_fields->bodyTopTable;
  if ( !bodyTopTable
    || (Item = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
                 bodyTopTable,
                 this->fields.dispType,
                 (const MethodInfo_474D048 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__),
        (bodyTopTable = UIMasterFigureRenderOld_TypeInfo->static_fields->bodyTextureSizeTable) == 0) )
  {
    sub_2213CDC(bodyTopTable, method);
  }
  v6 = System_Collections_ObjectModel_ReadOnlyCollection_Vector2___get_Item(
         bodyTopTable,
         this->fields.dispType,
         (const MethodInfo_474D048 *)Method_System_Collections_ObjectModel_ReadOnlyCollection_Vector2__get_Item__);
  static_fields = UIMasterFigureRenderOld_TypeInfo->static_fields;
  MAIN_SIZE_Y = (float)static_fields->MAIN_SIZE_Y;
  MAIN_SIZE_X = (float)static_fields->MAIN_SIZE_X;
  v10 = (float)(Item.fields.x + (float)((float)((float)((float)static_fields->BODY_SIZE_X - v6.fields.x) * 0.5) + 1.5))
      / MAIN_SIZE_X;
  result.fields.m_Width = v6.fields.x / MAIN_SIZE_X;
  result.fields.m_Height = v6.fields.y / MAIN_SIZE_Y;
  result.fields.m_YMin = (float)((float)(Item.fields.y
                                       + (float)((float)((float)static_fields->BODY_SIZE_Y - v6.fields.y) + 1.5))
                               / MAIN_SIZE_Y)
                       + 0.25;
  result.fields.m_XMin = v10;
  return result;
}


System_String_array *UIMasterFigureRenderOld__GetEnemyAssetNameList(int32_t enemyFaceId, const MethodInfo *method)
{
  __int64 v3; // x19
  Il2CppObject *v4; // x0
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_597217E & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_6303/*"EnemyMasterFigure/figure{0:D5}"*/);
    byte_597217E = 1;
  }
  v3 = sub_2213B20(string___TypeInfo, 1);
  v14 = enemyFaceId;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v14);
  v5 = System_String__Format((System_String_o *)StringLiteral_6303/*"EnemyMasterFigure/figure{0:D5}"*/, v4, 0);
  if ( !v3 )
    sub_2213CDC(v5, v6);
  if ( !*(_DWORD *)(v3 + 24) )
    sub_2213CE4(v5);
  *(_QWORD *)(v3 + 32) = v5;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v5, v7, v8, v9, v10, v11, v12);
  return (System_String_array *)v3;
}


void UIMasterFigureRenderOld__MoveAlpha(
        UIMasterFigureRenderOld_o *this,
        float duration,
        float alpha,
        const MethodInfo *method)
{
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_Color_o v10; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  b = this->fields.mColor.fields.b;
  r = this->fields.mColor.fields.r;
  g = this->fields.mColor.fields.g;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UIMasterFigureRenderOld_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
      this,
      this->klass->vtable._39_SetTweenColor.method,
      this->fields.mColor.fields.r,
      this->fields.mColor.fields.g,
      this->fields.mColor.fields.b,
      alpha);
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v10.fields.r = r;
    v10.fields.g = g;
    v10.fields.b = b;
    v10.fields.a = alpha;
    TweenRendererColor__Begin(gameObject, duration, v10, 0);
  }
}


void UIMasterFigureRenderOld__MoveAlpha_51018228(
        UIMasterFigureRenderOld_o *this,
        float duration,
        float alpha,
        UnityEngine_GameObject_o *callbackObject,
        System_String_o *callbackFunc,
        const MethodInfo *method)
{
  float g; // s11
  float r; // s12
  float b; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  TweenRendererColor_o *v16; // x21
  __int64 v17; // x1
  _BOOL8 v18; // x0
  __int64 v19; // x1
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  __int64 v32; // x1
  UnityEngine_Color_o v33; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_5972185 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5972185 = 1;
  }
  r = this->fields.mColor.fields.r;
  g = this->fields.mColor.fields.g;
  b = this->fields.mColor.fields.b;
  if ( duration <= 0.0 )
  {
    ((void (__fastcall *)(UIMasterFigureRenderOld_o *, const MethodInfo *, System_String_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
      this,
      this->klass->vtable._39_SetTweenColor.method,
      callbackFunc,
      method,
      this->fields.mColor.fields.r,
      this->fields.mColor.fields.g,
      this->fields.mColor.fields.b,
      alpha);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32);
    v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0);
    if ( v18 )
    {
      if ( !callbackObject )
        goto LABEL_18;
      UnityEngine_GameObject__SendMessage_83438096(callbackObject, callbackFunc, 0);
    }
  }
  else
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v33.fields.r = r;
    v33.fields.g = g;
    v33.fields.b = b;
    v33.fields.a = alpha;
    v16 = TweenRendererColor__Begin(gameObject, duration, v33, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)callbackObject, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0);
      if ( v18 )
      {
        if ( v16 )
        {
          v16->fields.eventReceiver = callbackObject;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v16->fields.eventReceiver,
            (int32_t)callbackObject,
            v20,
            v21,
            v22,
            v23,
            v24,
            v25);
          v16->fields.callWhenFinished = callbackFunc;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v16->fields.callWhenFinished,
            (int32_t)callbackFunc,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31);
          return;
        }
LABEL_18:
        sub_2213CDC(v18, v19);
      }
    }
  }
}


void UIMasterFigureRenderOld__SetAlpha(UIMasterFigureRenderOld_o *this, float alpha, const MethodInfo *method)
{
  ((void (__fastcall *)(UIMasterFigureRenderOld_o *, const MethodInfo *, float, float, float, float))this->klass->vtable._39_SetTweenColor.methodPtr)(
    this,
    this->klass->vtable._39_SetTweenColor.method,
    this->fields.mColor.fields.r,
    this->fields.mColor.fields.g,
    this->fields.mColor.fields.b,
    alpha);
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
  __int64 v14; // x1
  __int64 v15; // x9
  __int64 v16; // x10
  __int64 v17; // x23
  Il2CppClass *klass; // x22
  int32_t v19; // w0
  int32_t v20; // w22
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x23
  int32x2_t v24; // d0
  unsigned __int64 zeroVector; // d0
  int32_t v26; // [xsp+Ch] [xbp-34h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_597217F & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_EquipImageMaster___);
    sub_2213A60(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_2213A60(&Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int__GetEntity__);
    sub_2213A60(&Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
    sub_2213A60(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&StringLiteral_9314/*"MasterFigure/equip{0:D5}"*/);
    byte_597217F = 1;
  }
  this->fields.dispType = dispType;
  this->fields.genderType = genderType;
  this->fields.equipId = equipId;
  if ( equipId < 1 )
    goto LABEL_16;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !Instance )
    goto LABEL_32;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             equipId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_EquipMaster__EquipEntity__int__GetEntity__);
  if ( !Entity )
    goto LABEL_16;
  v15 = 72;
  if ( genderType == 2 )
  {
    v15 = 88;
    v16 = 5;
  }
  else
  {
    v16 = 4;
  }
  v17 = *(__int64 *)((char *)&Entity->klass + v15);
  klass = Entity[v16].klass;
  if ( !*(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v14);
  *(_QWORD *)&v27.fields.currentCryptoKey = klass;
  *(_QWORD *)&v27.fields.fakeValue = v17;
  v19 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_55997068(v27, 0);
  if ( v19 < 1 )
    goto LABEL_16;
  v20 = v19;
  v26 = v19;
  v21 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v26);
  v23 = System_String__Format((System_String_o *)StringLiteral_9314/*"MasterFigure/equip{0:D5}"*/, v21, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
  if ( !AssetManager__isExistAssetStorage(v23, 0) )
  {
LABEL_16:
    if ( genderType == 2 )
      v20 = 2;
    else
      v20 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EquipImageMaster___);
  if ( !Instance )
    goto LABEL_32;
  Instance = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               v20,
               (const MethodInfo_3F10B30 *)Method_DataMasterBase_EquipImageMaster__EquipImageEntity__int__GetEntity__);
  if ( this->fields.dispType == 2 )
  {
    if ( Instance )
    {
      v24.n64_u64[0] = *(unsigned __int64 *)((char *)&Instance[1].monitor + 4);
LABEL_30:
      zeroVector = vcvt_f32_s32(v24).n64_u64[0];
      goto LABEL_31;
    }
    goto LABEL_32;
  }
  if ( !ignoreOriginalOffset )
  {
    if ( Instance )
    {
      v24.n64_u64[0] = *(unsigned __int64 *)((char *)&Instance[1].klass + 4);
      goto LABEL_30;
    }
LABEL_32:
    sub_2213CDC(Instance, v12);
  }
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  zeroVector = (unsigned __int64)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
LABEL_31:
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

  if ( (byte_5972180 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EnemyMstBattleMaster___);
    sub_2213A60(&Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5972180 = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_9;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EnemyMstBattleMaster___);
  if ( !Instance )
    goto LABEL_9;
  Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               &entity,
                               enemyBattleId,
                               (const MethodInfo_3F10B80 *)Method_DataMasterBase_EnemyMstBattleMaster__EnemyMstBattleEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Instance & 1) == 0 )
    return;
  if ( !entity )
LABEL_9:
    sub_2213CDC(Instance, v6);
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
    sub_2213CDC(0, v6);
  if ( UnityEngine_GameObject__get_layer(gameObject, 0) != layer )
  {
    transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    UIMasterFigureRenderOld__SetLayer_51018752(this, transform, layer, v8);
  }
}


void UIMasterFigureRenderOld__SetLayer_51018752(
        UIMasterFigureRenderOld_o *this,
        UnityEngine_Transform_o *tf,
        int32_t layer,
        const MethodInfo *method)
{
  UIMasterFigureRenderOld_o *v6; // x20
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Transform_o *v17; // x0
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  __int64 naturalAligment; // x10
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x20
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  System_Collections_IEnumerator_o *v27; // [xsp+28h] [xbp-38h]

  v6 = this;
  if ( (byte_5972186 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    this = (UIMasterFigureRenderOld_o *)sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_5972186 = 1;
  }
  if ( !tf
    || (this = (UIMasterFigureRenderOld_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)tf, 0)) == 0 )
  {
    sub_2213CDC(this, tf);
  }
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, layer, 0);
  Enumerator = UnityEngine_Transform__GetEnumerator(tf, 0);
  v27 = Enumerator;
  while ( 1 )
  {
    if ( !v27 )
      goto LABEL_34;
    klass = v27->klass;
    v10 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_11;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_11:
      v12 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(v27, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = v27->klass;
    v14 = *(unsigned __int16 *)&v27->klass->_2.rank;
    if ( *(_WORD *)&v27->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_18;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_18:
      v16 = sub_224BC3C(v27, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Transform_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       v27,
                                       *(_QWORD *)(v16 + 8));
    if ( v17 )
    {
      naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
      if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
        || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
      {
        sub_221405C(v17, UnityEngine_Transform_TypeInfo, v18);
LABEL_34:
        sub_2213CDC(Enumerator, v8);
      }
    }
    UIMasterFigureRenderOld__SetLayer_51018752(v6, v17, layer, v19);
  }
  v21 = sub_2213BB4(v27, System_IDisposable_TypeInfo);
  if ( v21 )
  {
    v22 = *(_QWORD *)v21;
    v23 = v21;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v25 - 1) != System_IDisposable_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_29;
      }
      v26 = v22 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_29:
      v26 = sub_224BC3C(v21, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v26)(v23, *(_QWORD *)(v26 + 8));
  }
}