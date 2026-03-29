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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  Il2CppObject *object; // x0
  __int64 v43; // x1
  __int64 *monitor; // x20
  __int64 v45; // x8
  __int64 v46; // x9
  IClassBoardSquareModel_c **v47; // x10
  __int64 v48; // x0

  if ( (byte_4D345FF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_ClassBoardSquare___);
    sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
    byte_4D345FF = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v11;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.players, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareViewList = squares;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)squares, v18, v19, v20, v21, v22, v23);
  this->fields.lineViewList = lines;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.lineViewList, (int32_t)lines, v24, v25, v26, v27, v28, v29);
  this->fields.mapCamera = camera;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.mapCamera, (int32_t)camera, v30, v31, v32, v33, v34, v35);
  this->fields.bgModel = bg;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.bgModel, (int32_t)bg, v36, v37, v38, v39, v40, v41);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)squares,
             (const MethodInfo_31CA994 *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !object || (monitor = (__int64 *)object[11].monitor) == 0 )
    sub_1C93D2C(object, v43);
  v45 = *monitor;
  v46 = *(unsigned __int16 *)(*monitor + 302);
  if ( *(_WORD *)(*monitor + 302) )
  {
    v47 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *(v47 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v46;
      v47 += 2;
      if ( !v46 )
        goto LABEL_9;
    }
    v48 = v45 + 16LL * (*(_DWORD *)v47 + 1) + 312;
  }
  else
  {
LABEL_9:
    v48 = sub_1C69E5C(object[11].monitor, IClassBoardSquareModel_TypeInfo, 1);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v48)(monitor, *(_QWORD *)(v48 + 8));
}


void ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v4; // w8
  struct System_Action_o *playEndCallback; // x8

  v2 = this;
  if ( (byte_4D34605 & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_4D34605 = 1;
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
    sub_1C93D2C(this, method);
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
  UnityEngine_Transform_o *SafeCameraDestination; // x0
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x23
  float v21; // s10
  float v22; // s9
  float v23; // s8
  float v24; // s12
  float v25; // s11
  float v26; // s4
  float v27; // s3
  float v28; // [xsp+4h] [xbp-9Ch]
  float v29; // [xsp+8h] [xbp-98h]
  float screenPos; // [xsp+Ch] [xbp-94h]
  System_Nullable_Vector3__o screenPos_4; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:kr00_12.12
  System_Nullable_Vector3__o v33; // 0:x0.16
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_4D34609 & 1) == 0 )
  {
    sub_1C93AD4(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_1C93AD4(&Method_System_Nullable_Vector3___ctor__);
    byte_4D34609 = 1;
  }
  *(_QWORD *)&v33.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v33.fields.hasValue = &screenPos_4;
  v34.fields.x = x;
  v34.fields.y = y;
  v34.fields.z = z;
  *(_QWORD *)&screenPos_4.fields.hasValue = 0;
  *(_QWORD *)&screenPos_4.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v33, v34, *(const MethodInfo_39A43D0 **)&ease);
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  SafeCameraDestination = (UnityEngine_Transform_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(
                                                       mapCamera,
                                                       screenPos_4,
                                                       0,
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
  v28 = secMax;
  v29 = secMin;
  if ( !SafeCameraDestination )
    goto LABEL_20;
  screenPos = x;
  v21 = y;
  v22 = z;
  v24 = *(float *)&v20->fields.m_CachedPtr;
  v23 = *((float *)&v20->fields.m_CachedPtr + 1);
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SafeCameraDestination, 0);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  v25 = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0).fields.z;
  if ( !byte_4D2A137 )
  {
    sub_1C93AD4(&System_Math_TypeInfo);
    byte_4D2A137 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v26 = sqrtf(
          (float)((float)((float)(localPosition.fields.x - v24) * (float)(localPosition.fields.x - v24))
                + (float)((float)(localPosition.fields.y - v23) * (float)(localPosition.fields.y - v23)))
        + (float)((float)(localPosition.fields.z - v25) * (float)(localPosition.fields.z - v25)))
      / (float)maxDistance;
  v35.fields.x = screenPos;
  v27 = 0.0;
  if ( v26 != 0.0 )
  {
    v27 = v29;
    if ( v26 >= v29 )
    {
      v27 = v28;
      if ( v26 <= v28 )
        v27 = v26;
    }
  }
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
LABEL_20:
    sub_1C93D2C(SafeCameraDestination, v19);
  v35.fields.y = v21;
  v35.fields.z = v22;
  MapCamera__StartAutoMove((MapCamera_o *)SafeCameraDestination, v35, v27, ease, callback, 0);
}


