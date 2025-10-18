void FriendshipGaugeEx___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct FriendshipGaugeEx_StaticFields *static_fields; // x0
  int32_t v4; // w1
  int32_t v5; // w1
  struct FriendshipGaugeEx_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  struct FriendshipGaugeEx_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C468AC & 1) == 0 )
  {
    sub_1C37058(&FriendshipGaugeEx_TypeInfo);
    sub_1C37058(&StringLiteral_5332/*"DownloadBondAtlas"*/);
    sub_1C37058(&StringLiteral_20341/*"img_bondsgage_11"*/);
    sub_1C37058(&StringLiteral_3192/*"Bond/DownloadBond"*/);
    byte_4C468AC = 1;
  }
  static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
  static_fields->MAX_COLUMN = 5;
  *(_QWORD *)&static_fields->POSITION_Y_DEFAULT = 0x412000003F19999ALL;
  v4 = StringLiteral_3192/*"Bond/DownloadBond"*/;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_3192/*"Bond/DownloadBond"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->AtlasPath, v4, v1, v2);
  v5 = StringLiteral_5332/*"DownloadBondAtlas"*/;
  v6 = FriendshipGaugeEx_TypeInfo->static_fields;
  v6->ObjectName = (struct System_String_o *)StringLiteral_5332/*"DownloadBondAtlas"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->ObjectName, v5, v7, v8);
  v9 = StringLiteral_20341/*"img_bondsgage_11"*/;
  v10 = FriendshipGaugeEx_TypeInfo->static_fields;
  v10->SpriteName = (struct System_String_o *)StringLiteral_20341/*"img_bondsgage_11"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->SpriteName, v9, v11, v12);
}


void FriendshipGaugeEx___ctor(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.prevRank = -1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


float FriendshipGaugeEx__CalculateFillAmount(
        FriendshipGaugeEx_o *this,
        int32_t *currentFriendship,
        int32_t *prevRankFriendship,
        int32_t *nextRankFriendship,
        const MethodInfo *method)
{
  float result; // s0
  int v6; // w9

  result = 1.0;
  if ( *currentFriendship < *nextRankFriendship )
  {
    v6 = *currentFriendship - *prevRankFriendship;
    if ( v6 < 1 )
      return 0.0;
    else
      return (float)v6 / (float)(*nextRankFriendship - *prevRankFriendship);
  }
  return result;
}


int32_t FriendshipGaugeEx__ChangeGauge(
        FriendshipGaugeEx_o *this,
        float val,
        bool *isMax,
        bool *isLevelUp,
        bool *isChange,
        int32_t *remainingFriendship,
        const MethodInfo *method)
{
  float v13; // s0
  int32_t v14; // w24
  void *Master_object; // x0
  const MethodInfo *v16; // x2
  int32_t prevPoint; // w9

  if ( (byte_4C468AA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_FriendshipMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C468AA = 1;
  }
  v13 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0);
  v14 = BattleUtility__FloorToInt(v13, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || (Master_object = FriendshipMaster__GetFriendShipRankEntity(
                          (FriendshipMaster_o *)Master_object,
                          this->fields.friendshipId,
                          v14,
                          this->fields.nowFriendshipRank,
                          0)) == 0 )
  {
    sub_1C372B4(Master_object);
  }
  *remainingFriendship = *((_DWORD *)Master_object + 6) - v14;
  *isMax = *((_DWORD *)Master_object + 5) == this->fields.exceedMaxFriendshipRank;
  *isLevelUp = *((_DWORD *)Master_object + 5) != this->fields.prevRank;
  prevPoint = this->fields.prevPoint;
  this->fields.prevRank = *((_DWORD *)Master_object + 5);
  *isChange = v14 != prevPoint;
  this->fields.prevPoint = v14;
  FriendshipGaugeEx__ChangeGaugeData(this, v14, v16);
  return v14 - this->fields.nowFriendship;
}


void FriendshipGaugeEx__ChangeGaugeData(FriendshipGaugeEx_o *this, int32_t friendship, const MethodInfo *method)
{
  int **Master_object; // x0
  FriendshipMaster_o *v6; // x21
  int v7; // w27
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v9; // x26
  unsigned __int64 max_length_low; // x9
  unsigned __int64 v11; // x28
  struct UISprite_array *icons; // x10
  struct UISprite_array *v13; // x8
  int **v14; // x22
  int32_t v15; // w9
  float v16; // s0
  struct UnityEngine_GameObject_array *v17; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t smallIconVisibleCount; // w28
  UnityEngine_GameObject_o *v20; // x22
  struct FriendshipGaugeEx_StaticFields *static_fields; // x8
  int32_t MAX_COLUMN; // w29
  __int64 v23; // x9

  if ( (byte_4C468AB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_FriendshipMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&FriendshipGaugeEx_TypeInfo);
    byte_4C468AB = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int **)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || ((v6 = (FriendshipMaster_o *)Master_object,
         (Master_object = (int **)FriendshipMaster__GetEntity(
                                    (FriendshipMaster_o *)Master_object,
                                    this->fields.friendshipId,
                                    9,
                                    0)) == 0)
      ? (v7 = 0)
      : (v7 = *((_DWORD *)Master_object + 6)),
        (iconRoots = this->fields.iconRoots) == 0) )
  {
LABEL_41:
    sub_1C372B4(Master_object);
  }
  v9 = 4;
  while ( 1 )
  {
    max_length_low = LODWORD(iconRoots->max_length);
    v11 = v9 - 4;
    if ( v9 - 4 >= (int)max_length_low )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_41;
    if ( (__int64)v11 >= SLODWORD(icons->max_length) )
      break;
    if ( (int)v9 + 6 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v11 >= max_length_low )
        goto LABEL_43;
      Master_object = (int **)*((_QWORD *)&iconRoots->obj.klass + v9);
      if ( !Master_object )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    }
    else
    {
      Master_object = (int **)FriendshipMaster__GetEntity(v6, this->fields.friendshipId, (int)v9 + 6, 0);
      v13 = this->fields.icons;
      if ( !v13 )
        goto LABEL_41;
      if ( v11 >= LODWORD(v13->max_length) )
        goto LABEL_43;
      v14 = Master_object;
      if ( !Master_object )
        goto LABEL_41;
      v15 = *((_DWORD *)Master_object + 6);
      v16 = 1.0;
      if ( v15 > friendship )
      {
        if ( friendship - v7 < 1 )
          v16 = 0.0;
        else
          v16 = (float)(friendship - v7) / (float)(v15 - v7);
      }
      Master_object = (int **)*((_QWORD *)&v13->obj.klass + v9);
      if ( !Master_object )
        goto LABEL_41;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_object, v16, 0);
      Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      v7 = *((_DWORD *)v14 + 6);
      if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
        Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      }
      if ( (__int64)v11 < *Master_object[23] )
      {
        v17 = this->fields.iconRoots;
        if ( !v17 )
          goto LABEL_41;
        if ( v11 >= LODWORD(v17->max_length) )
LABEL_43:
          sub_1C372BC(Master_object);
        Master_object = (int **)*((_QWORD *)&v17->obj.klass + v9);
        if ( !Master_object )
          goto LABEL_41;
        gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0);
        smallIconVisibleCount = this->fields.smallIconVisibleCount;
        v20 = gameObject;
        if ( FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
        {
          static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
          MAX_COLUMN = static_fields->MAX_COLUMN;
        }
        else
        {
          j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
          static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
          MAX_COLUMN = static_fields->MAX_COLUMN;
          if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
            static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
          }
        }
        if ( smallIconVisibleCount <= MAX_COLUMN )
          v23 = 4;
        else
          v23 = 8;
        GameObjectExtensions__SetLocalPositionY(v20, *(float *)((char *)&static_fields->MAX_COLUMN + v23), 0);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v9;
    if ( !iconRoots )
      goto LABEL_41;
  }
}


void FriendshipGaugeEx__Hide(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
}


bool FriendshipGaugeEx__IsChange(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  return this->fields.nowFriendship != this->fields.nextFriendship;
}


// local variable allocation has failed, the output may be wrong!
void FriendshipGaugeEx__SetGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t inFriendshipId,
        int32_t inFriendship,
        int32_t inFriendshipRank,
        int32_t inMaxFriendShipRank,
        int32_t inExceedCount,
        const MethodInfo *method)
{
  this->fields.friendshipId = inFriendshipId;
  this->fields.exceedMaxFriendshipRank = inExceedCount + inMaxFriendShipRank;
  this->fields.nowFriendship = inFriendship;
  this->fields.nowFriendshipRank = inFriendshipRank;
  this->fields.smallIconVisibleCount = inExceedCount + inMaxFriendShipRank - 10;
  this->fields.prevRank = inFriendshipRank;
  this->fields.prevPoint = inFriendship;
  FriendshipGaugeEx__ChangeGaugeData(this, inFriendship, *(const MethodInfo **)&inFriendship);
}


void FriendshipGaugeEx__SetNextGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  this->fields.nextFriendship = friendship;
  this->fields.nextFriendshipRank = friendshipRank;
}


void FriendshipGaugeEx__Show(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
}


void FriendshipGaugeEx__Start(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  FriendshipGaugeEx_c *v3; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v5; // x21

  if ( (byte_4C468A9 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_FriendshipGaugeEx__Start_b__19_0__);
    sub_1C37058(&FriendshipGaugeEx_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&StringLiteral_5017/*"DISABLE_FRIENDSHIP_EXCEED"*/);
    byte_4C468A9 = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_5017/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0) != 1 )
  {
    v3 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v3 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v3->static_fields->AtlasPath;
    v5 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v5, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(AtlasPath, v5, 1, 0);
  }
}


void FriendshipGaugeEx___Start_b__19_0(FriendshipGaugeEx_o *this, AssetData_o *asset, const MethodInfo *method)
{
  FriendshipGaugeEx_c *v5; // x0
  UnityEngine_GameObject_o *Object_object__51154888; // x0

  if ( (byte_4C468AD & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&FriendshipGaugeEx_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    byte_4C468AD = 1;
  }
  if ( asset )
  {
    v5 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v5 = FriendshipGaugeEx_TypeInfo;
    }
    Object_object__51154888 = (UnityEngine_GameObject_o *)AssetData__GetObject_object__51154888(
                                                            asset,
                                                            v5->static_fields->ObjectName,
                                                            (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
    if ( !Object_object__51154888
      || (Object_object__51154888 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  Object_object__51154888,
                                                                  (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_object__51154888, 0),
          (Object_object__51154888 = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0) )
    {
      sub_1C372B4(Object_object__51154888);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_object__51154888,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0);
  }
}