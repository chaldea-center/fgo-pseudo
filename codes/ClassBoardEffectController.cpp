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
  __int64 v26; // x1
  Il2CppClass *klass; // x20
  _QWORD *image; // x8
  __int64 v29; // x9
  IClassBoardSquareModel_c **v30; // x10
  __int64 v31; // x0

  if ( (byte_4A01DC6 & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Linq_Enumerable_First_ClassBoardSquare___, squares);
    sub_1B64A00(&IClassBoardSquareModel_TypeInfo, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__, v12);
    sub_1B64A00(&System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo, v13);
    byte_4A01DC6 = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_ClassBoardEffectPlayer__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer___ctor__);
  this->fields.players = (struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *)v14;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.players, (int32_t)v14, v15, v16);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareViewList = squares;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)squares, v17, v18);
  this->fields.lineViewList = lines;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.lineViewList, (int32_t)lines, v19, v20);
  this->fields.mapCamera = camera;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.mapCamera, (int32_t)camera, v21, v22);
  this->fields.bgModel = bg;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.bgModel, (int32_t)bg, v23, v24);
  object = System_Linq_Enumerable__First_object_(
             (System_Collections_Generic_IEnumerable_TSource__o *)squares,
             (const MethodInfo_2E5D35C *)Method_System_Linq_Enumerable_First_ClassBoardSquare___);
  if ( !object || (klass = object[11].klass) == 0LL )
    sub_1B64C5C(object, v26);
  image = klass->_1.image;
  v29 = *((unsigned __int16 *)klass->_1.image + 151);
  if ( *((_WORD *)klass->_1.image + 151) )
  {
    v30 = (IClassBoardSquareModel_c **)(image[22] + 8LL);
    while ( *(v30 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v29;
      v30 += 2;
      if ( !v29 )
        goto LABEL_9;
    }
    v31 = (__int64)&image[2 * *(_DWORD *)v30 + 41];
  }
  else
  {
LABEL_9:
    v31 = sub_1BB69E0(object[11].klass, IClassBoardSquareModel_TypeInfo, 1LL);
  }
  this->fields.baseId = (*(__int64 (__fastcall **)(Il2CppClass *, _QWORD))v31)(klass, *(_QWORD *)(v31 + 8));
}


