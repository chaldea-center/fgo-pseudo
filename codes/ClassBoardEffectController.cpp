void ClassBoardEffectController___ctor(
        ClassBoardEffectController_o *this,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squares,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lines,
        MapCamera_o *camera,
        ClassBoardBackground_o *bg,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x24
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  Il2CppObject *object; // x0
  __int64 v23; // x1
  __int64 *monitor; // x20
  __int64 v25; // x8
  __int64 v26; // x9
  IClassBoardSquareModel_c **v27; // x10
  __int64 v28; // x0

  if ( (byte_4CB9E5E & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_First_ClassBoardSquare___);
    sub_1C6BA08(&IClassBoardSquareModel_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
    byte_4CB9E5E = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v11;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.players, (int32_t)v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareViewList = squares;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)squares, v14, v15);
  this->fields.lineViewList = lines;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.lineViewList, (int32_t)lines, v16, v17);
  this->fields.mapCamera = camera;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.mapCamera, (int32_t)camera, v18, v19);
  this->fields.bgModel = bg;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bgModel, (int32_t)bg, v20, v21);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)squares,
             (const MethodInfo_3161D1C *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !object || (monitor = (__int64 *)object[11].monitor) == 0 )
    sub_1C6BC60(object, v23);
  v25 = *monitor;
  v26 = *(unsigned __int16 *)(*monitor + 302);
  if ( *(_WORD *)(*monitor + 302) )
  {
    v27 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v25 + 176) + 8LL);
    while ( *(v27 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v26;
      v27 += 2;
      if ( !v26 )
        goto LABEL_9;
    }
    v28 = v25 + 16LL * (*(_DWORD *)v27 + 1) + 312;
  }
  else
  {
LABEL_9:
    v28 = sub_1C41D90(object[11].monitor, IClassBoardSquareModel_TypeInfo, 1);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v28)(monitor, *(_QWORD *)(v28 + 8));
}


void ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v4; // w8
  struct System_Action_o *playEndCallback; // x8

  v2 = this;
  if ( (byte_4CB9E64 & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_4CB9E64 = 1;
  }
  players = v2->fields.players;
  v4 = v2->fields.playEndCount + 1;
  v2->fields.playEndCount = v4;
  if ( !players )
    goto LABEL_7;
  if ( v4 < players->fields._size )
    return;
  playEndCallback = v2->fields.playEndCallback;
  if ( !playEndCallback )
LABEL_7:
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))playEndCallback->fields.invoke_impl)(
    playEndCallback->fields.method_code,
    playEndCallback->fields.method);
}


// local variable allocation has failed, the output may be wrong!
void ClassBoardEffectController__MoveCamera(
        ClassBoardEffectController_o *this,
        UnityEngine_Vector3_o pos,
        int32_t maxDistance,
        float secMin,
        float secMax,
        int32_t ease,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  MapCamera_o *mapCamera; // x23
  System_Nullable_float__o v18; // x3
  UnityEngine_Transform_o *SafeCameraDestination; // x0
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x23
  float v22; // s10
  float v23; // s9
  float v24; // s8
  float v25; // s12
  float v26; // s13
  float v27; // s14
  float v28; // s15
  float v29; // s11
  float v30; // s13
  float v31; // s4
  float v32; // s0 OVERLAPPED
  float v33; // s3
  float v34; // s1
  float v35; // s2
  float v36; // [xsp+4h] [xbp-9Ch]
  float v37; // [xsp+8h] [xbp-98h]
  float screenPos; // [xsp+Ch] [xbp-94h]
  System_Nullable_Vector3__o screenPos_4; // [xsp+10h] [xbp-90h] BYREF
  System_Nullable_Vector3__o v40; // 0:x0.16
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v43; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4CB9E68 & 1) == 0 )
  {
    sub_1C6BA08(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_Vector3___ctor__);
    byte_4CB9E68 = 1;
  }
  *(_QWORD *)&v40.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v40.fields.hasValue = &screenPos_4;
  v41.fields.x = x;
  v41.fields.y = y;
  v41.fields.z = z;
  *(_QWORD *)&screenPos_4.fields.hasValue = 0;
  *(_QWORD *)&screenPos_4.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v40, v41, *(const MethodInfo_392DB5C **)&ease);
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  v18 = 0;
  SafeCameraDestination = (UnityEngine_Transform_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(
                                                       mapCamera,
                                                       screenPos_4,
                                                       v18,
                                                       0);
  if ( !this->fields.mapCamera )
    goto LABEL_20;
  v21 = SafeCameraDestination;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mapCamera, 0);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0);
  if ( !v21 )
    goto LABEL_20;
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  v36 = secMax;
  v37 = secMin;
  if ( !SafeCameraDestination )
    goto LABEL_20;
  screenPos = x;
  v22 = y;
  v23 = z;
  v25 = *(float *)&v21->fields.m_CachedPtr;
  v24 = *((float *)&v21->fields.m_CachedPtr + 1);
  v26 = localPosition.fields.x;
  v27 = localPosition.fields.y;
  v28 = localPosition.fields.z;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SafeCameraDestination, 0);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  v43 = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0);
  v29 = v43.fields.z;
  if ( !byte_4CAFC07 )
  {
    sub_1C6BA08(&System_Math_TypeInfo);
    byte_4CAFC07 = 1;
  }
  v30 = v26 - v25;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v31 = sqrtf(
          (float)((float)(v30 * v30) + (float)((float)(v27 - v24) * (float)(v27 - v24)))
        + (float)((float)(v28 - v29) * (float)(v28 - v29)))
      / (float)maxDistance;
  v32 = screenPos;
  v33 = 0.0;
  if ( v31 != 0.0 )
  {
    v33 = v37;
    if ( v31 >= v37 )
    {
      v33 = v36;
      if ( v31 <= v36 )
        v33 = v31;
    }
  }
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
LABEL_20:
    sub_1C6BC60(SafeCameraDestination, v20);
  v34 = v22;
  v35 = v23;
  MapCamera__StartAutoMove((MapCamera_o *)SafeCameraDestination, *(UnityEngine_Vector3_o *)&v32, v33, ease, callback, 0);
}


