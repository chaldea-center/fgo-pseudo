void __fastcall ClassBoardEffectController___ctor(
        ClassBoardEffectController_o *this,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squares,
        System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lines,
        MapCamera_o *camera,
        ClassBoardBackground_o *bg,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x24
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  Il2CppObject *object; // x0
  Il2CppClass *klass; // x20
  _QWORD *image; // x8
  __int64 v28; // x9
  IClassBoardSquareModel_c **v29; // x10
  __int64 v30; // x0

  if ( (byte_49FF6A7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_First_ClassBoardSquare___, squares);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo, v13);
    byte_49FF6A7 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo,
                                                       squares,
                                                       lines);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.players, (int32_t)v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareViewList = squares;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)squares, v17, v18);
  this->fields.lineViewList = lines;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.lineViewList, (int32_t)lines, v19, v20);
  this->fields.mapCamera = camera;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mapCamera, (int32_t)camera, v21, v22);
  this->fields.bgModel = bg;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.bgModel, (int32_t)bg, v23, v24);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)squares,
             (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !object || (klass = object[11].klass) == 0LL )
    sub_1B64324(object);
  image = klass->_1.image;
  v28 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v29 = (IClassBoardSquareModel_c **)(image[22] + 8LL);
    while ( *(v29 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v28;
      v29 += 2;
      if ( !v28 )
        goto LABEL_9;
    }
    v30 = (__int64)&image[2 * *(_DWORD *)v29 + 41];
  }
  else
  {
LABEL_9:
    v30 = sub_1BB60A8(object[11].klass, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(Il2CppClass *, _QWORD))v30)(klass, *(_QWORD *)(v30 + 8));
}


void __fastcall ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v4; // w8
  struct System_Action_o *playEndCallback; // x8

  v2 = this;
  if ( (byte_49FF6AC & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_1B640C8(
                                             &Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__,
                                             method);
    byte_49FF6AC = 1;
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
    sub_1B64324(this);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))playEndCallback->fields.m_target)(
    playEndCallback->fields.original_method_info,
    *(_QWORD *)&playEndCallback->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectController__MoveCamera(
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
  __int64 v17; // x1
  MapCamera_o *mapCamera; // x23
  UnityEngine_Transform_o *SafeCameraDestination; // x0
  UnityEngine_Transform_o *v20; // x23
  float v21; // s0
  float v22; // s1
  float v23; // s2
  float v24; // s10
  float v25; // s9
  float v26; // s8
  float v27; // s12
  float v28; // s13
  float v29; // s14
  float v30; // s15
  __int64 v31; // x1
  float v32; // s11
  float v33; // s13
  float v34; // s4
  float v35; // s0
  float v36; // s3
  float v37; // s1
  float v38; // s2
  float v39; // [xsp+4h] [xbp-9Ch]
  float v40; // [xsp+8h] [xbp-98h]
  float screenPos; // [xsp+Ch] [xbp-94h]
  System_Nullable_Vector3__o screenPos_4; // [xsp+10h] [xbp-90h] BYREF
  System_Nullable_float__o v43; // 0:x3.8
  System_Nullable_Vector3__o v44; // 0:x0.16
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  z = pos.fields.z;
  y = pos.fields.y;
  x = pos.fields.x;
  if ( (byte_49FF6B0 & 1) == 0 )
  {
    sub_1B640C8(&MapCameraViewAdjusterUtil_TypeInfo, *(_QWORD *)&maxDistance);
    sub_1B640C8(&Method_System_Nullable_Vector3___ctor__, v17);
    byte_49FF6B0 = 1;
  }
  *(_QWORD *)&v44.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v44.fields.hasValue = &screenPos_4;
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  *(_QWORD *)&screenPos_4.fields.hasValue = 0LL;
  *(_QWORD *)&screenPos_4.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v44, v45, *(const MethodInfo_35D2010 **)&ease);
  if ( !MapCameraViewAdjusterUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MapCameraViewAdjusterUtil_TypeInfo);
  v43 = 0LL;
  SafeCameraDestination = (UnityEngine_Transform_o *)MapCameraViewAdjusterUtil__GetSafeCameraDestination(
                                                       mapCamera,
                                                       screenPos_4,
                                                       v43,
                                                       0LL);
  if ( !this->fields.mapCamera )
    goto LABEL_20;
  v20 = SafeCameraDestination;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mapCamera, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v21 = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  if ( !v20 )
    goto LABEL_20;
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  v39 = secMax;
  v40 = secMin;
  if ( !SafeCameraDestination )
    goto LABEL_20;
  screenPos = x;
  v24 = y;
  v25 = z;
  v27 = *(float *)&v20->fields.m_CachedPtr;
  v26 = *((float *)&v20->fields + 1);
  v28 = v21;
  v29 = v22;
  v30 = v23;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SafeCameraDestination, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  v32 = localPosition.fields.z;
  if ( !byte_49F710F )
  {
    sub_1B640C8(&System_Math_TypeInfo, v31);
    byte_49F710F = 1;
  }
  v33 = v28 - v27;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v34 = sqrtf(
          (float)((float)(v33 * v33) + (float)((float)(v29 - v26) * (float)(v29 - v26)))
        + (float)((float)(v30 - v32) * (float)(v30 - v32)))
      / (float)maxDistance;
  v35 = screenPos;
  v36 = 0.0;
  if ( v34 != 0.0 )
  {
    v36 = v40;
    if ( v34 >= v40 )
    {
      v36 = v39;
      if ( v34 <= v39 )
        v36 = v34;
    }
  }
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  if ( !SafeCameraDestination )
LABEL_20:
    sub_1B64324(SafeCameraDestination);
  v37 = v24;
  v38 = v25;
  MapCamera__StartAutoMove(
    (MapCamera_o *)SafeCameraDestination,
    *(UnityEngine_Vector3_o *)&v35,
    v36,
    ease,
    callback,
    0LL);
}


