void __fastcall FriendshipGaugeEx___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct FriendshipGaugeEx_StaticFields *static_fields; // x0
  int32_t v8; // w1
  int32_t v9; // w1
  struct FriendshipGaugeEx_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  struct FriendshipGaugeEx_StaticFields *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B0574F & 1) == 0 )
  {
    sub_1BC3008(&FriendshipGaugeEx_TypeInfo, v1);
    sub_1BC3008(&StringLiteral_5285/*"DownloadBondAtlas"*/, v4);
    sub_1BC3008(&StringLiteral_20144/*"img_bondsgage_11"*/, v5);
    sub_1BC3008(&StringLiteral_3167/*"Bond/DownloadBond"*/, v6);
    byte_4B0574F = 1;
  }
  static_fields = FriendshipGaugeEx_TypeInfo->static_fields;
  static_fields->MAX_COLUMN = 5;
  *(_QWORD *)&static_fields->POSITION_Y_DEFAULT = 0x412000003F19999ALL;
  v8 = StringLiteral_3167/*"Bond/DownloadBond"*/;
  static_fields->AtlasPath = (struct System_String_o *)StringLiteral_3167/*"Bond/DownloadBond"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->AtlasPath, v8, v2, v3);
  v9 = StringLiteral_5285/*"DownloadBondAtlas"*/;
  v10 = FriendshipGaugeEx_TypeInfo->static_fields;
  v10->ObjectName = (struct System_String_o *)StringLiteral_5285/*"DownloadBondAtlas"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v10->ObjectName, v9, v11, v12);
  v13 = StringLiteral_20144/*"img_bondsgage_11"*/;
  v14 = FriendshipGaugeEx_TypeInfo->static_fields;
  v14->SpriteName = (struct System_String_o *)StringLiteral_20144/*"img_bondsgage_11"*/;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v14->SpriteName, v13, v15, v16);
}