void ClassBoardEffectController__PlayClassBoardStartEffect(
        ClassBoardEffectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Action_o **p_playEndCallback; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  Il2CppObject *v9; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v11; // x8
  struct ClassBoardEffectPlayer_o *v12; // x21
  System_Action_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct ClassBoardBackground_o *v18; // x8
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v20; // x9
  __int64 playCallback_low; // x10
  __int64 v22; // x8
  struct System_Action_o *playCallback; // x8

  if ( (byte_4CB9E60 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardEffectController_PlayNext__);
    sub_1C6BA08(&Method_ClassBoardEffectPlayer_SetData_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_4CB9E60 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playEndCallback, (int32_t)callback, v6, v7);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_20;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_312EC44 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v11 = this->fields.bgModel;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11->fields.startMainEffectPlayer;
  v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0);
  if ( !v12 )
    goto LABEL_20;
  v12->fields.endCallback = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->fields.endCallback, (int32_t)v13, v14, v15);
  v18 = this->fields.bgModel;
  if ( !v18 )
    goto LABEL_20;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  v9 = (Il2CppObject *)v18->fields.startMainEffectPlayer;
  Name_k__BackingField = startMainEffectPlayer->fields._Name_k__BackingField;
  v20 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++HIDWORD(startMainEffectPlayer->fields.playCallback);
  if ( !Name_k__BackingField )
    goto LABEL_20;
  playCallback_low = SLODWORD(startMainEffectPlayer->fields.playCallback);
  if ( (unsigned int)playCallback_low >= LODWORD(Name_k__BackingField[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)startMainEffectPlayer,
      v9,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(startMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v22 + 32) = v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v9, v16, v17);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  if ( SLODWORD(startMainEffectPlayer->fields.playCallback) < 1 )
  {
    playCallback = *p_playEndCallback;
    if ( *p_playEndCallback )
      goto LABEL_19;
LABEL_20:
    sub_1C6BC60(startMainEffectPlayer, v9);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                        (const MethodInfo_3161D1C *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  playCallback = startMainEffectPlayer->fields.playCallback;
  if ( playCallback )
LABEL_19:
    ((void (__fastcall *)(intptr_t, intptr_t))playCallback->fields.invoke_impl)(
      playCallback->fields.method_code,
      playCallback->fields.method);
}


void ClassBoardEffectController__PlayNext(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *players; // x0
  __int64 v4; // x1
  struct System_Action_o *playEndCallback; // x8

  if ( (byte_4CB9E65 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
    byte_4CB9E65 = 1;
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  v4 = (unsigned int)(this->fields.playEndCount + 1);
  this->fields.playEndCount = v4;
  if ( !players )
    goto LABEL_10;
  if ( (int)v4 >= players->fields._size )
  {
    playEndCallback = this->fields.playEndCallback;
    if ( playEndCallback )
      goto LABEL_9;
LABEL_10:
    sub_1C6BC60(players, v4);
  }
  players = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           players,
                                                           v4,
                                                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
  if ( !players )
    goto LABEL_10;
  playEndCallback = *(struct System_Action_o **)&players->fields._size;
  if ( playEndCallback )
LABEL_9:
    ((void (__fastcall *)(intptr_t, intptr_t))playEndCallback->fields.invoke_impl)(
      playEndCallback->fields.method_code,
      playEndCallback->fields.method);
}


void ClassBoardEffectController__PlayRelease(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *players; // x0
  Il2CppObject *releaseEffectPlayer; // x1
  bool v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  Il2CppObject *current; // x25
  System_Action_o *v21; // x20
  __int64 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CB9E5F & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardEffectController_CheckPlayEnd__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__);
    sub_1C6BA08(&IClassBoardLockModel_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
    byte_4CB9E5F = 1;
  }
  memset(&v27, 0, sizeof(v27));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playEndCallback, (int32_t)callback, v7, v8);
  if ( !releaseSquare )
    goto LABEL_17;
  v11 = sub_1C6BB44(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0;
  ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v11, v12);
  ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v13);
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
    goto LABEL_17;
  releaseEffectPlayer = (Il2CppObject *)releaseSquare->fields.releaseEffectPlayer;
  items = players->fields._items;
  v17 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++players->fields._version;
  if ( !items )
    goto LABEL_17;
  size = players->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      players,
      releaseEffectPlayer,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    players->fields._size = size + 1;
    v19[4] = (Il2CppClass *)releaseEffectPlayer;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)releaseEffectPlayer, v14, v15);
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
LABEL_17:
    sub_1C6BC60(players, releaseEffectPlayer);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    players,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v27.fields._current;
    v21 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0);
    if ( !current )
      sub_1C6BC60(v22, v23);
    *(__int64 *)((char *)&qword_20 + (_QWORD)current) = (__int64)v21;
    sub_1C6B9AC((CGThumbnailListItem_o *)((char *)&qword_20 + (_QWORD)current), (int32_t)v21, v24, v25);
    v26 = *(__int64 *)((char *)&off_18 + (_QWORD)current);
    if ( v26 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(v26 + 24))(*(_QWORD *)(v26 + 64), *(_QWORD *)(v26 + 40));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
}


