void __fastcall SpotEntity___ctor(SpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FADB7 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FADB7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


void __fastcall SpotEntity___ctor_26799384(SpotEntity_o *this, SpotEntity_o *cSrc, const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_o *name; // x1
  struct System_String_o *closedMessage; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  struct System_Int32_array *joinSpotIds; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7

  if ( (byte_40FADB8 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_40FADB8 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_B170D4();
  this->fields.id = cSrc->fields.id;
  this->fields.mapId = cSrc->fields.mapId;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v5, v6, v7, v8, v9, v10);
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
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closedMessage,
    (System_Int32_array **)closedMessage,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  joinSpotIds = cSrc->fields.joinSpotIds;
  this->fields.joinSpotIds = joinSpotIds;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.joinSpotIds,
    (System_Int32_array **)joinSpotIds,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  SpotImageMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x2
  SpotImageEntity_array *ImageList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  int max_length; // w8
  SpotImageEntity_array *v13; // x20
  unsigned int v14; // w21
  int32_t *v15; // x24
  QuestTree_o *v16; // x0
  int32_t *p_imageId; // x8

  if ( (byte_40FADBA & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotImageMaster___, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_B16FFC(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    sub_B16FFC(&SingletonTemplate_QuestTree__TypeInfo, v5);
    byte_40FADBA = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SpotImageMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    (DataManager_o *)Instance,
                                                                    (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotImageMaster___)) == 0LL
    || (ImageList = SpotImageMaster__GetImageList(MasterData_WarQuestSelectionMaster, this->fields.id, v8)) == 0LL )
  {
LABEL_19:
    sub_B170D4();
  }
  max_length = ImageList->max_length;
  v13 = ImageList;
  if ( max_length < 1 )
  {
LABEL_16:
    p_imageId = &this->fields.imageId;
  }
  else
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= max_length )
      {
        sub_B17100(ImageList, v10, v11);
        sub_B170A0();
      }
      v15 = (int32_t *)v13->m_Items[v14];
      if ( (BYTE3(SingletonTemplate_QuestTree__TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SingletonTemplate_QuestTree__TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SingletonTemplate_QuestTree__TypeInfo);
      }
      v16 = (QuestTree_o *)SingletonTemplate_clsQuestCheck___get_Instance((const MethodInfo_2A552BC *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v15 || !v16 )
        goto LABEL_19;
      ImageList = (SpotImageEntity_array *)QuestTree__CheckSpotCond(v16, v15[4], v15[7], v15[8], v15[9], 0LL);
      if ( ((unsigned __int8)ImageList & 1) != 0 )
        break;
      max_length = v13->max_length;
      if ( (int)++v14 >= max_length )
        goto LABEL_16;
    }
    p_imageId = v15 + 6;
  }
  return *p_imageId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotEntity__HasFlag(SpotEntity_o *this, int32_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  WebViewManager_o *Instance; // x0
  SpotAddMaster_o *MasterData_WarQuestSelectionMaster; // x0
  const MethodInfo *v8; // x4
  int32_t id; // w2
  int32_t v10; // w21
  bool HasPrioredData; // w0
  int32_t v12; // w8
  int32_t data; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40FADB9 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_SpotAddMaster___, *(_QWORD *)&flag);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_40FADB9 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_WarQuestSelectionMaster = (SpotAddMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                  (DataManager_o *)Instance,
                                                                  (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_SpotAddMaster___)) == 0LL )
  {
    sub_B170D4();
  }
  id = this->fields.id;
  v10 = this->fields.flag;
  data = 0;
  HasPrioredData = SpotAddMaster__HasPrioredData(MasterData_WarQuestSelectionMaster, 1, id, &data, v8);
  v12 = data;
  if ( !HasPrioredData )
    v12 = v10;
  return (v12 & flag) != 0;
}


bool __fastcall SpotEntity__IsHiddenInFolder(SpotEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return SpotEntity__HasFlag(this, 64, v2);
}


bool __fastcall SpotEntity__IsOverRideName(SpotEntity_o *this, System_String_o **spotName, const MethodInfo *method)
{
  __int64 v5; // x1
  SpotAddMaster_o *Master_WarQuestSelectionMaster; // x0
  const MethodInfo *v7; // x3

  if ( (byte_40FADB6 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SpotAddMaster___, spotName);
    sub_B16FFC(&DataManager_TypeInfo, v5);
    byte_40FADB6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (SpotAddMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SpotAddMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
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
  __int64 v3; // x1
  __int64 v4; // x1
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FADB5 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_SpotLayerMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    sub_B16FFC(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, v4);
    byte_40FADB5 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_12;
  if ( DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
         Master_WarQuestSelectionMaster,
         &entity,
         this->fields.id,
         (const MethodInfo_266F3E4 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__) )
  {
    if ( entity )
      return *(&entity->fields.id + 1);
LABEL_12:
    sub_B170D4();
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotEntity__isInJoinSpot(SpotEntity_o *this, int32_t spotId, const MethodInfo *method)
{
  struct System_Int32_array *joinSpotIds; // x8
  int max_length; // w9
  unsigned int v5; // w10

  if ( this->fields.id != spotId )
  {
    joinSpotIds = this->fields.joinSpotIds;
    if ( !joinSpotIds )
      sub_B170D4();
    max_length = joinSpotIds->max_length;
    if ( max_length < 1 )
      return 0;
    v5 = 0;
    while ( 1 )
    {
      if ( v5 >= max_length )
      {
        sub_B17100(this, *(_QWORD *)&spotId, method);
        sub_B170A0();
      }
      if ( joinSpotIds->m_Items[v5 + 1] == spotId )
        break;
      if ( (int)++v5 >= max_length )
        return 0;
    }
  }
  return 1;
}