void __fastcall ClassBoardEffectController__CheckPlayEnd(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  ClassBoardEffectController_o *v2; // x19
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *players; // x9
  int v4; // w8
  struct System_Action_o *playEndCallback; // x8

  v2 = this;
  if ( (byte_4A01DCB & 1) == 0 )
  {
    this = (ClassBoardEffectController_o *)sub_1B64A00(
                                             &Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__,
                                             method);
    byte_4A01DCB = 1;
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
    sub_1B64C5C(this, method);
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
  __int64 v20; // x1
  UnityEngine_Transform_o *v21; // x23
  float v22; // s0
  float v23; // s1
  float v24; // s2
  float v25; // s10
  float v26; // s9
  float v27; // s8
  float v28; // s12
  float v29; // s13
  float v30; // s14
  float v31; // s15
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
  if ( (byte_4A01DCF & 1) == 0 )
  {
    sub_1B64A00(&MapCameraViewAdjusterUtil_TypeInfo, *(_QWORD *)&maxDistance);
    sub_1B64A00(&Method_System_Nullable_Vector3___ctor__, v17);
    byte_4A01DCF = 1;
  }
  *(_QWORD *)&v44.fields.value.fields.y = Method_System_Nullable_Vector3___ctor__;
  mapCamera = this->fields.mapCamera;
  *(_QWORD *)&v44.fields.hasValue = &screenPos_4;
  v45.fields.x = x;
  v45.fields.y = y;
  v45.fields.z = z;
  *(_QWORD *)&screenPos_4.fields.hasValue = 0LL;
  *(_QWORD *)&screenPos_4.fields.value.fields.y = 0LL;
  System_Nullable_Vector3____ctor(v44, v45, *(const MethodInfo_35D4904 **)&ease);
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
  v21 = SafeCameraDestination;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this->fields.mapCamera, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  if ( !v21 )
    goto LABEL_20;
  SafeCameraDestination = (UnityEngine_Transform_o *)this->fields.mapCamera;
  v39 = secMax;
  v40 = secMin;
  if ( !SafeCameraDestination )
    goto LABEL_20;
  screenPos = x;
  v25 = y;
  v26 = z;
  v28 = *(float *)&v21->fields.m_CachedPtr;
  v27 = *((float *)&v21->fields + 1);
  v29 = v22;
  v30 = v23;
  v31 = v24;
  SafeCameraDestination = UnityEngine_Component__get_transform((UnityEngine_Component_o *)SafeCameraDestination, 0LL);
  if ( !SafeCameraDestination )
    goto LABEL_20;
  localPosition = UnityEngine_Transform__get_localPosition(SafeCameraDestination, 0LL);
  v32 = localPosition.fields.z;
  if ( !byte_49F981F )
  {
    sub_1B64A00(&System_Math_TypeInfo, v20);
    byte_49F981F = 1;
  }
  v33 = v29 - v28;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v34 = sqrtf(
          (float)((float)(v33 * v33) + (float)((float)(v30 - v27) * (float)(v30 - v27)))
        + (float)((float)(v31 - v32) * (float)(v31 - v32)))
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
    sub_1B64C5C(SafeCameraDestination, v20);
  v37 = v25;
  v38 = v26;
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
  Il2CppObject *v14; // x1
  struct ClassBoardBackground_o *bgModel; // x8
  struct ClassBoardBackground_o *v16; // x8
  struct ClassBoardEffectPlayer_o *v17; // x21
  System_Action_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3
  struct ClassBoardBackground_o *v23; // x8
  struct System_String_o *Name_k__BackingField; // x8
  _QWORD *v25; // x9
  __int64 playCallback_low; // x10
  __int64 v27; // x8

  if ( (byte_4A01DC8 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, callback);
    sub_1B64A00(&Method_ClassBoardEffectController_PlayNext__, v5);
    sub_1B64A00(&Method_ClassBoardEffectPlayer_SetData_int___, v6);
    sub_1B64A00(&Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, v9);
    byte_4A01DC8 = 1;
  }
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)callback);
  this->fields.playEndCallback = callback;
  p_playEndCallback = &this->fields.playEndCallback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.playEndCallback, (int32_t)callback, v11, v12);
  bgModel = this->fields.bgModel;
  if ( !bgModel )
    goto LABEL_19;
  startMainEffectPlayer = bgModel->fields.startMainEffectPlayer;
  if ( !startMainEffectPlayer )
    goto LABEL_19;
  ClassBoardEffectPlayer__SetData_int_(
    startMainEffectPlayer,
    this->fields.baseId,
    (const MethodInfo_2E2FC44 *)Method_ClassBoardEffectPlayer_SetData_int___);
  v16 = this->fields.bgModel;
  if ( !v16 )
    goto LABEL_19;
  v17 = v16->fields.startMainEffectPlayer;
  v18 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)this, Method_ClassBoardEffectController_PlayNext__, 0LL);
  if ( !v17 )
    goto LABEL_19;
  v17->fields.endCallback = v18;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&v17->fields.endCallback, (int32_t)v18, v19, v20);
  v23 = this->fields.bgModel;
  if ( !v23 )
    goto LABEL_19;
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_19;
  v14 = (Il2CppObject *)v23->fields.startMainEffectPlayer;
  Name_k__BackingField = startMainEffectPlayer->fields._Name_k__BackingField;
  v25 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
  ++HIDWORD(startMainEffectPlayer->fields.playCallback);
  if ( !Name_k__BackingField )
    goto LABEL_19;
  playCallback_low = SLODWORD(startMainEffectPlayer->fields.playCallback);
  if ( (unsigned int)playCallback_low >= LODWORD(Name_k__BackingField[1].klass) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)startMainEffectPlayer,
      v14,
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = (__int64)Name_k__BackingField + 8 * playCallback_low;
    LODWORD(startMainEffectPlayer->fields.playCallback) = playCallback_low + 1;
    *(_QWORD *)(v27 + 32) = v14;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v27 + 32), (int32_t)v14, v21, v22);
  }
  startMainEffectPlayer = (ClassBoardEffectPlayer_o *)this->fields.players;
  if ( !startMainEffectPlayer )
    goto LABEL_19;
  if ( SLODWORD(startMainEffectPlayer->fields.playCallback) >= 1 )
  {
    startMainEffectPlayer = (ClassBoardEffectPlayer_o *)System_Linq_Enumerable__First_object_(
                                                          (System_Collections_Generic_IEnumerable_TSource__o *)startMainEffectPlayer,
                                                          (const MethodInfo_2E5D35C *)Method_System_Linq_Enumerable_First_ClassBoardEffectPlayer___);
    if ( startMainEffectPlayer )
    {
      ClassBoardEffectPlayer__Play(startMainEffectPlayer, 0LL);
      return;
    }
LABEL_19:
    sub_1B64C5C(startMainEffectPlayer, v14);
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
  __int64 v5; // x1
  struct System_Action_o *playEndCallback; // x8

  if ( (byte_4A01DCC & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Count__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__, v3);
    byte_4A01DCC = 1;
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  v5 = (unsigned int)(this->fields.playEndCount + 1);
  this->fields.playEndCount = v5;
  if ( !players )
    goto LABEL_9;
  if ( (int)v5 < players->fields._size )
  {
    players = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                             players,
                                                             v5,
                                                             (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__get_Item__);
    if ( players )
    {
      ClassBoardEffectPlayer__Play((ClassBoardEffectPlayer_o *)players, 0LL);
      return;
    }
LABEL_9:
    sub_1B64C5C(players, v5);
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
  Il2CppObject *releaseEffectPlayer; // x1
  bool v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x8
  Il2CppObject *current; // x20
  System_Action_o *v28; // x21
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A01DC7 & 1) == 0 )
  {
    sub_1B64A00(&System_Action_TypeInfo, releaseSquare);
    sub_1B64A00(&Method_ClassBoardEffectController_CheckPlayEnd__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__get_Current__, v10);
    sub_1B64A00(&IClassBoardLockModel_TypeInfo, v11);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v12);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__, v13);
    byte_4A01DC7 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  ClassBoardEffectController__ResetPlayers(this, (const MethodInfo *)releaseSquare);
  this->fields.playEndCallback = callback;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.playEndCallback, (int32_t)callback, v14, v15);
  if ( !releaseSquare )
    goto LABEL_16;
  v18 = sub_1B64B3C(releaseSquare->fields._SquareModel_k__BackingField, IClassBoardLockModel_TypeInfo) != 0;
  ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, releaseSquare, v18, v19);
  ClassBoardEffectController__RegisterConnectedSquareEnablePlayer(this, releaseSquare, v20);
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
      *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &items->obj.klass + size;
    players->fields._size = size + 1;
    v26[4] = (Il2CppClass *)releaseEffectPlayer;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)releaseEffectPlayer, v21, v22);
  }
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !players )
LABEL_16:
    sub_1B64C5C(players, releaseEffectPlayer);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    players,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__MoveNext__) )
  {
    current = v33.fields._current;
    v28 = (System_Action_o *)sub_1B64C4C(System_Action_TypeInfo);
    System_Action___ctor(v28, (Il2CppObject *)this, Method_ClassBoardEffectController_CheckPlayEnd__, 0LL);
    if ( !current )
      sub_1B64C5C(v29, v30);
    current[2].klass = (Il2CppClass *)v28;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&current[2], (int32_t)v28, v31, v32);
    ClassBoardEffectPlayer__Play((ClassBoardEffectPlayer_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardEffectPlayer__Dispose__);
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
  if ( (byte_4A01DC9 & 1) == 0 )
  {
    sub_1B64A00(&BalanceConfig_TypeInfo, callback);
    byte_4A01DC9 = 1;
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
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x21
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_object__bool__o *v31; // x23
  System_Collections_Generic_List_object__o *v32; // x19
  __int64 *v33; // x19
  __int64 v34; // x8
  __int64 v35; // x9
  IClassBoardSquareModel_c **v36; // x10
  __int64 v37; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__c *klass; // x8
  __int64 v40; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v43; // x1
  __int64 v44; // x19
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0
  __int64 v49; // x23
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  __int64 v57; // x22
  System_Collections_Generic_List_T__o *v58; // x24
  System_Func_object__bool__o *v59; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v60; // x24
  System_Func_object__bool__o *v61; // x25
  Il2CppObject *v62; // x0
  Il2CppObject *v63; // x23
  Il2CppClass *v64; // x8
  __int64 v65; // x9
  IClassBoardSquareModel_c **v66; // x10
  __int64 v67; // x0
  __int64 v68; // x0
  __int64 v69; // x1
  ClassBoardEffectPlayer_o *v70; // x23
  bool v71; // w1
  __int64 v72; // x0
  __int64 v73; // x1
  int32_t v74; // w2
  int32_t v75; // w3
  System_Collections_Generic_List_object__o *v76; // x0
  Il2CppObject *v77; // x1
  struct System_Object_array *items; // x8
  _QWORD *v79; // x9
  __int64 size; // x10
  Il2CppClass **v81; // x8
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  System_Collections_Generic_List_object__o *v86; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A01DCE & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, releaseSquare);
    sub_1B64A00(&Method_ClassBoardEffectPlayer_SetData_bool___, v5);
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___, v6);
    sub_1B64A00(&System_Func_IClassBoardSquareModel__bool__TypeInfo, v7);
    sub_1B64A00(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v8);
    sub_1B64A00(&IClassBoardLockModel_TypeInfo, v9);
    sub_1B64A00(&IClassBoardSquareModel_TypeInfo, v10);
    sub_1B64A00(&System_IDisposable_TypeInfo, v11);
    sub_1B64A00(&System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo, v12);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, v13);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__, v16);
    sub_1B64A00(&Method_System_Collections_Generic_List_IClassBoardSquareModel__get_Count__, v17);
    sub_1B64A00(&System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo, v18);
    sub_1B64A00(
      &Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
      v19);
    sub_1B64A00(&ClassBoardEffectController___c__DisplayClass16_0_TypeInfo, v20);
    sub_1B64A00(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
      v21);
    sub_1B64A00(
      &Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
      v22);
    sub_1B64A00(&ClassBoardEffectController___c__DisplayClass16_1_TypeInfo, v23);
    byte_4A01DCE = 1;
  }
  v24 = sub_1B64C4C(ClassBoardEffectController___c__DisplayClass16_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass16_0___ctor(
    (ClassBoardEffectController___c__DisplayClass16_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_64;
  *(_QWORD *)(v24 + 16) = releaseSquare;
  v29 = v24 + 16;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)releaseSquare, v27, v28);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v31 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v24,
    Method_ClassBoardEffectController___c__DisplayClass16_0__RegisterConnectedSquareEnablePlayer_b__0__,
    0LL);
  if ( BasicHelper__Any_object_(
         players,
         (System_Func_T__bool__o *)v31,
         (const MethodInfo_2E27164 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
  {
    return;
  }
  v32 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_IClassBoardSquareModel__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_IClassBoardSquareModel___ctor__);
  v86 = v32;
  if ( !*(_QWORD *)v29 )
    goto LABEL_64;
  v33 = *(__int64 **)(*(_QWORD *)v29 + 176LL);
  if ( !v33 )
    goto LABEL_64;
  v34 = *v33;
  v35 = *(unsigned __int16 *)(*v33 + 302);
  if ( *(_WORD *)(*v33 + 302) )
  {
    v36 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *(v36 - 1) != IClassBoardSquareModel_TypeInfo )
    {
      --v35;
      v36 += 2;
      if ( !v35 )
        goto LABEL_11;
    }
    v37 = v34 + 16LL * (*(_DWORD *)v36 + 15) + 312;
  }
  else
  {
LABEL_11:
    v37 = sub_1BB69E0(v33, IClassBoardSquareModel_TypeInfo, 15LL);
  }
  v25 = (*(__int64 (__fastcall **)(__int64 *, System_Collections_Generic_List_object__o **, _QWORD))v37)(
          v33,
          &v86,
          *(_QWORD *)(v37 + 8));
  if ( v86 && v86->fields._size >= 1 )
  {
    squareViewList = this->fields.squareViewList;
    if ( squareViewList )
    {
      klass = squareViewList->klass;
      v40 = *(unsigned __int16 *)(&squareViewList->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&squareViewList->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_ClassBoardSquare__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo )
        {
          --v40;
          p_offset += 4;
          if ( !v40 )
            goto LABEL_20;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_20:
        p_method = sub_1BB69E0(
                     this->fields.squareViewList,
                     System_Collections_Generic_IEnumerable_ClassBoardSquare__TypeInfo,
                     0LL);
      }
      v44 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *, _QWORD))p_method)(
              squareViewList,
              *(_QWORD *)(p_method + 8));
      if ( !v44 )
        sub_1B64C5C(0LL, v43);
      while ( 1 )
      {
        v45 = *(_QWORD *)v44;
        v46 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v47 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v46;
            v47 += 4;
            if ( !v46 )
              goto LABEL_27;
          }
          v48 = v45 + 16LL * *v47 + 312;
        }
        else
        {
LABEL_27:
          v48 = sub_1BB69E0(v44, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v48)(v44, *(_QWORD *)(v48 + 8)) & 1) == 0 )
          break;
        v49 = sub_1B64C4C(ClassBoardEffectController___c__DisplayClass16_1_TypeInfo);
        ClassBoardEffectController___c__DisplayClass16_1___ctor(
          (ClassBoardEffectController___c__DisplayClass16_1_o *)v49,
          0LL);
        v50 = *(_QWORD *)v44;
        v51 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
        {
          v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_ClassBoardSquare__c **)v52 - 1) != System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo )
          {
            --v51;
            v52 += 4;
            if ( !v51 )
              goto LABEL_34;
          }
          v53 = v50 + 16LL * *v52 + 312;
        }
        else
        {
LABEL_34:
          v53 = sub_1BB69E0(v44, System_Collections_Generic_IEnumerator_ClassBoardSquare__TypeInfo, 0LL);
        }
        v54 = (*(__int64 (__fastcall **)(__int64, _QWORD))v53)(v44, *(_QWORD *)(v53 + 8));
        if ( !v49 )
          sub_1B64C5C(v54, v54);
        *(_QWORD *)(v49 + 16) = v54;
        v57 = v49 + 16;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v49 + 16), v54, v55, v56);
        v58 = (System_Collections_Generic_List_T__o *)this->fields.players;
        v59 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v59,
          (Il2CppObject *)v49,
          Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__1__,
          0LL);
        if ( !BasicHelper__Any_object_(
                v58,
                (System_Func_T__bool__o *)v59,
                (const MethodInfo_2E27164 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___) )
        {
          v60 = (System_Collections_Generic_IEnumerable_TSource__o *)v86;
          v61 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_IClassBoardSquareModel__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v61,
            (Il2CppObject *)v49,
            Method_ClassBoardEffectController___c__DisplayClass16_1__RegisterConnectedSquareEnablePlayer_b__2__,
            0LL);
          v62 = System_Linq_Enumerable__FirstOrDefault_object__48628184(
                  v60,
                  (System_Func_TSource__bool__o *)v61,
                  (const MethodInfo_2E601D8 *)Method_System_Linq_Enumerable_FirstOrDefault_IClassBoardSquareModel___);
          v63 = v62;
          if ( v62 )
          {
            v64 = v62->klass;
            v65 = *(unsigned __int16 *)(&v62->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&v62->klass->_2.bitflags2 + 3) )
            {
              v66 = (IClassBoardSquareModel_c **)&v64->_1.interfaceOffsets->offset;
              while ( *(v66 - 1) != IClassBoardSquareModel_TypeInfo )
              {
                --v65;
                v66 += 2;
                if ( !v65 )
                  goto LABEL_43;
              }
              v67 = (__int64)&v64->vtable[*(_DWORD *)v66 + 13].method;
            }
            else
            {
LABEL_43:
              v67 = sub_1BB69E0(v62, IClassBoardSquareModel_TypeInfo, 13LL);
            }
            v68 = (*(__int64 (__fastcall **)(Il2CppObject *, _QWORD, _QWORD))v67)(v63, 0LL, *(_QWORD *)(v67 + 8));
            if ( (v68 & 1) == 0 )
            {
              if ( !*(_QWORD *)v57 )
                sub_1B64C5C(v68, v69);
              if ( !*(_QWORD *)v29 )
                sub_1B64C5C(v68, v69);
              v70 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v57 + 160LL);
              if ( !v70 )
                sub_1B64C5C(v68, v69);
              v71 = sub_1B64B3C(*(_QWORD *)(*(_QWORD *)v29 + 176LL), IClassBoardLockModel_TypeInfo) != 0;
              ClassBoardEffectPlayer__SetData_bool_(
                v70,
                v71,
                (const MethodInfo_2E2FBE4 *)Method_ClassBoardEffectPlayer_SetData_bool___);
              if ( !*(_QWORD *)v57 )
                sub_1B64C5C(v72, v73);
              v76 = (System_Collections_Generic_List_object__o *)this->fields.players;
              if ( !v76 )
                sub_1B64C5C(0LL, v73);
              v77 = *(Il2CppObject **)(*(_QWORD *)v57 + 160LL);
              items = v76->fields._items;
              v79 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
              ++v76->fields._version;
              if ( !items )
                sub_1B64C5C(v76, v77);
              size = v76->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v76,
                  v77,
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
              }
              else
              {
                v81 = &items->obj.klass + size;
                v76->fields._size = size + 1;
                v81[4] = (Il2CppClass *)v77;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v77, v74, v75);
              }
            }
          }
        }
      }
      v82 = *(_QWORD *)v44;
      v83 = *(unsigned __int16 *)(*(_QWORD *)v44 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v44 + 302LL) )
      {
        v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v84 - 1) != System_IDisposable_TypeInfo )
        {
          --v83;
          v84 += 4;
          if ( !v83 )
            goto LABEL_59;
        }
        v85 = v82 + 16LL * *v84 + 312;
      }
      else
      {
LABEL_59:
        v85 = sub_1BB69E0(v44, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v85)(v44, *(_QWORD *)(v85 + 8));
      return;
    }
