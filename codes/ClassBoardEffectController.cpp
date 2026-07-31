void ClassBoardEffectController___ctor(
        ClassBoardEffectController_o *this,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squares,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lines,
        MapCamera_o *camera,
        ClassBoardBackground_o *bg,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v11; // x24
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  Il2CppObject *object; // x0
  __int64 v43; // x1
  __int64 *monitor; // x20
  __int64 v45; // x8
  __int64 v46; // x9
  IClassBoardSquareModel_c **v47; // x10
  __int64 v48; // x0

  if ( (byte_593C439 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_First_ClassBoardSquare___);
    sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
    byte_593C439 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.players, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareViewList = squares;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)squares, v18, v19, v20, v21, v22, v23);
  this->fields.lineViewList = lines;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.lineViewList,
    (int32_t)lines,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.mapCamera = camera;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mapCamera,
    (int32_t)camera,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.bgModel = bg;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.bgModel, (int32_t)bg, v36, v37, v38, v39, v40, v41);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)squares,
             (const MethodInfo_384C73C *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !object || (monitor = (__int64 *)object[11].monitor) == 0 )
    sub_21FFECC(object, v43);
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
    v48 = sub_2237E2C(object[11].monitor, IClassBoardSquareModel_TypeInfo, 1);
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
  if ( (byte_593C43F & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_593C43F = 1;
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
    sub_21FFECC(this, method);
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
  __int64 v18; // x1
  System_Nullable_float__o v19; // x3
  UnityEngine_Transform_o *SafeCameraDestination; // x0
  __int64 v21; // x1
  UnityEngine_Transform_o *v22; // x23
  float v23; // s9
  float v24; // s10
  float v25; // s15
  float v26; // s13
  float v27; // s14
  float v28; // s8
  float v29; // s0
  float v30; // s1
  float v31; // s3
  float screenPos; // [xsp+4h] [xbp-9Ch]
  float v33; // [xsp+8h] [xbp-98h]
  float v34; // [xsp+Ch] [xbp-94h]
  System_Nullable_Vector3__o v35; // [xsp+10h] [xbp-90h] BYREF
  System_Nullable_Vector3__o v36; // 0:x0.16
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v39; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_593C443 & 1) == 0 )
  {
    sub_21FFC50(&MapCameraViewAdjusterUtil_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_Vector3___ctor__);
    byte_593C443 = 1;
  }
  v37.fields.x = x;
  v37.fields.y = y;
  *(_QWORD *)&v36.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  v37.fields.z = z;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v36.fields.hasValue = &v35;
  *(_QWORD *)&v35.fields.hasValue = 0;
  *(_QWORD *)&v35.fields.value.fields.y = 0;
  System_Nullable_Vector3____ctor(v36, v37, *(const MethodInfo_45B5018 **)&ease);
  if ( !*(&MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo, v18);
  v19 = 0;
  SafeCameraDestination = (UnityEngine_Transform_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(
                                                       mapCamera,
                                                       v35,
                                                       v19,
                                                       0);
  if ( !this->fields.mapCamera )
    goto LABEL_24;
  v22 = SafeCameraDestination;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mapCamera, 0);
  if ( !SafeCameraDestination )
    goto LABEL_24;
  localPosition = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0);
  if ( !v22 )
    goto LABEL_24;
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  v33 = x;
  v34 = y;
  if ( !SafeCameraDestination )
    goto LABEL_24;
  v24 = *(float *)&v22->fields.m_CachedPtr;
  v23 = *((float *)&v22->fields.m_CachedPtr + 1);
  v25 = localPosition.fields.x;
  v26 = localPosition.fields.y;
  v27 = localPosition.fields.z;
  screenPos = z;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SafeCameraDestination, 0);
  if ( !SafeCameraDestination )
    goto LABEL_24;
  v39 = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0);
  v28 = v39.fields.z;
  if ( !byte_593193E )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    byte_593193E = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v21);
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
LABEL_24:
    sub_21FFECC(SafeCameraDestination, v21);
  v29 = sqrtf(
          (float)((float)((float)(v25 - v24) * (float)(v25 - v24)) + (float)((float)(v26 - v23) * (float)(v26 - v23)))
        + (float)((float)(v27 - v28) * (float)(v27 - v28)))
      / (float)maxDistance;
  if ( v29 <= secMax )
    v30 = v29;
  else
    v30 = secMax;
  if ( v29 < secMin )
    v30 = secMin;
  if ( v29 == 0.0 )
    v31 = 0.0;
  else
    v31 = v30;
  v40.fields.x = v33;
  v40.fields.y = v34;
  v40.fields.z = screenPos;
  MapCamera__StartAutoMove((MapCamera_o *)SafeCameraDestination, v40, v31, ease, callback, 0);
}