void ClassBoardEffectController__PlaySelectMoveCamera(
        ClassBoardEffectController_o *this,
        UnityEngine_Vector3_o pos,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  float z; // s8
  float y; // s9
  float x; // s10
  BalanceConfig_c *v10; // x0
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4CB9E62 & 1) == 0 )
  {
    sub_1C6BA08(&BalanceConfig_TypeInfo);
    byte_4CB9E62 = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v10 = BalanceConfig_TypeInfo;
  }
  v11.fields.y = y;
  v11.fields.z = z;
  v11.fields.x = x;
  ClassBoardEffectController__MoveCamera(
    this,
    v11,
    v10->static_fields->ClassBoardCameraSelectMoveMaxDistance,
    v10->static_fields->ClassBoardCameraSelectSecMin,
    v10->static_fields->ClassBoardCameraSelectSecMax,
    v10->static_fields->ClassBoardCameraSelectEasingType,
    callback,
    v4);
}


void ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        const MethodInfo *method)
{
  __int64 v5; // x22
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x21
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_object__bool__o *v12; // x23
  System_Collections_Generic_List_object__o *v13; // x19
  __int64 *v14; // x19
  __int64 v15; // x8
  __int64 v16; // x9
  IClassBoardSquareModel_c **v17; // x10
  __int64 v18; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 v25; // x19
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x23
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x22
  System_Collections_Generic_List_T__o *v39; // x24
  System_Func_object__bool__o *v40; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v41; // x24
  System_Func_object__bool__o *v42; // x25
  Il2CppObject *v43; // x0
  Il2CppObject *v44; // x23
  Il2CppClass *v45; // x8
  __int64 v46; // x9
  IClassBoardSquareModel_c **v47; // x10
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  ClassBoardEffectPlayer_o *v51; // x23
  bool v52; // w1
  __int64 v53; // x0
  __int64 v54; // x1
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  System_Collections_Generic_List_object__o *v57; // x0
  Il2CppObject *v58; // x1
  struct System_Object_array *items; // x8
  _QWORD *v60; // x9
  __int64 size; // x10
  Il2CppClass **v62; // x8
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  System_Collections_Generic_List_object__o *v67; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4CB9E67 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_1C6BA08(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_1C6BA08(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_1C6BA08(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_1C6BA08(&IClassBoardLockModel_TypeInfo);
    sub_1C6BA08(&IClassBoardSquareModel_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_1C6BA08(&Method_ClassBoardEffectController___c__DisplayClass17_0__RegisterConnectedSquareEnablePlayer_b__0__);
    sub_1C6BA08(&ClassBoardEffectController___c__DisplayClass17_0_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__1__);
    sub_1C6BA08(&Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__2__);
    sub_1C6BA08(&ClassBoardEffectController___c__DisplayClass17_1_TypeInfo);
    byte_4CB9E67 = 1;
  }
  v5 = sub_1C6BC54(ClassBoardEffectController___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = releaseSquare;
  v10 = v5 + 16;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)releaseSquare, v8, v9);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v12 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v5,
    Method_ClassBoardEffectController___c__DisplayClass17_0__RegisterConnectedSquareEnablePlayer_b__0__,
    0);
  if ( BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v12,
         (const MethodInfo_3124430 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v67 = v13;
  if ( !*(_QWORD *)v10 )
    goto LABEL_64;
  v14 = *(__int64 **)(*(_QWORD *)v10 + 184LL);
  if ( !v14 )
    goto LABEL_64;
  v15 = *v14;
  v16 = *(unsigned __int16 *)(*v14 + 302);
  if ( *(_WORD *)(*v14 + 302) )
  {
    v17 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v15 + 176) + 8LL);
    while ( *(v17 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v16;
      v17 += 2;
      if ( !v16 )
        goto LABEL_11;
    }
    v18 = v15 + 16LL * (*(_DWORD *)v17 + 17) + 312;
  }
  else
  {
LABEL_11:
    v18 = sub_1C41D90(v14, IClassBoardSquareModel_TypeInfo, 17);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_object__o **, _QWORD))v18)(
         v14,
         &v67,
         *(_QWORD *)(v18 + 8));
  if ( v67 && v67->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      v21 = *(unsigned __int16 *)&squareViewList->klass->_2.rank;
      if ( *(_WORD *)&squareViewList->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          --v21;
          p_offset += 4;
          if ( !v21 )
            goto LABEL_20;
        }
        v23 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_20:
        v23 = sub_1C41D90(
                this->fields.squareViewList,
                System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                0);
      }
      v25 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))v23)(
              squareViewList,
              *(_QWORD *)(v23 + 8));
      if ( !v25 )
        sub_1C6BC60(0, v24);
      while ( 1 )
      {
        v26 = *(_QWORD *)v25;
        v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
        {
          v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v27;
            v28 += 4;
            if ( !v27 )
              goto LABEL_27;
          }
          v29 = v26 + 16LL * *v28 + 312;
        }
        else
        {
LABEL_27:
          v29 = sub_1C41D90(v25, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8)) & 1) == 0 )
          break;
        v30 = sub_1C6BC54(ClassBoardEffectController___c__DisplayClass17_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v30, 0);
        v31 = *(_QWORD *)v25;
        v32 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
        {
          v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v33 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            --v32;
            v33 += 4;
            if ( !v32 )
              goto LABEL_34;
          }
          v34 = v31 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_34:
          v34 = sub_1C41D90(v25, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0);
        }
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v25, *(_QWORD *)(v34 + 8));
        if ( !v30 )
          sub_1C6BC60(v35, v35);
        *(_QWORD *)(v30 + 16) = v35;
        v38 = v30 + 16;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v30 + 16), v35, v36, v37);
        v39 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v40 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v40,
          (Il2CppObject *)v30,
          Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__1__,
          0);
        if ( !BasicHelper__Any_object_(
                v39,
                (System_Func_T__bool__o *)v40,
                (const MethodInfo_3124430 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
        {
          v41 = (System_Collections_Generic_IEnumerable_TSource__o *)v67;
          v42 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_IClassBoardSquareModel__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v42,
            (Il2CppObject *)v30,
            Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__2__,
            0);
          v43 = System_Linq_Enumerable__FirstOrDefault_object__51793644(
                  v41,
                  (System_Func_TSource__bool__o *)v42,
                  (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v44 = v43;
          if ( v43 )
          {
            v45 = v43->klass;
            v46 = *(unsigned __int16 *)&v43->klass->_2.rank;
            if ( *(_WORD *)&v43->klass->_2.rank )
            {
              v47 = (IClassBoardSquareModel_c **)&v45->_1.interfaceOffsets->offset;
              while ( *(v47 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v46;
                v47 += 2;
                if ( !v46 )
                  goto LABEL_43;
              }
              v48 = (__int64)&v45->vtable[*(_DWORD *)v47 + 15];
            }
            else
            {
LABEL_43:
              v48 = sub_1C41D90(v43, IClassBoardSquareModel_TypeInfo, 15);
            }
            v49 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v48)(v44, 0, *(_QWORD *)(v48 + 8));
            if ( (v49 & 1) == 0 )
            {
              if ( !*(_QWORD *)v38 )
                sub_1C6BC60(v49, v50);
              if ( !*(_QWORD *)v10 )
                sub_1C6BC60(v49, v50);
              v51 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v38 + 168LL);
              if ( !v51 )
                sub_1C6BC60(v49, v50);
              v52 = sub_1C6BB44(*(_QWORD *)(*(_QWORD *)v10 + 184LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v51,
                v52,
                (const MethodInfo_312EBE4 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v38 )
                sub_1C6BC60(v53, v54);
              v57 = (System_Collections_Generic_List_object__o *)this->fields.players;
              if ( !v57 )
                sub_1C6BC60(0, v54);
              v58 = *(Il2CppObject **)(*(_QWORD *)v38 + 168LL);
              items = v57->fields._items;
              v60 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
              ++v57->fields._version;
              if ( !items )
                sub_1C6BC60(v57, v58);
              size = v57->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v57,
                  v58,
                  *(const MethodInfo_3800974 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
              }
              else
              {
                v62 = &items->obj.klass + size;
                v57->fields._size = size + 1;
                v62[4] = (Il2CppClass *)v58;
                sub_1C6B9AC((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v58, v55, v56);
              }
            }
          }
        }
      }
      v63 = *(_QWORD *)v25;
      v64 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
      {
        v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
        {
          --v64;
          v65 += 4;
          if ( !v64 )
            goto LABEL_59;
        }
        v66 = v63 + 16LL * *v65 + 312;
      }
      else
      {
LABEL_59:
        v66 = sub_1C41D90(v25, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v66)(v25, *(_QWORD *)(v66 + 8));
      return;
    }
LABEL_64:
    sub_1C6BC60(v6, v7);
  }
}


void ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        bool isLock,
        const MethodInfo *method)
{
  __int64 v6; // x23
  _BOOL8 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  __int64 v11; // x22
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_object__bool__o *v13; // x24
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x19
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x25
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  __int64 v33; // x24
  __int64 v34; // x23
  System_Collections_Generic_List_T__o *v35; // x26
  System_Func_object__bool__o *v36; // x27
  _BOOL8 v37; // x0
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 *v41; // x25
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 *v44; // x26
  __int64 v45; // x8
  __int64 v46; // x9
  IClassBoardLineModel_c **v47; // x10
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x1
  __int64 v51; // x26
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  __int64 *v58; // x27
  __int64 v59; // x8
  int v60; // w26
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x8
  __int64 *v67; // x26
  __int64 v68; // x8
  __int64 v69; // x9
  int *v70; // x10
  __int64 v71; // x0
  __int64 *v72; // x26
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x26
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x1
  __int64 *v86; // x27
  __int64 v87; // x8
  int v88; // w26
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x1
  __int64 v94; // x8
  __int64 v95; // x9
  IClassBoardLineModel_c **v96; // x10
  __int64 v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  ClassBoardEffectPlayer_o *v100; // x0
  __int64 v101; // x0
  __int64 v102; // x1
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  System_Collections_Generic_List_object__o *v105; // x0
  Il2CppObject *v106; // x1
  struct System_Object_array *items; // x8
  _QWORD *v108; // x9
  __int64 size; // x10
  Il2CppClass **v110; // x8
  __int64 v111; // x0
  __int64 v112; // x1
  __int64 v113; // x24
  __int64 v114; // x8
  __int64 v115; // x9
  IClassBoardSquareModel_c **v116; // x10
  __int64 v117; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x24
  System_Func_object__bool__o *v119; // x25
  ClassBoardSquare_o *v120; // x23
  const MethodInfo *v121; // x3
  __int64 v122; // x0
  __int64 v123; // x1
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  __int64 v125; // x1
  int32_t v126; // w2
  const MethodInfo *v127; // x3
  System_Collections_Generic_List_object__o *v128; // x0
  Il2CppObject *v129; // x1
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x8
  __int64 v134; // x8
  __int64 v135; // x9
  int *v136; // x10
  __int64 v137; // x0

  if ( (byte_4CB9E66 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_1C6BA08(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
    sub_1C6BA08(&System_Func_ClassBoardSquare__bool__TypeInfo);
    sub_1C6BA08(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_1C6BA08(&IClassBoardLineModel_TypeInfo);
    sub_1C6BA08(&IClassBoardSquareModel_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectingLineBlankPlayer_b__0__);
    sub_1C6BA08(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectingLineBlankPlayer_b__1__);
    sub_1C6BA08(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardEffectController___c__DisplayClass16_2__RegisterConnectingLineBlankPlayer_b__2__);
    sub_1C6BA08(&ClassBoardEffectController___c__DisplayClass16_2_TypeInfo);
    byte_4CB9E66 = 1;
  }
  v6 = sub_1C6BC54(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_151;
  *(_QWORD *)(v6 + 16) = releaseSquare;
  v11 = v6 + 16;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)releaseSquare, v9, v10);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v13 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v13,
    (Il2CppObject *)v6,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectingLineBlankPlayer_b__0__,
    0);
  v7 = BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v13,
         (const MethodInfo_3124430 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v7 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_151:
    sub_1C6BC60(v7, v8);
  klass = lineViewList->klass;
  v16 = *(unsigned __int16 *)&lineViewList->klass->_2.rank;
  if ( *(_WORD *)&lineViewList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_10;
    }
    v18 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v18 = sub_1C41D90(this->fields.lineViewList, System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, 0);
  }
  v20 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))v18)(
          lineViewList,
          *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_1C6BC60(0, v19);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_17;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_17:
      v24 = sub_1C41D90(v20, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = sub_1C6BC54(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v25, 0);
    v26 = *(_QWORD *)v20;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v28 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_24;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_24:
      v29 = sub_1C41D90(v20, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
    if ( !v25 )
      sub_1C6BC60(v30, v30);
    *(_QWORD *)(v25 + 16) = v30;
    v33 = v25 + 16;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 16), v30, v31, v32);
    v34 = sub_1C6BC54(ClassBoardEffectController___c__DisplayClass16_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v34, 0);
    v35 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v36 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v36,
      (Il2CppObject *)v25,
      Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectingLineBlankPlayer_b__1__,
      0);
    v37 = BasicHelper__Any_object_(
            v35,
            (System_Func_T__bool__o *)v36,
            (const MethodInfo_3124430 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v37 )
    {
      if ( !v34 )
        sub_1C6BC60(v37, v38);
      *(_QWORD *)(v34 + 16) = 0;
      v41 = (__int64 *)(v34 + 16);
      sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 16), 0, v39, v40);
      if ( !*(_QWORD *)v33 )
        sub_1C6BC60(v42, v43);
      v44 = *(__int64 **)(*(_QWORD *)v33 + 176LL);
      if ( !v44 )
        sub_1C6BC60(v42, v43);
      v45 = *v44;
      v46 = *(unsigned __int16 *)(*v44 + 302);
      if ( *(_WORD *)(*v44 + 302) )
      {
        v47 = (IClassBoardLineModel_c **)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *(v47 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v46;
          v47 += 2;
          if ( !v46 )
            goto LABEL_35;
        }
        v48 = v45 + 16LL * (*(_DWORD *)v47 + 1) + 312;
      }
      else
      {
LABEL_35:
        v48 = sub_1C41D90(v44, IClassBoardLineModel_TypeInfo, 1);
      }
      v49 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8));
      v51 = v49;
      if ( !v49 )
        sub_1C6BC60(0, v50);
      v52 = *(_QWORD *)v49;
      v53 = *(unsigned __int16 *)(*(_QWORD *)v49 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v49 + 302LL) )
      {
        v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v54 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v53;
          v54 += 4;
          if ( !v53 )
            goto LABEL_42;
        }
        v55 = v52 + 16LL * *v54 + 312;
      }
      else
      {
LABEL_42:
        v55 = sub_1C41D90(v49, IClassBoardSquareModel_TypeInfo, 0);
      }
      v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8));
      if ( !*(_QWORD *)v11 )
        sub_1C6BC60(v56, v57);
      v58 = *(__int64 **)(*(_QWORD *)v11 + 184LL);
      if ( !v58 )
        sub_1C6BC60(v56, v57);
      v59 = *v58;
      v60 = v56;
      v61 = *(unsigned __int16 *)(*v58 + 302);
      if ( *(_WORD *)(*v58 + 302) )
      {
        v62 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v62 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v61;
          v62 += 4;
          if ( !v61 )
            goto LABEL_50;
        }
        v63 = v59 + 16LL * *v62 + 312;
      }
      else
      {
LABEL_50:
        v63 = sub_1C41D90(v58, IClassBoardSquareModel_TypeInfo, 0);
      }
      v64 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v63)(v58, *(_QWORD *)(v63 + 8));
      v66 = *(_QWORD *)v33;
      if ( v60 == (_DWORD)v64 )
      {
        if ( !v66 )
          sub_1C6BC60(v64, v65);
        v67 = *(__int64 **)(v66 + 176);
        if ( !v67 )
          sub_1C6BC60(v64, v65);
        v68 = *v67;
        v69 = *(unsigned __int16 *)(*v67 + 302);
        if ( *(_WORD *)(*v67 + 302) )
        {
          v70 = (int *)(*(_QWORD *)(v68 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v70 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v69;
            v70 += 4;
            if ( !v69 )
              goto LABEL_59;
          }
          v71 = v68 + 16LL * *v70 + 312;
        }
        else
        {
LABEL_59:
          v71 = sub_1C41D90(v67, IClassBoardLineModel_TypeInfo, 0);
        }
LABEL_93:
        v97 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v71)(v67, *(_QWORD *)(v71 + 8));
        *v41 = v97;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 16), v97, v98, v99);
        goto LABEL_94;
      }
      if ( !v66 )
        sub_1C6BC60(v64, v65);
      v72 = *(__int64 **)(v66 + 176);
      if ( !v72 )
        sub_1C6BC60(v64, v65);
      v73 = *v72;
      v74 = *(unsigned __int16 *)(*v72 + 302);
      if ( *(_WORD *)(*v72 + 302) )
      {
        v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v75 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v74;
          v75 += 4;
          if ( !v74 )
            goto LABEL_66;
        }
        v76 = v73 + 16LL * *v75 + 312;
      }
      else
      {
LABEL_66:
        v76 = sub_1C41D90(v72, IClassBoardLineModel_TypeInfo, 0);
      }
      v77 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v76)(v72, *(_QWORD *)(v76 + 8));
      v79 = v77;
      if ( !v77 )
        sub_1C6BC60(0, v78);
      v80 = *(_QWORD *)v77;
      v81 = *(unsigned __int16 *)(*(_QWORD *)v77 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v77 + 302LL) )
      {
        v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v82 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v81;
          v82 += 4;
          if ( !v81 )
            goto LABEL_74;
        }
        v83 = v80 + 16LL * *v82 + 312;
      }
      else
      {
LABEL_74:
        v83 = sub_1C41D90(v77, IClassBoardSquareModel_TypeInfo, 0);
      }
      v84 = (*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8));
      if ( !*(_QWORD *)v11 )
        sub_1C6BC60(v84, v85);
      v86 = *(__int64 **)(*(_QWORD *)v11 + 184LL);
      if ( !v86 )
        sub_1C6BC60(v84, v85);
      v87 = *v86;
      v88 = v84;
      v89 = *(unsigned __int16 *)(*v86 + 302);
      if ( *(_WORD *)(*v86 + 302) )
      {
        v90 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v90 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v89;
          v90 += 4;
          if ( !v89 )
            goto LABEL_82;
        }
        v91 = v87 + 16LL * *v90 + 312;
      }
      else
      {
LABEL_82:
        v91 = sub_1C41D90(v86, IClassBoardSquareModel_TypeInfo, 0);
      }
      v92 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v91)(v86, *(_QWORD *)(v91 + 8));
      if ( v88 == (_DWORD)v92 )
      {
        if ( !*(_QWORD *)v33 )
          sub_1C6BC60(v92, v93);
        v67 = *(__int64 **)(*(_QWORD *)v33 + 176LL);
        if ( !v67 )
          sub_1C6BC60(v92, v93);
        v94 = *v67;
        v95 = *(unsigned __int16 *)(*v67 + 302);
        if ( *(_WORD *)(*v67 + 302) )
        {
          v96 = (IClassBoardLineModel_c **)(*(_QWORD *)(v94 + 176) + 8LL);
          while ( *(v96 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v95;
            v96 += 2;
            if ( !v95 )
              goto LABEL_91;
          }
          v71 = v94 + 16LL * (*(_DWORD *)v96 + 1) + 312;
        }
        else
        {
LABEL_91:
          v71 = sub_1C41D90(v67, IClassBoardLineModel_TypeInfo, 1);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v41 )
      {
        if ( !*(_QWORD *)v33 )
          sub_1C6BC60(v92, v93);
        v100 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v33 + 160LL);
        if ( !v100 )
          sub_1C6BC60(0, v93);
        ClassBoardEffectPlayer__SetData_bool_(
          v100,
          isLock,
          (const MethodInfo_312EBE4 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v33 )
          sub_1C6BC60(v101, v102);
        v105 = (System_Collections_Generic_List_object__o *)this->fields.players;
        if ( !v105 )
          sub_1C6BC60(0, v102);
        v106 = *(Il2CppObject **)(*(_QWORD *)v33 + 160LL);
        items = v105->fields._items;
        v108 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
        ++v105->fields._version;
        if ( !items )
          sub_1C6BC60(v105, v106);
        size = v105->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v105,
            v106,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v108[4] + 192LL) + 112LL));
        }
        else
        {
          v110 = &items->obj.klass + size;
          v105->fields._size = size + 1;
          v110[4] = (Il2CppClass *)v106;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v110 + 4), (int32_t)v106, v103, v104);
        }
        v113 = *v41;
        if ( !*v41 )
          sub_1C6BC60(v111, v112);
        v114 = *(_QWORD *)v113;
        v115 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
        {
          v116 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v114 + 176) + 8LL);
          while ( *(v116 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v115;
            v116 += 2;
            if ( !v115 )
              goto LABEL_108;
          }
          v117 = v114 + 16LL * (*(_DWORD *)v116 + 5) + 312;
        }
        else
        {
LABEL_108:
          v117 = sub_1C41D90(*v41, IClassBoardSquareModel_TypeInfo, 5);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v117)(v113, *(_QWORD *)(v117 + 8)) & 1) != 0 )
        {
          squareViewList = this->fields.squareViewList;
          v119 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_ClassBoardSquare__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v119,
            (Il2CppObject *)v34,
            Method_ClassBoardEffectController___c__DisplayClass16_2__RegisterConnectingLineBlankPlayer_b__2__,
            0);
          v120 = (ClassBoardSquare_o *)System_Linq_Enumerable__FirstOrDefault_object__51793644(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)squareViewList,
                                         (System_Func_TSource__bool__o *)v119,
                                         (const MethodInfo_3164EEC *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v120, 0, 0) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, v120, isLock, v121);
            if ( !v120 )
              sub_1C6BC60(v122, v123);
            enableEffectPlayer = v120->fields.enableEffectPlayer;
            if ( !enableEffectPlayer )
              sub_1C6BC60(0, v123);
            ClassBoardEffectPlayer__SetData_bool_(
              enableEffectPlayer,
              isLock,
              (const MethodInfo_312EBE4 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v128 = (System_Collections_Generic_List_object__o *)this->fields.players;
            if ( !v128 )
              sub_1C6BC60(0, v125);
            v129 = (Il2CppObject *)v120->fields.enableEffectPlayer;
            v130 = v128->fields._items;
            v131 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
            ++v128->fields._version;
            if ( !v130 )
              sub_1C6BC60(v128, v129);
            v132 = v128->fields._size;
            if ( (unsigned int)v132 >= LODWORD(v130->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v128,
                v129,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
            }
            else
            {
              v133 = &v130->obj.klass + v132;
              v128->fields._size = v132 + 1;
              v133[4] = (Il2CppClass *)v129;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v133 + 4), (int32_t)v129, v126, v127);
            }
          }
        }
      }
    }
  }
  v134 = *(_QWORD *)v20;
  v135 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v136 = (int *)(*(_QWORD *)(v134 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v136 - 1) != System_IDisposable_TypeInfo )
    {
      --v135;
      v136 += 4;
      if ( !v135 )
        goto LABEL_125;
    }
    v137 = v134 + 16LL * *v136 + 312;
  }
  else
  {
LABEL_125:
    v137 = sub_1C41D90(v20, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v137)(v20, *(_QWORD *)(v137 + 8));
}


void ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController___c_c *v3; // x0
  System_Collections_Generic_List_object__o *players; // x20
  System_Action_object__o *_9__13_0; // x21
  Il2CppObject *v6; // x22
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v11; // x8
  int32_t size; // w2
  int v13; // w9
  struct System_Action_o **p_playEndCallback; // x19

  if ( (byte_4CB9E63 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_ClassBoardEffectPlayer__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__);
    sub_1C6BA08(&Method_ClassBoardEffectController___c__ResetPlayers_b__13_0__);
    sub_1C6BA08(&ClassBoardEffectController___c_TypeInfo);
    byte_4CB9E63 = 1;
  }
  v3 = ClassBoardEffectController___c_TypeInfo;
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !ClassBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectController___c_TypeInfo);
    v3 = ClassBoardEffectController___c_TypeInfo;
  }
  _9__13_0 = (System_Action_object__o *)v3->static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = ClassBoardEffectController___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__13_0 = (System_Action_object__o *)sub_1C6BC54(System_Action_ClassBoardEffectPlayer__TypeInfo);
    System_Action_object____ctor(_9__13_0, v6, Method_ClassBoardEffectController___c__ResetPlayers_b__13_0__, 0);
    static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__13_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v8, v9);
  }
  if ( !players
    || (System_Collections_Generic_List_object___ForEach(
          players,
          (System_Action_T__o *)_9__13_0,
          (const MethodInfo_38013B4 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v11 = this->fields.players) == 0) )
  {
    sub_1C6BC60(v3, method);
  }
  size = v11->fields._size;
  v13 = v11->fields._version + 1;
  v11->fields._size = 0;
  v11->fields._version = v13;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v11->fields._items, 0, size, 0);
  this->fields.playEndCallback = 0;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_playEndCallback, 0, size, v10);
}


