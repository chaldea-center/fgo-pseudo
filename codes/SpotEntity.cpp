void __fastcall SpotEntity___ctor(SpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0A6F & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B0A6F = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


void __fastcall SpotEntity___ctor_26176796(SpotEntity_o *this, SpotEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *name; // x1
  struct System_String_o *closedMessage; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  struct System_Int32_array *joinSpotIds; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_42B0A70 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B0A70 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B52A5C(v5, v6);
  this->fields.id = cSrc->fields.id;
  this->fields.mapId = cSrc->fields.mapId;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B52920((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  this->fields.imageId = cSrc->fields.imageId;
  this->fields.x = cSrc->fields.x;
  this->fields.y = cSrc->fields.y;
  this->fields.nameOfsX = cSrc->fields.nameOfsX;
  this->fields.nameOfsY = cSrc->fields.nameOfsY;
  this->fields.dispCondType1 = cSrc->fields.dispCondType1;
  this->fields.dispTargetId1 = cSrc->fields.dispTargetId1;
  this->fields.dispTargetValue1 = cSrc->fields.dispTargetValue1;
  this->fields.dispCondType2 = cSrc->fields.dispCondType2;
  this->fields.dispTargetId2 = cSrc->fields.dispTargetId2;
  this->fields.dispTargetValue2 = cSrc->fields.dispTargetValue2;
  this->fields.activeCondType = cSrc->fields.activeCondType;
  this->fields.activeTargetId = cSrc->fields.activeTargetId;
  this->fields.activeTargetValue = cSrc->fields.activeTargetValue;
  closedMessage = cSrc->fields.closedMessage;
  this->fields.closedMessage = closedMessage;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closedMessage,
    (System_Int32_array **)closedMessage,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  joinSpotIds = cSrc->fields.joinSpotIds;
  this->fields.joinSpotIds = joinSpotIds;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.joinSpotIds,
    (System_Int32_array **)joinSpotIds,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  this->fields.flag = cSrc->fields.flag;
}


int32_t __fastcall SpotEntity__CreatePrimaryKey(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


UnityEngine_Vector3_o __fastcall SpotEntity__GetLocalPositionOnMapModel(SpotEntity_o *this, const MethodInfo *method)
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


System_String_o *__fastcall SpotEntity__GetName(SpotEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool IsOverRideName; // w0
  System_String_o **p_name; // x8
  System_String_o *spotName; // [xsp+8h] [xbp-18h] BYREF

  spotName = 0LL;
  IsOverRideName = SpotEntity__IsOverRideName(this, &spotName, v2);
  p_name = &this->fields.name;
  if ( IsOverRideName )
    p_name = &spotName;
  return *p_name;
}


int32_t __fastcall SpotEntity__GetPrioredImgId(SpotEntity_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int v6; // w8
  void *v7; // x20
  unsigned int v8; // w21
  int32_t *v9; // x24
  int32_t *p_imageId; // x8
  __int64 v12; // x0

  if ( (byte_42B0A72 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SpotImageMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_SingletonTemplate_QuestTree__get_Instance__);
    sub_B52984(&SingletonTemplate_QuestTree__TypeInfo);
    byte_42B0A72 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SpotImageMaster___)) == 0LL
    || (Instance = SpotImageMaster__GetImageList((SpotImageMaster_o *)Instance, this->fields.id, v5)) == 0LL )
  {
LABEL_19:
    sub_B52A5C(Instance, v4);
  }
  v6 = *((_DWORD *)Instance + 6);
  v7 = Instance;
  if ( v6 < 1 )
  {
LABEL_16:
    p_imageId = &this->fields.imageId;
  }
  else
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= v6 )
      {
        v12 = sub_B52A88(Instance);
        sub_B52A28(v12, 0LL);
      }
      v9 = (int32_t *)*((_QWORD *)v7 + (int)v8 + 4);
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2B76134 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v9 || !Instance )
        goto LABEL_19;
      Instance = (void *)QuestTree__CheckSpotCond((QuestTree_o *)Instance, v9[4], v9[7], v9[8], v9[9], 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      v6 = *((_DWORD *)v7 + 6);
      if ( (int)++v8 >= v6 )
        goto LABEL_16;
    }
    p_imageId = v9 + 6;
  }
  return *p_imageId;
}