LABEL_64:
    sub_1B64C5C(v25, v26);
  }
}


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
  __int64 v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  __int64 v29; // x22
  System_Collections_Generic_List_T__o *players; // x19
  System_Func_object__bool__o *v31; // x24
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *lineViewList; // x19
  System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__c *klass; // x8
  __int64 v34; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v37; // x1
  __int64 v38; // x19
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  __int64 v43; // x25
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x24
  __int64 v52; // x23
  System_Collections_Generic_List_T__o *v53; // x26
  System_Func_object__bool__o *v54; // x27
  _BOOL8 v55; // x0
  __int64 v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  __int64 *v59; // x25
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 *v62; // x26
  __int64 v63; // x8
  __int64 v64; // x9
  IClassBoardLineModel_c **v65; // x10
  __int64 v66; // x0
  __int64 v67; // x0
  __int64 v68; // x1
  __int64 v69; // x26
  __int64 v70; // x8
  __int64 v71; // x9
  int *v72; // x10
  __int64 v73; // x0
  __int64 v74; // x0
  __int64 v75; // x1
  __int64 *v76; // x27
  __int64 v77; // x8
  int v78; // w26
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  __int64 v82; // x0
  __int64 v83; // x1
  __int64 v84; // x8
  __int64 *v85; // x26
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  __int64 *v90; // x26
  __int64 v91; // x8
  __int64 v92; // x9
  int *v93; // x10
  __int64 v94; // x0
  __int64 v95; // x0
  __int64 v96; // x1
  __int64 v97; // x26
  __int64 v98; // x8
  __int64 v99; // x9
  int *v100; // x10
  __int64 v101; // x0
  __int64 v102; // x0
  __int64 v103; // x1
  __int64 *v104; // x27
  __int64 v105; // x8
  int v106; // w26
  __int64 v107; // x9
  int *v108; // x10
  __int64 v109; // x0
  __int64 v110; // x0
  __int64 v111; // x1
  __int64 v112; // x8
  __int64 v113; // x9
  IClassBoardLineModel_c **v114; // x10
  __int64 v115; // x0
  int32_t v116; // w2
  int32_t v117; // w3
  ClassBoardEffectPlayer_o *v118; // x0
  __int64 v119; // x0
  __int64 v120; // x1
  int32_t v121; // w2
  int32_t v122; // w3
  System_Collections_Generic_List_object__o *v123; // x0
  Il2CppObject *v124; // x1
  struct System_Object_array *items; // x8
  _QWORD *v126; // x9
  __int64 size; // x10
  Il2CppClass **v128; // x8
  __int64 v129; // x0
  __int64 v130; // x1
  __int64 v131; // x24
  __int64 v132; // x8
  __int64 v133; // x9
  IClassBoardSquareModel_c **v134; // x10
  __int64 v135; // x0
  struct System_Collections_Generic_IReadOnlyCollection_ClassBoardSquare__o *squareViewList; // x24
  System_Func_object__bool__o *v137; // x25
  ClassBoardSquare_o *v138; // x23
  const MethodInfo *v139; // x3
  __int64 v140; // x0
  __int64 v141; // x1
  ClassBoardEffectPlayer_o *enableEffectPlayer; // x0
  __int64 v143; // x1
  int32_t v144; // w2
  int32_t v145; // w3
  System_Collections_Generic_List_object__o *v146; // x0
  Il2CppObject *v147; // x1
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x8
  __int64 v152; // x8
  __int64 v153; // x9
  int *v154; // x10
  __int64 v155; // x0

  if ( (byte_4A01DCD & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_ClassBoardEffectPlayer___, releaseSquare);
    sub_1B64A00(&Method_ClassBoardEffectPlayer_SetData_bool___, v6);
    sub_1B64A00(&Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___, v7);
    sub_1B64A00(&System_Func_ClassBoardSquare__bool__TypeInfo, v8);
    sub_1B64A00(&System_Func_ClassBoardEffectPlayer__bool__TypeInfo, v9);
    sub_1B64A00(&IClassBoardLineModel_TypeInfo, v10);
    sub_1B64A00(&IClassBoardSquareModel_TypeInfo, v11);
    sub_1B64A00(&System_IDisposable_TypeInfo, v12);
    sub_1B64A00(&System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo, v13);
    sub_1B64A00(&System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, v14);
    sub_1B64A00(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__, v16);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v17);
    sub_1B64A00(&Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__, v18);
    sub_1B64A00(&ClassBoardEffectController___c__DisplayClass15_0_TypeInfo, v19);
    sub_1B64A00(&Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__, v20);
    sub_1B64A00(&ClassBoardEffectController___c__DisplayClass15_1_TypeInfo, v21);
    sub_1B64A00(&Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__, v22);
    sub_1B64A00(&ClassBoardEffectController___c__DisplayClass15_2_TypeInfo, v23);
    byte_4A01DCD = 1;
  }
  v24 = sub_1B64C4C(ClassBoardEffectController___c__DisplayClass15_0_TypeInfo);
  ClassBoardEffectController___c__DisplayClass15_0___ctor(
    (ClassBoardEffectController___c__DisplayClass15_0_o *)v24,
    0LL);
  if ( !v24 )
    goto LABEL_151;
  *(_QWORD *)(v24 + 16) = releaseSquare;
  v29 = v24 + 16;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v24 + 16), (int32_t)releaseSquare, v27, v28);
  players = (System_Collections_Generic_List_T__o *)this->fields.players;
  v31 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v31,
    (Il2CppObject *)v24,
    Method_ClassBoardEffectController___c__DisplayClass15_0__RegisterConnectingLineBlankPlayer_b__0__,
    0LL);
  v25 = BasicHelper__Any_object_(
          players,
          (System_Func_T__bool__o *)v31,
          (const MethodInfo_2E27164 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
  if ( v25 )
    return;
  lineViewList = this->fields.lineViewList;
  if ( !lineViewList )
LABEL_151:
    sub_1B64C5C(v25, v26);
  klass = lineViewList->klass;
  v34 = *(unsigned __int16 *)(&lineViewList->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&lineViewList->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_ClassBoardLine__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo )
    {
      --v34;
      p_offset += 4;
      if ( !v34 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1BB69E0(
                 this->fields.lineViewList,
                 System_Collections_Generic_IEnumerable_ClassBoardLine__TypeInfo,
                 0LL);
  }
  v38 = (*(__int64 (__fastcall **)(struct System_Collections_Generic_IReadOnlyCollection_ClassBoardLine__o *, _QWORD))p_method)(
          lineViewList,
          *(_QWORD *)(p_method + 8));
  if ( !v38 )
    sub_1B64C5C(0LL, v37);
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
      v42 = sub_1BB69E0(v38, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v42)(v38, *(_QWORD *)(v42 + 8)) & 1) == 0 )
      break;
    v43 = sub_1B64C4C(ClassBoardEffectController___c__DisplayClass15_1_TypeInfo);
    ClassBoardEffectController___c__DisplayClass15_1___ctor(
      (ClassBoardEffectController___c__DisplayClass15_1_o *)v43,
      0LL);
    v44 = *(_QWORD *)v38;
    v45 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
    {
      v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_ClassBoardLine__c **)v46 - 1) != System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo )
      {
        --v45;
        v46 += 4;
        if ( !v45 )
          goto LABEL_24;
      }
      v47 = v44 + 16LL * *v46 + 312;
    }
    else
    {
LABEL_24:
      v47 = sub_1BB69E0(v38, System_Collections_Generic_IEnumerator_ClassBoardLine__TypeInfo, 0LL);
    }
    v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v38, *(_QWORD *)(v47 + 8));
    if ( !v43 )
      sub_1B64C5C(v48, v48);
    *(_QWORD *)(v43 + 16) = v48;
    v51 = v43 + 16;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)(v43 + 16), v48, v49, v50);
    v52 = sub_1B64C4C(ClassBoardEffectController___c__DisplayClass15_2_TypeInfo);
    ClassBoardEffectController___c__DisplayClass15_2___ctor(
      (ClassBoardEffectController___c__DisplayClass15_2_o *)v52,
      0LL);
    v53 = (System_Collections_Generic_List_T__o *)this->fields.players;
    v54 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_ClassBoardEffectPlayer__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v54,
      (Il2CppObject *)v43,
      Method_ClassBoardEffectController___c__DisplayClass15_1__RegisterConnectingLineBlankPlayer_b__1__,
      0LL);
    v55 = BasicHelper__Any_object_(
            v53,
            (System_Func_T__bool__o *)v54,
            (const MethodInfo_2E27164 *)Method_BasicHelper_Any_ClassBoardEffectPlayer___);
    if ( !v55 )
    {
      if ( !v52 )
        sub_1B64C5C(v55, v56);
      *(_QWORD *)(v52 + 16) = 0LL;
      v59 = (__int64 *)(v52 + 16);
      sub_1B649A4((ServantStatusBattleListViewItem_o *)(v52 + 16), 0, v57, v58);
      if ( !*(_QWORD *)v51 )
        sub_1B64C5C(v60, v61);
      v62 = *(__int64 **)(*(_QWORD *)v51 + 168LL);
      if ( !v62 )
        sub_1B64C5C(v60, v61);
      v63 = *v62;
      v64 = *(unsigned __int16 *)(*v62 + 302);
      if ( *(_WORD *)(*v62 + 302) )
      {
        v65 = (IClassBoardLineModel_c **)(*(_QWORD *)(v63 + 176) + 8LL);
        while ( *(v65 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v64;
          v65 += 2;
          if ( !v64 )
            goto LABEL_35;
        }
        v66 = v63 + 16LL * (*(_DWORD *)v65 + 1) + 312;
      }
      else
      {
LABEL_35:
        v66 = sub_1BB69E0(v62, IClassBoardLineModel_TypeInfo, 1LL);
      }
      v67 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v66)(v62, *(_QWORD *)(v66 + 8));
      v69 = v67;
      if ( !v67 )
        sub_1B64C5C(0LL, v68);
      v70 = *(_QWORD *)v67;
      v71 = *(unsigned __int16 *)(*(_QWORD *)v67 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v67 + 302LL) )
      {
        v72 = (int *)(*(_QWORD *)(v70 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v72 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v71;
          v72 += 4;
          if ( !v71 )
            goto LABEL_42;
        }
        v73 = v70 + 16LL * *v72 + 312;
      }
      else
      {
LABEL_42:
        v73 = sub_1BB69E0(v67, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v74 = (*(__int64 (__fastcall **)(__int64, _QWORD))v73)(v69, *(_QWORD *)(v73 + 8));
      if ( !*(_QWORD *)v29 )
        sub_1B64C5C(v74, v75);
      v76 = *(__int64 **)(*(_QWORD *)v29 + 176LL);
      if ( !v76 )
        sub_1B64C5C(v74, v75);
      v77 = *v76;
      v78 = v74;
      v79 = *(unsigned __int16 *)(*v76 + 302);
      if ( *(_WORD *)(*v76 + 302) )
      {
        v80 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v80 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v79;
          v80 += 4;
          if ( !v79 )
            goto LABEL_50;
        }
        v81 = v77 + 16LL * *v80 + 312;
      }
      else
      {
LABEL_50:
        v81 = sub_1BB69E0(v76, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v82 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v81)(v76, *(_QWORD *)(v81 + 8));
      v84 = *(_QWORD *)v51;
      if ( v78 == (_DWORD)v82 )
      {
        if ( !v84 )
          sub_1B64C5C(v82, v83);
        v85 = *(__int64 **)(v84 + 168);
        if ( !v85 )
          sub_1B64C5C(v82, v83);
        v86 = *v85;
        v87 = *(unsigned __int16 *)(*v85 + 302);
        if ( *(_WORD *)(*v85 + 302) )
        {
          v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
          while ( *((IClassBoardLineModel_c **)v88 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v87;
            v88 += 4;
            if ( !v87 )
              goto LABEL_59;
          }
          v89 = v86 + 16LL * *v88 + 312;
        }
        else
        {
LABEL_59:
          v89 = sub_1BB69E0(v85, IClassBoardLineModel_TypeInfo, 0LL);
        }
LABEL_93:
        v115 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v89)(v85, *(_QWORD *)(v89 + 8));
        *v59 = v115;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v52 + 16), v115, v116, v117);
        goto LABEL_94;
      }
      if ( !v84 )
        sub_1B64C5C(v82, v83);
      v90 = *(__int64 **)(v84 + 168);
      if ( !v90 )
        sub_1B64C5C(v82, v83);
      v91 = *v90;
      v92 = *(unsigned __int16 *)(*v90 + 302);
      if ( *(_WORD *)(*v90 + 302) )
      {
        v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
        while ( *((IClassBoardLineModel_c **)v93 - 1) != IClassBoardLineModel_TypeInfo )
        {
          --v92;
          v93 += 4;
          if ( !v92 )
            goto LABEL_66;
        }
        v94 = v91 + 16LL * *v93 + 312;
      }
      else
      {
LABEL_66:
        v94 = sub_1BB69E0(v90, IClassBoardLineModel_TypeInfo, 0LL);
      }
      v95 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v94)(v90, *(_QWORD *)(v94 + 8));
      v97 = v95;
      if ( !v95 )
        sub_1B64C5C(0LL, v96);
      v98 = *(_QWORD *)v95;
      v99 = *(unsigned __int16 *)(*(_QWORD *)v95 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v95 + 302LL) )
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
        v101 = sub_1BB69E0(v95, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v102 = (*(__int64 (__fastcall **)(__int64, _QWORD))v101)(v97, *(_QWORD *)(v101 + 8));
      if ( !*(_QWORD *)v29 )
        sub_1B64C5C(v102, v103);
      v104 = *(__int64 **)(*(_QWORD *)v29 + 176LL);
      if ( !v104 )
        sub_1B64C5C(v102, v103);
      v105 = *v104;
      v106 = v102;
      v107 = *(unsigned __int16 *)(*v104 + 302);
      if ( *(_WORD *)(*v104 + 302) )
      {
        v108 = (int *)(*(_QWORD *)(v105 + 176) + 8LL);
        while ( *((IClassBoardSquareModel_c **)v108 - 1) != IClassBoardSquareModel_TypeInfo )
        {
          --v107;
          v108 += 4;
          if ( !v107 )
            goto LABEL_82;
        }
        v109 = v105 + 16LL * *v108 + 312;
      }
      else
      {
LABEL_82:
        v109 = sub_1BB69E0(v104, IClassBoardSquareModel_TypeInfo, 0LL);
      }
      v110 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))v109)(v104, *(_QWORD *)(v109 + 8));
      if ( v106 == (_DWORD)v110 )
      {
        if ( !*(_QWORD *)v51 )
          sub_1B64C5C(v110, v111);
        v85 = *(__int64 **)(*(_QWORD *)v51 + 168LL);
        if ( !v85 )
          sub_1B64C5C(v110, v111);
        v112 = *v85;
        v113 = *(unsigned __int16 *)(*v85 + 302);
        if ( *(_WORD *)(*v85 + 302) )
        {
          v114 = (IClassBoardLineModel_c **)(*(_QWORD *)(v112 + 176) + 8LL);
          while ( *(v114 - 1) != IClassBoardLineModel_TypeInfo )
          {
            --v113;
            v114 += 2;
            if ( !v113 )
              goto LABEL_91;
          }
          v89 = v112 + 16LL * (*(_DWORD *)v114 + 1) + 312;
        }
        else
        {
LABEL_91:
          v89 = sub_1BB69E0(v85, IClassBoardLineModel_TypeInfo, 1LL);
        }
        goto LABEL_93;
      }