void ClassBoardEffectController__PlayClassBoardStartEffect(
        ClassBoardEffectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Action_o **p_playEndCallback; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  Il2CppObject *v13; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v15; // x8
  struct ClassBoardEffectPlayer_o *v16; // x21
  System_Action_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct ClassBoardBackground_o *v30; // x8
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v32; // x9
  __int64 playCallback_low; // x10
  __int64 v34; // x8
  struct System_Action_o *playCallback; // x8

  if ( (byte_4D34601 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectController_PlayNext__);
    sub_1C93AD4(&Method_ClassBoardEffectPlayer_SetData_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_4D34601 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.playEndCallback, (int32_t)callback, v6, v7, v8, v9, v10, v11);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_20;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_3198318 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v15 = this->fields.bgModel;
  if ( !v15 )
    goto LABEL_20;
  v16 = v15->fields.startMainEffectPlayer;
  v17 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0);
  if ( !v16 )
    goto LABEL_20;
  v16->fields.endCallback = v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->fields.endCallback, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v30 = this->fields.bgModel;
  if ( !v30 )
    goto LABEL_20;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_20;
  v13 = (Il2CppObject *)v30->fields.startMainEffectPlayer;
  Name_k__BackingField = startMainEffectPlayer->fields._Name_k__BackingField;
  v32 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++HIDWORD(startMainEffectPlayer->fields.playCallback);
  if ( !Name_k__BackingField )
    goto LABEL_20;
  playCallback_low = SLODWORD(startMainEffectPlayer->fields.playCallback);
  if ( (unsigned int)playCallback_low >= LODWORD(Name_k__BackingField[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)startMainEffectPlayer,
      v13,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(startMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v34 + 32) = v13;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v34 + 32), (int32_t)v13, v24, v25, v26, v27, v28, v29);
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
    sub_1C93D2C(startMainEffectPlayer, v13);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                        (const MethodInfo_31CA994 *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
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

  if ( (byte_4D34606 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
    byte_4D34606 = 1;
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
    sub_1C93D2C(players, v4);
  }
  players = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                           players,
                                                           v4,
                                                           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_List_object__o *players; // x0
  Il2CppObject *releaseEffectPlayer; // x1
  bool v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  Il2CppObject *current; // x25
  System_Action_o *v29; // x20
  __int64 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  __int64 v38; // x8
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D34600 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectController_CheckPlayEnd__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__);
    sub_1C93AD4(&IClassBoardLockModel_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
    byte_4D34600 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.playEndCallback,
    (int32_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !releaseSquare )
    goto LABEL_17;
  v15 = sub_1C93C10(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0;
  ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v15, v16);
  ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v17);
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
    goto LABEL_17;
  releaseEffectPlayer = (Il2CppObject *)releaseSquare->fields.releaseEffectPlayer;
  items = players->fields._items;
  v25 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++players->fields._version;
  if ( !items )
    goto LABEL_17;
  size = players->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      players,
      releaseEffectPlayer,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    players->fields._size = size + 1;
    v27[4] = (Il2CppClass *)releaseEffectPlayer;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v27 + 4), (int32_t)releaseEffectPlayer, v18, v19, v20, v21, v22, v23);
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
LABEL_17:
    sub_1C93D2C(players, releaseEffectPlayer);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    players,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v39.fields._current;
    v29 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0);
    if ( !current )
      sub_1C93D2C(v30, v31);
    *(__int64 *)((char *)&qword_20 + (_QWORD)current) = (__int64)v29;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)((char *)&qword_20 + (_QWORD)current),
      (int32_t)v29,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    v38 = *(__int64 *)((char *)&off_18 + (_QWORD)current);
    if ( v38 )
      (*(void (__fastcall **)(_QWORD, _QWORD))(v38 + 24))(*(_QWORD *)(v38 + 64), *(_QWORD *)(v38 + 40));
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
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
  if ( (byte_4D34603 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    byte_4D34603 = 1;
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x21
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_object__bool__o *v16; // x23
  System_Collections_Generic_List_object__o *v17; // x19
  __int64 *v18; // x19
  __int64 v19; // x8
  __int64 v20; // x9
  IClassBoardSquareModel_c **v21; // x10
  __int64 v22; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x19
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x23
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  __int64 v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  __int64 v46; // x22
  System_Collections_Generic_List_T__o *v47; // x24
  System_Func_object__bool__o *v48; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x24
  System_Func_object__bool__o *v50; // x25
  Il2CppObject *v51; // x0
  Il2CppObject *v52; // x23
  Il2CppClass *v53; // x8
  __int64 v54; // x9
  IClassBoardSquareModel_c **v55; // x10
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x1
  ClassBoardEffectPlayer_o *v59; // x23
  bool v60; // w1
  __int64 v61; // x0
  __int64 v62; // x1
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  System_Collections_Generic_List_object__o *v69; // x0
  Il2CppObject *v70; // x1
  struct System_Object_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppClass **v74; // x8
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  System_Collections_Generic_List_object__o *v79; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4D34608 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_1C93AD4(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_1C93AD4(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_1C93AD4(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_1C93AD4(&IClassBoardLockModel_TypeInfo);
    sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectController___c__DisplayClass17_0__RegisterConnectedSquareEnablePlayer_b__0__);
    sub_1C93AD4(&ClassBoardEffectController___c__DisplayClass17_0_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__1__);
    sub_1C93AD4(&Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__2__);
    sub_1C93AD4(&ClassBoardEffectController___c__DisplayClass17_1_TypeInfo);
    byte_4D34608 = 1;
  }
  v5 = sub_1C93D20(ClassBoardEffectController___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = releaseSquare;
  v14 = v5 + 16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)releaseSquare, v8, v9, v10, v11, v12, v13);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v16 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_ClassBoardEffectController___c__DisplayClass17_0__RegisterConnectedSquareEnablePlayer_b__0__,
    0);
  if ( BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_318DB78 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v79 = v17;
  if ( !*(_QWORD *)v14 )
    goto LABEL_64;
  v18 = *(__int64 **)(*(_QWORD *)v14 + 184LL);
  if ( !v18 )
    goto LABEL_64;
  v19 = *v18;
  v20 = *(unsigned __int16 *)(*v18 + 302);
  if ( *(_WORD *)(*v18 + 302) )
  {
    v21 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v19 + 176) + 8LL);
    while ( *(v21 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v20;
      v21 += 2;
      if ( !v20 )
        goto LABEL_11;
    }
    v22 = v19 + 16LL * (*(_DWORD *)v21 + 17) + 312;
  }
  else
  {
LABEL_11:
    v22 = sub_1C69E5C(v18, IClassBoardSquareModel_TypeInfo, 17);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_object__o **, _QWORD))v22)(
         v18,
         &v79,
         *(_QWORD *)(v22 + 8));
  if ( v79 && v79->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      v25 = *(unsigned __int16 *)&squareViewList->klass->_2.rank;
      if ( *(_WORD *)&squareViewList->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          --v25;
          p_offset += 4;
          if ( !v25 )
            goto LABEL_20;
        }
        v27 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_20:
        v27 = sub_1C69E5C(
                this->fields.squareViewList,
                System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                0);
      }
      v29 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))v27)(
              squareViewList,
              *(_QWORD *)(v27 + 8));
      if ( !v29 )
        sub_1C93D2C(0, v28);
      while ( 1 )
      {
        v30 = *(_QWORD *)v29;
        v31 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
        {
          v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v31;
            v32 += 4;
            if ( !v31 )
              goto LABEL_27;
          }
          v33 = v30 + 16LL * *v32 + 312;
        }
        else
        {
LABEL_27:
          v33 = sub_1C69E5C(v29, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
          break;
        v34 = sub_1C93D20(ClassBoardEffectController___c__DisplayClass17_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v34, 0);
        v35 = *(_QWORD *)v29;
        v36 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
        {
          v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v37 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            --v36;
            v37 += 4;
            if ( !v36 )
              goto LABEL_34;
          }
          v38 = v35 + 16LL * *v37 + 312;
        }
        else
        {
LABEL_34:
          v38 = sub_1C69E5C(v29, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0);
        }
        v39 = (*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v29, *(_QWORD *)(v38 + 8));
        if ( !v34 )
          sub_1C93D2C(v39, v39);
        *(_QWORD *)(v34 + 16) = v39;
        v46 = v34 + 16;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v34 + 16), v39, v40, v41, v42, v43, v44, v45);
        v47 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v48 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v48,
          (Il2CppObject *)v34,
          Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__1__,
          0);
        if ( !BasicHelper__Any_object_(
                v47,
                (System_Func_T__bool__o *)v48,
                (const MethodInfo_318DB78 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
        {
          v49 = (System_Collections_Generic_IEnumerable_TSource__o *)v79;
          v50 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_IClassBoardSquareModel__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v50,
            (Il2CppObject *)v34,
            Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__2__,
            0);
          v51 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
                  v49,
                  (System_Func_TSource__bool__o *)v50,
                  (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v52 = v51;
          if ( v51 )
          {
            v53 = v51->klass;
            v54 = *(unsigned __int16 *)&v51->klass->_2.rank;
            if ( *(_WORD *)&v51->klass->_2.rank )
            {
              v55 = (IClassBoardSquareModel_c **)&v53->_1.interfaceOffsets->offset;
              while ( *(v55 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v54;
                v55 += 2;
                if ( !v54 )
                  goto LABEL_43;
              }
              v56 = (__int64)&v53->vtable[*(_DWORD *)v55 + 15];
            }
            else
            {
LABEL_43:
              v56 = sub_1C69E5C(v51, IClassBoardSquareModel_TypeInfo, 15);
            }
            v57 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v56)(v52, 0, *(_QWORD *)(v56 + 8));
            if ( (v57 & 1) == 0 )
            {
              if ( !*(_QWORD *)v46 )
                sub_1C93D2C(v57, v58);
              if ( !*(_QWORD *)v14 )
                sub_1C93D2C(v57, v58);
              v59 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v46 + 168LL);
              if ( !v59 )
                sub_1C93D2C(v57, v58);
              v60 = sub_1C93C10(*(_QWORD *)(*(_QWORD *)v14 + 184LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v59,
                v60,
                (const MethodInfo_31982B8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v46 )
                sub_1C93D2C(v61, v62);
              v69 = (System_Collections_Generic_List_object__o *)this->fields.players;
              if ( !v69 )
                sub_1C93D2C(0, v62);
              v70 = *(Il2CppObject **)(*(_QWORD *)v46 + 168LL);
              items = v69->fields._items;
              v72 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
              ++v69->fields._version;
              if ( !items )
                sub_1C93D2C(v69, v70);
              size = v69->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v69,
                  v70,
                  *(const MethodInfo_387999C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
              }
              else
              {
                v74 = &items->obj.klass + size;
                v69->fields._size = size + 1;
                v74[4] = (Il2CppClass *)v70;
                sub_1C93A78((GrandQuestFolderBoardItem_o *)(v74 + 4), (int32_t)v70, v63, v64, v65, v66, v67, v68);
              }
            }
          }
        }
      }
      v75 = *(_QWORD *)v29;
      v76 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
      {
        v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v77 - 1) != System_IDisposable_TypeInfo )
        {
          --v76;
          v77 += 4;
          if ( !v76 )
            goto LABEL_59;
        }
        v78 = v75 + 16LL * *v77 + 312;
      }
      else
      {
LABEL_59:
        v78 = sub_1C69E5C(v29, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v78)(v29, *(_QWORD *)(v78 + 8));
      return;
    }
LABEL_64:
    sub_1C93D2C(v6, v7);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x22
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_object__bool__o *v17; // x24
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x25
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x24
  __int64 v42; // x23
  System_Collections_Generic_List_T__o *v43; // x26
  System_Func_object__bool__o *v44; // x27
  _BOOL8 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  __int64 *v53; // x25
  __int64 v54; // x0
  __int64 v55; // x1
  __int64 *v56; // x26
  __int64 v57; // x8
  __int64 v58; // x9
  IClassBoardLineModel_c **v59; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  __int64 v63; // x26
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  __int64 *v70; // x27
  __int64 v71; // x8
  int v72; // w26
  __int64 v73; // x9
  int *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  __int64 v77; // x1
  __int64 v78; // x8
  __int64 *v79; // x26
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 *v84; // x26
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  __int64 v89; // x0
  __int64 v90; // x1
  __int64 v91; // x26
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  __int64 *v98; // x27
  __int64 v99; // x8
  int v100; // w26
  __int64 v101; // x9
  int *v102; // x10
  __int64 v103; // x0
  __int64 v104; // x0
  __int64 v105; // x1
  __int64 v106; // x8
  __int64 v107; // x9
  IClassBoardLineModel_c **v108; // x10
  __int64 v109; // x0
  int32_t v110; // w2
  int32_t v111; // w3
  System_String_o *v112; // x4
  int32_t v113; // w5
  int64_t v114; // x6
  System_String_o *v115; // x7
  ClassBoardEffectPlayer_o *v116; // x0
  __int64 v117; // x0
  __int64 v118; // x1
  int32_t v119; // w2
  int32_t v120; // w3
  System_String_o *v121; // x4
  int32_t v122; // w5
  int64_t v123; // x6
  System_String_o *v124; // x7
  System_Collections_Generic_List_object__o *v125; // x0
  Il2CppObject *v126; // x1
  struct System_Object_array *items; // x8
  _QWORD *v128; // x9
  __int64 size; // x10
  Il2CppClass **v130; // x8
  __int64 v131; // x0
  __int64 v132; // x1
  __int64 v133; // x24
  __int64 v134; // x8
  __int64 v135; // x9
  IClassBoardSquareModel_c **v136; // x10
  __int64 v137; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x24
  System_Func_object__bool__o *v139; // x25
  ClassBoardSquare_o *v140; // x23
  const MethodInfo *v141; // x3
  __int64 v142; // x0
  __int64 v143; // x1
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  __int64 v145; // x1
  int32_t v146; // w2
  int32_t v147; // w3
  System_String_o *v148; // x4
  int32_t v149; // w5
  int64_t v150; // x6
  System_String_o *v151; // x7
  System_Collections_Generic_List_object__o *v152; // x0
  Il2CppObject *v153; // x1
  struct System_Object_array *v154; // x8
  _QWORD *v155; // x9
  __int64 v156; // x10
  Il2CppClass **v157; // x8
  __int64 v158; // x8
  __int64 v159; // x9
  int *v160; // x10
  __int64 v161; // x0

  if ( (byte_4D34607 & 1) == 0 )
  {
    sub_1C93AD4(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_1C93AD4(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
    sub_1C93AD4(&System_Func_ClassBoardSquare__bool__TypeInfo);
    sub_1C93AD4(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_1C93AD4(&IClassBoardLineModel_TypeInfo);
    sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectingLineBlankPlayer_b__0__);
    sub_1C93AD4(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectingLineBlankPlayer_b__1__);
    sub_1C93AD4(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectController___c__DisplayClass16_2__RegisterConnectingLineBlankPlayer_b__2__);
    sub_1C93AD4(&ClassBoardEffectController___c__DisplayClass16_2_TypeInfo);
    byte_4D34607 = 1;
  }
  v6 = sub_1C93D20(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v6, 0);
  if ( !v6 )
    goto LABEL_151;
  *(_QWORD *)(v6 + 16) = releaseSquare;
  v15 = v6 + 16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v6 + 16), (int32_t)releaseSquare, v9, v10, v11, v12, v13, v14);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v17 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v6,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectingLineBlankPlayer_b__0__,
    0);
  v7 = BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v17,
         (const MethodInfo_318DB78 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v7 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_151:
    sub_1C93D2C(v7, v8);
  klass = lineViewList->klass;
  v20 = *(unsigned __int16 *)&lineViewList->klass->_2.rank;
  if ( *(_WORD *)&lineViewList->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_10;
    }
    v22 = (__int64)&klass->vtable[*p_offset];
  }
  else
  {
LABEL_10:
    v22 = sub_1C69E5C(this->fields.lineViewList, System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, 0);
  }
  v24 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))v22)(
          lineViewList,
          *(_QWORD *)(v22 + 8));
  if ( !v24 )
    sub_1C93D2C(0, v23);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_17;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_17:
      v28 = sub_1C69E5C(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = sub_1C93D20(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v29, 0);
    v30 = *(_QWORD *)v24;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v32 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_24;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_24:
      v33 = sub_1C69E5C(v24, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0);
    }
    v34 = (*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v24, *(_QWORD *)(v33 + 8));
    if ( !v29 )
      sub_1C93D2C(v34, v34);
    *(_QWORD *)(v29 + 16) = v34;
    v41 = v29 + 16;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v29 + 16), v34, v35, v36, v37, v38, v39, v40);
    v42 = sub_1C93D20(ClassBoardEffectController___c__DisplayClass16_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v42, 0);
    v43 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v44 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v44,
      (Il2CppObject *)v29,
      Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectingLineBlankPlayer_b__1__,
      0);
    v45 = BasicHelper__Any_object_(
            v43,
            (System_Func_T__bool__o *)v44,
            (const MethodInfo_318DB78 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v45 )
    {
      if ( !v42 )
        sub_1C93D2C(v45, v46);
      *(_QWORD *)(v42 + 16) = 0;
      v53 = (__int64 *)(v42 + 16);
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 16), 0, v47, v48, v49, v50, v51, v52);
      if ( !*(_QWORD *)v41 )
        sub_1C93D2C(v54, v55);
      v56 = *(__int64 **)(*(_QWORD *)v41 + 176LL);
      if ( !v56 )
        sub_1C93D2C(v54, v55);
      v57 = *v56;
      v58 = *(unsigned __int16 *)(*v56 + 302);
      if ( *(_WORD *)(*v56 + 302) )
      {
        v59 = (IClassBoardLineModel_c **)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *(v59 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v58;
          v59 += 2;
          if ( !v58 )
            goto LABEL_35;
        }
        v60 = v57 + 16LL * (*(_DWORD *)v59 + 1) + 312;
      }
      else
      {
LABEL_35:
        v60 = sub_1C69E5C(v56, IClassBoardLineModel_TypeInfo, 1);
      }
      v61 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8));
      v63 = v61;
      if ( !v61 )
        sub_1C93D2C(0, v62);
      v64 = *(_QWORD *)v61;
      v65 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
      {
        v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v66 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v65;
          v66 += 4;
          if ( !v65 )
            goto LABEL_42;
        }
        v67 = v64 + 16LL * *v66 + 312;
      }
      else
      {
LABEL_42:
        v67 = sub_1C69E5C(v61, IClassBoardSquareModel_TypeInfo, 0);
      }
      v68 = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v63, *(_QWORD *)(v67 + 8));
      if ( !*(_QWORD *)v15 )
        sub_1C93D2C(v68, v69);
      v70 = *(__int64 **)(*(_QWORD *)v15 + 184LL);
      if ( !v70 )
        sub_1C93D2C(v68, v69);
      v71 = *v70;
      v72 = v68;
      v73 = *(unsigned __int16 *)(*v70 + 302);
      if ( *(_WORD *)(*v70 + 302) )
      {
        v74 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v74 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v73;
          v74 += 4;
          if ( !v73 )
            goto LABEL_50;
        }
        v75 = v71 + 16LL * *v74 + 312;
      }
      else
      {
LABEL_50:
        v75 = sub_1C69E5C(v70, IClassBoardSquareModel_TypeInfo, 0);
      }
      v76 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v75)(v70, *(_QWORD *)(v75 + 8));
      v78 = *(_QWORD *)v41;
      if ( v72 == (_DWORD)v76 )
      {
        if ( !v78 )
          sub_1C93D2C(v76, v77);
        v79 = *(__int64 **)(v78 + 176);
        if ( !v79 )
          sub_1C93D2C(v76, v77);
        v80 = *v79;
        v81 = *(unsigned __int16 *)(*v79 + 302);
        if ( *(_WORD *)(*v79 + 302) )
        {
          v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v82 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v81;
            v82 += 4;
            if ( !v81 )
              goto LABEL_59;
          }
          v83 = v80 + 16LL * *v82 + 312;
        }
        else
        {
LABEL_59:
          v83 = sub_1C69E5C(v79, IClassBoardLineModel_TypeInfo, 0);
        }