bool __fastcall SpotEntity__HasFlag(SpotEntity_o *this, int32_t flag, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  int32_t id; // w2
  int32_t v9; // w21
  bool HasPrioredData; // w0
  int32_t v11; // w8
  int32_t data; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42B0A71 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_SpotAddMaster___);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B0A71 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_SpotAddMaster___)) == 0LL )
  {
    sub_B52A5C(Instance, v6);
  }
  id = this->fields.id;
  v9 = this->fields.flag;
  data = 0;
  HasPrioredData = SpotAddMaster__HasPrioredData((SpotAddMaster_o *)Instance, 1, id, &data, v7);
  v11 = data;
  if ( !HasPrioredData )
    v11 = v9;
  return (v11 & flag) != 0;
}


bool __fastcall SpotEntity__IsHiddenInFolder(SpotEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SpotEntity__HasFlag(this, 64, v2);
}


bool __fastcall SpotEntity__IsOverRideName(SpotEntity_o *this, System_String_o **spotName, const MethodInfo *method)
{
  SpotAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_42B0A6E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_SpotAddMaster___);
    sub_B52984(&DataManager_TypeInfo);
    byte_42B0A6E = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SpotAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SpotAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B52A5C(0LL, v6);
  return SpotAddMaster__TryGetOverwriteName(Master_WarQuestSelectionMaster, spotName, this->fields.id, v7);
}


int32_t __fastcall SpotEntity__getActiveCondType(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeCondType;
}


int32_t __fastcall SpotEntity__getActiveTargetId(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeTargetId;
}


int32_t __fastcall SpotEntity__getActiveTargetValue(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.activeTargetValue;
}


int32_t __fastcall SpotEntity__getDispCondType1(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispCondType1;
}


int32_t __fastcall SpotEntity__getDispCondType2(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispCondType2;
}


int32_t __fastcall SpotEntity__getDispTargetId1(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetId1;
}


int32_t __fastcall SpotEntity__getDispTargetId2(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetId2;
}


int32_t __fastcall SpotEntity__getDispTargetValue1(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetValue1;
}


int32_t __fastcall SpotEntity__getDispTargetValue2(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.dispTargetValue2;
}


int32_t __fastcall SpotEntity__getMapId(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.mapId;
}


int32_t __fastcall SpotEntity__getSpotId(SpotEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall SpotEntity__get_z(SpotEntity_o *this, const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B0A6D & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMaster_SpotLayerMaster___);
    sub_B52984(&DataManager_TypeInfo);
    sub_B52984(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
    byte_42B0A6D = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1A4F124 *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  this->fields.id,
                                                                  (const MethodInfo_23E2334 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return *(&entity->fields.id + 1);
LABEL_12:
    sub_B52A5C(Master_WarQuestSelectionMaster, v4);
  }
  return 0;
}


bool __fastcall SpotEntity__isInJoinSpot(SpotEntity_o *this, int32_t spotId, const MethodInfo *method)
{
  struct System_Int32_array *joinSpotIds; // x8
  int max_length; // w9
  unsigned int v5; // w10
  __int64 v7; // x0

  if ( this->fields.id != spotId )
  {
    joinSpotIds = this->fields.joinSpotIds;
    if ( !joinSpotIds )
      sub_B52A5C(this, spotId);
    max_length = joinSpotIds->max_length;
    if ( max_length < 1 )
      return 0;
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        v7 = sub_B52A88(this);
        sub_B52A28(v7, 0LL);
      }
      if ( joinSpotIds->m_Items[v5 + 1] == spotId )
        break;
      if ( (int)++v5 >= max_length )
        return 0;
    }
  }
  return 1;
}