void ClassBoardEffectController__PlayClassBoardStartEffect(
        ClassBoardEffectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Action_o **p_playEndCallback; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  Il2CppObject *v13; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v15; // x8
  struct ClassBoardEffectPlayer_o *v16; // x21
  System_Action_o *v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct ClassBoardBackground_o *v30; // x9
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v32; // x9
  __int64 playCallback_low; // x10
  __int64 v34; // x8

  if ( (byte_593C43B & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ClassBoardEffectController_PlayNext__);
    sub_21FFC50(&Method_ClassBoardEffectPlayer_SetData_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_593C43B = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playEndCallback,
    (int32_t)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_19;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_19;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_37EA3C8 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v15 = this->fields.bgModel;
  if ( !v15 )
    goto LABEL_19;
  v16 = v15->fields.startMainEffectPlayer;
  v17 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0);
  if ( !v16 )
    goto LABEL_19;
  v16->fields.endCallback = v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->fields.endCallback, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v30 = this->fields.bgModel;
  if ( !v30 )
    goto LABEL_19;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_19;
  Name_k__BackingField = startMainEffectPlayer->fields._Name_k__BackingField;
  v13 = (Il2CppObject *)v30->fields.startMainEffectPlayer;
  v32 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++HIDWORD(startMainEffectPlayer->fields.playCallback);
  if ( !Name_k__BackingField )
    goto LABEL_19;
  playCallback_low = SLODWORD(startMainEffectPlayer->fields.playCallback);
  if ( (unsigned int)playCallback_low >= LODWORD(Name_k__BackingField[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)startMainEffectPlayer,
      v13,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(startMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v34 + 32) = v13;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 32), (int32_t)v13, v24, v25, v26, v27, v28, v29);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_19;
  if ( SLODWORD(startMainEffectPlayer->fields.playCallback) >= 1 )
  {
    startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                          (const MethodInfo_384C73C *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    if ( startMainEffectPlayer )
    {
      ClassBoardEffectPlayer__Play(startMainEffectPlayer, 0);
      return;
    }
LABEL_19:
    sub_21FFECC(startMainEffectPlayer, v13);
  }
  if ( !*p_playEndCallback )
    goto LABEL_19;
  ((void (__fastcall *)(intptr_t, intptr_t))(*p_playEndCallback)->fields.invoke_impl)(
    (*p_playEndCallback)->fields.method_code,
    (*p_playEndCallback)->fields.method);
}


void ClassBoardEffectController__PlayNext(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *players; // x0
  __int64 v4; // x1
  struct System_Action_o *playEndCallback; // x8

  if ( (byte_593C440 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
    byte_593C440 = 1;
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  v4 = (unsigned int)(this->fields.playEndCount + 1);
  this->fields.playEndCount = v4;
  if ( !players )
    goto LABEL_9;
  if ( (int)v4 < players->fields._size )
  {
    players = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             players,
                                                             v4,
                                                             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
    if ( players )
    {
      ClassBoardEffectPlayer__Play((ClassBoardEffectPlayer_o *)players, 0);
      return;
    }
LABEL_9:
    sub_21FFECC(players, v4);
  }
  playEndCallback = this->fields.playEndCallback;
  if ( !playEndCallback )
    goto LABEL_9;
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
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  System_Collections_Generic_List_object__o *players; // x0
  Il2CppObject *releaseEffectPlayer; // x1
  bool v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x8
  Il2CppObject *current; // x20
  System_Action_o *v29; // x21
  __int64 v30; // x0
  __int64 v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_593C43A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ClassBoardEffectController_CheckPlayEnd__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__);
    sub_21FFC50(&IClassBoardLockModel_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
    byte_593C43A = 1;
  }
  memset(&v38, 0, sizeof(v38));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playEndCallback,
    (int32_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !releaseSquare )
    goto LABEL_16;
  v15 = sub_21FFDA4(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0;
  ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v15, v16);
  ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v17);
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
    goto LABEL_16;
  items = players->fields._items;
  releaseEffectPlayer = (Il2CppObject *)releaseSquare->fields.releaseEffectPlayer;
  v25 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++players->fields._version;
  if ( !items )
    goto LABEL_16;
  size = players->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      players,
      releaseEffectPlayer,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = &items->obj.klass + size;
    players->fields._size = size + 1;
    v27[4] = (Il2CppClass *)releaseEffectPlayer;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v27 + 4),
      (int32_t)releaseEffectPlayer,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
LABEL_16:
    sub_21FFECC(players, releaseEffectPlayer);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    players,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v38,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v38.fields._current;
    v29 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0);
    if ( !current )
      sub_21FFECC(v30, v31);
    *(__int64 *)((char *)&qword_20 + (_QWORD)current) = (__int64)v29;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)((char *)&qword_20 + (_QWORD)current),
      (int32_t)v29,
      v32,
      v33,
      v34,
      v35,
      v36,
      v37);
    ClassBoardEffectPlayer__Play((ClassBoardEffectPlayer_o *)current, 0);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v38,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
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
  if ( (byte_593C43D & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    byte_593C43D = 1;
  }
  v10 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, callback);
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x20
  System_Collections_Generic_List_T__o *players; // x21
  System_Func_object__bool__o *v16; // x23
  System_Collections_Generic_List_object__o *v17; // x21
  __int64 v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x9
  IClassBoardSquareModel_c **v22; // x10
  __int64 v23; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x21
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  __int64 v26; // x9
  int32_t *p_offset; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 i; // x21
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x22
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x0
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  __int64 v50; // x21
  System_Collections_Generic_List_T__o *v51; // x23
  System_Func_object__bool__o *v52; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x23
  System_Func_object__bool__o *v54; // x24
  Il2CppObject *v55; // x0
  Il2CppObject *v56; // x22
  Il2CppClass *v57; // x8
  __int64 v58; // x9
  IClassBoardSquareModel_c **v59; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  ClassBoardEffectPlayer_o *v63; // x22
  bool v64; // w1
  __int64 v65; // x0
  Il2CppObject *v66; // x1
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  System_Collections_Generic_List_object__o *v73; // x0
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x8
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  __int64 v82; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_object__o *v83; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_593C442 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_21FFC50(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
    sub_21FFC50(&System_Func_IClassBoardSquareModel__bool__TypeInfo);
    sub_21FFC50(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_21FFC50(&IClassBoardLockModel_TypeInfo);
    sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
    sub_21FFC50(&Method_ClassBoardEffectController___c__DisplayClass17_0__RegisterConnectedSquareEnablePlayer_b__0__);
    sub_21FFC50(&ClassBoardEffectController___c__DisplayClass17_0_TypeInfo);
    sub_21FFC50(&Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__1__);
    sub_21FFC50(&Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__2__);
    sub_21FFC50(&ClassBoardEffectController___c__DisplayClass17_1_TypeInfo);
    byte_593C442 = 1;
  }
  v83 = 0;
  v5 = sub_21FFEBC(ClassBoardEffectController___c__DisplayClass17_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass17_0___ctor((ClassBoardEffectController___c__DisplayClass17_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_70;
  *(_QWORD *)(v5 + 16) = releaseSquare;
  v14 = v5 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)releaseSquare, v8, v9, v10, v11, v12, v13);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v16 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_ClassBoardEffectController___c__DisplayClass17_0__RegisterConnectedSquareEnablePlayer_b__0__,
    0);
  if ( BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v16,
         (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v18 = *(_QWORD *)v14;
  v83 = v17;
  if ( !v18 )
    goto LABEL_70;
  v19 = *(__int64 **)(v18 + 184);
  if ( !v19 )
    goto LABEL_70;
  v20 = *v19;
  v21 = *(unsigned __int16 *)(*v19 + 302);
  if ( *(_WORD *)(*v19 + 302) )
  {
    v22 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v20 + 176) + 8LL);
    while ( *(v22 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v21;
      v22 += 2;
      if ( !v21 )
        goto LABEL_11;
    }
    v23 = v20 + 16LL * (*(_DWORD *)v22 + 17) + 312;
  }
  else
  {
LABEL_11:
    v23 = sub_2237E2C(v19, IClassBoardSquareModel_TypeInfo, 17);
  }
  v6 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_object__o **, _QWORD))v23)(
         v19,
         &v83,
         *(_QWORD *)(v23 + 8));
  if ( v83 && v83->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      v26 = *(unsigned __int16 *)&squareViewList->klass->_2.rank;
      if ( *(_WORD *)&squareViewList->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          --v26;
          p_offset += 4;
          if ( !v26 )
            goto LABEL_20;
        }
        v28 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_20:
        v28 = sub_2237E2C(
                this->fields.squareViewList,
                System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                0);
      }
      v29 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))v28)(
              squareViewList,
              *(_QWORD *)(v28 + 8));
      v82 = v29;
      if ( !v29 )
        sub_21FFECC(0, v30);
      for ( i = v29; ; i = v82 )
      {
        v32 = *(_QWORD *)i;
        v33 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
        if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
        {
          v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v33;
            v34 += 4;
            if ( !v33 )
              goto LABEL_28;
          }
          v35 = v32 + 16LL * *v34 + 312;
        }
        else
        {
LABEL_28:
          v35 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(i, *(_QWORD *)(v35 + 8)) & 1) == 0 )
          break;
        v36 = sub_21FFEBC(ClassBoardEffectController___c__DisplayClass17_1_TypeInfo);
        ClassBoardEffectController___c__DisplayClass17_1___ctor(
          (ClassBoardEffectController___c__DisplayClass17_1_o *)v36,
          0);
        if ( !v82 )
          sub_21FFECC(v37, v38);
        v39 = *(_QWORD *)v82;
        v40 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
        {
          v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v41 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            --v40;
            v41 += 4;
            if ( !v40 )
              goto LABEL_36;
          }
          v42 = v39 + 16LL * *v41 + 312;
        }
        else
        {
LABEL_36:
          v42 = sub_2237E2C(v82, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0);
        }
        v43 = (*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v82, *(_QWORD *)(v42 + 8));
        if ( !v36 )
          sub_21FFECC(v43, v43);
        *(_QWORD *)(v36 + 16) = v43;
        v50 = v36 + 16;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 16), v43, v44, v45, v46, v47, v48, v49);
        v51 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v52 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v52,
          (Il2CppObject *)v36,
          Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__1__,
          0);
        if ( !BasicHelper__Any_object_(
                v51,
                (System_Func_T__bool__o *)v52,
                (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
        {
          v53 = (System_Collections_Generic_IEnumerable_TSource__o *)v83;
          v54 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_IClassBoardSquareModel__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v54,
            (Il2CppObject *)v36,
            Method_ClassBoardEffectController___c__DisplayClass17_1__RegisterConnectedSquareEnablePlayer_b__2__,
            0);
          v55 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
                  v53,
                  (System_Func_TSource__bool__o *)v54,
                  (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v56 = v55;
          if ( v55 )
          {
            v57 = v55->klass;
            v58 = *(unsigned __int16 *)&v55->klass->_2.rank;
            if ( *(_WORD *)&v55->klass->_2.rank )
            {
              v59 = (IClassBoardSquareModel_c **)&v57->_1.interfaceOffsets->offset;
              while ( *(v59 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v58;
                v59 += 2;
                if ( !v58 )
                  goto LABEL_45;
              }
              v60 = (__int64)&v57->vtable[*(_DWORD *)v59 + 15];
            }
            else
            {
LABEL_45:
              v60 = sub_2237E2C(v55, IClassBoardSquareModel_TypeInfo, 15);
            }
            v61 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v60)(v56, 0, *(_QWORD *)(v60 + 8));
            if ( (v61 & 1) == 0 )
            {
              if ( !*(_QWORD *)v50 )
                sub_21FFECC(v61, v62);
              if ( !*(_QWORD *)v14 )
                sub_21FFECC(v61, v62);
              v63 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v50 + 168LL);
              if ( !v63 )
                sub_21FFECC(v61, v62);
              v64 = sub_21FFDA4(*(_QWORD *)(*(_QWORD *)v14 + 184LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v63,
                v64,
                (const MethodInfo_37EA368 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v50 )
                sub_21FFECC(v65, v66);
              v73 = (System_Collections_Generic_List_object__o *)this->fields.players;
              if ( !v73
                || (v66 = *(Il2CppObject **)(*(_QWORD *)v50 + 168LL),
                    items = v73->fields._items,
                    v75 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__,
                    ++v73->fields._version,
                    !items) )
              {
                sub_21FFECC(v73, v66);
              }
              size = v73->fields._size;
              if ( (unsigned int)size >= LODWORD(items->max_length) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v73,
                  v66,
                  *(const MethodInfo_444FB2C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
              }
              else
              {
                v77 = &items->obj.klass + size;
                v73->fields._size = size + 1;
                v77[4] = (Il2CppClass *)v66;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v77 + 4), (int32_t)v66, v67, v68, v69, v70, v71, v72);
              }
            }
          }
        }
      }
      if ( v82 )
      {
        v78 = *(_QWORD *)v82;
        v79 = *(unsigned __int16 *)(*(_QWORD *)v82 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v82 + 302LL) )
        {
          v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v80 - 1) != System_IDisposable_TypeInfo )
          {
            --v79;
            v80 += 4;
            if ( !v79 )
              goto LABEL_64;
          }
          v81 = v78 + 16LL * *v80 + 312;
        }
        else
        {
LABEL_64:
          v81 = sub_2237E2C(v82, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v81)(v82, *(_QWORD *)(v81 + 8));
      }
      return;
    }
