void SpotEntity___ctor(SpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59714C4 & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_int___ctor__);
    byte_59714C4 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_3F0E518 *)Method_DataEntityBase_int___ctor__);
}


int32_t SpotEntity__CreatePrimaryKey(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


UnityEngine_Vector3_o SpotEntity__GetLocalPositionOnMapModel(SpotEntity_o *this, const MethodInfo *method)
{
  int32_t x; // s8
  int32_t y; // s9
  int32_t z; // w0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  x = this->fields.x;
  y = this->fields.y;
  z = SpotEntity__get_z(this, method);
  v5 = (float)x;
  v6 = (float)y;
  v7 = (float)z;
  result.fields.z = v7;
  result.fields.y = v6;
  result.fields.x = v5;
  return result;
}


System_String_o *SpotEntity__GetName(SpotEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool IsOverRideName; // w0
  System_String_o **p_name; // x8
  System_String_o *spotName; // [xsp+8h] [xbp-18h] BYREF

  spotName = 0;
  IsOverRideName = SpotEntity__IsOverRideName(this, &spotName, v2);
  p_name = &this->fields.name;
  if ( IsOverRideName )
    p_name = &spotName;
  return *p_name;
}


int32_t SpotEntity__GetPrioredImgId(SpotEntity_o *this, const MethodInfo *method)
{
  SpotImageEntity_array *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int max_length; // w8
  SpotImageEntity_array *v7; // x20
  __int64 v8; // x21
  int32_t *v9; // x24
  int32_t *p_imageId; // x8

  if ( (byte_59714C6 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SpotImageMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_59714C6 = 1;
  }
  Instance = (SpotImageEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (SpotImageEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotImageMaster___)) == 0
    || (Instance = SpotImageMaster__GetImageList((SpotImageMaster_o *)Instance, this->fields.id, v5)) == 0 )
  {
LABEL_16:
    sub_2213CDC(Instance, v4);
  }
  max_length = Instance->max_length;
  v7 = Instance;
  if ( max_length < 1 )
  {
LABEL_13:
    p_imageId = &this->fields.imageId;
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= max_length )
        sub_2213CE4(Instance);
      v9 = (int32_t *)v7->m_Items[v8];
      Instance = (SpotImageEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_47A2F30 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v9 || !Instance )
        goto LABEL_16;
      Instance = (SpotImageEntity_array *)QuestTree__CheckSpotCond(
                                            (QuestTree_o *)Instance,
                                            v9[4],
                                            v9[7],
                                            v9[8],
                                            v9[9],
                                            0);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_13;
    }
    p_imageId = v9 + 6;
  }
  return *p_imageId;
}


System_String_o *SpotEntity__GetWebViewLink(SpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59714C8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16221/*"WebViewLink"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59714C8 = 1;
  }
  return EntityScriptUtil__GetStringValue(
           this->fields.script,
           (System_String_o *)StringLiteral_16221/*"WebViewLink"*/,
           (System_String_o *)StringLiteral_1/*""*/,
           0);
}


bool SpotEntity__HasFlag(SpotEntity_o *this, int32_t flag, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_59714C5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_SpotAddMaster___);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_59714C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SpotAddMaster___)) == 0 )
  {
    sub_2213CDC(Instance, v6);
  }
  return (SpotAddMaster__GetPrioredID((SpotAddMaster_o *)Instance, 1, this->fields.id, this->fields.flag, 0) & flag) != 0;
}


bool SpotEntity__HasWebViewLink(SpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59714C7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16221/*"WebViewLink"*/);
    byte_59714C7 = 1;
  }
  return EntityScriptUtil__ScriptHasKey(this->fields.script, (System_String_o *)StringLiteral_16221/*"WebViewLink"*/, 0);
}


bool SpotEntity__IsHiddenInFolder(SpotEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SpotEntity__HasFlag(this, 64, v2);
}


bool SpotEntity__IsOverRideName(SpotEntity_o *this, System_String_o **spotName, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_59714C3 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SpotAddMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    byte_59714C3 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, spotName);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SpotAddMaster___);
  if ( !Master_object )
    sub_2213CDC(0, v6);
  return SpotAddMaster__TryGetOverwriteName((SpotAddMaster_o *)Master_object, spotName, this->fields.id, 0);
}


int32_t SpotEntity__getActiveCondType(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeCondType;
}


int32_t SpotEntity__getActiveTargetId(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeTargetId;
}


int32_t SpotEntity__getActiveTargetValue(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeTargetValue;
}


int32_t SpotEntity__getDispCondType1(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispCondType1;
}


int32_t SpotEntity__getDispCondType2(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispCondType2;
}


int32_t SpotEntity__getDispTargetId1(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetId1;
}


int32_t SpotEntity__getDispTargetId2(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetId2;
}


int32_t SpotEntity__getDispTargetValue1(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetValue1;
}


int32_t SpotEntity__getDispTargetValue2(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetValue2;
}


int32_t SpotEntity__getMapId(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}


int32_t SpotEntity__getSpotId(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t SpotEntity__get_z(SpotEntity_o *this, const MethodInfo *method)
{
  int v3; // w8
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59714C2 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMaster_SpotLayerMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    byte_59714C2 = 1;
  }
  v3 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v3 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.id,
                                    (const MethodInfo_3F10B80 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
LABEL_11:
    sub_2213CDC(Master_object, v5);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool SpotEntity__isInJoinSpot(SpotEntity_o *this, int32_t spotId, const MethodInfo *method)
{
  struct System_Int32_array *joinSpotIds; // x8
  int max_length; // w9
  int v5; // w10
  int32_t v6; // w12

  if ( this->fields.id == spotId )
  {
    LOBYTE(this) = 1;
  }
  else
  {
    joinSpotIds = this->fields.joinSpotIds;
    if ( !joinSpotIds )
      sub_2213CDC(this, *(_QWORD *)&spotId);
    max_length = joinSpotIds->max_length;
    if ( max_length < 1 )
    {
      LOBYTE(this) = 0;
    }
    else
    {
      v5 = 0;
      do
      {
        if ( max_length == v5 )
          sub_2213CE4(this);
        v6 = joinSpotIds->m_Items[v5];
        this = (SpotEntity_o *)(v6 == spotId);
        if ( v6 == spotId )
          break;
      }
      while ( (max_length & ~(max_length >> 31)) - 1 != v5++ );
    }
  }
  return (char)this;
}