void __fastcall ClassBoardEffectController__PlayClassBoardStartEffect(
        ClassBoardEffectController_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_Action_o **p_playEndCallback; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  ClassBoardEffectPlayer_o *startMainEffectPlayer; // x0
  struct ClassBoardBackground_o *bgModel; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  struct ClassBoardBackground_o *v17; // x8
  struct ClassBoardEffectPlayer_o *v18; // x21
  System_Action_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  struct ClassBoardBackground_o *v24; // x8
  Il2CppObject *v25; // x1
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v27; // x9
  __int64 playCallback_low; // x10
  __int64 v29; // x8

  if ( (byte_49FF6A9 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_ClassBoardEffectController_PlayNext__, v5);
    sub_1B640C8(&Method_ClassBoardEffectPlayer_SetData_int___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, v9);
    byte_49FF6A9 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playEndCallback, (int32_t)callback, v11, v12);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_19;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_19;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_2E2D350 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v17 = this->fields.bgModel;
  if ( !v17 )
    goto LABEL_19;
  v18 = v17->fields.startMainEffectPlayer;
  v19 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v15, v16);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0LL);
  if ( !v18 )
    goto LABEL_19;
  v18->fields.endCallback = v19;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v18->fields.endCallback, (int32_t)v19, v20, v21);
  v24 = this->fields.bgModel;
  if ( !v24 )
    goto LABEL_19;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_19;
  v25 = (Il2CppObject *)v24->fields.startMainEffectPlayer;
  Name_k__BackingField = startMainEffectPlayer->fields._Name_k__BackingField;
  v27 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++HIDWORD(startMainEffectPlayer->fields.playCallback);
  if ( !Name_k__BackingField )
    goto LABEL_19;
  playCallback_low = SLODWORD(startMainEffectPlayer->fields.playCallback);
  if ( (unsigned int)playCallback_low >= LODWORD(Name_k__BackingField[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)startMainEffectPlayer,
      v25,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(startMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v29 + 32) = v25;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v25, v22, v23);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_19;
  if ( SLODWORD(startMainEffectPlayer->fields.playCallback) >= 1 )
  {
    startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                          (const MethodInfo_2E5AA68 *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    if ( startMainEffectPlayer )
    {
      ClassBoardEffectPlayer__Play(startMainEffectPlayer, 0LL);
      return;
    }
LABEL_19:
    sub_1B64324(startMainEffectPlayer);
  }
  if ( !*p_playEndCallback )
    goto LABEL_19;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))(*p_playEndCallback)->fields.m_target)(
    (*p_playEndCallback)->fields.original_method_info,
    *(_QWORD *)&(*p_playEndCallback)->fields.extra_arg);
}


void __fastcall ClassBoardEffectController__PlayNext(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *players; // x0
  int32_t v5; // w1
  struct System_Action_o *playEndCallback; // x8

  if ( (byte_49FF6AD & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__, v3);
    byte_49FF6AD = 1;
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  v5 = this->fields.playEndCount + 1;
  this->fields.playEndCount = v5;
  if ( !players )
    goto LABEL_9;
  if ( v5 < players->fields._size )
  {
    players = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             players,
                                                             v5,
                                                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
    if ( players )
    {
      ClassBoardEffectPlayer__Play((ClassBoardEffectPlayer_o *)players, 0LL);
      return;
    }
LABEL_9:
    sub_1B64324(players);
  }
  playEndCallback = this->fields.playEndCallback;
  if ( !playEndCallback )
    goto LABEL_9;
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))playEndCallback->fields.m_target)(
    playEndCallback->fields.original_method_info,
    *(_QWORD *)&playEndCallback->fields.extra_arg);
}