LABEL_70:
    sub_21FFECC(v6, v7);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x21
  System_Collections_Generic_List_T__o *players; // x22
  System_Func_object__bool__o *v17; // x24
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x22
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 v24; // x1
  __int64 i; // x22
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x24
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x23
  __int64 v45; // x22
  System_Collections_Generic_List_T__o *v46; // x25
  System_Func_object__bool__o *v47; // x26
  _BOOL8 v48; // x0
  __int64 v49; // x1
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  __int64 *v56; // x24
  __int64 v57; // x0
  __int64 v58; // x1
  __int64 *v59; // x25
  __int64 v60; // x8
  __int64 v61; // x9
  IClassBoardLineModel_c **v62; // x10
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x25
  __int64 v67; // x8
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x1
  __int64 *v73; // x26
  __int64 v74; // x8
  int v75; // w25
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x8
  __int64 *v82; // x25
  __int64 v83; // x8
  __int64 v84; // x9
  int *v85; // x10
  __int64 v86; // x0
  __int64 *v87; // x25
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  __int64 v92; // x0
  __int64 v93; // x1
  __int64 v94; // x25
  __int64 v95; // x8
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x1
  __int64 *v101; // x26
  __int64 v102; // x8
  int v103; // w25
  __int64 v104; // x9
  int *v105; // x10
  __int64 v106; // x0
  __int64 v107; // x0
  __int64 v108; // x1
  __int64 v109; // x8
  __int64 v110; // x9
  IClassBoardLineModel_c **v111; // x10
  __int64 v112; // x0
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  ClassBoardEffectPlayer_o *v119; // x0
  __int64 v120; // x0
  Il2CppObject *v121; // x1
  System_String_o *v122; // x2
  System_String_o *v123; // x3
  int32_t v124; // w4
  int32_t v125; // w5
  bool v126; // w6
  bool v127; // w7
  System_Collections_Generic_List_object__o *v128; // x0
  struct System_Object_array *items; // x8
  _QWORD *v130; // x9
  __int64 size; // x10
  Il2CppClass **v132; // x8
  __int64 v133; // x0
  __int64 v134; // x1
  __int64 v135; // x23
  __int64 v136; // x8
  __int64 v137; // x9
  IClassBoardSquareModel_c **v138; // x10
  __int64 v139; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x23
  System_Func_object__bool__o *v141; // x24
  __int64 v142; // x1
  ClassBoardSquare_o *v143; // x22
  const MethodInfo *v144; // x3
  __int64 v145; // x0
  __int64 v146; // x1
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  Il2CppObject *v148; // x1
  System_String_o *v149; // x2
  System_String_o *v150; // x3
  int32_t v151; // w4
  int32_t v152; // w5
  bool v153; // w6
  bool v154; // w7
  System_Collections_Generic_List_object__o *v155; // x0
  struct System_Object_array *v156; // x8
  _QWORD *v157; // x9
  __int64 v158; // x10
  Il2CppClass **v159; // x8
  __int64 v160; // x8
  __int64 v161; // x9
  int *v162; // x10
  __int64 v163; // x0
  __int64 v165; // [xsp+18h] [xbp-68h]

  if ( (byte_593C441 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    sub_21FFC50(&Method_ClassBoardEffectPlayer_SetData_bool___);
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
    sub_21FFC50(&System_Func_ClassBoardSquare__bool__TypeInfo);
    sub_21FFC50(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    sub_21FFC50(&IClassBoardLineModel_TypeInfo);
    sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectingLineBlankPlayer_b__0__);
    sub_21FFC50(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
    sub_21FFC50(&Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectingLineBlankPlayer_b__1__);
    sub_21FFC50(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
    sub_21FFC50(&Method_ClassBoardEffectController___c__DisplayClass16_2__RegisterConnectingLineBlankPlayer_b__2__);
    sub_21FFC50(&ClassBoardEffectController___c__DisplayClass16_2_TypeInfo);
    byte_593C441 = 1;
  }
  v6 = sub_21FFEBC(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass16_0___ctor((ClassBoardEffectController___c__DisplayClass16_0_o *)v6, 0);
  if ( !v6 )
    goto LABEL_157;
  *(_QWORD *)(v6 + 16) = releaseSquare;
  v15 = v6 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)releaseSquare, v9, v10, v11, v12, v13, v14);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v17 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v6,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectingLineBlankPlayer_b__0__,
    0);
  v7 = BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v17,
         (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v7 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_157:
    sub_21FFECC(v7, v8);
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
    v22 = sub_2237E2C(this->fields.lineViewList, System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, 0);
  }
  v23 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))v22)(
          lineViewList,
          *(_QWORD *)(v22 + 8));
  v165 = v23;
  if ( !v23 )
    sub_21FFECC(0, v24);
  for ( i = v23; ; i = v165 )
  {
    v26 = *(_QWORD *)i;
    v27 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
    if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_18;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_18:
      v29 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v29)(i, *(_QWORD *)(v29 + 8)) & 1) == 0 )
      break;
    v30 = sub_21FFEBC(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
    ClassBoardEffectController___c__DisplayClass16_1___ctor(
      (ClassBoardEffectController___c__DisplayClass16_1_o *)v30,
      0);
    if ( !v165 )
      sub_21FFECC(v31, v32);
    v33 = *(_QWORD *)v165;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v165 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v165 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v35 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_26;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_26:
      v36 = sub_2237E2C(v165, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v165, *(_QWORD *)(v36 + 8));
    if ( !v30 )
      sub_21FFECC(v37, v37);
    *(_QWORD *)(v30 + 16) = v37;
    v44 = v30 + 16;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v30 + 16), v37, v38, v39, v40, v41, v42, v43);
    v45 = sub_21FFEBC(ClassBoardEffectController___c__DisplayClass16_2_TypeInfo);
    ClassBoardEffectController___c__DisplayClass16_2___ctor(
      (ClassBoardEffectController___c__DisplayClass16_2_o *)v45,
      0);
    v46 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v47 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v47,
      (Il2CppObject *)v30,
      Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectingLineBlankPlayer_b__1__,
      0);
    v48 = BasicHelper__Any_object_(
            v46,
            (System_Func_T__bool__o *)v47,
            (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v48 )
    {
      if ( !v45 )
        sub_21FFECC(v48, v49);
      *(_QWORD *)(v45 + 16) = 0;
      v56 = (__int64 *)(v45 + 16);
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v45 + 16), 0, v50, v51, v52, v53, v54, v55);
      if ( !*(_QWORD *)v44 )
        sub_21FFECC(v57, v58);
      v59 = *(__int64 **)(*(_QWORD *)v44 + 176LL);
      if ( !v59 )
        sub_21FFECC(v57, v58);
      v60 = *v59;
      v61 = *(unsigned __int16 *)(*v59 + 302);
      if ( *(_WORD *)(*v59 + 302) )
      {
        v62 = (IClassBoardLineModel_c **)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *(v62 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v61;
          v62 += 2;
          if ( !v61 )
            goto LABEL_37;
        }
        v63 = v60 + 16LL * (*(_DWORD *)v62 + 1) + 312;
      }
      else
      {
LABEL_37:
        v63 = sub_2237E2C(v59, IClassBoardLineModel_TypeInfo, 1);
      }
      v64 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8));
      v66 = v64;
      if ( !v64 )
        sub_21FFECC(0, v65);
      v67 = *(_QWORD *)v64;
      v68 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
      {
        v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v69 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v68;
          v69 += 4;
          if ( !v68 )
            goto LABEL_44;
        }
        v70 = v67 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_44:
        v70 = sub_2237E2C(v64, IClassBoardSquareModel_TypeInfo, 0);
      }
      v71 = (*(__int64 (__fastcall **)(__int64, _QWORD))v70)(v66, *(_QWORD *)(v70 + 8));
      if ( !*(_QWORD *)v15 )
        sub_21FFECC(v71, v72);
      v73 = *(__int64 **)(*(_QWORD *)v15 + 184LL);
      if ( !v73 )
        sub_21FFECC(v71, v72);
      v74 = *v73;
      v75 = v71;
      v76 = *(unsigned __int16 *)(*v73 + 302);
      if ( *(_WORD *)(*v73 + 302) )
      {
        v77 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v77 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v76;
          v77 += 4;
          if ( !v76 )
            goto LABEL_52;
        }
        v78 = v74 + 16LL * *v77 + 312;
      }
      else
      {
LABEL_52:
        v78 = sub_2237E2C(v73, IClassBoardSquareModel_TypeInfo, 0);
      }
      v79 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v78)(v73, *(_QWORD *)(v78 + 8));
      v81 = *(_QWORD *)v44;
      if ( v75 == (_DWORD)v79 )
      {
        if ( !v81 )
          sub_21FFECC(v79, v80);
        v82 = *(__int64 **)(v81 + 176);
        if ( !v82 )
          sub_21FFECC(v79, v80);
        v83 = *v82;
        v84 = *(unsigned __int16 *)(*v82 + 302);
        if ( *(_WORD *)(*v82 + 302) )
        {
          v85 = (int *)(*(_QWORD *)(v83 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v85 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v84;
            v85 += 4;
            if ( !v84 )
              goto LABEL_61;
          }
          v86 = v83 + 16LL * *v85 + 312;
        }
        else
        {
LABEL_61:
          v86 = sub_2237E2C(v82, IClassBoardLineModel_TypeInfo, 0);
        }
        goto LABEL_95;
      }
      if ( !v81 )
        sub_21FFECC(v79, v80);
      v87 = *(__int64 **)(v81 + 176);
      if ( !v87 )
        sub_21FFECC(v79, v80);
      v88 = *v87;
      v89 = *(unsigned __int16 *)(*v87 + 302);
      if ( *(_WORD *)(*v87 + 302) )
      {
        v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v90 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v89;
          v90 += 4;
          if ( !v89 )
            goto LABEL_68;
        }
        v91 = v88 + 16LL * *v90 + 312;
      }
      else
      {
LABEL_68:
        v91 = sub_2237E2C(v87, IClassBoardLineModel_TypeInfo, 0);
      }
      v92 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v91)(v87, *(_QWORD *)(v91 + 8));
      v94 = v92;
      if ( !v92 )
        sub_21FFECC(0, v93);
      v95 = *(_QWORD *)v92;
      v96 = *(unsigned __int16 *)(*(_QWORD *)v92 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v92 + 302LL) )
      {
        v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v97 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v96;
          v97 += 4;
          if ( !v96 )
            goto LABEL_76;
        }
        v98 = v95 + 16LL * *v97 + 312;
      }
      else
      {
LABEL_76:
        v98 = sub_2237E2C(v92, IClassBoardSquareModel_TypeInfo, 0);
      }
      v99 = (*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v94, *(_QWORD *)(v98 + 8));
      if ( !*(_QWORD *)v15 )
        sub_21FFECC(v99, v100);
      v101 = *(__int64 **)(*(_QWORD *)v15 + 184LL);
      if ( !v101 )
        sub_21FFECC(v99, v100);
      v102 = *v101;
      v103 = v99;
      v104 = *(unsigned __int16 *)(*v101 + 302);
      if ( *(_WORD *)(*v101 + 302) )
      {
        v105 = (int *)(*(_QWORD *)(v102 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v105 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v104;
          v105 += 4;
          if ( !v104 )
            goto LABEL_84;
        }
        v106 = v102 + 16LL * *v105 + 312;
      }
      else
      {
LABEL_84:
        v106 = sub_2237E2C(v101, IClassBoardSquareModel_TypeInfo, 0);
      }
      v107 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v106)(v101, *(_QWORD *)(v106 + 8));
      if ( v103 == (_DWORD)v107 )
      {
        if ( !*(_QWORD *)v44 )
          sub_21FFECC(v107, v108);
        v82 = *(__int64 **)(*(_QWORD *)v44 + 176LL);
        if ( !v82 )
          sub_21FFECC(v107, v108);
        v109 = *v82;
        v110 = *(unsigned __int16 *)(*v82 + 302);
        if ( *(_WORD *)(*v82 + 302) )
        {
          v111 = (IClassBoardLineModel_c **)(*(_QWORD *)(v109 + 176) + 8LL);
          while ( *(v111 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v110;
            v111 += 2;
            if ( !v110 )
              goto LABEL_93;
          }
          v86 = v109 + 16LL * (*(_DWORD *)v111 + 1) + 312;
        }
        else
        {
LABEL_93:
          v86 = sub_2237E2C(v82, IClassBoardLineModel_TypeInfo, 1);
        }
LABEL_95:
        v112 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v86)(v82, *(_QWORD *)(v86 + 8));
        *v56 = v112;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v45 + 16), v112, v113, v114, v115, v116, v117, v118);
      }
      if ( *v56 )
      {
        if ( !*(_QWORD *)v44 )
          sub_21FFECC(v107, v108);
        v119 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v44 + 160LL);
        if ( !v119 )
          sub_21FFECC(0, v108);
        ClassBoardEffectPlayer__SetData_bool_(
          v119,
          isLock,
          (const MethodInfo_37EA368 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v44 )
          sub_21FFECC(v120, v121);
        v128 = (System_Collections_Generic_List_object__o *)this->fields.players;
        if ( !v128
          || (v121 = *(Il2CppObject **)(*(_QWORD *)v44 + 160LL),
              items = v128->fields._items,
              v130 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__,
              ++v128->fields._version,
              !items) )
        {
          sub_21FFECC(v128, v121);
        }
        size = v128->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v128,
            v121,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
        }
        else
        {
          v132 = &items->obj.klass + size;
          v128->fields._size = size + 1;
          v132[4] = (Il2CppClass *)v121;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v132 + 4), (int32_t)v121, v122, v123, v124, v125, v126, v127);
        }
        v135 = *v56;
        if ( !*v56 )
          sub_21FFECC(v133, v134);
        v136 = *(_QWORD *)v135;
        v137 = *(unsigned __int16 *)(*(_QWORD *)v135 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v135 + 302LL) )
        {
          v138 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v136 + 176) + 8LL);
          while ( *(v138 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v137;
            v138 += 2;
            if ( !v137 )
              goto LABEL_110;
          }
          v139 = v136 + 16LL * (*(_DWORD *)v138 + 5) + 312;
        }
        else
        {
LABEL_110:
          v139 = sub_2237E2C(*v56, IClassBoardSquareModel_TypeInfo, 5);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v139)(v135, *(_QWORD *)(v139 + 8)) & 1) != 0 )
        {
          squareViewList = this->fields.squareViewList;
          v141 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ClassBoardSquare__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v141,
            (Il2CppObject *)v45,
            Method_ClassBoardEffectController___c__DisplayClass16_2__RegisterConnectingLineBlankPlayer_b__2__,
            0);
          v143 = (ClassBoardSquare_o *)System_Linq_Enumerable__FirstOrDefault_object__59044732(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)squareViewList,
                                         (System_Func_TSource__bool__o *)v141,
                                         (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v142);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v143, 0, 0) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, v143, isLock, v144);
            if ( !v143 )
              sub_21FFECC(v145, v146);
            enableEffectPlayer = v143->fields.enableEffectPlayer;
            if ( !enableEffectPlayer )
              sub_21FFECC(0, v146);
            ClassBoardEffectPlayer__SetData_bool_(
              enableEffectPlayer,
              isLock,
              (const MethodInfo_37EA368 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v155 = (System_Collections_Generic_List_object__o *)this->fields.players;
            if ( !v155
              || (v156 = v155->fields._items,
                  v148 = (Il2CppObject *)v143->fields.enableEffectPlayer,
                  v157 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__,
                  ++v155->fields._version,
                  !v156) )
            {
              sub_21FFECC(v155, v148);
            }
            v158 = v155->fields._size;
            if ( (unsigned int)v158 >= LODWORD(v156->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v155,
                v148,
                *(const MethodInfo_444FB2C **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
            }
            else
            {
              v159 = &v156->obj.klass + v158;
              v155->fields._size = v158 + 1;
              v159[4] = (Il2CppClass *)v148;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v159 + 4),
                (int32_t)v148,
                v149,
                v150,
                v151,
                v152,
                v153,
                v154);
            }
          }
        }
      }
      continue;
    }
  }
  if ( v165 )
  {
    v160 = *(_QWORD *)v165;
    v161 = *(unsigned __int16 *)(*(_QWORD *)v165 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v165 + 302LL) )
    {
      v162 = (int *)(*(_QWORD *)(v160 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v162 - 1) != System_IDisposable_TypeInfo )
      {
        --v161;
        v162 += 4;
        if ( !v161 )
          goto LABEL_130;
      }
      v163 = v160 + 16LL * *v162 + 312;
    }
    else
    {
LABEL_130:
      v163 = sub_2237E2C(v165, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v163)(v165, *(_QWORD *)(v163 + 8));
  }
}


void ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController___c_c *v3; // x0
  System_Collections_Generic_List_object__o *players; // x20
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__13_0; // x21
  Il2CppObject *v7; // x22
  struct ClassBoardEffectController___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v20; // x8
  System_String_o *size; // x2
  int v22; // w9

  if ( (byte_593C43E & 1) == 0 )
  {
    sub_21FFC50(&System_Action_ClassBoardEffectPlayer__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__);
    sub_21FFC50(&Method_ClassBoardEffectController___c__ResetPlayers_b__13_0__);
    sub_21FFC50(&ClassBoardEffectController___c_TypeInfo);
    byte_593C43E = 1;
  }
  v3 = ClassBoardEffectController___c_TypeInfo;
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !*(&ClassBoardEffectController___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectController___c_TypeInfo, method);
    v3 = ClassBoardEffectController___c_TypeInfo;
  }
  static_fields = v3->static_fields;
  _9__13_0 = (System_Action_object__o *)static_fields->__9__13_0;
  if ( !_9__13_0 )
  {
    if ( !*(&v3->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v3, method);
      static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__13_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_ClassBoardEffectPlayer__TypeInfo);
    System_Action_object____ctor(_9__13_0, v7, Method_ClassBoardEffectController___c__ResetPlayers_b__13_0__, 0);
    v8 = ClassBoardEffectController___c_TypeInfo->static_fields;
    v8->__9__13_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__13_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->__9__13_0, (int32_t)_9__13_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !players
    || (System_Collections_Generic_List_object___ForEach(
          players,
          (System_Action_T__o *)_9__13_0,
          (const MethodInfo_445054C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v20 = this->fields.players) == 0) )
  {
    sub_21FFECC(v3, method);
  }
  size = (System_String_o *)(unsigned int)v20->fields._size;
  v22 = v20->fields._version + 1;
  v20->fields._size = 0;
  v20->fields._version = v22;
  if ( (int)size >= 1 )
    System_Array__Clear((System_Array_o *)v20->fields._items, 0, (int32_t)size, 0);
  this->fields.playEndCallback = 0;
  this->fields.playEndCount = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.playEndCallback, 0, size, v15, v16, v17, v18, v19);
}