void __fastcall FriendshipGaugeEx___ctor(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.prevRank = -1LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


float __fastcall FriendshipGaugeEx__CalculateFillAmount(
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


int32_t __fastcall FriendshipGaugeEx__ChangeGauge(
        FriendshipGaugeEx_o *this,
        float val,
        bool *isMax,
        bool *isLevelUp,
        bool *isChange,
        int32_t *remainingFriendship,
        const MethodInfo *method)
{
  __int64 v13; // x1
  float v14; // s0
  int32_t v15; // w24
  void *Master_object; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x2
  int32_t prevPoint; // w9

  if ( (byte_4B0574D & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_FriendshipMaster___, isMax);
    sub_1BC3008(&DataManager_TypeInfo, v13);
    byte_4B0574D = 1;
  }
  v14 = BattleUtility__Lerp((float)this->fields.nowFriendship, (float)this->fields.nextFriendship, val, 0LL);
  v15 = BattleUtility__FloorToInt(v14, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || (Master_object = FriendshipMaster__GetFriendShipRankEntity(
                          (FriendshipMaster_o *)Master_object,
                          this->fields.friendshipId,
                          v15,
                          this->fields.nowFriendshipRank,
                          0LL)) == 0LL )
  {
    sub_1BC3264(Master_object, v17);
  }
  *remainingFriendship = *((_DWORD *)Master_object + 6) - v15;
  *isMax = *((_DWORD *)Master_object + 5) == this->fields.exceedMaxFriendshipRank;
  *isLevelUp = *((_DWORD *)Master_object + 5) != this->fields.prevRank;
  prevPoint = this->fields.prevPoint;
  this->fields.prevRank = *((_DWORD *)Master_object + 5);
  *isChange = v15 != prevPoint;
  this->fields.prevPoint = v15;
  FriendshipGaugeEx__ChangeGaugeData(this, v15, v18);
  return v15 - this->fields.nowFriendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGaugeEx__ChangeGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendship,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  int **Master_object; // x0
  __int64 v8; // x1
  FriendshipMaster_o *v9; // x21
  int v10; // w27
  struct UnityEngine_GameObject_array *iconRoots; // x8
  __int64 v12; // x26
  unsigned __int64 max_length; // x9
  unsigned __int64 v14; // x28
  struct UISprite_array *icons; // x10
  __int64 v16; // x2
  struct UISprite_array *v17; // x8
  int **v18; // x22
  int32_t v19; // w9
  float v20; // s0
  struct UnityEngine_GameObject_array *v21; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t smallIconVisibleCount; // w28
  UnityEngine_GameObject_o *v24; // x22
  struct FriendshipGaugeEx_StaticFields *static_fields; // x8
  int32_t MAX_COLUMN; // w29
  __int64 v27; // x9

  if ( (byte_4B0574E & 1) == 0 )
  {
    sub_1BC3008(&Method_DataManager_GetMaster_FriendshipMaster___, *(_QWORD *)&friendship);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&FriendshipGaugeEx_TypeInfo, v6);
    byte_4B0574E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (int **)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_FriendshipMaster___);
  if ( !Master_object
    || ((v9 = (FriendshipMaster_o *)Master_object,
         (Master_object = (int **)FriendshipMaster__GetEntity(
                                    (FriendshipMaster_o *)Master_object,
                                    this->fields.friendshipId,
                                    9,
                                    0LL)) == 0LL)
      ? (v10 = 0)
      : (v10 = *((_DWORD *)Master_object + 6)),
        (iconRoots = this->fields.iconRoots) == 0LL) )
  {
LABEL_41:
    sub_1BC3264(Master_object, v8);
  }
  v12 = 4LL;
  while ( 1 )
  {
    max_length = iconRoots->max_length;
    v14 = v12 - 4;
    if ( v12 - 4 >= (int)max_length )
      break;
    icons = this->fields.icons;
    if ( !icons )
      goto LABEL_41;
    if ( (__int64)v14 >= (int)icons->max_length )
      break;
    v16 = v12 + 6;
    if ( (int)v12 + 6 >= this->fields.exceedMaxFriendshipRank )
    {
      if ( v14 >= max_length )
        goto LABEL_43;
      Master_object = (int **)*((_QWORD *)&iconRoots->obj.klass + v12);
      if ( !Master_object )
        goto LABEL_41;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    }
    else
    {
      Master_object = (int **)FriendshipMaster__GetEntity(v9, this->fields.friendshipId, v16, 0LL);
      v17 = this->fields.icons;
      if ( !v17 )
        goto LABEL_41;
      if ( v14 >= v17->max_length )
        goto LABEL_43;
      v18 = Master_object;
      if ( !Master_object )
        goto LABEL_41;
      v19 = *((_DWORD *)Master_object + 6);
      v20 = 1.0;
      if ( v19 > friendship )
      {
        if ( friendship - v10 < 1 )
          v20 = 0.0;
        else
          v20 = (float)(friendship - v10) / (float)(v19 - v10);
      }
      Master_object = (int **)*((_QWORD *)&v17->obj.klass + v12);
      if ( !Master_object )
        goto LABEL_41;
      UIBasicSprite__set_fillAmount((UIBasicSprite_o *)Master_object, v20, 0LL);
      Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      v10 = *((_DWORD *)v18 + 6);
      if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
        Master_object = (int **)FriendshipGaugeEx_TypeInfo;
      }
      if ( (__int64)v14 < *Master_object[23] )
      {
        v21 = this->fields.iconRoots;
        if ( !v21 )
          goto LABEL_41;
        if ( v14 >= v21->max_length )
LABEL_43:
          sub_1BC326C(Master_object, v8, v16);
        Master_object = (int **)*((_QWORD *)&v21->obj.klass + v12);
        if ( !Master_object )
          goto LABEL_41;
        gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)Master_object, 0LL);
        smallIconVisibleCount = this->fields.smallIconVisibleCount;
        v24 = gameObject;
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
          v27 = 4LL;
        else
          v27 = 8LL;
        GameObjectExtensions__SetLocalPositionY(v24, *(float *)((char *)&static_fields->MAX_COLUMN + v27), 0LL);
      }
    }
    iconRoots = this->fields.iconRoots;
    ++v12;
    if ( !iconRoots )
      goto LABEL_41;
  }
}


