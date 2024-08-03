void __fastcall SpotEntity___ctor(SpotEntity_o *this, const MethodInfo *method)
{
  if ( (byte_49FCD95 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, method);
    byte_49FCD95 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
}


void __fastcall SpotEntity___ctor_39558936(SpotEntity_o *this, SpotEntity_o *cSrc, const MethodInfo *method)
{
  __int64 v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *name; // x1
  struct System_String_o *closedMessage; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Int32_array *joinSpotIds; // x1
  struct System_Int32_array **p_joinSpotIds; // x20
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49FCD96 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataEntityBase_int___ctor__, cSrc);
    byte_49FCD96 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_30D3CA4 *)Method_DataEntityBase_int___ctor__);
  if ( !cSrc )
    sub_1B64324(v5);
  this->fields.id = cSrc->fields.id;
  this->fields.mapId = cSrc->fields.mapId;
  name = cSrc->fields.name;
  this->fields.name = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.name, (int32_t)name, v6, v7);
  *(_QWORD *)&this->fields.imageId = *(_QWORD *)&cSrc->fields.imageId;
  this->fields.y = cSrc->fields.y;
  *(_QWORD *)&this->fields.nameOfsX = *(_QWORD *)&cSrc->fields.nameOfsX;
  *(_OWORD *)&this->fields.dispCondType1 = *(_OWORD *)&cSrc->fields.dispCondType1;
  *(_OWORD *)&this->fields.dispTargetId2 = *(_OWORD *)&cSrc->fields.dispTargetId2;
  this->fields.activeTargetValue = cSrc->fields.activeTargetValue;
  closedMessage = cSrc->fields.closedMessage;
  this->fields.closedMessage = closedMessage;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closedMessage, (int32_t)closedMessage, v10, v11);
  joinSpotIds = cSrc->fields.joinSpotIds;
  this->fields.joinSpotIds = joinSpotIds;
  p_joinSpotIds = &this->fields.joinSpotIds;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_joinSpotIds, (int32_t)joinSpotIds, v14, v15);
  *((_DWORD *)p_joinSpotIds + 2) = cSrc->fields.flag;
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
  SpotImageEntity_array *Instance; // x0
  const MethodInfo *v6; // x2
  __int64 v7; // x1
  int max_length; // w8
  SpotImageEntity_array *v9; // x20
  unsigned int v10; // w21
  int32_t *v11; // x23
  int32_t *p_imageId; // x8

  if ( (byte_49FCD98 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotImageMaster___, method);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1B640C8(&Method_SingletonTemplate_QuestTree__get_Instance__, v4);
    byte_49FCD98 = 1;
  }
  Instance = (SpotImageEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (SpotImageEntity_array *)DataManager__GetMasterData_object_(
                                              (DataManager_o *)Instance,
                                              (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotImageMaster___)) == 0LL
    || (Instance = SpotImageMaster__GetImageList((SpotImageMaster_o *)Instance, this->fields.id, v6)) == 0LL )
  {
LABEL_16:
    sub_1B64324(Instance);
  }
  max_length = Instance->max_length;
  v9 = Instance;
  if ( max_length < 1 )
  {
LABEL_13:
    p_imageId = &this->fields.imageId;
  }
  else
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
        sub_1B6432C(Instance, v7);
      v11 = (int32_t *)v9->m_Items[v10];
      Instance = (SpotImageEntity_array *)SingletonTemplate_object___get_Instance((const MethodInfo_36EC45C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( !v11 || !Instance )
        goto LABEL_16;
      Instance = (SpotImageEntity_array *)QuestTree__CheckSpotCond(
                                            (QuestTree_o *)Instance,
                                            v11[4],
                                            v11[7],
                                            v11[8],
                                            v11[9],
                                            0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
        break;
      max_length = v9->max_length;
      if ( (int)++v10 >= max_length )
        goto LABEL_13;
    }
    p_imageId = v11 + 6;
  }
  return *p_imageId;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotEntity__HasFlag(SpotEntity_o *this, int32_t flag, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  const MethodInfo *v7; // x4
  int32_t id; // w2
  int32_t v9; // w21
  bool HasPrioredData; // w0
  int32_t v11; // w8
  int32_t data; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49FCD97 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_SpotAddMaster___, *(_QWORD *)&flag);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_49FCD97 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = DataManager__GetMasterData_object_(
                     (DataManager_o *)Instance,
                     (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_SpotAddMaster___)) == 0LL )
  {
    sub_1B64324(Instance);
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
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  const MethodInfo *v7; // x3

  if ( (byte_49FCD94 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_SpotAddMaster___, spotName);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    byte_49FCD94 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SpotAddMaster___);
  if ( !Master_object )
    sub_1B64324(0LL);
  return SpotAddMaster__TryGetOverwriteName((SpotAddMaster_o *)Master_object, spotName, this->fields.id, v7);
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
  Il2CppObject *Master_object; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FCD93 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_SpotLayerMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__, v4);
    byte_49FCD93 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_SpotLayerMaster___);
  if ( !Master_object )
    goto LABEL_11;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    this->fields.id,
                                    (const MethodInfo_30D3EF8 *)Method_DataMasterBase_SpotLayerMaster__SpotLayerEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
      return HIDWORD(entity[1].klass);
LABEL_11:
    sub_1B64324(Master_object);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall SpotEntity__isInJoinSpot(SpotEntity_o *this, int32_t spotId, const MethodInfo *method)
{
  struct System_Int32_array *joinSpotIds; // x10
  int max_length; // w8
  __int64 v5; // x9
  int32_t *v6; // x10
  int32_t v7; // w11

  if ( this->fields.id == spotId )
  {
    LOBYTE(this) = 1;
  }
  else
  {
    joinSpotIds = this->fields.joinSpotIds;
    if ( !joinSpotIds )
      sub_1B64324(this);
    max_length = joinSpotIds->max_length;
    if ( max_length < 1 )
    {
      LOBYTE(this) = 0;
    }
    else
    {
      v5 = 0LL;
      v6 = &joinSpotIds->m_Items[1];
      do
      {
        if ( (unsigned int)v5 >= max_length )
          sub_1B6432C(this, *(_QWORD *)&spotId);
        v7 = v6[v5];
        this = (SpotEntity_o *)(v7 == spotId);
        if ( v7 == spotId )
          break;
        ++v5;
      }
      while ( (int)v5 < max_length );
    }
  }
  return (char)this;
}