LABEL_94:
      if ( *v59 )
      {
        if ( !*(_QWORD *)v51 )
          sub_1B64C5C(v110, v111);
        v118 = *(ClassBoardEffectPlayer_o **)(*(_QWORD *)v51 + 152LL);
        if ( !v118 )
          sub_1B64C5C(0LL, v111);
        ClassBoardEffectPlayer__SetData_bool_(
          v118,
          isLock,
          (const MethodInfo_2E2FBE4 *)Method_ClassBoardEffectPlayer_SetData_bool___);
        if ( !*(_QWORD *)v51 )
          sub_1B64C5C(v119, v120);
        v123 = (System_Collections_Generic_List_object__o *)this->fields.players;
        if ( !v123 )
          sub_1B64C5C(0LL, v120);
        v124 = *(Il2CppObject **)(*(_QWORD *)v51 + 152LL);
        items = v123->fields._items;
        v126 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
        ++v123->fields._version;
        if ( !items )
          sub_1B64C5C(v123, v124);
        size = v123->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v123,
            v124,
            *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
        }
        else
        {
          v128 = &items->obj.klass + size;
          v123->fields._size = size + 1;
          v128[4] = (Il2CppClass *)v124;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)(v128 + 4), (int32_t)v124, v121, v122);
        }
        v131 = *v59;
        if ( !*v59 )
          sub_1B64C5C(v129, v130);
        v132 = *(_QWORD *)v131;
        v133 = *(unsigned __int16 *)(*(_QWORD *)v131 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v131 + 302LL) )
        {
          v134 = (IClassBoardSquareModel_c **)(*(_QWORD *)(v132 + 176) + 8LL);
          while ( *(v134 - 1) != IClassBoardSquareModel_TypeInfo )
          {
            --v133;
            v134 += 2;
            if ( !v133 )
              goto LABEL_108;
          }
          v135 = v132 + 16LL * (*(_DWORD *)v134 + 5) + 312;
        }
        else
        {
LABEL_108:
          v135 = sub_1BB69E0(*v59, IClassBoardSquareModel_TypeInfo, 5LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v135)(v131, *(_QWORD *)(v135 + 8)) & 1) != 0 )
        {
          squareViewList = this->fields.squareViewList;
          v137 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_ClassBoardSquare__bool__TypeInfo);
          System_Func_object__bool____ctor(
            v137,
            (Il2CppObject *)v52,
            Method_ClassBoardEffectController___c__DisplayClass15_2__RegisterConnectingLineBlankPlayer_b__2__,
            0LL);
          v138 = (ClassBoardSquare_o *)System_Linq_Enumerable__FirstOrDefault_object__48628184(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)squareViewList,
                                         (System_Func_TSource__bool__o *)v137,
                                         (const MethodInfo_2E601D8 *)Method_System_Linq_Enumerable_FirstOrDefault_ClassBoardSquare___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v138, 0LL, 0LL) )
          {
            ClassBoardEffectController__RegisterConnectingLineBlankPlayer(this, v138, isLock, v139);
            if ( !v138 )
              sub_1B64C5C(v140, v141);
            enableEffectPlayer = v138->fields.enableEffectPlayer;
            if ( !enableEffectPlayer )
              sub_1B64C5C(0LL, v141);
            ClassBoardEffectPlayer__SetData_bool_(
              enableEffectPlayer,
              isLock,
              (const MethodInfo_2E2FBE4 *)Method_ClassBoardEffectPlayer_SetData_bool___);
            v146 = (System_Collections_Generic_List_object__o *)this->fields.players;
            if ( !v146 )
              sub_1B64C5C(0LL, v143);
            v147 = (Il2CppObject *)v138->fields.enableEffectPlayer;
            v148 = v146->fields._items;
            v149 = Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Add__;
            ++v146->fields._version;
            if ( !v148 )
              sub_1B64C5C(v146, v147);
            v150 = v146->fields._size;
            if ( (unsigned int)v150 >= v148->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v146,
                v147,
                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
            }
            else
            {
              v151 = &v148->obj.klass + v150;
              v146->fields._size = v150 + 1;
              v151[4] = (Il2CppClass *)v147;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v151 + 4), (int32_t)v147, v144, v145);
            }
          }
        }
      }
    }
  }
  v152 = *(_QWORD *)v38;
  v153 = *(unsigned __int16 *)(*(_QWORD *)v38 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v38 + 302LL) )
  {
    v154 = (int *)(*(_QWORD *)(v152 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v154 - 1) != System_IDisposable_TypeInfo )
    {
      --v153;
      v154 += 4;
      if ( !v153 )
        goto LABEL_125;
    }
    v155 = v152 + 16LL * *v154 + 312;
  }
  else
  {
LABEL_125:
    v155 = sub_1BB69E0(v38, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v155)(v38, *(_QWORD *)(v155 + 8));
}