void __fastcall ClassBoardEffectController__PlayRelease(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *players; // x0
  bool v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *releaseEffectPlayer; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  Il2CppObject *current; // x20
  System_Action_o *v30; // x21
  __int64 v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49FF6A8 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, releaseSquare);
    sub_1B640C8(&Method_ClassBoardEffectController_CheckPlayEnd__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__, v10);
    sub_1B640C8(&IClassBoardLockModel_TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__, v13);
    byte_49FF6A8 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.playEndCallback, (int32_t)callback, v14, v15);
  if ( !releaseSquare )
    goto LABEL_16;
  v17 = sub_1B64204(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0;
  ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v17, v18);
  ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v19);
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
    goto LABEL_16;
  releaseEffectPlayer = (Il2CppObject *)releaseSquare->fields.releaseEffectPlayer;
  items = players->fields._items;
  v24 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++players->fields._version;
  if ( !items )
    goto LABEL_16;
  size = players->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      players,
      releaseEffectPlayer,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    players->fields._size = size + 1;
    v26[4] = (Il2CppClass *)releaseEffectPlayer;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)releaseEffectPlayer, v20, v21);
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
LABEL_16:
    sub_1B64324(players);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    players,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v34,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v34.fields._current;
    v30 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v27, v28);
    System_Action___ctor(v30, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0LL);
    if ( !current )
      sub_1B64324(v31);
    current[2].klass = (Il2CppClass *)v30;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&current[2], (int32_t)v30, v32, v33);
    ClassBoardEffectPlayer__Play((ClassBoardEffectPlayer_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v34,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectController__PlaySelectMoveCamera(
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
  if ( (byte_49FF6AA & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, callback);
    byte_49FF6AA = 1;
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


void __fastcall ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x22
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x21
  System_Collections_Generic_List_T__o *players; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  System_Func_object__bool__o *v32; // x23
  __int64 v33; // x1
  __int64 v34; // x2
  System_Collections_Generic_List_object__o *v35; // x19
  __int64 *v36; // x19
  __int64 v37; // x8
  __int64 v38; // x9
  IClassBoardSquareModel_c **v39; // x10
  __int64 v40; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v46; // x19
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x23
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  __int64 v58; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  __int64 v61; // x22
  System_Collections_Generic_List_T__o *v62; // x24
  __int64 v63; // x1
  __int64 v64; // x2
  System_Func_object__bool__o *v65; // x25
  __int64 v66; // x1
  __int64 v67; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x24
  System_Func_object__bool__o *v69; // x25
  Il2CppObject *v70; // x0
  Il2CppObject *v71; // x23
  Il2CppClass *v72; // x8
  __int64 v73; // x9
  IClassBoardSquareModel_c **v74; // x10
  __int64 v75; // x0
  __int64 v76; // x0
  ClassBoardEffectPlayer_o *v77; // x23
  bool v78; // w1
  __int64 v79; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_Collections_Generic_List_object__o *v82; // x0
  Il2CppObject *v83; // x1
  struct System_Object_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  Il2CppClass **v87; // x8
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  System_Collections_Generic_List_object__o *v92; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49FF6AF & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, releaseSquare);
    sub_1B640C8(&Method_ClassBoardEffectPlayer_SetData_bool___, v5);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v6);
    sub_1B640C8(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v7);
    sub_1B640C8(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v8);
    sub_1B640C8(&IClassBoardLockModel_TypeInfo, v9);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v10);
    sub_1B640C8(&System_IDisposable_TypeInfo, v11);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, v13);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v17);
    sub_1B640C8(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v18);
    sub_1B640C8(
      &Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
      v19);
    sub_1B640C8(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, v20);
    sub_1B640C8(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
      v21);
    sub_1B640C8(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
      v22);
    sub_1B640C8(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v23);
    byte_49FF6AF = 1;
  }
  v24 = sub_1B64314(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, releaseSquare, method);
  ClassBoardEffectController___c__DisplayClass16_0___ctor(
    (ClassBoardEffectController___c__DisplayClass16_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_64;
  *(_QWORD *)(v24 + 16) = releaseSquare;
  v28 = v24 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)releaseSquare, v26, v27);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v32 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v30, v31);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v24,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v32,
         (const MethodInfo_2E24870 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v35 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v92 = v35;
  if ( !*(_QWORD *)v28 )
    goto LABEL_64;
  v36 = *(__int64 **)(*(_QWORD *)v28 + 176LL);
  if ( !v36 )
    goto LABEL_64;
  v37 = *v36;
  v38 = *(unsigned __int16 *)(*v36 + 302);
  if ( *(_WORD *)(*v36 + 302) )
  {
    v39 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v37 + 176) + 8LL);
    while ( *(v39 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v38;
      v39 += 2;
      if ( !v38 )
        goto LABEL_11;
    }
    v40 = v37 + 16LL * (*(_DWORD *)v39 + 15) + 312;
  }
  else
  {
LABEL_11:
    v40 = sub_1BB60A8(v36, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v25 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_object__o **, _QWORD))v40)(
          v36,
          &v92,
          *(_QWORD *)(v40 + 8));
  if ( v92 && v92->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      v43 = *(unsigned __int16 *)(&squareViewList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&squareViewList->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          --v43;
          p_offset += 4;
          if ( !v43 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_1BB60A8(
                     this->fields.squareViewList,
                     System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                     0LL);
      }
      v46 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))p_method)(
              squareViewList,
              *(_QWORD *)(p_method + 8));
      if ( !v46 )
        sub_1B64324(0LL);
      while ( 1 )
      {
        v47 = *(_QWORD *)v46;
        v48 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
        {
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v48;
            v49 += 4;
            if ( !v48 )
              goto LABEL_27;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_27:
          v50 = sub_1BB60A8(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
          break;
        v53 = sub_1B64314(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v51, v52);
        ClassBoardEffectController___c__DisplayClass16_1___ctor(
          (ClassBoardEffectController___c__DisplayClass16_1_o *)v53,
          0LL);
        v54 = *(_QWORD *)v46;
        v55 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
        {
          v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v56 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            --v55;
            v56 += 4;
            if ( !v55 )
              goto LABEL_34;
          }
          v57 = v54 + 16LL * *v56 + 312;
        }
        else
        {
LABEL_34:
          v57 = sub_1BB60A8(v46, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0LL);
        }
        v58 = (*(__int64 (__fastcall **)(__int64, _QWORD))v57)(v46, *(_QWORD *)(v57 + 8));
        if ( !v53 )
          sub_1B64324(v58);
        *(_QWORD *)(v53 + 16) = v58;
        v61 = v53 + 16;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 16), v58, v59, v60);
        v62 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v65 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v63, v64);
        System_Func_object__bool____ctor(
          v65,
          (Il2CppObject *)v53,
          Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
          0LL);
        if ( !BasicHelper__Any_object_(
                v62,
                (System_Func_T__bool__o *)v65,
                (const MethodInfo_2E24870 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
        {
          v68 = (System_Collections_Generic_IEnumerable_TSource__o *)v92;
          v69 = (System_Func_object__bool__o *)sub_1B64314(System_Func_IClassBoardSquareModel__bool__TypeInfo, v66, v67);
          System_Func_object__bool____ctor(
            v69,
            (Il2CppObject *)v53,
            Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
            0LL);
          v70 = System_Linq_Enumerable__FirstOrDefault_object__48617700(
                  v68,
                  (System_Func_TSource__bool__o *)v69,
                  (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v71 = v70;
          if ( v70 )
          {
            v72 = v70->klass;
            v73 = *(unsigned __int16 *)(&v70->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v70->klass->_2.bitflags2 + 3) )
            {
              v74 = (IClassBoardSquareModel_c **)&v72->_1.interfaceOffsets->offset;
              while ( *(v74 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v73;
                v74 += 2;
                if ( !v73 )
                  goto LABEL_43;
              }
              v75 = (__int64)&v72->vtable[*(_DWORD *)v74 + 13].method;
            }
            else
            {
LABEL_43:
              v75 = sub_1BB60A8(v70, IClassBoardSquareModel_TypeInfo, 13LL);
            }
            v76 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v75)(v71, 0LL, *(_QWORD *)(v75 + 8));
            if ( (v76 & 1) == 0 )
            {
              if ( !*(_QWORD *)v61 )
                sub_1B64324(v76);
              if ( !*(_QWORD *)v28 )
                sub_1B64324(v76);
              v77 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v61 + 160LL);
              if ( !v77 )
                sub_1B64324(v76);
              v78 = sub_1B64204(*(_QWORD *)(*(_QWORD *)v28 + 176LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v77,
                v78,
                (const MethodInfo_2E2D2F0 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v61 )
                sub_1B64324(v79);
              v82 = (System_Collections_Generic_List_object__o *)this->fields.players;
              if ( !v82 )
                sub_1B64324(0LL);
              v83 = *(Il2CppObject **)(*(_QWORD *)v61 + 160LL);
              items = v82->fields._items;
              v85 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
              ++v82->fields._version;
              if ( !items )
                sub_1B64324(v82);
              size = v82->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v82,
                  v83,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
              }
              else
              {
                v87 = &items->obj.klass + size;
                v82->fields._size = size + 1;
                v87[4] = (Il2CppClass *)v83;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v87 + 4), (int32_t)v83, v80, v81);
              }
            }
          }
        }
      }
      v88 = *(_QWORD *)v46;
      v89 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
      {
        v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v90 - 1) != System_IDisposable_TypeInfo )
        {
          --v89;
          v90 += 4;
          if ( !v89 )
            goto LABEL_59;
        }
        v91 = v88 + 16LL * *v90 + 312;
      }
      else
      {
LABEL_59:
        v91 = sub_1BB60A8(v46, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v91)(v46, *(_QWORD *)(v91 + 8));
      return;
    }
