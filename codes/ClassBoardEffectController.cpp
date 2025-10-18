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
  __int64 *monitor; // x20
  __int64 v24; // x8
  __int64 v25; // x9
  IClassBoardSquareModel_c **v26; // x10
  __int64 v27; // x0

  if ( (byte_4C46A95 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_First_ClassBoardSquare___);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
    sub_1C37058(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
    byte_4C46A95 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v11;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.players, (int32_t)v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareViewList = squares;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)squares, v14, v15);
  this->fields.lineViewList = lines;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.lineViewList, (int32_t)lines, v16, v17);
  this->fields.mapCamera = camera;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mapCamera, (int32_t)camera, v18, v19);
  this->fields.bgModel = bg;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.bgModel, (int32_t)bg, v20, v21);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)squares,
             (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !object || (monitor = (__int64 *)object[11].monitor) == 0 )
    sub_1C372B4(object);
  v24 = *monitor;
  v25 = *(unsigned __int16 *)(*monitor + 302);
  if ( *(_WORD *)(*monitor + 302) )
  {
    v26 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v24 + 176) + 8LL);
    while ( *(v26 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v25;
      v26 += 2;
      if ( !v25 )
        goto LABEL_9;
    }
    v27 = v24 + 16LL * (*(_DWORD *)v26 + 1) + 312;
  }
  else
  {
LABEL_9:
    v27 = sub_1C87870(object[11].monitor, IClassBoardSquareModel_TypeInfo, 1);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v27)(monitor, *(_QWORD *)(v27 + 8));
}


void ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v4; // w8
  struct System_Action_o *playEndCallback; // x8

  v2 = this;
  if ( (byte_4C46A9B & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_4C46A9B = 1;
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
    sub_1C372B4(this);
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
  UnityEngine_Transform_o *v20; // x23
  float v21; // s10
  float v22; // s9
  float v23; // s8
  float v24; // s12
  float v25; // s13
  float v26; // s14
  float v27; // s15
  float v28; // s11
  float v29; // s13
  float v30; // s4
  float v31; // s0 OVERLAPPED
  float v32; // s3
  float v33; // s1
  float v34; // s2
  float v35; // [xsp+4h] [xbp-9Ch]
  float v36; // [xsp+8h] [xbp-98h]
  float screenPos; // [xsp+Ch] [xbp-94h]
  System_Nullable_Vector3__o screenPos_4; // [xsp+10h] [xbp-90h] BYREF
  System_Nullable_Vector3__o v39; // 0:x0.16
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4C46A9F & 1) == 0 )
  {
    sub_1C37058(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_1C37058(&Method_System_Nullable_Vector3___ctor__);
    byte_4C46A9F = 1;
  }
  *(_QWORD *)&v39.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v39.fields.hasValue = &screenPos_4;
  v40.fields.x = x;
  v40.fields.y = y;
  v40.fields.z = z;
  *(_QWORD *)&screenPos_4.fields.hasValue = 0;
  *(_QWORD *)&screenPos_4.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v39, v40, *(const MethodInfo_38CD368 **)&ease);
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
  v20 = SafeCameraDestination;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mapCamera, 0);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0);
  if ( !v20 )
    goto LABEL_20;
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  v35 = secMax;
  v36 = secMin;
  if ( !SafeCameraDestination )
    goto LABEL_20;
  screenPos = x;
  v21 = y;
  v22 = z;
  v24 = *(float *)&v20->fields.m_CachedPtr;
  v23 = *((float *)&v20->fields.m_CachedPtr + 1);
  v25 = localPosition.fields.x;
  v26 = localPosition.fields.y;
  v27 = localPosition.fields.z;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SafeCameraDestination, 0);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  v42 = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0);
  v28 = v42.fields.z;
  if ( !byte_4C3C91F )
  {
    sub_1C37058(&System_Math_TypeInfo);
    byte_4C3C91F = 1;
  }
  v29 = v25 - v24;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v30 = sqrtf(
          (float)((float)(v29 * v29) + (float)((float)(v26 - v23) * (float)(v26 - v23)))
        + (float)((float)(v27 - v28) * (float)(v27 - v28)))
      / (float)maxDistance;
  v31 = screenPos;
  v32 = 0.0;
  if ( v30 != 0.0 )
  {
    v32 = v36;
    if ( v30 >= v36 )
    {
      v32 = v35;
      if ( v30 <= v35 )
        v32 = v30;
    }
  }
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
LABEL_20:
    sub_1C372B4(SafeCameraDestination);
  v33 = v21;
  v34 = v22;
  MapCamera__StartAutoMove((MapCamera_o *)SafeCameraDestination, *(UnityEngine_Vector3_o *)&v31, v32, ease, callback, 0);
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
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v10; // x8
  struct ClassBoardEffectPlayer_o *v11; // x21
  System_Action_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct ClassBoardBackground_o *v17; // x8
  Il2CppObject *v18; // x1
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v20; // x9
  __int64 playCallback_low; // x10
  __int64 v22; // x8
  struct System_Action_o *playCallback; // x8

  if ( (byte_4C46A97 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardEffectController_PlayNext__);
    sub_1C37058(&Method_ClassBoardEffectPlayer_SetData_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_4C46A97 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playEndCallback, (int32_t)callback, v6, v7);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_20;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_30DB63C *)Method_ClassBoardEffectPlayer_SetData_int___);
  v10 = this->fields.bgModel;
  if ( !v10 )
    goto LABEL_20;
  v11 = v10->fields.startMainEffectPlayer;
  v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0);
  if ( !v11 )
    goto LABEL_20;
  v11->fields.endCallback = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11->fields.endCallback, (int32_t)v12, v13, v14);
  v17 = this->fields.bgModel;
  if ( !v17 )
    goto LABEL_20;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  v18 = (Il2CppObject *)v17->fields.startMainEffectPlayer;
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
      v18,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(startMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v22 + 32) = v18;
    sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v18, v15, v16);
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
    sub_1C372B4(startMainEffectPlayer);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                        (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
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
  int32_t v4; // w1
  struct System_Action_o *playEndCallback; // x8

  if ( (byte_4C46A9C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
    byte_4C46A9C = 1;
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  v4 = this->fields.playEndCount + 1;
  this->fields.playEndCount = v4;
  if ( !players )
    goto LABEL_10;
  if ( v4 >= players->fields._size )
  {
    playEndCallback = this->fields.playEndCallback;
    if ( playEndCallback )
      goto LABEL_9;
LABEL_10:
    sub_1C372B4(players);
  }
  players = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           players,
                                                           v4,
                                                           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
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
  bool v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *releaseEffectPlayer; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x8
  Il2CppObject *current; // x25
  System_Action_o *v21; // x20
  __int64 v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  __int64 v25; // x8
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4C46A96 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardEffectController_CheckPlayEnd__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__);
    sub_1C37058(&IClassBoardLockModel_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
    byte_4C46A96 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playEndCallback, (int32_t)callback, v7, v8);
  if ( !releaseSquare )
    goto LABEL_17;
  v10 = sub_1C37194(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0;
  ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v10, v11);
  ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v12);
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
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    players->fields._size = size + 1;
    v19[4] = (Il2CppClass *)releaseEffectPlayer;
    sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), (int32_t)releaseEffectPlayer, v13, v14);
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
LABEL_17:
    sub_1C372B4(players);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    players,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v26.fields._current;
    v21 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0);
    if ( !current )
      sub_1C372B4(v22);
    *(__int64 *)((char *)&qword_20 + (_QWORD)current) = (__int64)v21;
    sub_1C36FFC((CGThumbnailListItem_o *)((char *)&qword_20 + (_QWORD)current), (int32_t)v21, v23, v24);
    v25 = *(__int64 *)((char *)&off_18 + (_QWORD)current);
    if ( v25 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(v25 + 24))(*(_QWORD *)(v25 + 64), *(_QWORD *)(v25 + 40));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
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
  if ( (byte_4C46A99 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    byte_4C46A99 = 1;
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
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  __int64 v9; // x21
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_object__bool__o *v11; // x23
  System_Collections_Generic_List_object__o *v12; // x19
  __int64 *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x9
  IClassBoardSquareModel_c **v16; // x10
  __int64 v17; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x19
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x23
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x22
  System_Collections_Generic_List_T__o *v37; // x24
  System_Func_object__bool__o *v38; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v39; // x24
  System_Func_object__bool__o *v40; // x25
  Il2CppObject *v41; // x0
  Il2CppObject *v42; // x23
  Il2CppClass *v43; // x8
  __int64 v44; // x9
  IClassBoardSquareModel_c **v45; // x10
  __int64 v46; // x0
  __int64 v47; // x0
  ClassBoardEffectPlayer_o *v48; // x23
  bool v49; // w1
  __int64 v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_List_object__o *v53; // x0
  Il2CppObject *v54; // x1
  struct System_Object_array *items; // x8
  _QWORD *v56; // x9
  __int64 size; // x10
  Il2CppClass **v58; // x8
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  System_Collections_Generic_List_object__o *v63; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4C46A9E & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_1C37058(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_1C37058(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_1C37058(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_1C37058(&IClassBoardLockModel_TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_1C37058(&Method_ClassBoardEffectController___c__DisplayClass17_0__RegisterConnectedSquareEnablePlayer_b__0__);
    sub_1C37058(&ClassBoardEffectController___c__DisplayClass17_0_TypeInfo);
    sub_1C37058(&Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__1__);
    sub_1C37058(&Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__2__);
    sub_1C37058(&ClassBoardEffectController___c__DisplayClass17_1_TypeInfo);
    byte_4C46A9E = 1;
  }
  v5 = sub_1C372A4(ClassBoardEffectController___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = releaseSquare;
  v9 = v5 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)releaseSquare, v7, v8);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v11 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_ClassBoardEffectController___c__DisplayClass17_0__RegisterConnectedSquareEnablePlayer_b__0__,
    0);
  if ( BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v11,
         (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v63 = v12;
  if ( !*(_QWORD *)v9 )
    goto LABEL_64;
  v13 = *(__int64 **)(*(_QWORD *)v9 + 184LL);
  if ( !v13 )
    goto LABEL_64;
  v14 = *v13;
  v15 = *(unsigned __int16 *)(*v13 + 302);
  if ( *(_WORD *)(*v13 + 302) )
  {
    v16 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v14 + 176) + 8LL);
    while ( *(v16 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v15;
      v16 += 2;
      if ( !v15 )
        goto LABEL_11;
    }
    v17 = v14 + 16LL * (*(_DWORD *)v16 + 17) + 312;
  }
  else
  {
LABEL_11:
    v17 = sub_1C87870(v13, IClassBoardSquareModel_TypeInfo, 17);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_object__o **, _QWORD))v17)(
         v13,
         &v63,
         *(_QWORD *)(v17 + 8));
  if ( v63 && v63->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      v20 = *(unsigned __int16 *)&squareViewList->klass->_2.rank;
      if ( *(_WORD *)&squareViewList->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          --v20;
          p_offset += 4;
          if ( !v20 )
            goto LABEL_20;
        }
        v22 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_20:
        v22 = sub_1C87870(
                this->fields.squareViewList,
                System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                0);
      }
      v23 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))v22)(
              squareViewList,
              *(_QWORD *)(v22 + 8));
      if ( !v23 )
        sub_1C372B4(0);
      while ( 1 )
      {
        v24 = *(_QWORD *)v23;
        v25 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
        {
          v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v26 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v25;
            v26 += 4;
            if ( !v25 )
              goto LABEL_27;
          }
          v27 = v24 + 16LL * *v26 + 312;
        }
        else
        {
LABEL_27:
          v27 = sub_1C87870(v23, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v23, *(_QWORD *)(v27 + 8)) & 1) == 0 )
          break;
        v28 = sub_1C372A4(ClassBoardEffectController___c__DisplayClass17_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v28, 0);
        v29 = *(_QWORD *)v23;
        v30 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v31 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_34;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_34:
          v32 = sub_1C87870(v23, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0);
        }
        v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v23, *(_QWORD *)(v32 + 8));
        if ( !v28 )
          sub_1C372B4(v33);
        *(_QWORD *)(v28 + 16) = v33;
        v36 = v28 + 16;
        sub_1C36FFC((CGThumbnailListItem_o *)(v28 + 16), v33, v34, v35);
        v37 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v38 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v38,
          (Il2CppObject *)v28,
          Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__1__,
          0);
        if ( !BasicHelper__Any_object_(
                v37,
                (System_Func_T__bool__o *)v38,
                (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
        {
          v39 = (System_Collections_Generic_IEnumerable_TSource__o *)v63;
          v40 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_IClassBoardSquareModel__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v40,
            (Il2CppObject *)v28,
            Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__2__,
            0);
          v41 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
                  v39,
                  (System_Func_TSource__bool__o *)v40,
                  (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v42 = v41;
          if ( v41 )
          {
            v43 = v41->klass;
            v44 = *(unsigned __int16 *)&v41->klass->_2.rank;
            if ( *(_WORD *)&v41->klass->_2.rank )
            {
              v45 = (IClassBoardSquareModel_c **)&v43->_1.interfaceOffsets->offset;
              while ( *(v45 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v44;
                v45 += 2;
                if ( !v44 )
                  goto LABEL_43;
              }
              v46 = (__int64)&v43->vtable[*(_DWORD *)v45 + 15];
            }
            else
            {
LABEL_43:
              v46 = sub_1C87870(v41, IClassBoardSquareModel_TypeInfo, 15);
            }
            v47 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v46)(v42, 0, *(_QWORD *)(v46 + 8));
            if ( (v47 & 1) == 0 )
            {
              if ( !*(_QWORD *)v36 )
                sub_1C372B4(v47);
              if ( !*(_QWORD *)v9 )
                sub_1C372B4(v47);
              v48 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v36 + 168LL);
              if ( !v48 )
                sub_1C372B4(v47);
              v49 = sub_1C37194(*(_QWORD *)(*(_QWORD *)v9 + 184LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v48,
                v49,
                (const MethodInfo_30DB5DC *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v36 )
                sub_1C372B4(v50);
              v53 = (System_Collections_Generic_List_object__o *)this->fields.players;
              if ( !v53 )
                sub_1C372B4(0);
              v54 = *(Il2CppObject **)(*(_QWORD *)v36 + 168LL);
              items = v53->fields._items;
              v56 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
              ++v53->fields._version;
              if ( !items )
                sub_1C372B4(v53);
              size = v53->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v53,
                  v54,
                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
              }
              else
              {
                v58 = &items->obj.klass + size;
                v53->fields._size = size + 1;
                v58[4] = (Il2CppClass *)v54;
                sub_1C36FFC((CGThumbnailListItem_o *)(v58 + 4), (int32_t)v54, v51, v52);
              }
            }
          }
        }
      }
      v59 = *(_QWORD *)v23;
      v60 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
      {
        v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
        {
          --v60;
          v61 += 4;
          if ( !v60 )
            goto LABEL_59;
        }
        v62 = v59 + 16LL * *v61 + 312;
      }
      else
      {
LABEL_59:
        v62 = sub_1C87870(v23, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v62)(v23, *(_QWORD *)(v62 + 8));
      return;
    }
LABEL_64:
    sub_1C372B4(v6);
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
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x22
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_object__bool__o *v12; // x24
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 v17; // x0
  __int64 v18; // x19
  __int64 v19; // x8
  __int64 v20; // x9
  int *v21; // x10
  __int64 v22; // x0
  __int64 v23; // x25
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x24
  __int64 v32; // x23
  System_Collections_Generic_List_T__o *v33; // x26
  System_Func_object__bool__o *v34; // x27
  _BOOL8 v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 *v38; // x25
  __int64 v39; // x0
  __int64 *v40; // x26
  __int64 v41; // x8
  __int64 v42; // x9
  IClassBoardLineModel_c **v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x26
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 *v52; // x27
  __int64 v53; // x8
  int v54; // w26
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x8
  __int64 *v60; // x26
  __int64 v61; // x8
  __int64 v62; // x9
  int *v63; // x10
  __int64 v64; // x0
  __int64 *v65; // x26
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x0
  __int64 v71; // x26
  __int64 v72; // x8
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 *v77; // x27
  __int64 v78; // x8
  int v79; // w26
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  __int64 v83; // x0
  __int64 v84; // x8
  __int64 v85; // x9
  IClassBoardLineModel_c **v86; // x10
  __int64 v87; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  ClassBoardEffectPlayer_o *v90; // x0
  __int64 v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  System_Collections_Generic_List_object__o *v94; // x0
  Il2CppObject *v95; // x1
  struct System_Object_array *items; // x8
  _QWORD *v97; // x9
  __int64 size; // x10
  Il2CppClass **v99; // x8
  __int64 v100; // x0
  __int64 v101; // x24
  __int64 v102; // x8
  __int64 v103; // x9
  IClassBoardSquareModel_c **v104; // x10
  __int64 v105; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x24
  System_Func_object__bool__o *v107; // x25
  ClassBoardSquare_o *v108; // x23
  const MethodInfo *v109; // x3
  __int64 v110; // x0
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  System_Collections_Generic_List_object__o *v114; // x0
  Il2CppObject *v115; // x1
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  Il2CppClass **v119; // x8
  __int64 v120; // x8
  __int64 v121; // x9
  int *v122; // x10
  __int64 v123; // x0

  if ( (byte_4C46A9D & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_1C37058(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
    sub_1C37058(&System_Func_ClassBoardSquare__bool__TypeInfo);
    sub_1C37058(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_1C37058(&IClassBoardLineModel_TypeInfo);
    sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectingLineBlankPlayer_b__0__);
    sub_1C37058(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
    sub_1C37058(&Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectingLineBlankPlayer_b__1__);
    sub_1C37058(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
    sub_1C37058(&Method_ClassBoardEffectController___c__DisplayClass16_2__RegisterConnectingLineBlankPlayer_b__2__);
    sub_1C37058(&ClassBoardEffectController___c__DisplayClass16_2_TypeInfo);
    byte_4C46A9D = 1;
  }
  v6 = sub_1C372A4(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_151;
  *(_QWORD *)(v6 + 16) = releaseSquare;
  v10 = v6 + 16;
  sub_1C36FFC((CGThumbnailListItem_o *)(v6 + 16), (int32_t)releaseSquare, v8, v9);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v12 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v6,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectingLineBlankPlayer_b__0__,
    0);
  v7 = BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v12,
         (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v7 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_151:
    sub_1C372B4(v7);
  klass = lineViewList->klass;
  v15 = *(unsigned __int16 *)&lineViewList->klass->_2.rank;
  if ( *(_WORD *)&lineViewList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      --v15;
      p_offset += 4;
      if ( !v15 )
        goto LABEL_10;
    }
    v17 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v17 = sub_1C87870(this->fields.lineViewList, System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, 0);
  }
  v18 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))v17)(
          lineViewList,
          *(_QWORD *)(v17 + 8));
  if ( !v18 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v19 = *(_QWORD *)v18;
    v20 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v21 = (int *)(*(_QWORD *)(v19 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v21 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v20;
        v21 += 4;
        if ( !v20 )
          goto LABEL_17;
      }
      v22 = v19 + 16LL * *v21 + 312;
    }
    else
    {
LABEL_17:
      v22 = sub_1C87870(v18, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v22)(v18, *(_QWORD *)(v22 + 8)) & 1) == 0 )
      break;
    v23 = sub_1C372A4(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v23, 0);
    v24 = *(_QWORD *)v18;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v26 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_24;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_24:
      v27 = sub_1C87870(v18, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v18, *(_QWORD *)(v27 + 8));
    if ( !v23 )
      sub_1C372B4(v28);
    *(_QWORD *)(v23 + 16) = v28;
    v31 = v23 + 16;
    sub_1C36FFC((CGThumbnailListItem_o *)(v23 + 16), v28, v29, v30);
    v32 = sub_1C372A4(ClassBoardEffectController___c__DisplayClass16_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v32, 0);
    v33 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v34 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v34,
      (Il2CppObject *)v23,
      Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectingLineBlankPlayer_b__1__,
      0);
    v35 = BasicHelper__Any_object_(
            v33,
            (System_Func_T__bool__o *)v34,
            (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v35 )
    {
      if ( !v32 )
        sub_1C372B4(v35);
      *(_QWORD *)(v32 + 16) = 0;
      v38 = (__int64 *)(v32 + 16);
      sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 16), 0, v36, v37);
      if ( !*(_QWORD *)v31 )
        sub_1C372B4(v39);
      v40 = *(__int64 **)(*(_QWORD *)v31 + 176LL);
      if ( !v40 )
        sub_1C372B4(v39);
      v41 = *v40;
      v42 = *(unsigned __int16 *)(*v40 + 302);
      if ( *(_WORD *)(*v40 + 302) )
      {
        v43 = (IClassBoardLineModel_c **)(*(_QWORD *)(v41 + 176) + 8LL);
        while ( *(v43 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v42;
          v43 += 2;
          if ( !v42 )
            goto LABEL_35;
        }
        v44 = v41 + 16LL * (*(_DWORD *)v43 + 1) + 312;
      }
      else
      {
LABEL_35:
        v44 = sub_1C87870(v40, IClassBoardLineModel_TypeInfo, 1);
      }
      v45 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v44)(v40, *(_QWORD *)(v44 + 8));
      v46 = v45;
      if ( !v45 )
        sub_1C372B4(0);
      v47 = *(_QWORD *)v45;
      v48 = *(unsigned __int16 *)(*(_QWORD *)v45 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v45 + 302LL) )
      {
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v49 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_42;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_42:
        v50 = sub_1C87870(v45, IClassBoardSquareModel_TypeInfo, 0);
      }
      v51 = (*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8));
      if ( !*(_QWORD *)v10 )
        sub_1C372B4(v51);
      v52 = *(__int64 **)(*(_QWORD *)v10 + 184LL);
      if ( !v52 )
        sub_1C372B4(v51);
      v53 = *v52;
      v54 = v51;
      v55 = *(unsigned __int16 *)(*v52 + 302);
      if ( *(_WORD *)(*v52 + 302) )
      {
        v56 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v56 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v55;
          v56 += 4;
          if ( !v55 )
            goto LABEL_50;
        }
        v57 = v53 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_50:
        v57 = sub_1C87870(v52, IClassBoardSquareModel_TypeInfo, 0);
      }
      v58 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v57)(v52, *(_QWORD *)(v57 + 8));
      v59 = *(_QWORD *)v31;
      if ( v54 == (_DWORD)v58 )
      {
        if ( !v59 )
          sub_1C372B4(v58);
        v60 = *(__int64 **)(v59 + 176);
        if ( !v60 )
          sub_1C372B4(v58);
        v61 = *v60;
        v62 = *(unsigned __int16 *)(*v60 + 302);
        if ( *(_WORD *)(*v60 + 302) )
        {
          v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v63 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v62;
            v63 += 4;
            if ( !v62 )
              goto LABEL_59;
          }
          v64 = v61 + 16LL * *v63 + 312;
        }
        else
        {
LABEL_59:
          v64 = sub_1C87870(v60, IClassBoardLineModel_TypeInfo, 0);
        }