void __fastcall ClassBoardEffectController__ResetPlayers(ClassBoardEffectController_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  ClassBoardEffectController___c_c *v7; // x0
  System_Collections_Generic_List_object__o *players; // x20
  System_Action_object__o *_9__12_0; // x21
  Il2CppObject *v10; // x22
  struct ClassBoardEffectController___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w3
  struct System_Collections_Generic_List_ClassBoardEffectPlayer__o *v15; // x8
  int32_t size; // w2
  int v17; // w9
  struct System_Action_o **p_playEndCallback; // x19

  if ( (byte_4A01DCA & 1) == 0 )
  {
    sub_1B64A00(&System_Action_ClassBoardEffectPlayer__TypeInfo, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__Clear__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__, v4);
    sub_1B64A00(&Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, v5);
    sub_1B64A00(&ClassBoardEffectController___c_TypeInfo, v6);
    byte_4A01DCA = 1;
  }
  v7 = ClassBoardEffectController___c_TypeInfo;
  players = (System_Collections_Generic_List_object__o *)this->fields.players;
  if ( !ClassBoardEffectController___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ClassBoardEffectController___c_TypeInfo);
    v7 = ClassBoardEffectController___c_TypeInfo;
  }
  _9__12_0 = (System_Action_object__o *)v7->static_fields->__9__12_0;
  if ( !_9__12_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = ClassBoardEffectController___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__12_0 = (System_Action_object__o *)sub_1B64C4C(System_Action_ClassBoardEffectPlayer__TypeInfo);
    System_Action_object____ctor(_9__12_0, v10, Method_ClassBoardEffectController___c__ResetPlayers_b__12_0__, 0LL);
    static_fields = ClassBoardEffectController___c_TypeInfo->static_fields;
    static_fields->__9__12_0 = (struct System_Action_ClassBoardEffectPlayer__o *)_9__12_0;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__12_0, (int32_t)_9__12_0, v12, v13);
  }
  if ( !players
    || (System_Collections_Generic_List_object___ForEach(
          players,
          (System_Action_T__o *)_9__12_0,
          (const MethodInfo_34B0AA8 *)Method_System_Collections_Generic_List_ClassBoardEffectPlayer__ForEach__),
        (v15 = this->fields.players) == 0LL) )
  {
    sub_1B64C5C(v7, method);
  }
  size = v15->fields._size;
  v17 = v15->fields._version + 1;
  v15->fields._size = 0;
  v15->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
  this->fields.playEndCallback = 0LL;
  p_playEndCallback = &this->fields.playEndCallback;
  *((_DWORD *)p_playEndCallback - 4) = 0;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)p_playEndCallback, 0, size, v14);
}