LABEL_64:
    sub_1B64324(v25);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ClassBoardEffectController__RegisterConnectingLineBlankPlayer(
        ClassBoardEffectController_o *this,
        ClassBoardSquare_o *releaseSquare,
        bool isLock,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x23
  _BOOL8 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x22
  System_Collections_Generic_List_T__o *players; // x19
  __int64 v30; // x1
  __int64 v31; // x2
  System_Func_object__bool__o *v32; // x24
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  __int64 v35; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v38; // x19
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x25
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  __int64 v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  __int64 v53; // x24
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x23
  System_Collections_Generic_List_T__o *v57; // x26
  __int64 v58; // x1
  __int64 v59; // x2
  System_Func_object__bool__o *v60; // x27
  _BOOL8 v61; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  __int64 *v64; // x25
  __int64 v65; // x0
  __int64 *v66; // x26
  __int64 v67; // x8
  __int64 v68; // x9
  IClassBoardLineModel_c **v69; // x10
  __int64 v70; // x0
  __int64 v71; // x0
  __int64 v72; // x26
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  __int64 v77; // x0
  __int64 *v78; // x27
  __int64 v79; // x8
  int v80; // w26
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 v84; // x0
  __int64 v85; // x8
  __int64 *v86; // x26
  __int64 v87; // x8
  __int64 v88; // x9
  int *v89; // x10
  __int64 v90; // x0
  __int64 *v91; // x26
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x26
  __int64 v98; // x8
  __int64 v99; // x9
  int *v100; // x10
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 *v103; // x27
  __int64 v104; // x8
  int v105; // w26
  __int64 v106; // x9
  int *v107; // x10
  __int64 v108; // x0
  __int64 v109; // x0
  __int64 v110; // x8
  __int64 v111; // x9
  IClassBoardLineModel_c **v112; // x10
  __int64 v113; // x0
  int32_t v114; // w2
  int32_t v115; // w3
  ClassBoardEffectPlayer_o *v116; // x0
  __int64 v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  System_Collections_Generic_List_object__o *v120; // x0
  Il2CppObject *v121; // x1
  struct System_Object_array *items; // x8
  _QWORD *v123; // x9
  __int64 size; // x10
  Il2CppClass **v125; // x8
  __int64 v126; // x0
  __int64 v127; // x24
  __int64 v128; // x8
  __int64 v129; // x9
  IClassBoardSquareModel_c **v130; // x10
  __int64 v131; // x0
  __int64 v132; // x1
  __int64 v133; // x2
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x24
  System_Func_object__bool__o *v135; // x25
  ClassBoardSquare_o *v136; // x23
  const MethodInfo *v137; // x3
  __int64 v138; // x0
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  int32_t v140; // w2
  int32_t v141; // w3
  System_Collections_Generic_List_object__o *v142; // x0
  Il2CppObject *v143; // x1
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  Il2CppClass **v147; // x8
  __int64 v148; // x8
  __int64 v149; // x9
  int *v150; // x10
  __int64 v151; // x0

  if ( (byte_49FF6AE & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, releaseSquare);
    sub_1B640C8(&Method_ClassBoardEffectPlayer_SetData_bool___, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___, v7);
    sub_1B640C8(&System_Func_ClassBoardSquare__bool__TypeInfo, v8);
    sub_1B640C8(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v9);
    sub_1B640C8(&IClassBoardLineModel_TypeInfo, v10);
    sub_1B640C8(&IClassBoardSquareModel_TypeInfo, v11);
    sub_1B640C8(&System_IDisposable_TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, v14);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v16);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B640C8(&Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__, v18);
    sub_1B640C8(&ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, v19);
    sub_1B640C8(&Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__, v20);
    sub_1B640C8(&ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v21);
    sub_1B640C8(&Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__, v22);
    sub_1B640C8(&ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v23);
    byte_49FF6AE = 1;
  }
  v24 = sub_1B64314(ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, releaseSquare, isLock);
  ClassBoardEffectController___c__DisplayClass15_0___ctor(
    (ClassBoardEffectController___c__DisplayClass15_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_151;
  *(_QWORD *)(v24 + 16) = releaseSquare;
  v28 = v24 + 16;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)releaseSquare, v26, v27);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v32 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v30, v31);
  System_Func_object__bool____ctor(
    v32,
    (Il2CppObject *)v24,
    Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
    0LL);
  v25 = BasicHelper__Any_object_(
          players,
          (System_Func_T__bool__o *)v32,
          (const MethodInfo_2E24870 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v25 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_151:
    sub_1B64324(v25);
  klass = lineViewList->klass;
  v35 = *(unsigned __int16 *)(&lineViewList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lineViewList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      --v35;
      p_offset += 4;
      if ( !v35 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB60A8(
                 this->fields.lineViewList,
                 System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo,
                 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))p_method)(
          lineViewList,
          *(_QWORD *)(p_method + 8));
  if ( !v38 )
    sub_1B64324(0LL);
  while ( 1 )
  {
    v39 = *(_QWORD *)v38;
    v40 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v41 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v40;
        v41 += 4;
        if ( !v40 )
          goto LABEL_17;
      }
      v42 = v39 + 16LL * *v41 + 312;
    }
    else
    {
LABEL_17:
      v42 = sub_1BB60A8(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v45 = sub_1B64314(ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v43, v44);
    ClassBoardEffectController___c__DisplayClass15_1___ctor(
      (ClassBoardEffectController___c__DisplayClass15_1_o *)v45,
      0LL);
    v46 = *(_QWORD *)v38;
    v47 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v48 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_24;
      }
      v49 = v46 + 16LL * *v48 + 312;
    }
    else
    {
LABEL_24:
      v49 = sub_1BB60A8(v38, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0LL);
    }
    v50 = (*(__int64 (__fastcall **)(__int64, _QWORD))v49)(v38, *(_QWORD *)(v49 + 8));
    if ( !v45 )
      sub_1B64324(v50);
    *(_QWORD *)(v45 + 16) = v50;
    v53 = v45 + 16;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v45 + 16), v50, v51, v52);
    v56 = sub_1B64314(ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v54, v55);
    ClassBoardEffectController___c__DisplayClass15_2___ctor(
      (ClassBoardEffectController___c__DisplayClass15_2_o *)v56,
      0LL);
    v57 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v60 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v58, v59);
    System_Func_object__bool____ctor(
      v60,
      (Il2CppObject *)v45,
      Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      0LL);
    v61 = BasicHelper__Any_object_(
            v57,
            (System_Func_T__bool__o *)v60,
            (const MethodInfo_2E24870 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v61 )
    {
      if ( !v56 )
        sub_1B64324(v61);
      *(_QWORD *)(v56 + 16) = 0LL;
      v64 = (__int64 *)(v56 + 16);
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 16), 0, v62, v63);
      if ( !*(_QWORD *)v53 )
        sub_1B64324(v65);
      v66 = *(__int64 **)(*(_QWORD *)v53 + 168LL);
      if ( !v66 )
        sub_1B64324(v65);
      v67 = *v66;
      v68 = *(unsigned __int16 *)(*v66 + 302);
      if ( *(_WORD *)(*v66 + 302) )
      {
        v69 = (IClassBoardLineModel_c **)(*(_QWORD *)(v67 + 176) + 8LL);
        while ( *(v69 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v68;
          v69 += 2;
          if ( !v68 )
            goto LABEL_35;
        }
        v70 = v67 + 16LL * (*(_DWORD *)v69 + 1) + 312;
      }
      else
      {
LABEL_35:
        v70 = sub_1BB60A8(v66, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v71 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v70)(v66, *(_QWORD *)(v70 + 8));
      v72 = v71;
      if ( !v71 )
        sub_1B64324(0LL);
      v73 = *(_QWORD *)v71;
      v74 = *(unsigned __int16 *)(*(_QWORD *)v71 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v71 + 302LL) )
      {
        v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v75 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v74;
          v75 += 4;
          if ( !v74 )
            goto LABEL_42;
        }
        v76 = v73 + 16LL * *v75 + 312;
      }
      else
      {
LABEL_42:
        v76 = sub_1BB60A8(v71, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v77 = (*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v72, *(_QWORD *)(v76 + 8));
      if ( !*(_QWORD *)v28 )
        sub_1B64324(v77);
      v78 = *(__int64 **)(*(_QWORD *)v28 + 176LL);
      if ( !v78 )
        sub_1B64324(v77);
      v79 = *v78;
      v80 = v77;
      v81 = *(unsigned __int16 *)(*v78 + 302);
      if ( *(_WORD *)(*v78 + 302) )
      {
        v82 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v82 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v81;
          v82 += 4;
          if ( !v81 )
            goto LABEL_50;
        }
        v83 = v79 + 16LL * *v82 + 312;
      }
      else
      {
LABEL_50:
        v83 = sub_1BB60A8(v78, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v84 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v83)(v78, *(_QWORD *)(v83 + 8));
      v85 = *(_QWORD *)v53;
      if ( v80 == (_DWORD)v84 )
      {
        if ( !v85 )
          sub_1B64324(v84);
        v86 = *(__int64 **)(v85 + 168);
        if ( !v86 )
          sub_1B64324(v84);
        v87 = *v86;
        v88 = *(unsigned __int16 *)(*v86 + 302);
        if ( *(_WORD *)(*v86 + 302) )
        {
          v89 = (int *)(*(_QWORD *)(v87 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v89 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v88;
            v89 += 4;
            if ( !v88 )
              goto LABEL_59;
          }
          v90 = v87 + 16LL * *v89 + 312;
        }
        else
        {
LABEL_59:
          v90 = sub_1BB60A8(v86, IClassBoardLineModel_TypeInfo, 0LL);
        }
LABEL_93:
        v113 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v90)(v86, *(_QWORD *)(v90 + 8));
        *v64 = v113;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v56 + 16), v113, v114, v115);
        goto LABEL_94;
      }
      if ( !v85 )
        sub_1B64324(v84);
      v91 = *(__int64 **)(v85 + 168);
      if ( !v91 )
        sub_1B64324(v84);
      v92 = *v91;
      v93 = *(unsigned __int16 *)(*v91 + 302);
      if ( *(_WORD *)(*v91 + 302) )
      {
        v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v94 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v93;
          v94 += 4;
          if ( !v93 )
            goto LABEL_66;
        }
        v95 = v92 + 16LL * *v94 + 312;
      }
      else
      {
LABEL_66:
        v95 = sub_1BB60A8(v91, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v96 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v95)(v91, *(_QWORD *)(v95 + 8));
      v97 = v96;
      if ( !v96 )
        sub_1B64324(0LL);
      v98 = *(_QWORD *)v96;
      v99 = *(unsigned __int16 *)(*(_QWORD *)v96 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v96 + 302LL) )
      {
        v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v100 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v99;
          v100 += 4;
          if ( !v99 )
            goto LABEL_74;
        }
        v101 = v98 + 16LL * *v100 + 312;
      }
      else
      {
LABEL_74:
        v101 = sub_1BB60A8(v96, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v102 = (*(__int64 (__fastcall **)(__int64, _QWORD))v101)(v97, *(_QWORD *)(v101 + 8));
      if ( !*(_QWORD *)v28 )
        sub_1B64324(v102);
      v103 = *(__int64 **)(*(_QWORD *)v28 + 176LL);
      if ( !v103 )
        sub_1B64324(v102);
      v104 = *v103;
      v105 = v102;
      v106 = *(unsigned __int16 *)(*v103 + 302);
      if ( *(_WORD *)(*v103 + 302) )
      {
        v107 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v107 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v106;
          v107 += 4;
          if ( !v106 )
            goto LABEL_82;
        }
        v108 = v104 + 16LL * *v107 + 312;
      }
      else
      {
LABEL_82:
        v108 = sub_1BB60A8(v103, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v109 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v108)(v103, *(_QWORD *)(v108 + 8));
      if ( v105 == (_DWORD)v109 )
      {
        if ( !*(_QWORD *)v53 )
          sub_1B64324(v109);
        v86 = *(__int64 **)(*(_QWORD *)v53 + 168LL);
        if ( !v86 )
          sub_1B64324(v109);
        v110 = *v86;
        v111 = *(unsigned __int16 *)(*v86 + 302);
        if ( *(_WORD *)(*v86 + 302) )
        {
          v112 = (IClassBoardLineModel_c **)(*(_QWORD *)(v110 + 176) + 8LL);
          while ( *(v112 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v111;
            v112 += 2;
            if ( !v111 )
              goto LABEL_91;
          }
          v90 = v110 + 16LL * (*(_DWORD *)v112 + 1) + 312;
        }
        else
        {
LABEL_91:
          v90 = sub_1BB60A8(v86, IClassBoardLineModel_TypeInfo, 1LL);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v64 )
      {
        if ( !*(_QWORD *)v53 )
          sub_1B64324(v109);
        v116 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v53 + 152LL);
        if ( !v116 )
          sub_1B64324(0LL);
        ClassBoardEffectPlayer__SetData_bool_(
          v116,
          isLock,
          (const MethodInfo_2E2D2F0 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v53 )
          sub_1B64324(v117);
        v120 = (System_Collections_Generic_List_object__o *)this->fields.players;
        if ( !v120 )
          sub_1B64324(0LL);
        v121 = *(Il2CppObject **)(*(_QWORD *)v53 + 152LL);
        items = v120->fields._items;
        v123 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
        ++v120->fields._version;
        if ( !items )
          sub_1B64324(v120);
        size = v120->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v120,
            v121,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v123[4] + 192LL) + 112LL));
        }
        else
        {
          v125 = &items->obj.klass + size;
          v120->fields._size = size + 1;
          v125[4] = (Il2CppClass *)v121;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v125 + 4), (int32_t)v121, v118, v119);
        }
        v127 = *v64;
        if ( !*v64 )
          sub_1B64324(v126);
        v128 = *(_QWORD *)v127;
        v129 = *(unsigned __int16 *)(*(_QWORD *)v127 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v127 + 302LL) )
        {
          v130 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v128 + 176) + 8LL);
          while ( *(v130 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v129;
            v130 += 2;
            if ( !v129 )
              goto LABEL_108;
          }
          v131 = v128 + 16LL * (*(_DWORD *)v130 + 5) + 312;
        }
        else
        {
LABEL_108:
          v131 = sub_1BB60A8(*v64, IClassBoardSquareModel_TypeInfo, 5LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v131)(v127, *(_QWORD *)(v131 + 8)) & 1) != 0 )
        {
          squareViewList = this->fields.squareViewList;
          v135 = (System_Func_object__bool__o *)sub_1B64314(System_Func_ClassBoardSquare__bool__TypeInfo, v132, v133);
          System_Func_object__bool____ctor(
            v135,
            (Il2CppObject *)v56,
            Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
            0LL);
          v136 = (ClassBoardSquare_o *)System_Linq_Enumerable__FirstOrDefault_object__48617700(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)squareViewList,
                                         (System_Func_TSource__bool__o *)v135,
                                         (const MethodInfo_2E5D8E4 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v136, 0LL, 0LL) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, v136, isLock, v137);
            if ( !v136 )
              sub_1B64324(v138);
            enableEffectPlayer = v136->fields.enableEffectPlayer;
            if ( !enableEffectPlayer )
              sub_1B64324(0LL);
            ClassBoardEffectPlayer__SetData_bool_(
              enableEffectPlayer,
              isLock,
              (const MethodInfo_2E2D2F0 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v142 = (System_Collections_Generic_List_object__o *)this->fields.players;
            if ( !v142 )
              sub_1B64324(0LL);
            v143 = (Il2CppObject *)v136->fields.enableEffectPlayer;
            v144 = v142->fields._items;
            v145 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
            ++v142->fields._version;
            if ( !v144 )
              sub_1B64324(v142);
            v146 = v142->fields._size;
            if ( (unsigned int)v146 >= v144->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v142,
                v143,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
            }
            else
            {
              v147 = &v144->obj.klass + v146;
              v142->fields._size = v146 + 1;
              v147[4] = (Il2CppClass *)v143;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v147 + 4), (int32_t)v143, v140, v141);
            }
          }
        }
      }
    }
  }
  v148 = *(_QWORD *)v38;
  v149 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
  {
    v150 = (int *)(*(_QWORD *)(v148 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v150 - 1) != System_IDisposable_TypeInfo )
    {
      --v149;
      v150 += 4;
      if ( !v149 )
        goto LABEL_125;
    }
    v151 = v148 + 16LL * *v150 + 312;
  }
  else
  {
LABEL_125:
    v151 = sub_1BB60A8(v38, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v151)(v38, *(_QWORD *)(v151 + 8));
}


