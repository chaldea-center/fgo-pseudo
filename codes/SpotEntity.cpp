void __fastcall SpotEntity___ctor(SpotEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E924C & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42E924C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
}


void __fastcall SpotEntity___ctor_26185988(SpotEntity_o *this, SpotEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o *name; // x1
  struct System_String_o *closedMessage; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  struct System_Int32_array *joinSpotIds; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7

  if ( (byte_42E924D & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)cSrc, (_DWORD)method, v3);
    byte_42E924D = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B5D69C(v6, v7);
  this->fields.id = cSrc->fields.id;
  this->fields.mapId = cSrc->fields.mapId;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.name,
    (System_Int32_array **)name,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closedMessage,
    (System_Int32_array **)closedMessage,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  joinSpotIds = cSrc->fields.joinSpotIds;
  this->fields.joinSpotIds = joinSpotIds;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.joinSpotIds,
    (System_Int32_array **)joinSpotIds,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  void *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  int v17; // w8
  void *v18; // x20
  unsigned int v19; // w21
  int32_t *v20; // x24
  int32_t *p_imageId; // x8
  __int64 v23; // x0

  if ( (byte_42E924F & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotImageMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonTemplate_QuestTree__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&SingletonTemplate_QuestTree__TypeInfo, v11, v12, v13);
    byte_42E924F = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_WarQuestSelectionMaster_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotImageMaster___)) == 0LL
    || (Instance = SpotImageMaster__GetImageList((SpotImageMaster_o *)Instance, this->fields.id, v16)) == 0LL )
  {
LABEL_19:
    sub_B5D69C(Instance, v15);
  }
  v17 = *((_DWORD *)Instance + 6);
  v18 = Instance;
  if ( v17 < 1 )
  {
LABEL_16:
    p_imageId = &this->fields.imageId;
  }
  else
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= v17 )
      {
        v23 = sub_B5D6C8(Instance);
        sub_B5D668(v23, 0LL);
      }
      v20 = (int32_t *)*((_QWORD *)v18 + (int)v19 + 4);
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      Instance = SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A301E4 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v20 || !Instance )
        goto LABEL_19;
      Instance = (void *)QuestTree__CheckSpotCond((QuestTree_o *)Instance, v20[4], v20[7], v20[8], v20[9], 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      v17 = *((_DWORD *)v18 + 6);
      if ( (int)++v19 >= v17 )
        goto LABEL_16;
    }
    p_imageId = v20 + 6;
  }
  return *p_imageId;
}


bool __fastcall SpotEntity__HasFlag(SpotEntity_o *this, int32_t flag, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  DataManager_o *Instance; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  int32_t id; // w2
  int32_t v13; // w21
  bool HasPrioredData; // w0
  int32_t v15; // w8
  int32_t data; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E924E & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_SpotAddMaster___, flag, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7, v8);
    byte_42E924E = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                      Instance,
                                      (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_SpotAddMaster___)) == 0LL )
  {
    sub_B5D69C(Instance, v10);
  }
  id = this->fields.id;
  v13 = this->fields.flag;
  data = 0;
  HasPrioredData = SpotAddMaster__HasPrioredData((SpotAddMaster_o *)Instance, 1, id, &data, v11);
  v15 = data;
  if ( !HasPrioredData )
    v15 = v13;
  return (v15 & flag) != 0;
}


bool __fastcall SpotEntity__IsHiddenInFolder(SpotEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SpotEntity__HasFlag(this, 64, v2);
}


bool __fastcall SpotEntity__IsOverRideName(SpotEntity_o *this, System_String_o **spotName, const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  SpotAddMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_42E924B & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SpotAddMaster___, (_DWORD)spotName, (_DWORD)method, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    byte_42E924B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SpotAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SpotAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v10);
  return SpotAddMaster__TryGetOverwriteName(Master_WarQuestSelectionMaster, spotName, this->fields.id, v11);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E924A & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_SpotLayerMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, v8, v9, v10);
    byte_42E924A = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  Master_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                  (DataMasterBase_WarMaster__WarEntity__int__o *)Master_WarQuestSelectionMaster,
                                                                  &entity,
                                                                  this->fields.id,
                                                                  (const MethodInfo_23FAE6C *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
  {
    if ( entity )
      return *(&entity->fields.id + 1);
LABEL_12:
    sub_B5D69C(Master_WarQuestSelectionMaster, v12);
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
      sub_B5D69C(this, spotId);
    max_length = joinSpotIds->max_length;
    if ( max_length < 1 )
      return 0;
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        v7 = sub_B5D6C8(this);
        sub_B5D668(v7, 0LL);
      }
      if ( joinSpotIds->m_Items[v5 + 1] == spotId )
        break;
      if ( (int)++v5 >= max_length )
        return 0;
    }
  }
  return 1;
}