LABEL_93:
        v87 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v64)(v60, *(_QWORD *)(v64 + 8));
        *v38 = v87;
        sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 16), v87, v88, v89);
        goto LABEL_94;
      }
      if ( !v59 )
        sub_1C372B4(v58);
      v65 = *(__int64 **)(v59 + 176);
      if ( !v65 )
        sub_1C372B4(v58);
      v66 = *v65;
      v67 = *(unsigned __int16 *)(*v65 + 302);
      if ( *(_WORD *)(*v65 + 302) )
      {
        v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v68 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v67;
          v68 += 4;
          if ( !v67 )
            goto LABEL_66;
        }
        v69 = v66 + 16LL * *v68 + 312;
      }
      else
      {
LABEL_66:
        v69 = sub_1C87870(v65, IClassBoardLineModel_TypeInfo, 0);
      }
      v70 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v69)(v65, *(_QWORD *)(v69 + 8));
      v71 = v70;
      if ( !v70 )
        sub_1C372B4(0);
      v72 = *(_QWORD *)v70;
      v73 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
      {
        v74 = (int *)(*(_QWORD *)(v72 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v74 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v73;
          v74 += 4;
          if ( !v73 )
            goto LABEL_74;
        }
        v75 = v72 + 16LL * *v74 + 312;
      }
      else
      {
LABEL_74:
        v75 = sub_1C87870(v70, IClassBoardSquareModel_TypeInfo, 0);
      }
      v76 = (*(__int64 (__fastcall **)(__int64, _QWORD))v75)(v71, *(_QWORD *)(v75 + 8));
      if ( !*(_QWORD *)v10 )
        sub_1C372B4(v76);
      v77 = *(__int64 **)(*(_QWORD *)v10 + 184LL);
      if ( !v77 )
        sub_1C372B4(v76);
      v78 = *v77;
      v79 = v76;
      v80 = *(unsigned __int16 *)(*v77 + 302);
      if ( *(_WORD *)(*v77 + 302) )
      {
        v81 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v81 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v80;
          v81 += 4;
          if ( !v80 )
            goto LABEL_82;
        }
        v82 = v78 + 16LL * *v81 + 312;
      }
      else
      {
LABEL_82:
        v82 = sub_1C87870(v77, IClassBoardSquareModel_TypeInfo, 0);
      }
      v83 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v82)(v77, *(_QWORD *)(v82 + 8));
      if ( v79 == (_DWORD)v83 )
      {
        if ( !*(_QWORD *)v31 )
          sub_1C372B4(v83);
        v60 = *(__int64 **)(*(_QWORD *)v31 + 176LL);
        if ( !v60 )
          sub_1C372B4(v83);
        v84 = *v60;
        v85 = *(unsigned __int16 *)(*v60 + 302);
        if ( *(_WORD *)(*v60 + 302) )
        {
          v86 = (IClassBoardLineModel_c **)(*(_QWORD *)(v84 + 176) + 8LL);
          while ( *(v86 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v85;
            v86 += 2;
            if ( !v85 )
              goto LABEL_91;
          }
          v64 = v84 + 16LL * (*(_DWORD *)v86 + 1) + 312;
        }
        else
        {
LABEL_91:
          v64 = sub_1C87870(v60, IClassBoardLineModel_TypeInfo, 1);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v38 )
      {
        if ( !*(_QWORD *)v31 )
          sub_1C372B4(v83);
        v90 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v31 + 160LL);
        if ( !v90 )
          sub_1C372B4(0);
        ClassBoardEffectPlayer__SetData_bool_(
          v90,
          isLock,
          (const MethodInfo_30DB5DC *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v31 )
          sub_1C372B4(v91);
        v94 = (System_Collections_Generic_List_object__o *)this->fields.players;
        if ( !v94 )
          sub_1C372B4(0);
        v95 = *(Il2CppObject **)(*(_QWORD *)v31 + 160LL);
        items = v94->fields._items;
        v97 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
        ++v94->fields._version;
        if ( !items )
          sub_1C372B4(v94);
        size = v94->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v94,
            v95,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v97[4] + 192LL) + 112LL));
        }
        else
        {
          v99 = &items->obj.klass + size;
          v94->fields._size = size + 1;
          v99[4] = (Il2CppClass *)v95;
          sub_1C36FFC((CGThumbnailListItem_o *)(v99 + 4), (int32_t)v95, v92, v93);
        }
        v101 = *v38;
        if ( !*v38 )
          sub_1C372B4(v100);
        v102 = *(_QWORD *)v101;
        v103 = *(unsigned __int16 *)(*(_QWORD *)v101 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v101 + 302LL) )
        {
          v104 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v102 + 176) + 8LL);
          while ( *(v104 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v103;
            v104 += 2;
            if ( !v103 )
              goto LABEL_108;
          }
          v105 = v102 + 16LL * (*(_DWORD *)v104 + 5) + 312;
        }
        else
        {
LABEL_108:
          v105 = sub_1C87870(*v38, IClassBoardSquareModel_TypeInfo, 5);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v105)(v101, *(_QWORD *)(v105 + 8)) & 1) != 0 )
        {
          squareViewList = this->fields.squareViewList;
          v107 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ClassBoardSquare__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v107,
            (Il2CppObject *)v32,
            Method_ClassBoardEffectController___c__DisplayClass16_2__RegisterConnectingLineBlankPlayer_b__2__,
            0);
          v108 = (ClassBoardSquare_o *)System_Linq_Enumerable__FirstOrDefault_object__51451648(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)squareViewList,
                                         (System_Func_TSource__bool__o *)v107,
                                         (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v108, 0, 0) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, v108, isLock, v109);
            if ( !v108 )
              sub_1C372B4(v110);
            enableEffectPlayer = v108->fields.enableEffectPlayer;
            if ( !enableEffectPlayer )
              sub_1C372B4(0);
            ClassBoardEffectPlayer__SetData_bool_(
              enableEffectPlayer,
              isLock,
              (const MethodInfo_30DB5DC *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v114 = (System_Collections_Generic_List_object__o *)this->fields.players;
            if ( !v114 )
              sub_1C372B4(0);
            v115 = (Il2CppObject *)v108->fields.enableEffectPlayer;
            v116 = v114->fields._items;
            v117 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
            ++v114->fields._version;
            if ( !v116 )
              sub_1C372B4(v114);
            v118 = v114->fields._size;
            if ( (unsigned int)v118 >= LODWORD(v116->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v114,
                v115,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
            }
            else
            {
              v119 = &v116->obj.klass + v118;
              v114->fields._size = v118 + 1;
              v119[4] = (Il2CppClass *)v115;
              sub_1C36FFC((CGThumbnailListItem_o *)(v119 + 4), (int32_t)v115, v112, v113);
            }
          }
        }
      }
    }
  }
  v120 = *(_QWORD *)v18;
  v121 = *(unsigned __int16 *)(*(_QWORD *)v18 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v18 + 302LL) )
  {
    v122 = (int *)(*(_QWORD *)(v120 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v122 - 1) != System_IDisposable_TypeInfo )
    {
      --v121;
      v122 += 4;
      if ( !v121 )
        goto LABEL_125;
    }
    v123 = v120 + 16LL * *v122 + 312;
  }
  else
  {
LABEL_125:
    v123 = sub_1C87870(v18, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v123)(v18, *(_QWORD *)(v123 + 8));
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

  if ( (byte_4C46A9A & 1) == 0 )
  {
    sub_1C37058(&System_Action_ClassBoardEffectPlayer__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__);
    sub_1C37058(&Method_ClassBoardEffectController___c__ResetPlayers_b__13_0__);
    sub_1C37058(&ClassBoardEffectController___c_TypeInfo);
    byte_4C46A9A = 1;
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
    _9__13_0 = (System_Action_object__o *)sub_1C372A4(System_Action_ClassBoardEffectPlayer__TypeInfo);
    System_Action_object____ctor(_9__13_0, v6, Method_ClassBoardEffectController___c__ResetPlayers_b__13_0__, 0);
    static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__13_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v8, v9);
  }
  if ( !players
    || (System_Collections_Generic_List_object___ForEach(
          players,
          (System_Action_T__o *)_9__13_0,
          (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v11 = this->fields.players) == 0) )
  {
    sub_1C372B4(v3);
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
  sub_1C36FFC((CGThumbnailListItem_o *)p_playEndCallback, 0, size, v10);
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
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v10; // x8
  struct ClassBoardEffectPlayer_o *v11; // x21
  System_Action_o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct ClassBoardBackground_o *v17; // x8
  Il2CppObject *v18; // x1
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v20; // x9
  __int64 playCallback_low; // x10
  __int64 v22; // x8
  struct System_Action_o *playCallback; // x8

  if ( (byte_4C46A98 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_ClassBoardEffectController_PlayNext__);
    sub_1C37058(&Method_ClassBoardEffectPlayer_SetData_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_4C46A98 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.playEndCallback, (int32_t)callback, v6, v7);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_20;
  skipMainEffectPlayer = bgModel->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    goto LABEL_20;
  ClassBoardEffectPlayer__SetData_int_(
    skipMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_30DB63C *)Method_ClassBoardEffectPlayer_SetData_int___);
  v10 = this->fields.bgModel;
  if ( !v10 )
    goto LABEL_20;
  v11 = v10->fields.skipMainEffectPlayer;
  v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0);
  if ( !v11 )
    goto LABEL_20;
  v11->fields.endCallback = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11->fields.endCallback, (int32_t)v12, v13, v14);
  v17 = this->fields.bgModel;
  if ( !v17 )
    goto LABEL_20;
  skipMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !skipMainEffectPlayer )
    goto LABEL_20;
  v18 = (Il2CppObject *)v17->fields.skipMainEffectPlayer;
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
      v18,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(skipMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v22 + 32) = v18;
    sub_1C36FFC((CGThumbnailListItem_o *)(v22 + 32), (int32_t)v18, v15, v16);
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
    sub_1C372B4(skipMainEffectPlayer);
  }
  skipMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)skipMainEffectPlayer,
                                                       (const MethodInfo_310E530 *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
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

  if ( (byte_4C46AA0 & 1) == 0 )
  {
    sub_1C37058(&ClassBoardEffectController___c_TypeInfo);
    byte_4C46AA0 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(ClassBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectController___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectController___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)ClassBoardEffectController___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  if ( (byte_4C46AA1 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_2_o *)sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    byte_4C46AA1 = 1;
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
    v9 = sub_1C87870(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v9)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(v9 + 8));
  connectSquareModel = v4->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_1C372B4(this);
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
    v15 = sub_1C87870(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0);
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
    sub_1C372B4(this);
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
    sub_1C372B4(this);
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
  if ( (byte_4C46AA2 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass17_1_o *)sub_1C37058(&IClassBoardSquareModel_TypeInfo);
    byte_4C46AA2 = 1;
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
    v8 = sub_1C87870(model, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardEffectController___c__DisplayClass17_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v8)(
                                                                 model,
                                                                 *(_QWORD *)(v8 + 8));
  square = v4->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0 )
LABEL_19:
    sub_1C372B4(this);
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
    v15 = sub_1C87870(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v15 + 8));
}