void __fastcall ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ClassBoardEffectController___c_c *v8; // x0
  System_Collections_Generic_List_object__o *players; // x20
  System_Action_object__o *_9__12_0; // x21
  Il2CppObject *v11; // x22
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w3
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v16; // x8
  int32_t size; // w2
  int v18; // w9
  struct System_Action_o **p_playEndCallback; // x19

  if ( (byte_49FF6AB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_ClassBoardEffectPlayer__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__, v5);
    sub_1B640C8(&Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, v6);
    sub_1B640C8(&ClassBoardEffectController___c_TypeInfo, v7);
    byte_49FF6AB = 1;
  }
  v8 = ClassBoardEffectController___c_TypeInfo;
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !ClassBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectController___c_TypeInfo);
    v8 = ClassBoardEffectController___c_TypeInfo;
  }
  _9__12_0 = (System_Action_object__o *)v8->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = ClassBoardEffectController___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__12_0 = (System_Action_object__o *)sub_1B64314(System_Action_ClassBoardEffectPlayer__TypeInfo, method, v2);
    System_Action_object____ctor(_9__12_0, v11, Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, 0LL);
    static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__12_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v13, v14);
  }
  if ( !players
    || (System_Collections_Generic_List_object___ForEach(
          players,
          (System_Action_T__o *)_9__12_0,
          (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v16 = this->fields.players) == 0LL) )
  {
    sub_1B64324(v8);
  }
  size = v16->fields._size;
  v18 = v16->fields._version + 1;
  v16->fields._size = 0;
  v16->fields._version = v18;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v16->fields._items, 0, size, 0LL);
  this->fields.playEndCallback = 0LL;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_playEndCallback, 0, size, v15);
}