void ClassBoardEffectController__SkipClassBoardStartEffect(
        ClassBoardEffectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Action_o **p_playEndCallback; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0
  Il2CppObject *v9; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v11; // x8
  struct ClassBoardEffectPlayer_o *v12; // x21
  System_Action_o *v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct ClassBoardBackground_o *v18; // x8
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v20; // x9
  __int64 playCallback_low; // x10
  __int64 v22; // x8
  struct System_Action_o *playCallback; // x8

  if ( (byte_4CB9E61 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_ClassBoardEffectController_PlayNext__);
    sub_1C6BA08(&Method_ClassBoardEffectPlayer_SetData_int___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_4CB9E61 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playEndCallback, (int32_t)callback, v6, v7);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_20;
  skipMainEffectPlayer = bgModel->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    goto LABEL_20;
  ClassBoardEffectPlayer__SetData_int_(
    skipMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_312EC44 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v11 = this->fields.bgModel;
  if ( !v11 )
    goto LABEL_20;
  v12 = v11->fields.skipMainEffectPlayer;
  v13 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0);
  if ( !v12 )
    goto LABEL_20;
  v12->fields.endCallback = v13;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v12->fields.endCallback, (int32_t)v13, v14, v15);
  v18 = this->fields.bgModel;
  if ( !v18 )
    goto LABEL_20;
  skipMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !skipMainEffectPlayer )
    goto LABEL_20;
  v9 = (Il2CppObject *)v18->fields.skipMainEffectPlayer;
  Name_k__BackingField = skipMainEffectPlayer->fields._Name_k__BackingField;
  v20 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++HIDWORD(skipMainEffectPlayer->fields.playCallback);
  if ( !Name_k__BackingField )
    goto LABEL_20;
  playCallback_low = SLODWORD(skipMainEffectPlayer->fields.playCallback);
  if ( (unsigned int)playCallback_low >= LODWORD(Name_k__BackingField[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)skipMainEffectPlayer,
      v9,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(skipMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v22 + 32) = v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v9, v16, v17);
  }
  skipMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !skipMainEffectPlayer )
    goto LABEL_20;
  if ( SLODWORD(skipMainEffectPlayer->fields.playCallback) < 1 )
  {
    playCallback = *p_playEndCallback;
    if ( *p_playEndCallback )
      goto LABEL_19;
LABEL_20:
    sub_1C6BC60(skipMainEffectPlayer, v9);
  }
  skipMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)skipMainEffectPlayer,
                                                       (const MethodInfo_3161D1C *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
  if ( !skipMainEffectPlayer )
    goto LABEL_20;
  playCallback = skipMainEffectPlayer->fields.playCallback;
  if ( playCallback )
LABEL_19:
    ((void (__fastcall *)(intptr_t, intptr_t))playCallback->fields.invoke_impl)(
      playCallback->fields.method_code,
      playCallback->fields.method);
}


void ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB9E69 & 1) == 0 )
  {
    sub_1C6BA08(&ClassBoardEffectController___c_TypeInfo);
    byte_4CB9E69 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(ClassBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectController___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectController___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)ClassBoardEffectController___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void ClassBoardEffectController___c___ctor(ClassBoardEffectController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void ClassBoardEffectController___c___ResetPlayers_b__13_0(
        ClassBoardEffectController___c_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C6BC60(this, 0);
  ClassBoardEffectPlayer__End(x, (const MethodInfo *)x);
}


void ClassBoardEffectController___c__DisplayClass16_0___ctor(
        ClassBoardEffectController___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardEffectController___c__DisplayClass16_0___RegisterConnectingLineBlankPlayer_b__0(
        ClassBoardEffectController___c__DisplayClass16_0_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass16_0_o *)this->fields.releaseSquare) == 0 )
    sub_1C6BC60(this, x);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  return System_String__op_Equality(Name_k__BackingField, name, 0);
}


void ClassBoardEffectController___c__DisplayClass16_1___ctor(
        ClassBoardEffectController___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardEffectController___c__DisplayClass16_1___RegisterConnectingLineBlankPlayer_b__1(
        ClassBoardEffectController___c__DisplayClass16_1_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass16_1_o *)this->fields.classBoardLine) == 0 )
    sub_1C6BC60(this, x);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  return System_String__op_Equality(Name_k__BackingField, name, 0);
}