void ClassBoardEffectController__SkipClassBoardStartEffect(
        ClassBoardEffectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  struct System_Action_o **p_playEndCallback; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  ClassBoardEffectPlayer_o *skipMainEffectPlayer; // x0
  Il2CppObject *v13; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v15; // x8
  struct ClassBoardEffectPlayer_o *v16; // x21
  System_Action_o *v17; // x22
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct ClassBoardBackground_o *v30; // x9
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v32; // x9
  __int64 playCallback_low; // x10
  __int64 v34; // x8

  if ( (byte_593C43C & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ClassBoardEffectController_PlayNext__);
    sub_21FFC50(&Method_ClassBoardEffectPlayer_SetData_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__);
    byte_593C43C = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.playEndCallback,
    (int32_t)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_19;
  skipMainEffectPlayer = bgModel->fields.skipMainEffectPlayer;
  if ( !skipMainEffectPlayer )
    goto LABEL_19;
  ClassBoardEffectPlayer__SetData_int_(
    skipMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_37EA3C8 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v15 = this->fields.bgModel;
  if ( !v15 )
    goto LABEL_19;
  v16 = v15->fields.skipMainEffectPlayer;
  v17 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0);
  if ( !v16 )
    goto LABEL_19;
  v16->fields.endCallback = v17;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->fields.endCallback, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  v30 = this->fields.bgModel;
  if ( !v30 )
    goto LABEL_19;
  skipMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !skipMainEffectPlayer )
    goto LABEL_19;
  Name_k__BackingField = skipMainEffectPlayer->fields._Name_k__BackingField;
  v13 = (Il2CppObject *)v30->fields.skipMainEffectPlayer;
  v32 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++HIDWORD(skipMainEffectPlayer->fields.playCallback);
  if ( !Name_k__BackingField )
    goto LABEL_19;
  playCallback_low = SLODWORD(skipMainEffectPlayer->fields.playCallback);
  if ( (unsigned int)playCallback_low >= LODWORD(Name_k__BackingField[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)skipMainEffectPlayer,
      v13,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(skipMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v34 + 32) = v13;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 32), (int32_t)v13, v24, v25, v26, v27, v28, v29);
  }
  skipMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !skipMainEffectPlayer )
    goto LABEL_19;
  if ( SLODWORD(skipMainEffectPlayer->fields.playCallback) >= 1 )
  {
    skipMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)skipMainEffectPlayer,
                                                         (const MethodInfo_384C73C *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    if ( skipMainEffectPlayer )
    {
      ClassBoardEffectPlayer__Play(skipMainEffectPlayer, 0);
      return;
    }
LABEL_19:
    sub_21FFECC(skipMainEffectPlayer, v13);
  }
  if ( !*p_playEndCallback )
    goto LABEL_19;
  ((void (__fastcall *)(intptr_t, intptr_t))(*p_playEndCallback)->fields.invoke_impl)(
    (*p_playEndCallback)->fields.method_code,
    (*p_playEndCallback)->fields.method);
}


void ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593C444 & 1) == 0 )
  {
    sub_21FFC50(&ClassBoardEffectController___c_TypeInfo);
    byte_593C444 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(ClassBoardEffectController___c_TypeInfo);
  System_Object___ctor(v1, 0);
  ClassBoardEffectController___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectController___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)ClassBoardEffectController___c_TypeInfo->static_fields,
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, x);
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
    sub_21FFECC(this, x);
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
  if ( (byte_593C445 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_2_o *)sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    byte_593C445 = 1;
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
    v9 = sub_2237E2C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v9)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(v9 + 8));
  connectSquareModel = v4->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_21FFECC(this, x);
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
    v15 = sub_2237E2C(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0);
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
    sub_21FFECC(this, x);
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
    sub_21FFECC(this, x);
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
  if ( (byte_593C446 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass17_1_o *)sub_21FFC50(&IClassBoardSquareModel_TypeInfo);
    byte_593C446 = 1;
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
    v8 = sub_2237E2C(model, IClassBoardSquareModel_TypeInfo, 0);
  }
  this = (ClassBoardEffectController___c__DisplayClass17_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))v8)(
                                                                 model,
                                                                 *(_QWORD *)(v8 + 8));
  square = v4->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0 )
LABEL_19:
    sub_21FFECC(this, model);
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
    v15 = sub_2237E2C(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v15 + 8));
}