void __fastcall ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FF788 & 1) == 0 )
  {
    sub_1B640C8(&ClassBoardEffectController___c_TypeInfo, v1);
    byte_49FF788 = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(ClassBoardEffectController___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  ClassBoardEffectController___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectController___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)ClassBoardEffectController___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall ClassBoardEffectController___c___ctor(ClassBoardEffectController___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardEffectController___c___ResetPlayers_b__12_0(
        ClassBoardEffectController___c_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  ClassBoardEffectPlayer__End(x, (const MethodInfo *)x);
}


void __fastcall ClassBoardEffectController___c__DisplayClass15_0___ctor(
        ClassBoardEffectController___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass15_0___RegisterConnectingLineBlankPlayer_b__0(
        ClassBoardEffectController___c__DisplayClass15_0_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass15_0_o *)this->fields.releaseSquare) == 0LL )
    sub_1B64324(this);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return System_String__op_Equality(Name_k__BackingField, name, 0LL);
}


void __fastcall ClassBoardEffectController___c__DisplayClass15_1___ctor(
        ClassBoardEffectController___c__DisplayClass15_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass15_1___RegisterConnectingLineBlankPlayer_b__1(
        ClassBoardEffectController___c__DisplayClass15_1_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass15_1_o *)this->fields.classBoardLine) == 0LL )
    sub_1B64324(this);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return System_String__op_Equality(Name_k__BackingField, name, 0LL);
}