void __fastcall FriendshipGaugeEx__Hide(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


bool __fastcall FriendshipGaugeEx__IsChange(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  return this->fields.nowFriendship != this->fields.nextFriendship;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FriendshipGaugeEx__SetGaugeData(
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


void __fastcall FriendshipGaugeEx__SetNextGaugeData(
        FriendshipGaugeEx_o *this,
        int32_t friendship,
        int32_t friendshipRank,
        const MethodInfo *method)
{
  this->fields.nextFriendship = friendship;
  this->fields.nextFriendshipRank = friendshipRank;
}


void __fastcall FriendshipGaugeEx__Show(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BC3264(0LL, v3);
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall FriendshipGaugeEx__Start(FriendshipGaugeEx_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  FriendshipGaugeEx_c *v7; // x0
  System_String_o *AtlasPath; // x20
  AssetLoader_LoadEndDataHandler_o *v9; // x21

  if ( (byte_4B0574C & 1) == 0 )
  {
    sub_1BC3008(&AssetManager_TypeInfo, method);
    sub_1BC3008(&Method_FriendshipGaugeEx__Start_b__19_0__, v3);
    sub_1BC3008(&FriendshipGaugeEx_TypeInfo, v4);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BC3008(&StringLiteral_4971/*"DISABLE_FRIENDSHIP_EXCEED"*/, v6);
    byte_4B0574C = 1;
  }
  if ( ConstantMaster__getValue((System_String_o *)StringLiteral_4971/*"DISABLE_FRIENDSHIP_EXCEED"*/, 0LL) != 1 )
  {
    v7 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v7 = FriendshipGaugeEx_TypeInfo;
    }
    AtlasPath = v7->static_fields->AtlasPath;
    v9 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v9, (Il2CppObject *)this, Method_FriendshipGaugeEx__Start_b__19_0__, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__loadAssetStorage(AtlasPath, v9, 1, 0LL);
  }
}


void __fastcall FriendshipGaugeEx___Start_b__19_0(
        FriendshipGaugeEx_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  FriendshipGaugeEx_c *v7; // x0
  UnityEngine_GameObject_o *Object_object__50213776; // x0
  __int64 v9; // x1

  if ( (byte_4B05750 & 1) == 0 )
  {
    sub_1BC3008(&Method_AssetData_GetObject_GameObject____76809672, asset);
    sub_1BC3008(&FriendshipGaugeEx_TypeInfo, v5);
    sub_1BC3008(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v6);
    byte_4B05750 = 1;
  }
  if ( asset )
  {
    v7 = FriendshipGaugeEx_TypeInfo;
    if ( !FriendshipGaugeEx_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(FriendshipGaugeEx_TypeInfo);
      v7 = FriendshipGaugeEx_TypeInfo;
    }
    Object_object__50213776 = (UnityEngine_GameObject_o *)AssetData__GetObject_object__50213776(
                                                            asset,
                                                            v7->static_fields->ObjectName,
                                                            (const MethodInfo_2FE3390 *)Method_AssetData_GetObject_GameObject____76809672);
    if ( !Object_object__50213776
      || (Object_object__50213776 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  Object_object__50213776,
                                                                  (const MethodInfo_3055998 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.bigIcon)
      || (UISprite__set_atlas(this->fields.bigIcon, (UIAtlas_o *)Object_object__50213776, 0LL),
          (Object_object__50213776 = (UnityEngine_GameObject_o *)this->fields.bigIcon) == 0LL) )
    {
      sub_1BC3264(Object_object__50213776, v9);
    }
    UISprite__set_spriteName(
      (UISprite_o *)Object_object__50213776,
      FriendshipGaugeEx_TypeInfo->static_fields->SpriteName,
      0LL);
  }
}