void ClassBoardEffectController___c__DisplayClass16_2___ctor(
        ClassBoardEffectController___c__DisplayClass16_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardEffectController___c__DisplayClass16_2___RegisterConnectingLineBlankPlayer_b__2(
        ClassBoardEffectController___c__DisplayClass16_2_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  ClassBoardEffectController___c__DisplayClass16_2_o *v4; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 v9; // x0
  struct IClassBoardSquareModel_o *connectSquareModel; // x20
  IClassBoardSquareModel_c *v11; // x8
  int v12; // w19
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4CB9E6A & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_2_o *)sub_1C6BA08(&IClassBoardSquareModel_TypeInfo);
    byte_4CB9E6A = 1;
  }
  if ( !x )
    goto LABEL_19;
  SquareModel_k__BackingField = x->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_19;
  klass = SquareModel_k__BackingField->klass;
  v7 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_9;
    }
    v9 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_9:
    v9 = sub_1C41D90(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v9)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(v9 + 8));
  connectSquareModel = v4->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_1C6BC60(this, x);
  v11 = connectSquareModel->klass;
  v12 = (int)this;
  v13 = *(unsigned __int16 *)&connectSquareModel->klass->_2.rank;
  if ( *(_WORD *)&connectSquareModel->klass->_2.rank )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_16;
    }
    v15 = (__int64)&v11->vtable[*v14];
  }
  else
  {
LABEL_16:
    v15 = sub_1C41D90(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  connectSquareModel,
                  *(_QWORD *)(v15 + 8));
}