void __fastcall ClassBoardEffectController___c__DisplayClass15_2___ctor(
        ClassBoardEffectController___c__DisplayClass15_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass15_2___RegisterConnectingLineBlankPlayer_b__2(
        ClassBoardEffectController___c__DisplayClass15_2_o *this,
        ClassBoardSquare_o *x,
        const MethodInfo *method)
{
  ClassBoardEffectController___c__DisplayClass15_2_o *v4; // x19
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *klass; // x8
  __int64 v7; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct IClassBoardSquareModel_o *connectSquareModel; // x20
  IClassBoardSquareModel_c *v11; // x8
  int v12; // w19
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0

  v4 = this;
  if ( (byte_49FF789 & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass15_2_o *)sub_1B640C8(&IClassBoardSquareModel_TypeInfo, x);
    byte_49FF789 = 1;
  }
  if ( !x )
    goto LABEL_19;
  SquareModel_k__BackingField = x->fields._SquareModel_k__BackingField;
  if ( !SquareModel_k__BackingField )
    goto LABEL_19;
  klass = SquareModel_k__BackingField->klass;
  v7 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v7;
      p_offset += 4;
      if ( !v7 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1BB60A8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass15_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(p_method + 8));
  connectSquareModel = v4->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_1B64324(this);
  v11 = connectSquareModel->klass;
  v12 = (int)this;
  v13 = *(unsigned __int16 *)(&connectSquareModel->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&connectSquareModel->klass->_2.bitflags2 + 3) )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_16;
    }
    v15 = (__int64)&v11->vtable[*v14].method;
  }
  else
  {
LABEL_16:
    v15 = sub_1BB60A8(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  connectSquareModel,
                  *(_QWORD *)(v15 + 8));
}