LABEL_93:
        v109 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v83)(v79, *(_QWORD *)(v83 + 8));
        *v53 = v109;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v42 + 16), v109, v110, v111, v112, v113, v114, v115);
        goto LABEL_94;
      }
      if ( !v78 )
        sub_1C93D2C(v76, v77);
      v84 = *(__int64 **)(v78 + 176);
      if ( !v84 )
        sub_1C93D2C(v76, v77);
      v85 = *v84;
      v86 = *(unsigned __int16 *)(*v84 + 302);
      if ( *(_WORD *)(*v84 + 302) )
      {
        v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v87 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v86;
          v87 += 4;
          if ( !v86 )
            goto LABEL_66;
        }
        v88 = v85 + 16LL * *v87 + 312;
      }
      else
      {
LABEL_66:
        v88 = sub_1C69E5C(v84, IClassBoardLineModel_TypeInfo, 0);
      }
      v89 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v88)(v84, *(_QWORD *)(v88 + 8));
      v91 = v89;
      if ( !v89 )
        sub_1C93D2C(0, v90);
      v92 = *(_QWORD *)v89;
      v93 = *(unsigned __int16 *)(*(_QWORD *)v89 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v89 + 302LL) )
      {
        v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v94 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v93;
          v94 += 4;
          if ( !v93 )
            goto LABEL_74;
        }
        v95 = v92 + 16LL * *v94 + 312;
      }
      else
      {
LABEL_74:
        v95 = sub_1C69E5C(v89, IClassBoardSquareModel_TypeInfo, 0);
      }
      v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v91, *(_QWORD *)(v95 + 8));
      if ( !*(_QWORD *)v15 )
        sub_1C93D2C(v96, v97);
      v98 = *(__int64 **)(*(_QWORD *)v15 + 184LL);
      if ( !v98 )
        sub_1C93D2C(v96, v97);
      v99 = *v98;
      v100 = v96;
      v101 = *(unsigned __int16 *)(*v98 + 302);
      if ( *(_WORD *)(*v98 + 302) )
      {
        v102 = (int *)(*(_QWORD *)(v99 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v102 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v101;
          v102 += 4;
          if ( !v101 )
            goto LABEL_82;
        }
        v103 = v99 + 16LL * *v102 + 312;
      }
      else
      {
LABEL_82:
        v103 = sub_1C69E5C(v98, IClassBoardSquareModel_TypeInfo, 0);
      }
      v104 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v103)(v98, *(_QWORD *)(v103 + 8));
      if ( v100 == (_DWORD)v104 )
      {
        if ( !*(_QWORD *)v41 )
          sub_1C93D2C(v104, v105);
        v79 = *(__int64 **)(*(_QWORD *)v41 + 176LL);
        if ( !v79 )
          sub_1C93D2C(v104, v105);
        v106 = *v79;
        v107 = *(unsigned __int16 *)(*v79 + 302);
        if ( *(_WORD *)(*v79 + 302) )
        {
          v108 = (IClassBoardLineModel_c **)(*(_QWORD *)(v106 + 176) + 8LL);
          while ( *(v108 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v107;
            v108 += 2;
            if ( !v107 )
              goto LABEL_91;
          }
          v83 = v106 + 16LL * (*(_DWORD *)v108 + 1) + 312;
        }
        else
        {
LABEL_91:
          v83 = sub_1C69E5C(v79, IClassBoardLineModel_TypeInfo, 1);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v53 )
      {
        if ( !*(_QWORD *)v41 )
          sub_1C93D2C(v104, v105);
        v116 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v41 + 160LL);
        if ( !v116 )
          sub_1C93D2C(0, v105);
        ClassBoardEffectPlayer__SetData_bool_(
          v116,
          isLock,
          (const MethodInfo_31982B8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v41 )
          sub_1C93D2C(v117, v118);
        v125 = (System_Collections_Generic_List_object__o *)this->fields.players;
        if ( !v125 )
          sub_1C93D2C(0, v118);
        v126 = *(Il2CppObject **)(*(_QWORD *)v41 + 160LL);
        items = v125->fields._items;
        v128 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
        ++v125->fields._version;
        if ( !items )
          sub_1C93D2C(v125, v126);
        size = v125->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v125,
            v126,
            *(const MethodInfo_387999C **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
        }
        else
        {
          v130 = &items->obj.klass + size;
          v125->fields._size = size + 1;
          v130[4] = (Il2CppClass *)v126;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)(v130 + 4), (int32_t)v126, v119, v120, v121, v122, v123, v124);
        }
        v133 = *v53;
        if ( !*v53 )
          sub_1C93D2C(v131, v132);
        v134 = *(_QWORD *)v133;
        v135 = *(unsigned __int16 *)(*(_QWORD *)v133 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v133 + 302LL) )
        {
          v136 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v134 + 176) + 8LL);
          while ( *(v136 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v135;
            v136 += 2;
            if ( !v135 )
              goto LABEL_108;
          }
          v137 = v134 + 16LL * (*(_DWORD *)v136 + 5) + 312;
        }
        else
        {
LABEL_108:
          v137 = sub_1C69E5C(*v53, IClassBoardSquareModel_TypeInfo, 5);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v137)(v133, *(_QWORD *)(v137 + 8)) & 1) != 0 )
        {
          squareViewList = this->fields.squareViewList;
          v139 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_ClassBoardSquare__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v139,
            (Il2CppObject *)v42,
            Method_ClassBoardEffectController___c__DisplayClass16_2__RegisterConnectingLineBlankPlayer_b__2__,
            0);
          v140 = (ClassBoardSquare_o *)System_Linq_Enumerable__FirstOrDefault_object__52221724(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)squareViewList,
                                         (System_Func_TSource__bool__o *)v139,
                                         (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v140, 0, 0) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, v140, isLock, v141);
            if ( !v140 )
              sub_1C93D2C(v142, v143);
            enableEffectPlayer = v140->fields.enableEffectPlayer;
            if ( !enableEffectPlayer )
              sub_1C93D2C(0, v143);
            ClassBoardEffectPlayer__SetData_bool_(
              enableEffectPlayer,
              isLock,
              (const MethodInfo_31982B8 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v152 = (System_Collections_Generic_List_object__o *)this->fields.players;
            if ( !v152 )
              sub_1C93D2C(0, v145);
            v153 = (Il2CppObject *)v140->fields.enableEffectPlayer;
            v154 = v152->fields._items;
            v155 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
            ++v152->fields._version;
            if ( !v154 )
              sub_1C93D2C(v152, v153);
            v156 = v152->fields._size;
            if ( (unsigned int)v156 >= LODWORD(v154->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v152,
                v153,
                *(const MethodInfo_387999C **)(*(_QWORD *)(v155[4] + 192LL) + 112LL));
            }
            else
            {
              v157 = &v154->obj.klass + v156;
              v152->fields._size = v156 + 1;
              v157[4] = (Il2CppClass *)v153;
              sub_1C93A78((GrandQuestFolderBoardItem_o *)(v157 + 4), (int32_t)v153, v146, v147, v148, v149, v150, v151);
            }
          }
        }
      }
    }
  }
  v158 = *(_QWORD *)v24;
  v159 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v160 = (int *)(*(_QWORD *)(v158 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v160 - 1) != System_IDisposable_TypeInfo )
    {
      --v159;
      v160 += 4;
      if ( !v159 )
        goto LABEL_125;
    }
    v161 = v158 + 16LL * *v160 + 312;
  }
  else
  {
LABEL_125:
    v161 = sub_1C69E5C(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v161)(v24, *(_QWORD *)(v161 + 8));
}


void ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController___c_c *v3; // x0
  System_Collections_Generic_List_object__o *players; // x20
  System_Action_object__o *_9__13_0; // x21
  Il2CppObject *v6; // x22
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  struct System_Action_o **p_playEndCallback; // x19

  if ( (byte_4D34604 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_ClassBoardEffectPlayer__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__);
    sub_1C93AD4(&Method_ClassBoardEffectController___c__ResetPlayers_b__13_0__);
    sub_1C93AD4(&ClassBoardEffectController___c_TypeInfo);
    byte_4D34604 = 1;
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
    _9__13_0 = (System_Action_object__o *)sub_1C93D20(System_Action_ClassBoardEffectPlayer__TypeInfo);
    System_Action_object____ctor(_9__13_0, v6, Method_ClassBoardEffectController___c__ResetPlayers_b__13_0__, 0);
    static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__13_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__13_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !players
    || (System_Collections_Generic_List_object___ForEach(
          players,
          (System_Action_T__o *)_9__13_0,
          (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v19 = this->fields.players) == 0) )
  {
    sub_1C93D2C(v3, method);
  }
  size = v19->fields._size;
  v21 = v19->fields._version + 1;
  v19->fields._size = 0;
  v19->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0);
  this->fields.playEndCallback = 0;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p_playEndCallback, 0, size, v14, v15, v16, v17, v18);
}