void __fastcall ClassBoardEffectController___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A01EA9 & 1) == 0 )
  {
    sub_1B64A00(&ClassBoardEffectController___c_TypeInfo, v1);
    byte_4A01EA9 = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(ClassBoardEffectController___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ClassBoardEffectController___c_TypeInfo->static_fields->__9 = (struct ClassBoardEffectController___c_o *)v2;
  sub_1B649A4(
    (ServantStatusBattleListViewItem_o *)ClassBoardEffectController___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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
    sub_1B64C5C(this, 0LL);
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
    sub_1B64C5C(this, x);
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
    sub_1B64C5C(this, x);
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
  if ( (byte_4A01EAA & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass15_2_o *)sub_1B64A00(&IClassBoardSquareModel_TypeInfo, x);
    byte_4A01EAA = 1;
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
    p_method = sub_1BB69E0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass15_2_o *)(*(__int64 (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 SquareModel_k__BackingField,
                                                                 *(_QWORD *)(p_method + 8));
  connectSquareModel = v4->fields.connectSquareModel;
  if ( !connectSquareModel )
LABEL_19:
    sub_1B64C5C(this, x);
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
    v15 = sub_1BB69E0(connectSquareModel, IClassBoardSquareModel_TypeInfo, 0LL);
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
    sub_1B64C5C(this, x);
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
    sub_1B64C5C(this, x);
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
  if ( (byte_4A01EAB & 1) == 0 )
  {
    this = (ClassBoardEffectController___c__DisplayClass16_1_o *)sub_1B64A00(&IClassBoardSquareModel_TypeInfo, model);
    byte_4A01EAB = 1;
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
    p_method = sub_1BB69E0(model, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  this = (ClassBoardEffectController___c__DisplayClass16_1_o *)(*(__int64 (__fastcall **)(IClassBoardSquareModel_o *, _QWORD))p_method)(
                                                                 model,
                                                                 *(_QWORD *)(p_method + 8));
  square = v4->fields.square;
  if ( !square || (SquareModel_k__BackingField = square->fields._SquareModel_k__BackingField) == 0LL )
LABEL_19:
    sub_1B64C5C(this, model);
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
    v15 = sub_1BB69E0(SquareModel_k__BackingField, IClassBoardSquareModel_TypeInfo, 0LL);
  }
  return v12 == (*(unsigned int (__fastcall **)(struct IClassBoardSquareModel_o *, _QWORD))v15)(
                  SquareModel_k__BackingField,
                  *(_QWORD *)(v15 + 8));
}