void ClassBoardEffectController___c__DisplayClass17_0___ctor(
        ClassBoardEffectController___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardEffectController___c__DisplayClass17_0___RegisterConnectedSquareEnablePlayer_b__0(
        ClassBoardEffectController___c__DisplayClass17_0_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass17_0_o *)this->fields.releaseSquare) == 0 )
    sub_1C6BC60(this, x);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  return System_String__op_Equality(Name_k__BackingField, name, 0);
}


void ClassBoardEffectController___c__DisplayClass17_1___ctor(
        ClassBoardEffectController___c__DisplayClass17_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool ClassBoardEffectController___c__DisplayClass17_1___RegisterConnectedSquareEnablePlayer_b__1(
        ClassBoardEffectController___c__DisplayClass17_1_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass17_1_o *)this->fields.square) == 0 )
    sub_1C6BC60(this, x);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  return System_String__op_Equality(Name_k__BackingField, name, 0);
}


bool ClassBoardEffectController___c__DisplayClass17_1___RegisterConnectedSquareEnablePlayer_b__2(
        ClassBoardEffectController___c__DisplayClass17_1_o *this,
        IClassBoardSquareModel_o *model,
        const MethodInfo *method)
{
  ClassBoardEffectController___c__DisplayClass17_1_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *v11; // x8
  int v12; // w19
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0

  v4 = this;
  if ( (byte_4CB9E6B & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass17_1_o *)sub_1C6BA08(&IClassBoardSquareModel_TypeInfo);
    byte_4CB9E6B = 1;
  }
  if ( !model )
    goto LABEL_19;
  klass = model->klass;
  v6 = *(unsigned __int16 *)&model->klass->_2.rank;
  if ( *(_WORD *)&model->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    v8 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_8:
    v8 = sub_1C41D90(model, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardEffectController___c__DisplayClass17_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v8)(
                                                                 model,
                                                                 *(_QWORD *)(v8 + 8));
  square = v4->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0 )
LABEL_19:
    sub_1C6BC60(this, model);
  v11 = SquareModel_k__BackingField->klass;
  v12 = (int)this;
  v13 = *(unsigned __int16 *)&SquareModel_k__BackingField->klass->_2.rank;
  if ( *(_WORD *)&SquareModel_k__BackingField->klass->_2.rank )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_16;
    }
    v15 = (__int64)&v11->vtable[*v14];
  }
  else
  {
LABEL_16:
    v15 = sub_1C41D90(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v15 + 8));
}