void ClassBoardEffectController__SkipClassBoardStartEffect(
        ClassBoardEffectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Action_o **p_playEndCallback; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0
  Il2CppObject *v13; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v15; // x8
  struct ClassBoardEffectPlayer_o *v16; // x21
  System_Action_o *v17; // x22
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct ClassBoardBackground_o *v30; // x8
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v32; // x9
  __int64 playCallback_low; // x10
  __int64 v34; // x8
  struct System_Action_o *playCallback; // x8

  if ( (byte_4D34602 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_ClassBoardEffectController_PlayNext__);
    sub_1C93AD4(&Method_ClassBoardEffectPlayer_SetData_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_4D34602 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.playEndCallback, (int32_t)callback, v6, v7, v8, v9, v10, v11);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_20;
  skipMainEffectPlayer = bgModel->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    goto LABEL_20;
  ClassBoardEffectPlayer__SetData_int_(
    skipMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_3198318 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v15 = this->fields.bgModel;
  if ( !v15 )
    goto LABEL_20;
  v16 = v15->fields.skipMainEffectPlayer;
  v17 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0);
  if ( !v16 )
    goto LABEL_20;
  v16->fields.endCallback = v17;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v16->fields.endCallback, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v30 = this->fields.bgModel;
  if ( !v30 )
    goto LABEL_20;
  skipMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !skipMainEffectPlayer )
    goto LABEL_20;
  v13 = (Il2CppObject *)v30->fields.skipMainEffectPlayer;
  Name_k__BackingField = skipMainEffectPlayer->fields._Name_k__BackingField;
  v32 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++HIDWORD(skipMainEffectPlayer->fields.playCallback);
  if ( !Name_k__BackingField )
    goto LABEL_20;
  playCallback_low = SLODWORD(skipMainEffectPlayer->fields.playCallback);
  if ( (unsigned int)playCallback_low >= LODWORD(Name_k__BackingField[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)skipMainEffectPlayer,
      v13,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(skipMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v34 + 32) = v13;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v34 + 32), (int32_t)v13, v24, v25, v26, v27, v28, v29);
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
    sub_1C93D2C(skipMainEffectPlayer, v13);
  }
  skipMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                       (System_Collections_Generic_IEnumerable_TSource__o *)skipMainEffectPlayer,
                                                       (const MethodInfo_31CA994 *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D3460A & 1) == 0 )
  {
    sub_1C93AD4(&ClassBoardEffectController___c_TypeInfo);
    byte_4D3460A = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(ClassBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectController___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectController___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)ClassBoardEffectController___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, x);
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
    sub_1C93D2C(this, x);
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
  if ( (byte_4D3460B & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_2_o *)sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    byte_4D3460B = 1;
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
    v9 = sub_1C69E5C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v9)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(v9 + 8));
  connectSquareModel = v4->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_1C93D2C(this, x);
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
    v15 = sub_1C69E5C(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0);
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
    sub_1C93D2C(this, x);
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
    sub_1C93D2C(this, x);
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
  if ( (byte_4D3460C & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass17_1_o *)sub_1C93AD4(&IClassBoardSquareModel_TypeInfo);
    byte_4D3460C = 1;
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
    v8 = sub_1C69E5C(model, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardEffectController___c__DisplayClass17_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v8)(
                                                                 model,
                                                                 *(_QWORD *)(v8 + 8));
  square = v4->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0 )
LABEL_19:
    sub_1C93D2C(this, model);
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
    v15 = sub_1C69E5C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v15 + 8));
}