void __fastcall ClassBoardEffectController___c__DisplayClass16_0___ctor(
        ClassBoardEffectController___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass16_0___RegisterConnectedSquareEnablePlayer_b__0(
        ClassBoardEffectController___c__DisplayClass16_0_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass16_0_o *)this->fields.releaseSquare) == 0LL )
    sub_1B64324(this);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return System_String__op_Equality(Name_k__BackingField, name, 0LL);
}


void __fastcall ClassBoardEffectController___c__DisplayClass16_1___ctor(
        ClassBoardEffectController___c__DisplayClass16_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass16_1___RegisterConnectedSquareEnablePlayer_b__1(
        ClassBoardEffectController___c__DisplayClass16_1_o *this,
        ClassBoardEffectPlayer_o *x,
        const MethodInfo *method)
{
  System_String_o *Name_k__BackingField; // x19
  System_String_o *name; // x1

  if ( !x || (this = (ClassBoardEffectController___c__DisplayClass16_1_o *)this->fields.square) == 0LL )
    sub_1B64324(this);
  Name_k__BackingField = x->fields._Name_k__BackingField;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  return System_String__op_Equality(Name_k__BackingField, name, 0LL);
}


bool __fastcall ClassBoardEffectController___c__DisplayClass16_1___RegisterConnectedSquareEnablePlayer_b__2(
        ClassBoardEffectController___c__DisplayClass16_1_o *this,
        IClassBoardSquareModel_o *model,
        const MethodInfo *method)
{
  ClassBoardEffectController___c__DisplayClass16_1_o *v4; // x19
  IClassBoardSquareModel_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  struct ClassBoardSquare_o *square; // x8
  struct IClassBoardSquareModel_o *SquareModel_k__BackingField; // x20
  IClassBoardSquareModel_c *v11; // x8
  int v12; // w19
  __int64 v13; // x9
  int *v14; // x10
  __int64 v15; // x0

  v4 = this;
  if ( (byte_49FF78A & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_1_o *)sub_1B640C8(&IClassBoardSquareModel_TypeInfo, model);
    byte_49FF78A = 1;
  }
  if ( !model )
    goto LABEL_19;
  klass = model->klass;
  v6 = *(unsigned __int16 *)(&model->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&model->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)p_offset - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v6;
      p_offset += 4;
      if ( !v6 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1BB60A8(model, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 model,
                                                                 *(_QWORD *)(p_method + 8));
  square = v4->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0LL )
LABEL_19:
    sub_1B64324(this);
  v11 = SquareModel_k__BackingField->klass;
  v12 = (int)this;
  v13 = *(unsigned __int16 *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&SquareModel_k__BackingField->klass->_2.bitflags2 + 3) )
  {
    v14 = &v11->_1.interfaceOffsets->offset;
    while ( *((IClassBoardSquareModel_c **)v14 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v13;
      v14 += 4;
      if ( !v13 )
        goto LABEL_16;
    }
    v15 = (__int64)&v11->vtable[*v14].method;
  }
  else
  {
LABEL_16:
    v15 = sub_1BB60A8(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v15 + 8));
}