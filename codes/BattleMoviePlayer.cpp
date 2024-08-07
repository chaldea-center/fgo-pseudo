void __fastcall BattleMoviePlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleMoviePlayer_StaticFields *static_fields; // x8

  if ( (byte_4A0111D & 1) == 0 )
  {
    sub_1B64A00(&BattleMoviePlayer_TypeInfo, v1);
    byte_4A0111D = 1;
  }
  static_fields = BattleMoviePlayer_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->DefaultFov = xmmword_BA4260;
  *(_QWORD *)&static_fields->BasePanelPosition.fields.y = 0x4120000000000000LL;
}


void __fastcall BattleMoviePlayer___ctor(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x1
  UnityEngine_Vector3_c *v13; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  _BOOL4 v16; // w9
  struct UnityEngine_Vector3_StaticFields *v17; // x10
  float v18; // s1
  struct UnityEngine_Vector3_StaticFields *v19; // x8
  float v20; // s1

  if ( (byte_4A0111C & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__, v3);
    sub_1B64A00(&System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo, v4);
    sub_1B64A00(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4A0111C = 1;
  }
  this->fields.KeepStartPosition = 1;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
  this->fields.MovieInfoList = (struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *)v6;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.MovieInfoList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B64C4C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34AF794 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ObjList = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.ObjList, (int32_t)v9, v10, v11);
  if ( !byte_49F9821 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v12);
    byte_49F9821 = 1;
  }
  v13 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.startPanelPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.startPanelPosition.fields.z = z;
  if ( byte_49F9826 )
  {
    v16 = 0;
  }
  else
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v12);
    v13 = UnityEngine_Vector3_TypeInfo;
    byte_49F9826 = 1;
    v16 = byte_49F9821 == 0;
  }
  v17 = v13->static_fields;
  v18 = v17->oneVector.fields.z;
  *(_QWORD *)&this->fields.startPanelScale.fields.x = *(_QWORD *)&v17->oneVector.fields.x;
  this->fields.startPanelScale.fields.z = v18;
  if ( v16 )
  {
    sub_1B64A00(&UnityEngine_Vector3_TypeInfo, v12);
    v13 = UnityEngine_Vector3_TypeInfo;
    byte_49F9821 = 1;
  }
  v19 = v13->static_fields;
  v20 = v19->zeroVector.fields.z;
  *(_QWORD *)&this->fields.cameraStartPosition.fields.x = *(_QWORD *)&v19->zeroVector.fields.x;
  this->fields.cameraStartPosition.fields.z = v20;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleMoviePlayer__CreateMovieInfoListEvent(
        BattleMoviePlayer_o *this,
        System_Collections_Generic_List_BattleMoviePlayer_PathType__o *type,
        System_Collections_Generic_List_string__o *path,
        System_Collections_Generic_List_float__o *valid,
        System_Collections_Generic_List_float__o *fade,
        System_Collections_Generic_List_int__o *cam,
        System_Collections_Generic_List_float__o *speed,
        System_Collections_Generic_List_UnityEvent__o *effect,
        System_Collections_Generic_List_float__o *effRest,
        bool keepStartPosition,
        bool overrideZDepth,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v16; // x26
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_List_float__o *v29; // x19
  System_Collections_Generic_List_float__o *v30; // x20
  const MethodInfo_34D0D5C **v32; // x29
  int32_t v33; // w27
  BattleMoviePlayer_o *v34; // x26
  float v35; // s8
  float v36; // s9
  int32_t v37; // w19
  float Item; // s10
  BattleMoviePlayer_o *v39; // x25
  float v40; // s11
  const MethodInfo_34D0D5C **v41; // x28
  System_Collections_Generic_List_float__o *v42; // x29
  System_Collections_Generic_List_object__o *MovieInfoList; // x20
  BattleMoviePlayer_MovieInfo_o *v44; // x23
  const MethodInfo *v45; // x5
  int32_t v46; // w2
  int32_t v47; // w3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  System_Collections_Generic_List_T__o *v52; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_UnityEvent__o *v53; // [xsp+8h] [xbp-B8h]
  BattleMoviePlayer_o *v56; // [xsp+20h] [xbp-A0h]
  int32_t typea; // [xsp+2Ch] [xbp-94h]

  v16 = (System_Collections_Generic_List_T__o *)type;
  v56 = this;
  if ( (byte_4A0111B & 1) == 0 )
  {
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__, type);
    sub_1B64A00(&Method_System_Collections_Generic_List_float__get_Count__, v17);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Count__, v18);
    sub_1B64A00(&Method_System_Collections_Generic_List_UnityEvent__get_Count__, v19);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Count__, v20);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__get_Count__, v21);
    sub_1B64A00(&Method_System_Collections_Generic_List_string__get_Item__, v22);
    sub_1B64A00(&Method_System_Collections_Generic_List_UnityEvent__get_Item__, v23);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__, v24);
    sub_1B64A00(&Method_System_Collections_Generic_List_int__get_Item__, v25);
    sub_1B64A00(&Method_System_Collections_Generic_List_float__get_Item__, v26);
    sub_1B64A00(&BattleMoviePlayer_MovieInfo_TypeInfo, v27);
    this = (BattleMoviePlayer_o *)sub_1B64A00(&StringLiteral_1/*""*/, v28);
    byte_4A0111B = 1;
  }
  v56->fields.KeepStartPosition = keepStartPosition;
  v56->fields.OverrideZDepth = overrideZDepth;
  if ( !path )
LABEL_44:
    sub_1B64C5C(this, type);
  v29 = valid;
  v30 = speed;
  if ( path->fields._size >= 1 )
  {
    v32 = (const MethodInfo_34D0D5C **)&Method_System_Collections_Generic_List_float__get_Item__;
    v33 = 0;
    v52 = v16;
    v53 = effect;
    do
    {
      this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)path,
                                      v33,
                                      (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        if ( !fade )
          goto LABEL_44;
        if ( v33 < fade->fields._size )
        {
          if ( !cam )
            goto LABEL_44;
          if ( v33 < cam->fields._size )
          {
            if ( !v16 )
              goto LABEL_44;
            if ( v33 >= v16->fields._size )
            {
              typea = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                              v16,
                                              v33,
                                              (const MethodInfo_3494DAC *)Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
              typea = (int)this;
            }
            if ( v33 >= path->fields._size )
            {
              v34 = (BattleMoviePlayer_o *)StringLiteral_1/*""*/;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)path,
                                              v33,
                                              (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_string__get_Item__);
              v34 = this;
            }
            if ( !v29 )
              goto LABEL_44;
            v35 = 0.0;
            v36 = 0.0;
            if ( v33 < v29->fields._size )
              v36 = fmaxf(System_Collections_Generic_List_float___get_Item(v29, v33, *v32), 0.0);
            if ( v33 < fade->fields._size )
              v35 = fmaxf(System_Collections_Generic_List_float___get_Item(fade, v33, *v32), 1.0);
            if ( v33 >= cam->fields._size )
            {
              v37 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_int___get_Item(
                                              cam,
                                              v33,
                                              (const MethodInfo_34924E0 *)Method_System_Collections_Generic_List_int__get_Item__);
              v37 = (int)this;
            }
            if ( !v30 )
              goto LABEL_44;
            Item = 1.0;
            if ( v33 < v30->fields._size )
              Item = System_Collections_Generic_List_float___get_Item(v30, v33, *v32);
            if ( !effect )
              goto LABEL_44;
            if ( v33 >= effect->fields._size )
            {
              v39 = 0LL;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)effect,
                                              v33,
                                              (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_UnityEvent__get_Item__);
              v39 = this;
            }
            if ( !effRest )
              goto LABEL_44;
            v40 = 0.0;
            if ( v33 < effRest->fields._size )
              v40 = System_Collections_Generic_List_float___get_Item(effRest, v33, *v32);
            v41 = v32;
            v42 = effRest;
            MovieInfoList = (System_Collections_Generic_List_object__o *)v56->fields.MovieInfoList;
            v44 = (BattleMoviePlayer_MovieInfo_o *)sub_1B64C4C(BattleMoviePlayer_MovieInfo_TypeInfo);
            BattleMoviePlayer_MovieInfo___ctor(
              v44,
              typea,
              (System_String_o *)v34,
              v36,
              v35,
              v37,
              Item,
              (UnityEngine_Events_UnityEvent_o *)v39,
              v40,
              v45);
            if ( !MovieInfoList )
              goto LABEL_44;
            items = MovieInfoList->fields._items;
            v16 = v52;
            effect = v53;
            v49 = Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__;
            ++MovieInfoList->fields._version;
            if ( !items )
              goto LABEL_44;
            size = MovieInfoList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                MovieInfoList,
                (Il2CppObject *)v44,
                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v51 = &items->obj.klass + size;
              MovieInfoList->fields._size = size + 1;
              v51[4] = (Il2CppClass *)v44;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v44, v46, v47);
            }
            effRest = v42;
            v32 = v41;
            v29 = valid;
            v30 = speed;
          }
        }
      }
      ++v33;
    }
    while ( v33 < path->fields._size );
  }
}


void __fastcall BattleMoviePlayer__Dispose(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_Object_o *perf; // x20
  struct System_Collections_Generic_List_GameObject__o *ObjList; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_T__o *MovieInfoList; // x20
  BattleMoviePlayer___c_c *v17; // x0
  System_Func_object__bool__o *_9__21_0; // x21
  Il2CppObject *v19; // x22
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct BattlePerformance_o *v23; // x8
  UnityEngine_Camera_o *actorcamera; // x20
  int32_t cullingMask; // w0
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v26; // x8
  int32_t size; // w2
  int v28; // w9
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v30; // x8
  int32_t v31; // w2
  int v32; // w9
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A01113 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B64A00(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B64A00(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Clear__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64A00(&Method_BattleMoviePlayer___c__Dispose_b__21_0__, v11);
    sub_1B64A00(&BattleMoviePlayer___c_TypeInfo, v12);
    byte_4A01113 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjList = (struct System_Collections_Generic_List_GameObject__o *)UnityEngine_Object__op_Inequality(perf, 0LL, 0LL);
  if ( ((unsigned __int8)ObjList & 1) != 0 )
  {
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v17 = BattleMoviePlayer___c_TypeInfo;
    if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
      v17 = BattleMoviePlayer___c_TypeInfo;
    }
    _9__21_0 = (System_Func_object__bool__o *)v17->static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleMoviePlayer___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__21_0 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__21_0, v19, Method_BattleMoviePlayer___c__Dispose_b__21_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__21_0;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v21, v22);
    }
    ObjList = (struct System_Collections_Generic_List_GameObject__o *)BasicHelper__Any_object_(
                                                                        MovieInfoList,
                                                                        (System_Func_T__bool__o *)_9__21_0,
                                                                        (const MethodInfo_2E27164 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    if ( ((unsigned __int8)ObjList & 1) != 0 )
    {
      v23 = this->fields.perf;
      if ( !v23 )
        goto LABEL_34;
      actorcamera = v23->fields.actorcamera;
      if ( !actorcamera )
        goto LABEL_34;
      cullingMask = UnityEngine_Camera__get_cullingMask(v23->fields.actorcamera, 0LL);
      UnityEngine_Camera__set_cullingMask(actorcamera, cullingMask | 0x100000, 0LL);
    }
  }
  v26 = this->fields.MovieInfoList;
  if ( !v26 )
    goto LABEL_34;
  size = v26->fields._size;
  v28 = v26->fields._version + 1;
  v26->fields._size = 0;
  v26->fields._version = v28;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v26->fields._items, 0, size, 0LL);
  ObjList = this->fields.ObjList;
  if ( !ObjList )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v34,
    (System_Collections_Generic_List_object__o *)ObjList,
    (const MethodInfo_34B0B60 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v35 = v34;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v35,
            (const MethodInfo_322C9A4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v35.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69137476((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v35,
    (const MethodInfo_322C9A0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v30 = this->fields.ObjList;
  if ( !v30 )
LABEL_34:
    sub_1B64C5C(ObjList, v15);
  v31 = v30->fields._size;
  v32 = v30->fields._version + 1;
  v30->fields._size = 0;
  v30->fields._version = v32;
  if ( v31 >= 1 )
    System_Array__Clear((System_Array_o *)v30->fields._items, 0, v31, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69137476(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoviePlayer__GetMoviePanelAdd(BattleMoviePlayer_o *this, int32_t i, const MethodInfo *method)
{
  int v3; // w19
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
  int *MovieInfoList; // x0
  int v16; // w8
  Il2CppObject *v17; // x21
  UnityEngine_Transform_o *v18; // x22
  Il2CppObject *v19; // x0
  struct UnityEngine_GameObject_o **v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  __int64 v28; // x8
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *moviePrefab; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v32; // x0
  struct UnityEngine_GameObject_o **p_nextMovieObj; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w2
  int32_t v37; // w3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  int v42; // w8
  UnityEngine_Transform_o *v43; // x21
  unsigned int position; // s0
  float v45; // s8
  float v46; // s1
  float v47; // s9
  float v48; // s2
  UnityEngine_Material_o *baseMat; // x22
  UnityEngine_Material_o *v50; // x21
  const MethodInfo *v51; // x3
  Il2CppObject *v52; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v54; // 0:s0.4,4:s1.4,8:s2.4

  v3 = i;
  if ( (byte_4A01115 & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_BattlePerformance___, *(_QWORD *)&i);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___, v5);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v6);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v7);
    sub_1B64A00(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v10);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v11);
    sub_1B64A00(&UnityEngine_Material_TypeInfo, v12);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v13);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v14);
    byte_4A01115 = 1;
  }
  component = 0LL;
  v52 = 0LL;
  MovieInfoList = (int *)this->fields.MovieInfoList;
  if ( !MovieInfoList )
    goto LABEL_60;
  if ( MovieInfoList[6] <= v3 )
    return;
  MovieInfoList = (int *)System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)MovieInfoList,
                           v3,
                           (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
  if ( !MovieInfoList )
    goto LABEL_60;
  v16 = MovieInfoList[13];
  if ( v16 == 1 )
  {
    perf = this->fields.perf;
    if ( perf )
    {
      MovieInfoList = (int *)perf->fields.actorcamera;
      if ( MovieInfoList )
      {
        moviePrefab = (Il2CppObject *)this->fields.moviePrefab;
        MovieInfoList = (int *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)MovieInfoList, 0LL);
        if ( MovieInfoList )
        {
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MovieInfoList, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v32 = UnityEngine_Object__Instantiate_object__49014464(
                  moviePrefab,
                  transform,
                  (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
          this->fields.nextMovieObj = (struct UnityEngine_GameObject_o *)v32;
          p_nextMovieObj = &this->fields.nextMovieObj;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.nextMovieObj, (int32_t)v32, v34, v35);
          MovieInfoList = (int *)this->fields.ObjList;
          if ( MovieInfoList )
          {
            *(_QWORD *)&i = *p_nextMovieObj;
            v38 = *((_QWORD *)MovieInfoList + 2);
            v39 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++MovieInfoList[7];
            if ( v38 )
            {
              v40 = MovieInfoList[6];
              if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)MovieInfoList,
                  *(Il2CppObject **)&i,
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
              }
              else
              {
                v41 = v38 + 8 * v40;
                MovieInfoList[6] = v40 + 1;
                *(_QWORD *)(v41 + 32) = *(_QWORD *)&i;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v41 + 32), i, v36, v37);
              }
              MovieInfoList = (int *)*p_nextMovieObj;
              if ( *p_nextMovieObj )
              {
                if ( UnityEngine_GameObject__TryGetComponent_object_(
                       (UnityEngine_GameObject_o *)MovieInfoList,
                       &v52,
                       (const MethodInfo_2E8BA5C *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
                {
                  MovieInfoList = (int *)v52;
                  if ( !v52 )
                    goto LABEL_60;
                  BattleCameraFullScaleSetter__Initialize(
                    (BattleCameraFullScaleSetter_o *)v52,
                    this->fields.perf,
                    0,
                    0LL);
                }
                MovieInfoList = (int *)*p_nextMovieObj;
                if ( *p_nextMovieObj )
                {
                  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)MovieInfoList, 11, 0LL);
                  MovieInfoList = (int *)*p_nextMovieObj;
                  if ( *p_nextMovieObj )
                  {
                    MovieInfoList = (int *)UnityEngine_GameObject__GetComponent_object_(
                                             (UnityEngine_GameObject_o *)MovieInfoList,
                                             (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
                    if ( MovieInfoList )
                    {
                      v42 = 1;
                      goto LABEL_42;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_60:
    sub_1B64C5C(MovieInfoList, *(_QWORD *)&i);
  }
  if ( !v16 )
  {
    MovieInfoList = (int *)this->fields.perf;
    if ( MovieInfoList )
    {
      v17 = (Il2CppObject *)this->fields.moviePrefab;
      MovieInfoList = (int *)UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)MovieInfoList,
                               (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
      if ( MovieInfoList )
      {
        v18 = (UnityEngine_Transform_o *)*((_QWORD *)MovieInfoList + 23);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v19 = UnityEngine_Object__Instantiate_object__49014464(
                v17,
                v18,
                (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
        this->fields.nextMovieObj = (struct UnityEngine_GameObject_o *)v19;
        v20 = &this->fields.nextMovieObj;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.nextMovieObj, (int32_t)v19, v21, v22);
        MovieInfoList = (int *)this->fields.ObjList;
        if ( MovieInfoList )
        {
          *(_QWORD *)&i = *v20;
          v25 = *((_QWORD *)MovieInfoList + 2);
          v26 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++MovieInfoList[7];
          if ( v25 )
          {
            v27 = MovieInfoList[6];
            if ( (unsigned int)v27 >= *(_DWORD *)(v25 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)MovieInfoList,
                *(Il2CppObject **)&i,
                *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
            }
            else
            {
              v28 = v25 + 8 * v27;
              MovieInfoList[6] = v27 + 1;
              *(_QWORD *)(v28 + 32) = *(_QWORD *)&i;
              sub_1B649A4((ServantStatusBattleListViewItem_o *)(v28 + 32), i, v23, v24);
            }
            MovieInfoList = (int *)*v20;
            if ( *v20 )
            {
              if ( UnityEngine_GameObject__TryGetComponent_object_(
                     (UnityEngine_GameObject_o *)MovieInfoList,
                     &component,
                     (const MethodInfo_2E8BA5C *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
              {
                MovieInfoList = (int *)component;
                if ( !component )
                  goto LABEL_60;
                BattleCameraFullScaleSetter__Initialize(
                  (BattleCameraFullScaleSetter_o *)component,
                  this->fields.perf,
                  1,
                  0LL);
              }
              MovieInfoList = (int *)*v20;
              if ( *v20 )
              {
                MovieInfoList = (int *)UnityEngine_GameObject__GetComponent_object_(
                                         (UnityEngine_GameObject_o *)MovieInfoList,
                                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
                if ( MovieInfoList )
                {
                  v42 = 0;
LABEL_42:
                  MovieInfoList[10] = v42;
                  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)MovieInfoList, 1, 0LL);
                  goto LABEL_43;
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_60;
  }
LABEL_43:
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  MovieInfoList = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MovieInfoList, 0LL);
  if ( !this->fields.nextMovieObj )
    goto LABEL_60;
  v43 = (UnityEngine_Transform_o *)MovieInfoList;
  MovieInfoList = (int *)UnityEngine_GameObject__get_transform(this->fields.nextMovieObj, 0LL);
  if ( !MovieInfoList )
    goto LABEL_60;
  position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)MovieInfoList, 0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  v45 = *(float *)&position;
  MovieInfoList = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MovieInfoList, 0LL);
  if ( !MovieInfoList )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)(&v46 - 1) = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)MovieInfoList,
                                           0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  v47 = v46;
  MovieInfoList = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MovieInfoList, 0LL);
  if ( !MovieInfoList )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)(&v48 - 2) = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)MovieInfoList,
                                           0LL);
  if ( !v43 )
    goto LABEL_60;
  v54.fields.z = (float)((float)v3 * 0.1) + v48;
  v54.fields.x = v45;
  v54.fields.y = v47;
  UnityEngine_Transform__set_position(v43, v54, 0LL);
  baseMat = this->fields.baseMat;
  v50 = (UnityEngine_Material_o *)sub_1B64C4C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_69000836(v50, baseMat, 0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  MovieInfoList = (int *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)MovieInfoList,
                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !MovieInfoList )
    goto LABEL_60;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)MovieInfoList, v50, 0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  MovieInfoList = (int *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)MovieInfoList,
                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
  if ( !MovieInfoList )
    goto LABEL_60;
  CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)MovieInfoList, v50, 0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MovieInfoList, 1, 0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  MovieInfoList = (int *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)MovieInfoList,
                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !MovieInfoList )
    goto LABEL_60;
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)MovieInfoList, 0, 0LL);
  BattleMoviePlayer__InitMovie(this, this->fields.nextMovieObj, v3, v51);
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__GetMoviePanelFirst(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A01114 & 1) == 0 )
  {
    sub_1B64A00(&BattleMoviePlayer__GetMoviePanelFirst_d__22_TypeInfo, performance);
    byte_4A01114 = 1;
  }
  v5 = sub_1B64C4C(BattleMoviePlayer__GetMoviePanelFirst_d__22_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = performance;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)performance, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleMoviePlayer__InitMovie(
        BattleMoviePlayer_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t pathnum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *MovieInfoList; // x0
  System_String_o *v16; // x22
  AssetData_o *AssetStorageData; // x0
  System_String_o *v18; // x22
  int v19; // w8
  System_Collections_Generic_List_object__o *v20; // x8
  System_String_o *v21; // x21
  __int64 *v22; // x8
  System_Collections_Generic_List_object__o *v23; // x8
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4A0111A & 1) == 0 )
  {
    sub_1B64A00(&UnityEngine_Application_TypeInfo, obj);
    sub_1B64A00(&AssetManager_TypeInfo, v7);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v9);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64A00(&StringLiteral_1122/*".usm"*/, v11);
    sub_1B64A00(&StringLiteral_1168/*"/StreamingAssets/"*/, v12);
    sub_1B64A00(&StringLiteral_1163/*"/Resources/"*/, v13);
    byte_4A0111A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)obj, 0LL) )
  {
    MovieInfoList = this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_41;
    MovieInfoList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)MovieInfoList,
                      pathnum,
                      (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v16 = (System_String_o *)*((_QWORD *)MovieInfoList + 3);
    if ( !v16 )
      goto LABEL_41;
    if ( !System_String__EndsWith(*((System_String_o **)MovieInfoList + 3), (System_String_o *)StringLiteral_1122/*".usm"*/, 0LL) )
      v16 = System_String__Concat_61385136(v16, (System_String_o *)StringLiteral_1122/*".usm"*/, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageData = AssetManager__getAssetStorageData(v16, 0LL);
    v18 = AssetStorageData ? AssetData__get_Path(AssetStorageData, 0LL) : 0LL;
    MovieInfoList = this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_41;
    MovieInfoList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)MovieInfoList,
                      pathnum,
                      (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v19 = *((_DWORD *)MovieInfoList + 4);
    if ( v19 == 102 )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0LL);
      v23 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v23 )
        goto LABEL_41;
      v21 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v23,
                        pathnum,
                        (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v22 = &StringLiteral_1163/*"/Resources/"*/;
    }
    else
    {
      if ( v19 != 101 )
        goto LABEL_31;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0LL);
      v20 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v20 )
        goto LABEL_41;
      v21 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v20,
                        pathnum,
                        (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v22 = &StringLiteral_1168/*"/StreamingAssets/"*/;
    }
    MovieInfoList = System_String__Concat_61396396(
                      v21,
                      (System_String_o *)*v22,
                      *((System_String_o **)MovieInfoList + 3),
                      0LL);
    v18 = (System_String_o *)MovieInfoList;
LABEL_31:
    if ( obj )
    {
      Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   obj,
                                                   (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL) )
        return;
      MovieInfoList = (void *)System_String__IsNullOrEmpty(v18, 0LL);
      if ( ((unsigned __int8)MovieInfoList & 1) != 0 )
        return;
      if ( Component_object )
      {
        MovieInfoList = Component_object[2].monitor;
        if ( MovieInfoList )
        {
          CriMana_Player__SetFile((CriMana_Player_o *)MovieInfoList, 0LL, v18, 0, 0LL);
          MovieInfoList = Component_object[2].monitor;
          if ( MovieInfoList )
          {
            CriMana_Player__PrepareForRendering((CriMana_Player_o *)MovieInfoList, 0LL);
            return;
          }
        }
      }
    }
LABEL_41:
    sub_1B64C5C(MovieInfoList, v14);
  }
}


void __fastcall BattleMoviePlayer__Initialize(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *MoviePanelFirst; // x1

  MoviePanelFirst = BattleMoviePlayer__GetMoviePanelFirst(this, perf, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)this, MoviePanelFirst, 0LL);
}


bool __fastcall BattleMoviePlayer__IsBossCamera(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  BattleMoviePlayer_o *v2; // x19
  __int64 v3; // x1
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actorcamera; // x20
  struct BattlePerformance_o *v6; // x8
  float fieldOfView; // s8
  BattleMoviePlayer_c *v8; // x0

  v2 = this;
  if ( (byte_4A01117 & 1) == 0 )
  {
    sub_1B64A00(&BattleMoviePlayer_TypeInfo, method);
    this = (BattleMoviePlayer_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v3);
    byte_4A01117 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_16;
  actorcamera = (UnityEngine_Object_o *)perf->fields.actorcamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleMoviePlayer_o *)UnityEngine_Object__op_Implicit(actorcamera, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v6 = v2->fields.perf;
    if ( v6 )
    {
      this = (BattleMoviePlayer_o *)v6->fields.actorcamera;
      if ( this )
      {
        fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)this, 0LL);
        v8 = BattleMoviePlayer_TypeInfo;
        goto LABEL_13;
      }
    }
LABEL_16:
    sub_1B64C5C(this, method);
  }
  v8 = BattleMoviePlayer_TypeInfo;
  if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
    v8 = BattleMoviePlayer_TypeInfo;
  }
  fieldOfView = v8->static_fields->DefaultFov;
LABEL_13:
  if ( !v8->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v8);
    v8 = BattleMoviePlayer_TypeInfo;
  }
  return fieldOfView > v8->static_fields->DefaultFov;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__PlayMovie(
        BattleMoviePlayer_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A01118 & 1) == 0 )
  {
    sub_1B64A00(&BattleMoviePlayer__PlayMovie_d__33_TypeInfo, *(_QWORD *)&num);
    byte_4A01118 = 1;
  }
  v5 = sub_1B64C4C(BattleMoviePlayer__PlayMovie_d__33_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 40) = num;
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__PlayMovieFadeOut(
        BattleMoviePlayer_o *this,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A01119 & 1) == 0 )
  {
    sub_1B64A00(&BattleMoviePlayer__PlayMovieFadeOut_d__34_TypeInfo, *(_QWORD *)&num);
    byte_4A01119 = 1;
  }
  v5 = sub_1B64C4C(BattleMoviePlayer__PlayMovieFadeOut_d__34_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 40) = num;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__StartMovie(
        BattleMoviePlayer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A01116 & 1) == 0 )
  {
    sub_1B64A00(&BattleMoviePlayer__StartMovie_d__27_TypeInfo, method);
    byte_4A01116 = 1;
  }
  v3 = sub_1B64C4C(BattleMoviePlayer__StartMovie_d__27_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall BattleMoviePlayer__get_UseDepth(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields._UseDepth_k__BackingField;
}


void __fastcall BattleMoviePlayer_MovieInfo___ctor(
        BattleMoviePlayer_MovieInfo_o *this,
        int32_t type,
        System_String_o *path,
        float valid,
        float fade,
        int32_t cam,
        float speed,
        UnityEngine_Events_UnityEvent_o *eff,
        float effRest,
        const MethodInfo *method)
{
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3

  this->fields.playSpeed = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.pathType = type;
  this->fields.moviePath = path;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.moviePath, (int32_t)path, v19, v20);
  this->fields.effectEvent = eff;
  this->fields.validTime = valid;
  this->fields.fadeRestTime = fade;
  this->fields.cameraType = cam;
  this->fields.playSpeed = speed;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.effectEvent, (int32_t)eff, v21, v22);
  this->fields.effectRestTime = effRest;
}


bool __fastcall BattleMoviePlayer_MovieInfo__get_UsePlayMakerShakeParam(
        BattleMoviePlayer_MovieInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._UsePlayMakerShakeParam_k__BackingField;
}


void __fastcall BattleMoviePlayer_MovieInfo__set_UsePlayMakerShakeParam(
        BattleMoviePlayer_MovieInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._UsePlayMakerShakeParam_k__BackingField = value;
}


void __fastcall BattleMoviePlayer__GetMoviePanelFirst_d__22___ctor(
        BattleMoviePlayer__GetMoviePanelFirst_d__22_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMoviePlayer__GetMoviePanelFirst_d__22__MoveNext(
        BattleMoviePlayer__GetMoviePanelFirst_d__22_o *this,
        const MethodInfo *method)
{
  BattleMoviePlayer__GetMoviePanelFirst_d__22_o *v2; // x21
  __int64 v3; // x1
  __int64 v4; // x1
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
  struct BattleMoviePlayer_o *_4__this; // x19
  BattlePerformance_o **p_perf; // x20
  UnityEngine_Object_o *perf; // x22
  UnityEngine_Object_o *performance; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  BattlePerformance_o *v21; // x1
  UnityEngine_Object_o *v22; // x21
  Il2CppObject *Component_object; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  UnityEngine_Object_o *v26; // x21
  int klass_high; // w8
  Il2CppObject *v28; // x21
  struct BattlePerformance_o *v29; // x22
  Il2CppObject *v30; // x0
  const MethodInfo **v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  struct BattlePerformance_o *v40; // x8
  Il2CppObject *moviePrefab; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v43; // x0
  const MethodInfo **p_currMovieObj; // x21
  int32_t v45; // w2
  int32_t v46; // w3
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x8
  _QWORD *v50; // x9
  __int64 _2__current_low; // x10
  __int64 v52; // x8
  int v53; // w8
  UnityEngine_Object_o *baseMat; // x22
  UnityEngine_Material_o *material; // x22
  UnityEngine_Material_o *v56; // x23
  int32_t v57; // w2
  int32_t v58; // w3
  UnityEngine_Material_o *v59; // x22
  UnityEngine_Material_o *v60; // x21
  const MethodInfo *v61; // x3
  int v62; // w8
  Il2CppObject *v63; // x21
  struct BattlePerformance_o *v64; // x22
  Il2CppObject *v65; // x0
  const MethodInfo **v66; // x21
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w2
  int32_t v70; // w3
  __int64 v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x8
  struct BattlePerformance_o *v75; // x8
  Il2CppObject *v76; // x21
  UnityEngine_Transform_o *v77; // x22
  Il2CppObject *v78; // x0
  const MethodInfo **p_nextMovieObj; // x21
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w2
  int32_t v83; // w3
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  int v88; // w8
  BattleMoviePlayer__GetMoviePanelFirst_d__22_o *v89; // x20
  unsigned int position; // s0
  float v91; // s8
  float v92; // s1
  float v93; // s9
  float v94; // s2
  UnityEngine_Material_o *v95; // x21
  UnityEngine_Material_o *v96; // x20
  const MethodInfo *v97; // x3
  Il2CppObject *v99; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *v100; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v101; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+38h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4A0111F & 1) == 0 )
  {
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_BattlePerformance___, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___, v3);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___, v4);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v5);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v6);
    sub_1B64A00(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v9);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v10);
    sub_1B64A00(&UnityEngine_Material_TypeInfo, v11);
    sub_1B64A00(&Method_UnityEngine_Object_Instantiate_GameObject____75801880, v12);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v13);
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)sub_1B64A00(&StringLiteral_10553/*"Performance"*/, v14);
    byte_4A0111F = 1;
  }
  component = 0LL;
  v100 = 0LL;
  v101 = 0LL;
  v99 = 0LL;
  if ( v2->fields.__1__state )
    return 0;
  _4__this = v2->fields.__4__this;
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_129;
  p_perf = &_4__this->fields.perf;
  perf = (UnityEngine_Object_o *)_4__this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(perf, 0LL, 0LL) )
  {
    performance = (UnityEngine_Object_o *)v2->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
    {
      v21 = v2->fields.performance;
      *p_perf = v21;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.perf, (int32_t)v21, v19, v20);
    }
    v22 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v22, 0LL, 0LL) )
    {
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__Find(
                                                                (System_String_o *)StringLiteral_10553/*"Performance"*/,
                                                                0LL);
      if ( !this )
        goto LABEL_129;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
      *p_perf = (BattlePerformance_o *)Component_object;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.perf, (int32_t)Component_object, v24, v25);
      v26 = (UnityEngine_Object_o *)*p_perf;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Equality(v26, 0LL, 0LL) )
        return 0;
    }
  }
  this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.MovieInfoList;
  if ( !this )
    goto LABEL_129;
  if ( SLODWORD(this->fields.__2__current) >= 1 )
  {
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              0,
                                                              (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !this )
      goto LABEL_129;
    klass_high = HIDWORD(this[1].klass);
    if ( klass_high == 1 )
    {
      v40 = _4__this->fields.perf;
      if ( !v40 )
        goto LABEL_129;
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)v40->fields.actorcamera;
      if ( !this )
        goto LABEL_129;
      moviePrefab = (Il2CppObject *)_4__this->fields.moviePrefab;
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
      if ( !this )
        goto LABEL_129;
      transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v43 = UnityEngine_Object__Instantiate_object__49014464(
              moviePrefab,
              transform,
              (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
      _4__this->fields.currMovieObj = (struct UnityEngine_GameObject_o *)v43;
      p_currMovieObj = (const MethodInfo **)&_4__this->fields.currMovieObj;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, (int32_t)v43, v45, v46);
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.ObjList;
      if ( !this )
        goto LABEL_129;
      method = *p_currMovieObj;
      v49 = *(_QWORD *)&this->fields.__1__state;
      v50 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v49 )
        goto LABEL_129;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= *(_DWORD *)(v49 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)method,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
      }
      else
      {
        v52 = v49 + 8 * _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        *(_QWORD *)(v52 + 32) = method;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v52 + 32), (int32_t)method, v47, v48);
      }
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)*p_currMovieObj;
      if ( !*p_currMovieObj )
        goto LABEL_129;
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)this,
             &v101,
             (const MethodInfo_2E8BA5C *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
      {
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)v101;
        if ( !v101 )
          goto LABEL_129;
        BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v101, *p_perf, 0, 0LL);
      }
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)*p_currMovieObj;
      if ( !*p_currMovieObj )
        goto LABEL_129;
      UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, 11, 0LL);
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)*p_currMovieObj;
      if ( !*p_currMovieObj )
        goto LABEL_129;
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
      if ( !this )
        goto LABEL_129;
      v53 = 1;
    }
    else
    {
      if ( klass_high )
      {
LABEL_59:
        baseMat = (UnityEngine_Object_o *)_4__this->fields.baseMat;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Equality(baseMat, 0LL, 0LL) )
        {
          this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.currMovieObj;
          if ( !this )
            goto LABEL_129;
          this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
          if ( !this )
            goto LABEL_129;
          material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          v56 = (UnityEngine_Material_o *)sub_1B64C4C(UnityEngine_Material_TypeInfo);
          UnityEngine_Material___ctor_69000836(v56, material, 0LL);
          _4__this->fields.baseMat = v56;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.baseMat, (int32_t)v56, v57, v58);
        }
        v59 = _4__this->fields.baseMat;
        v60 = (UnityEngine_Material_o *)sub_1B64C4C(UnityEngine_Material_TypeInfo);
        UnityEngine_Material___ctor_69000836(v60, v59, 0LL);
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.currMovieObj;
        if ( !this )
          goto LABEL_129;
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_129;
        UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v60, 0LL);
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.currMovieObj;
        if ( !this )
          goto LABEL_129;
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
        if ( !this )
          goto LABEL_129;
        CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v60, 0LL);
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.currMovieObj;
        if ( !this )
          goto LABEL_129;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.currMovieObj;
        if ( !this )
          goto LABEL_129;
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_129;
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
        BattleMoviePlayer__InitMovie(_4__this, _4__this->fields.currMovieObj, 0, v61);
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.MovieInfoList;
        if ( !this )
          goto LABEL_129;
        goto LABEL_73;
      }
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_129;
      v28 = (Il2CppObject *)_4__this->fields.moviePrefab;
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_Component__GetComponent_object_(
                                                                (UnityEngine_Component_o *)this,
                                                                (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
      if ( !this )
        goto LABEL_129;
      v29 = this[3].fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v30 = UnityEngine_Object__Instantiate_object__49014464(
              v28,
              (UnityEngine_Transform_o *)v29,
              (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
      _4__this->fields.currMovieObj = (struct UnityEngine_GameObject_o *)v30;
      v31 = (const MethodInfo **)&_4__this->fields.currMovieObj;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, (int32_t)v30, v32, v33);
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.ObjList;
      if ( !this )
        goto LABEL_129;
      method = *v31;
      v36 = *(_QWORD *)&this->fields.__1__state;
      v37 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v36 )
        goto LABEL_129;
      v38 = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)v38 >= *(_DWORD *)(v36 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)method,
          *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = v36 + 8 * v38;
        LODWORD(this->fields.__2__current) = v38 + 1;
        *(_QWORD *)(v39 + 32) = method;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)(v39 + 32), (int32_t)method, v34, v35);
      }
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)*v31;
      if ( !*v31 )
        goto LABEL_129;
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)this,
             &component,
             (const MethodInfo_2E8BA5C *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
      {
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)component;
        if ( !component )
          goto LABEL_129;
        BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)component, *p_perf, 1, 0LL);
      }
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)*v31;
      if ( !*v31 )
        goto LABEL_129;
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
      if ( !this )
        goto LABEL_129;
      v53 = 0;
    }
    LODWORD(this->fields.performance) = v53;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    goto LABEL_59;
  }
LABEL_73:
  if ( SLODWORD(this->fields.__2__current) > 1 )
  {
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              1,
                                                              (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !this )
      goto LABEL_129;
    v62 = HIDWORD(this[1].klass);
    if ( v62 == 1 )
    {
      v75 = _4__this->fields.perf;
      if ( v75 )
      {
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)v75->fields.actorcamera;
        if ( this )
        {
          v76 = (Il2CppObject *)_4__this->fields.moviePrefab;
          this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
          if ( this )
          {
            v77 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v78 = UnityEngine_Object__Instantiate_object__49014464(
                    v76,
                    v77,
                    (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
            _4__this->fields.nextMovieObj = (struct UnityEngine_GameObject_o *)v78;
            p_nextMovieObj = (const MethodInfo **)&_4__this->fields.nextMovieObj;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, (int32_t)v78, v80, v81);
            this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.ObjList;
            if ( this )
            {
              method = *p_nextMovieObj;
              v84 = *(_QWORD *)&this->fields.__1__state;
              v85 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( v84 )
              {
                v86 = SLODWORD(this->fields.__2__current);
                if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)method,
                    *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
                }
                else
                {
                  v87 = v84 + 8 * v86;
                  LODWORD(this->fields.__2__current) = v86 + 1;
                  *(_QWORD *)(v87 + 32) = method;
                  sub_1B649A4((ServantStatusBattleListViewItem_o *)(v87 + 32), (int32_t)method, v82, v83);
                }
                this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)*p_nextMovieObj;
                if ( *p_nextMovieObj )
                {
                  if ( UnityEngine_GameObject__TryGetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         &v99,
                         (const MethodInfo_2E8BA5C *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
                  {
                    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)v99;
                    if ( !v99 )
                      goto LABEL_129;
                    BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v99, *p_perf, 0, 0LL);
                  }
                  this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)*p_nextMovieObj;
                  if ( *p_nextMovieObj )
                  {
                    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, 11, 0LL);
                    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)*p_nextMovieObj;
                    if ( *p_nextMovieObj )
                    {
                      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                (UnityEngine_GameObject_o *)this,
                                                                                (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
                      if ( this )
                      {
                        v88 = 1;
                        goto LABEL_111;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      if ( v62 )
      {
LABEL_112:
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
        if ( this )
        {
          this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__get_transform(
                                                                    (UnityEngine_GameObject_o *)this,
                                                                    0LL);
          if ( _4__this->fields.nextMovieObj )
          {
            v89 = this;
            this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__get_transform(
                                                                      _4__this->fields.nextMovieObj,
                                                                      0LL);
            if ( this )
            {
              position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
              this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
              if ( this )
              {
                v91 = *(float *)&position;
                this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__get_transform(
                                                                          (UnityEngine_GameObject_o *)this,
                                                                          0LL);
                if ( this )
                {
                  *(UnityEngine_Vector3_o *)(&v92 - 1) = UnityEngine_Transform__get_position(
                                                           (UnityEngine_Transform_o *)this,
                                                           0LL);
                  this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
                  if ( this )
                  {
                    v93 = v92;
                    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
                    if ( this )
                    {
                      *(UnityEngine_Vector3_o *)(&v94 - 2) = UnityEngine_Transform__get_position(
                                                               (UnityEngine_Transform_o *)this,
                                                               0LL);
                      if ( v89 )
                      {
                        v103.fields.y = v93;
                        v103.fields.z = v94 + 0.1;
                        v103.fields.x = v91;
                        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v89, v103, 0LL);
                        v95 = _4__this->fields.baseMat;
                        v96 = (UnityEngine_Material_o *)sub_1B64C4C(UnityEngine_Material_TypeInfo);
                        UnityEngine_Material___ctor_69000836(v96, v95, 0LL);
                        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
                        if ( this )
                        {
                          this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                          if ( this )
                          {
                            UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v96, 0LL);
                            this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
                            if ( this )
                            {
                              this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                        (UnityEngine_GameObject_o *)this,
                                                                                        (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
                              if ( this )
                              {
                                CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v96, 0LL);
                                this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
                                if ( this )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                                  this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
                                  if ( this )
                                  {
                                    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                              (UnityEngine_GameObject_o *)this,
                                                                                              (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                                    if ( this )
                                    {
                                      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
                                      BattleMoviePlayer__InitMovie(_4__this, _4__this->fields.nextMovieObj, 1, v97);
                                      return 0;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_129;
      }
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.perf;
      if ( this )
      {
        v63 = (Il2CppObject *)_4__this->fields.moviePrefab;
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
        if ( this )
        {
          v64 = this[3].fields.performance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v65 = UnityEngine_Object__Instantiate_object__49014464(
                  v63,
                  (UnityEngine_Transform_o *)v64,
                  (const MethodInfo_2EBE6C0 *)Method_UnityEngine_Object_Instantiate_GameObject____75801880);
          _4__this->fields.nextMovieObj = (struct UnityEngine_GameObject_o *)v65;
          v66 = (const MethodInfo **)&_4__this->fields.nextMovieObj;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, (int32_t)v65, v67, v68);
          this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.ObjList;
          if ( this )
          {
            method = *v66;
            v71 = *(_QWORD *)&this->fields.__1__state;
            v72 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( v71 )
            {
              v73 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v73 >= *(_DWORD *)(v71 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)method,
                  *(const MethodInfo_34AFFC8 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
              }
              else
              {
                v74 = v71 + 8 * v73;
                LODWORD(this->fields.__2__current) = v73 + 1;
                *(_QWORD *)(v74 + 32) = method;
                sub_1B649A4((ServantStatusBattleListViewItem_o *)(v74 + 32), (int32_t)method, v69, v70);
              }
              this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)*v66;
              if ( *v66 )
              {
                if ( UnityEngine_GameObject__TryGetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       &v100,
                       (const MethodInfo_2E8BA5C *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
                {
                  this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)v100;
                  if ( !v100 )
                    goto LABEL_129;
                  BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v100, *p_perf, 1, 0LL);
                }
                this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)*v66;
                if ( *v66 )
                {
                  this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                            (UnityEngine_GameObject_o *)this,
                                                                            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
                  if ( this )
                  {
                    v88 = 0;
LABEL_111:
                    LODWORD(this->fields.performance) = v88;
                    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
                    goto LABEL_112;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_129:
    sub_1B64C5C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleMoviePlayer__GetMoviePanelFirst_d__22__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__GetMoviePanelFirst_d__22__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__GetMoviePanelFirst_d__22_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_BattleMoviePlayer__GetMoviePanelFirst_d__22_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__GetMoviePanelFirst_d__22__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__22_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__GetMoviePanelFirst_d__22__System_IDisposable_Dispose(
        BattleMoviePlayer__GetMoviePanelFirst_d__22_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__34___ctor(
        BattleMoviePlayer__PlayMovieFadeOut_d__34_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__34__MoveNext(
        BattleMoviePlayer__PlayMovieFadeOut_d__34_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleMoviePlayer__PlayMovieFadeOut_d__34_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x19
  UnityEngine_Object_o *pastMovieObj; // x21
  Il2CppObject *Component_object; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Material_o *material; // x0
  BattleMoviePlayer__PlayMovieFadeOut_d__34_o **p_pastMaterial; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  struct BattleMoviePlayer_MovieInfo_o *v27; // x8
  float validTime; // s8
  struct CriManaMovieController_o *v29; // x8
  float effectRestTime; // s0
  struct CriManaMovieController_o *v31; // x8
  int32_t v32; // w2
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  struct CriManaMovieController_o *currController; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  int32_t num; // w8
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x9
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  float v40; // s0
  float v41; // s1
  bool v42; // nf
  float v43; // s0
  float restTime_5__5; // s8
  float timeScale; // s0
  struct BattleMoviePlayer_MovieInfo_o *v46; // x8
  __int64 v47; // x9
  struct BattlePerformance_o *perf; // x8
  float v49; // w10
  __int64 v50; // x9
  struct BattlePerformance_o *v51; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v55; // x1
  char v56; // w22
  float v57; // s11
  float v58; // s12
  float v59; // s13
  BattleMoviePlayer__PlayMovieFadeOut_d__34_o *v60; // x21
  float v61; // s0
  BattleMoviePlayer__PlayMovieFadeOut_d__34_o **p_movInfo_5__2; // x21
  int32_t v63; // w2
  int32_t v64; // w3
  UnityEngine_Object_o *v65; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  float *v68; // x9
  float v69; // s8
  float v70; // s9
  float v71; // s10
  float v72; // s0
  BattleMoviePlayer_c *v73; // x8
  struct BattlePerformance_o *v74; // x8
  BattleMoviePlayer__PlayMovieFadeOut_d__34_o *v75; // x21
  int v76; // s0
  float v78; // s2
  float v79; // s4
  float v80; // s2
  float v81; // s8
  float v82; // s9
  float v83; // s10
  const MethodInfo *v84; // x1
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v86; // x8
  UnityEngine_Vector3_o *static_fields; // x8
  float v88; // s0
  float v89; // s1
  float v90; // s2
  float v91; // s11
  float v92; // s12
  float v93; // s13
  float v94; // s0
  float v95; // s0
  float v96; // s0
  float v97; // s1
  float v98; // s2
  float v99; // s11
  float v100; // s12
  float v101; // s13
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A01121 & 1) == 0 )
  {
    sub_1B64A00(&BattleMoviePlayer_TypeInfo, method);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v5);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_GameObject__Remove__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v8);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v9);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v10);
    sub_1B64A00(&StringLiteral_16344/*"_ZTestMode"*/, v11);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)sub_1B64A00(&StringLiteral_16312/*"_Transparency"*/, v12);
    byte_4A01121 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_102;
    currController = _4__this->fields.currController;
    if ( !currController )
      goto LABEL_102;
    player_k__BackingField = currController->fields._player_k__BackingField;
    if ( !player_k__BackingField )
      goto LABEL_60;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)CriMana_Player__GetDisplayedFrameNo(
                                                            player_k__BackingField,
                                                            0LL);
    if ( v4->fields._effectTime_5__3 <= (float)(int)this )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)v4->fields._movInfo_5__2;
      if ( !this )
        goto LABEL_102;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)v4->fields._movInfo_5__2;
        if ( !this )
          goto LABEL_102;
      }
      *(_QWORD *)&this->fields.num = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v2, v3);
    }
    num = v4->fields.num;
    if ( (num & 0x80000000) != 0 )
      goto LABEL_59;
    MovieInfoList = _4__this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_102;
    if ( num >= MovieInfoList->fields._size )
    {
LABEL_59:
      v4->fields._pastError_5__4 = 1;
LABEL_60:
      p_movInfo_5__2 = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o **)&v4->fields._movInfo_5__2;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)v4->fields._movInfo_5__2;
      if ( !this )
        goto LABEL_102;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
        this = *p_movInfo_5__2;
        if ( !*p_movInfo_5__2 )
          goto LABEL_102;
      }
      *(_QWORD *)&this->fields.num = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v2, v3);
      if ( !v4->fields._pastError_5__4 )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)_4__this->fields.pastMaterial;
        if ( !this )
          goto LABEL_102;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16344/*"_ZTestMode"*/, 4, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)_4__this->fields.pastMaterial;
        if ( !this )
          goto LABEL_102;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16312/*"_Transparency"*/, 1.0, 0LL);
      }
      *p_movInfo_5__2 = 0LL;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, 0, v63, v64);
      goto LABEL_68;
    }
    movInfo_5__2 = v4->fields._movInfo_5__2;
    if ( !movInfo_5__2 )
      goto LABEL_102;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)_4__this->fields.pastMaterial;
    if ( !this )
      goto LABEL_102;
    v40 = 1.0 - (float)(v4->fields._restTime_5__5 / movInfo_5__2->fields.fadeRestTime);
    v41 = fminf(v40, 1.0);
    v42 = v40 < 0.0;
    v43 = 0.0;
    if ( !v42 )
      v43 = v41;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16312/*"_Transparency"*/, v43, 0LL);
    restTime_5__5 = v4->fields._restTime_5__5;
    timeScale = UnityEngine_Time__get_timeScale(0LL);
    v46 = v4->fields._movInfo_5__2;
    if ( !v46 )
      goto LABEL_102;
    v4->fields._restTime_5__5 = restTime_5__5 - (float)(timeScale * v46->fields.playSpeed);
    if ( _4__this->fields.KeepStartPosition )
    {
      if ( v46->fields._UsePlayMakerShakeParam_k__BackingField )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)BattleMoviePlayer_TypeInfo;
        }
        v47 = *(_QWORD *)&this[2].fields.num;
        perf = _4__this->fields.perf;
        v49 = *(float *)(v47 + 20);
        v50 = *(_QWORD *)(v47 + 12);
        _4__this->fields.startPanelPosition.fields.z = v49;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v50;
        if ( !perf )
          goto LABEL_102;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_102;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v51 = _4__this->fields.perf;
        if ( !v51 )
          goto LABEL_102;
        if ( !this )
          goto LABEL_102;
        v102 = UnityEngine_Transform__InverseTransformVector(
                 (UnityEngine_Transform_o *)this,
                 v51->fields._CurrentShakeWidth_k__BackingField,
                 0LL);
        x = v102.fields.x;
        y = v102.fields.y;
        z = v102.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)BattleMoviePlayer__IsBossCamera(_4__this, v55);
        if ( !_4__this->fields.currController )
          goto LABEL_102;
        v56 = (char)this;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)_4__this->fields.currController,
                                                                0LL);
        v57 = _4__this->fields.startPanelPosition.fields.x;
        v58 = _4__this->fields.startPanelPosition.fields.y;
        v59 = _4__this->fields.startPanelPosition.fields.z;
        v60 = this;
        if ( (v56 & 1) == 0 )
        {
          if ( !this )
            goto LABEL_102;
          v110.fields.z = z + v59;
          v110.fields.y = y + v58;
          v110.fields.x = x + v57;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v110, 0LL);
          goto LABEL_27;
        }
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !v60 )
          goto LABEL_102;
        v61 = *(float *)(*(_QWORD *)&this[2].fields.num + 8LL) / *(float *)(*(_QWORD *)&this[2].fields.num + 4LL);
        v103.fields.z = (float)(v59 * v61) + (float)(z * v61);
        v103.fields.y = (float)(v58 * v61) + (float)(y * v61);
        v103.fields.x = (float)(v57 * v61) + (float)(x * v61);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v60, v103, 0LL);
      }
      else
      {
        v74 = _4__this->fields.perf;
        if ( !v74 )
          goto LABEL_102;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)v74->fields.actorcamera;
        if ( !this )
          goto LABEL_102;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_102;
        v75 = this;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
        position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
        position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
        *(UnityEngine_Vector3_o *)&v76 = UnityEngine_Transform__InverseTransformVector(
                                           (UnityEngine_Transform_o *)v75,
                                           position,
                                           0LL);
        v79 = fminf(v78, 1.0);
        if ( v78 < -0.3 )
          v80 = -0.3;
        else
          v80 = v79;
        v106 = UnityEngine_Transform__TransformDirection(
                 (UnityEngine_Transform_o *)v75,
                 *(UnityEngine_Vector3_o *)&v76,
                 0LL);
        v81 = v106.fields.x;
        v82 = v106.fields.y;
        v83 = v106.fields.z;
        IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, v84);
        v86 = BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          v86 = BattleMoviePlayer_TypeInfo;
        }
        static_fields = (UnityEngine_Vector3_o *)v86->static_fields;
        if ( !IsBossCamera )
        {
          *(UnityEngine_Vector3_o *)&v96 = UnityEngine_Transform__TransformPoint(
                                             (UnityEngine_Transform_o *)v75,
                                             static_fields[1],
                                             0LL);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_102;
          v99 = v96;
          v100 = v97;
          v101 = v98;
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !this )
            goto LABEL_102;
          v111.fields.z = v101 - v83;
          v111.fields.y = v100 - v82;
          v111.fields.x = v99 - v81;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v111, 0LL);
          goto LABEL_27;
        }
        v107.fields.z = static_fields->fields.z;
        v107.fields.x = 0.0;
        v107.fields.y = 0.0;
        *(UnityEngine_Vector3_o *)&v88 = UnityEngine_Transform__TransformPoint(
                                           (UnityEngine_Transform_o *)v75,
                                           v107,
                                           0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_102;
        v91 = v88;
        v92 = v89;
        v93 = v90;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_102;
        v94 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v108.fields.z = v93 - (float)(v83 * v94);
        v108.fields.y = v92 - (float)(v82 * v94);
        v108.fields.x = v91 - (float)(v81 * v94);
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v108, 0LL);
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_102;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_102;
      v73 = BattleMoviePlayer_TypeInfo;
    }
    else
    {
      if ( !BattleMoviePlayer__IsBossCamera(_4__this, method) )
        goto LABEL_27;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)BattleMoviePlayer_TypeInfo;
      if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)BattleMoviePlayer_TypeInfo;
      }
      if ( !_4__this->fields.currController )
        goto LABEL_102;
      v68 = *(float **)&this[2].fields.num;
      v70 = v68[4];
      v69 = v68[5];
      v71 = v68[3];
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this->fields.currController,
                                                              0LL);
      if ( !this )
        goto LABEL_102;
      v72 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
          / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
      v104.fields.z = v69 * v72;
      v104.fields.y = v70 * v72;
      v104.fields.x = v71 * v72;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v104, 0LL);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_102;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_102;
      v73 = BattleMoviePlayer_TypeInfo;
    }
    v95 = v73->static_fields->BossPanelDist / v73->static_fields->BaseDist;
    v109.fields.z = v95 * _4__this->fields.startPanelScale.fields.z;
    v109.fields.y = v95 * _4__this->fields.startPanelScale.fields.y;
    v109.fields.x = v95 * _4__this->fields.startPanelScale.fields.x;
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v109, 0LL);
LABEL_27:
    if ( v4->fields._restTime_5__5 > 0.0 )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B649A4(p__2__current, 0, v2, v3);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    goto LABEL_60;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_102;
    pastMovieObj = (UnityEngine_Object_o *)_4__this->fields.pastMovieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(pastMovieObj, 0LL, 0LL) )
    {
LABEL_68:
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)_4__this->fields.ObjList;
      if ( this )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)_4__this->fields.pastMovieObj,
          (const MethodInfo_34B1590 *)Method_System_Collections_Generic_List_GameObject__Remove__);
        v65 = (UnityEngine_Object_o *)_4__this->fields.pastMovieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69137476(v65, 0LL);
        _4__this->fields.pastController = 0LL;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.pastController, 0, v66, v67);
        return 0;
      }
LABEL_102:
      sub_1B64C5C(this, method);
    }
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)_4__this->fields.pastMovieObj;
    if ( !this )
      goto LABEL_102;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    _4__this->fields.pastController = (struct CriManaMovieController_o *)Component_object;
    sub_1B649A4(
      (ServantStatusBattleListViewItem_o *)&_4__this->fields.pastController,
      (int32_t)Component_object,
      v17,
      v18);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)_4__this->fields.pastMovieObj;
    if ( !this )
      goto LABEL_102;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !this )
      goto LABEL_102;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
    _4__this->fields.pastMaterial = material;
    p_pastMaterial = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o **)&_4__this->fields.pastMaterial;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.pastMaterial, (int32_t)material, v21, v22);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)_4__this->fields.MovieInfoList;
    if ( !this )
      goto LABEL_102;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v4->fields.num,
             (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    v4->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
    v24 = &v4->fields._movInfo_5__2;
    sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, (int32_t)Item, v25, v26);
    v27 = v4->fields._movInfo_5__2;
    if ( !v27 )
      goto LABEL_102;
    validTime = v27->fields.validTime;
    if ( validTime <= 0.0 )
    {
      v29 = _4__this->fields.currController;
      if ( !v29 )
        goto LABEL_102;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)v29->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_102;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
      if ( !this )
        goto LABEL_102;
      v27 = *v24;
      if ( !*v24 )
        goto LABEL_102;
      validTime = (float)LODWORD(this->fields._movInfo_5__2);
    }
    effectRestTime = v27->fields.effectRestTime;
    v4->fields._pastError_5__4 = 0;
    v4->fields._effectTime_5__3 = fmaxf(validTime - effectRestTime, 0.0);
    v31 = _4__this->fields.currController;
    if ( !v31 )
      goto LABEL_102;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__34_o *)v31->fields._player_k__BackingField;
    if ( !this )
      goto LABEL_102;
    v4->fields._restTime_5__5 = validTime - (float)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
    this = *p_pastMaterial;
    if ( !*p_pastMaterial )
      goto LABEL_102;
    if ( _4__this->fields.OverrideZDepth )
      v32 = 8;
    else
      v32 = 4;
    UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16344/*"_ZTestMode"*/, v32, 0LL);
    goto LABEL_27;
  }
  return 0;
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovieFadeOut_d__34__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__PlayMovieFadeOut_d__34__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovieFadeOut_d__34_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_BattleMoviePlayer__PlayMovieFadeOut_d__34_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovieFadeOut_d__34__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__34_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__34__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovieFadeOut_d__34_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__PlayMovie_d__33___ctor(
        BattleMoviePlayer__PlayMovie_d__33_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMoviePlayer__PlayMovie_d__33__MoveNext(
        BattleMoviePlayer__PlayMovie_d__33_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleMoviePlayer__PlayMovie_d__33_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *v10; // x21
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **p_movInfo_5__2; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  float validTime; // s0
  struct CriManaMovieController_o *v16; // x8
  struct CriManaMovieController_o *v17; // x8
  struct CriManaMovieController_o *currController; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  float v22; // s14
  struct BattlePerformance_o *perf; // x8
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x9
  struct CriManaMovieController_o *v25; // x8
  int32_t DisplayedFrameNo; // w0
  float skipFrame_5__5; // s8
  int32_t v28; // w21
  int32_t v29; // w2
  int32_t v30; // w3
  _BOOL4 KeepStartPosition; // w8
  struct BattlePerformance_o *v32; // x8
  struct CriManaMovieController_o *v33; // x8
  int32_t v34; // w20
  float timeScale; // s0
  struct BattleMoviePlayer_MovieInfo_o *v36; // x8
  float *v37; // x9
  float v38; // s8
  float v39; // s9
  float v40; // s10
  float v41; // s0
  BattleMoviePlayer_c *v42; // x8
  __int64 v43; // x9
  float v44; // w10
  __int64 v45; // x9
  struct BattlePerformance_o *v46; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v50; // x1
  char v51; // w22
  float v52; // s11
  float v53; // s12
  float v54; // s13
  BattleMoviePlayer__PlayMovie_d__33_o *v55; // x21
  float v56; // s0
  BattleMoviePlayer__PlayMovie_d__33_o *v57; // x21
  int v58; // s0
  float v60; // s2
  float v61; // s4
  float v62; // s2
  float v63; // s8
  float v64; // s9
  float v65; // s10
  const MethodInfo *v66; // x1
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v68; // x8
  UnityEngine_Vector3_o *static_fields; // x8
  float v70; // s0
  float v71; // s1
  float v72; // s2
  float v73; // s11
  float v74; // s12
  float v75; // s13
  float v76; // s0
  float v77; // s0
  struct BattleMoviePlayer_MovieInfo_o *v78; // x8
  struct CriManaMovieController_o *v79; // x8
  int32_t v80; // w0
  ServantStatusBattleListViewItem_o *v81; // x19
  bool result; // w0
  float v83; // s0
  float v84; // s1
  float v85; // s2
  float v86; // s11
  float v87; // s12
  float v88; // s13
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A01120 & 1) == 0 )
  {
    sub_1B64A00(&BattleMoviePlayer_TypeInfo, method);
    sub_1B64A00(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v5);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v6);
    this = (BattleMoviePlayer__PlayMovie_d__33_o *)sub_1B64A00(&UnityEngine_Object_TypeInfo, v7);
    byte_4A01120 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  switch ( _1__state )
  {
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_104;
      currController = _4__this->fields.currController;
      if ( !currController )
        goto LABEL_104;
      player_k__BackingField = currController->fields._player_k__BackingField;
      if ( !player_k__BackingField )
      {
LABEL_102:
        v4->fields._movInfo_5__2 = 0LL;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, 0, v2, v3);
        return 0;
      }
      this = (BattleMoviePlayer__PlayMovie_d__33_o *)CriMana_Player__GetDisplayedFrameNo(player_k__BackingField, 0LL);
      v22 = (float)(int)this;
      if ( v4->fields._effectTime_5__4 <= (float)(int)this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)v4->fields._movInfo_5__2;
        if ( !this )
          goto LABEL_104;
        if ( *(_QWORD *)&this->fields.num )
        {
          UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
          this = (BattleMoviePlayer__PlayMovie_d__33_o *)v4->fields._movInfo_5__2;
          if ( !this )
            goto LABEL_104;
        }
        *(_QWORD *)&this->fields.num = 0LL;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v20, v21);
      }
      if ( !_4__this->fields.KeepStartPosition )
      {
        if ( !BattleMoviePlayer__IsBossCamera(_4__this, method) )
          goto LABEL_100;
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovie_d__33_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !_4__this->fields.currController )
          goto LABEL_104;
        v37 = *(float **)&this[2].fields.num;
        v39 = v37[4];
        v38 = v37[5];
        v40 = v37[3];
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)_4__this->fields.currController,
                                                         0LL);
        if ( !this )
          goto LABEL_104;
        v41 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v92.fields.z = v38 * v41;
        v92.fields.y = v39 * v41;
        v92.fields.x = v40 * v41;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v92, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_104;
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_104;
        v42 = BattleMoviePlayer_TypeInfo;
        goto LABEL_88;
      }
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_104;
      movInfo_5__2 = v4->fields._movInfo_5__2;
      if ( perf->fields._UsePlayMakerShakeParam_k__BackingField )
      {
        if ( !movInfo_5__2 )
          goto LABEL_104;
        movInfo_5__2->fields._UsePlayMakerShakeParam_k__BackingField = 1;
      }
      else if ( !movInfo_5__2 )
      {
        goto LABEL_104;
      }
      if ( movInfo_5__2->fields._UsePlayMakerShakeParam_k__BackingField )
      {
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovie_d__33_o *)BattleMoviePlayer_TypeInfo;
          perf = _4__this->fields.perf;
        }
        v43 = *(_QWORD *)&this[2].fields.num;
        v44 = *(float *)(v43 + 20);
        v45 = *(_QWORD *)(v43 + 12);
        _4__this->fields.startPanelPosition.fields.z = v44;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v45;
        if ( !perf )
          goto LABEL_104;
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_104;
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        v46 = _4__this->fields.perf;
        if ( !v46 )
          goto LABEL_104;
        if ( !this )
          goto LABEL_104;
        v93 = UnityEngine_Transform__InverseTransformVector(
                (UnityEngine_Transform_o *)this,
                v46->fields._CurrentShakeWidth_k__BackingField,
                0LL);
        x = v93.fields.x;
        y = v93.fields.y;
        z = v93.fields.z;
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)BattleMoviePlayer__IsBossCamera(_4__this, v50);
        if ( !_4__this->fields.currController )
          goto LABEL_104;
        v51 = (char)this;
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)_4__this->fields.currController,
                                                         0LL);
        v52 = _4__this->fields.startPanelPosition.fields.x;
        v53 = _4__this->fields.startPanelPosition.fields.y;
        v54 = _4__this->fields.startPanelPosition.fields.z;
        v55 = this;
        if ( (v51 & 1) != 0 )
        {
          this = (BattleMoviePlayer__PlayMovie_d__33_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__33_o *)BattleMoviePlayer_TypeInfo;
          }
          if ( !v55 )
            goto LABEL_104;
          v56 = *(float *)(*(_QWORD *)&this[2].fields.num + 8LL) / *(float *)(*(_QWORD *)&this[2].fields.num + 4LL);
          v94.fields.z = (float)(v54 * v56) + (float)(z * v56);
          v94.fields.y = (float)(v53 * v56) + (float)(y * v56);
          v94.fields.x = (float)(v52 * v56) + (float)(x * v56);
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v55, v94, 0LL);
          goto LABEL_85;
        }
        if ( !this )
          goto LABEL_104;
        v100.fields.z = z + v54;
        v100.fields.y = y + v53;
        v100.fields.x = x + v52;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v100, 0LL);
      }
      else
      {
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_104;
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_104;
        v57 = this;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
        position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
        position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
        *(UnityEngine_Vector3_o *)&v58 = UnityEngine_Transform__InverseTransformVector(
                                           (UnityEngine_Transform_o *)v57,
                                           position,
                                           0LL);
        v61 = fminf(v60, 1.0);
        if ( v60 < -0.3 )
          v62 = -0.3;
        else
          v62 = v61;
        v96 = UnityEngine_Transform__TransformDirection(
                (UnityEngine_Transform_o *)v57,
                *(UnityEngine_Vector3_o *)&v58,
                0LL);
        v63 = v96.fields.x;
        v64 = v96.fields.y;
        v65 = v96.fields.z;
        IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, v66);
        v68 = BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          v68 = BattleMoviePlayer_TypeInfo;
        }
        static_fields = (UnityEngine_Vector3_o *)v68->static_fields;
        if ( IsBossCamera )
        {
          v97.fields.z = static_fields->fields.z;
          v97.fields.x = 0.0;
          v97.fields.y = 0.0;
          *(UnityEngine_Vector3_o *)&v70 = UnityEngine_Transform__TransformPoint(
                                             (UnityEngine_Transform_o *)v57,
                                             v97,
                                             0LL);
          this = (BattleMoviePlayer__PlayMovie_d__33_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_104;
          v73 = v70;
          v74 = v71;
          v75 = v72;
          this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_104;
          v76 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
              / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
          v98.fields.z = v75 - (float)(v65 * v76);
          v98.fields.y = v74 - (float)(v64 * v76);
          v98.fields.x = v73 - (float)(v63 * v76);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v98, 0LL);
LABEL_85:
          this = (BattleMoviePlayer__PlayMovie_d__33_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_104;
          this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_104;
          v42 = BattleMoviePlayer_TypeInfo;
LABEL_88:
          v77 = v42->static_fields->BossPanelDist / v42->static_fields->BaseDist;
          v99.fields.z = v77 * _4__this->fields.startPanelScale.fields.z;
          v99.fields.y = v77 * _4__this->fields.startPanelScale.fields.y;
          v99.fields.x = v77 * _4__this->fields.startPanelScale.fields.x;
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v99, 0LL);
          goto LABEL_100;
        }
        *(UnityEngine_Vector3_o *)&v83 = UnityEngine_Transform__TransformPoint(
                                           (UnityEngine_Transform_o *)v57,
                                           static_fields[1],
                                           0LL);
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_104;
        v86 = v83;
        v87 = v84;
        v88 = v85;
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_104;
        v101.fields.z = v88 - v65;
        v101.fields.y = v87 - v64;
        v101.fields.x = v86 - v63;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v101, 0LL);
      }
LABEL_100:
      if ( (float)((float)(v4->fields._skipFrame_5__5 + v22) + v4->fields._playSpeed_5__6) < v4->fields._fadeTime_5__3 )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B649A4(p__2__current, 0, v2, v3);
        *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
        return 1;
      }
      goto LABEL_102;
    case 1:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_104;
      v25 = _4__this->fields.currController;
      if ( !v25 )
        goto LABEL_104;
      this = (BattleMoviePlayer__PlayMovie_d__33_o *)v25->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_104;
      DisplayedFrameNo = CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      skipFrame_5__5 = v4->fields._skipFrame_5__5;
      v28 = DisplayedFrameNo;
      v4->fields._skipFrame_5__5 = skipFrame_5__5 + UnityEngine_Time__get_timeScale(0LL);
      if ( (v28 & 0x80000000) != 0 )
      {
LABEL_96:
        v4->fields.__2__current = 0LL;
        v81 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B649A4(v81, 0, v29, v30);
        result = 1;
        *(_DWORD *)&v81[-1].fields.isMine = 1;
        return result;
      }
      goto LABEL_37;
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_104;
      v10 = (UnityEngine_Object_o *)_4__this->fields.currController;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
        return 0;
      this = (BattleMoviePlayer__PlayMovie_d__33_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_104;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v4->fields.num,
               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v4->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      p_movInfo_5__2 = &v4->fields._movInfo_5__2;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, (int32_t)Item, v13, v14);
      if ( !v4->fields._movInfo_5__2 )
        goto LABEL_104;
      validTime = v4->fields._movInfo_5__2->fields.validTime;
      if ( validTime <= 0.0 )
      {
        v16 = _4__this->fields.currController;
        if ( !v16 )
          goto LABEL_104;
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)v16->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_104;
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
        if ( this )
        {
          v17 = _4__this->fields.currController;
          if ( !v17 )
            goto LABEL_104;
          this = (BattleMoviePlayer__PlayMovie_d__33_o *)v17->fields._player_k__BackingField;
          if ( !this )
            goto LABEL_104;
          this = (BattleMoviePlayer__PlayMovie_d__33_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
          if ( !this )
            goto LABEL_104;
          validTime = (float)LODWORD(this->fields._movInfo_5__2);
        }
        else
        {
          validTime = 0.0;
        }
      }
      v78 = *p_movInfo_5__2;
      if ( !*p_movInfo_5__2 )
        goto LABEL_104;
      v4->fields._fadeTime_5__3 = fmaxf(validTime - v78->fields.fadeRestTime, 0.0);
      v4->fields._effectTime_5__4 = fmaxf(validTime - v78->fields.effectRestTime, 0.0);
      v79 = _4__this->fields.currController;
      if ( !v79 )
        goto LABEL_104;
      this = (BattleMoviePlayer__PlayMovie_d__33_o *)v79->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_104;
      v80 = CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      v4->fields._skipFrame_5__5 = 0.0;
      if ( (v80 & 0x80000000) != 0 )
        goto LABEL_96;
LABEL_37:
      this = (BattleMoviePlayer__PlayMovie_d__33_o *)_4__this->fields.currController;
      if ( this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( this )
        {
          v90 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
          this = (BattleMoviePlayer__PlayMovie_d__33_o *)_4__this->fields.currController;
          _4__this->fields.startPanelPosition = v90;
          if ( this )
          {
            this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( this )
            {
              localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
              KeepStartPosition = _4__this->fields.KeepStartPosition;
              _4__this->fields.startPanelScale = localScale;
              if ( KeepStartPosition )
              {
                v32 = _4__this->fields.perf;
                if ( !v32 )
                  goto LABEL_104;
                this = (BattleMoviePlayer__PlayMovie_d__33_o *)v32->fields.actorcamera;
                if ( !this )
                  goto LABEL_104;
                this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__get_transform(
                                                                 (UnityEngine_Component_o *)this,
                                                                 0LL);
                if ( !this )
                  goto LABEL_104;
                _4__this->fields.cameraStartPosition = UnityEngine_Transform__get_position(
                                                         (UnityEngine_Transform_o *)this,
                                                         0LL);
              }
              this = (BattleMoviePlayer__PlayMovie_d__33_o *)_4__this->fields.currController;
              if ( this )
              {
                this = (BattleMoviePlayer__PlayMovie_d__33_o *)UnityEngine_Component__GetComponent_object_(
                                                                 (UnityEngine_Component_o *)this,
                                                                 (const MethodInfo_2E32784 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                if ( this )
                {
                  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 1, 0LL);
                  v33 = _4__this->fields.currController;
                  if ( v33 )
                  {
                    this = (BattleMoviePlayer__PlayMovie_d__33_o *)v33->fields._player_k__BackingField;
                    if ( this )
                    {
                      v34 = CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
                      timeScale = UnityEngine_Time__get_timeScale(0LL);
                      v36 = v4->fields._movInfo_5__2;
                      if ( v36 )
                      {
                        v22 = (float)v34;
                        v4->fields._playSpeed_5__6 = timeScale * v36->fields.playSpeed;
                        goto LABEL_100;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_104:
      sub_1B64C5C(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovie_d__33__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovie_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__PlayMovie_d__33__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovie_d__33_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_BattleMoviePlayer__PlayMovie_d__33_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovie_d__33__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovie_d__33_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__PlayMovie_d__33__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovie_d__33_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__StartMovie_d__27___ctor(
        BattleMoviePlayer__StartMovie_d__27_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleMoviePlayer__StartMovie_d__27__MoveNext(
        BattleMoviePlayer__StartMovie_d__27_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleMoviePlayer__StartMovie_d__27_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  System_Collections_Generic_List_T__o *MovieInfoList; // x21
  BattleMoviePlayer___c_c *v16; // x0
  System_Func_object__bool__o *_9__27_0; // x22
  Il2CppObject *v18; // x23
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x21
  int32_t cullingMask; // w0
  Il2CppObject *Component_object; // x0
  struct CriManaMovieController_o **p_currController; // x21
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v29; // x8
  CriMana_Player_o *player_k__BackingField; // x22
  float timeScale; // s0
  float v32; // s8
  const MethodInfo *v33; // x2
  System_Collections_IEnumerator_o *v34; // x0
  UnityEngine_Coroutine_o *started; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v37; // w2
  int32_t v38; // w3
  BattlePerformance_o *v39; // x0
  int v40; // w22
  struct UnityEngine_GameObject_o *nextMovieObj; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  const MethodInfo *v44; // x2
  System_Collections_IEnumerator_o *v45; // x0
  const MethodInfo *v46; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v47; // x8
  int32_t v48; // w1
  BattleMoviePlayer__StartMovie_d__27_o *v49; // x22
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v50; // x8
  struct UnityEngine_GameObject_o *v51; // x1
  BattleMoviePlayer__StartMovie_d__27_o **p_currMovieObj; // x21
  int v53; // w23
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  const MethodInfo *v58; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v59; // x8
  int size; // w8
  System_Collections_IEnumerator_o *v61; // x0
  System_Collections_Generic_List_T__o *v62; // x22
  System_Collections_IEnumerator_o *v63; // x21
  BattleMoviePlayer___c_c *v64; // x8
  System_Func_object__bool__o *_9__27_1; // x23
  Il2CppObject *v66; // x24
  struct BattleMoviePlayer___c_StaticFields *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  struct BattlePerformance_o *v70; // x8
  UnityEngine_Camera_o *v71; // x22
  int32_t v72; // w0
  UnityEngine_Coroutine_o *v73; // x0
  ServantStatusBattleListViewItem_o *v74; // x19
  int32_t v75; // w2
  int32_t v76; // w3
  int v77; // w8
  Il2CppObject *v78; // x0
  struct CriManaMovieController_o **v79; // x21
  int32_t v80; // w2
  int32_t v81; // w3
  CriMana_Player_o *v82; // x22
  float v83; // s0
  float v84; // s8
  const MethodInfo *v85; // x2
  System_Collections_IEnumerator_o *v86; // x0
  UnityEngine_Coroutine_o *v87; // x0
  int32_t v88; // w2
  int32_t v89; // w3

  v4 = this;
  if ( (byte_4A01122 & 1) == 0 )
  {
    sub_1B64A00(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1B64A00(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v5);
    sub_1B64A00(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v6);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v7);
    sub_1B64A00(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v8);
    sub_1B64A00(&UnityEngine_Object_TypeInfo, v9);
    sub_1B64A00(&Method_BattleMoviePlayer___c__StartMovie_b__27_0__, v10);
    sub_1B64A00(&Method_BattleMoviePlayer___c__StartMovie_b__27_1__, v11);
    this = (BattleMoviePlayer__StartMovie_d__27_o *)sub_1B64A00(&BattleMoviePlayer___c_TypeInfo, v12);
    byte_4A01122 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_69;
      currMovieObj = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleMoviePlayer__StartMovie_d__27_o *)UnityEngine_Object__op_Inequality(currMovieObj, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_29;
      MovieInfoList = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
      v16 = BattleMoviePlayer___c_TypeInfo;
      if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
        v16 = BattleMoviePlayer___c_TypeInfo;
      }
      _9__27_0 = (System_Func_object__bool__o *)v16->static_fields->__9__27_0;
      if ( !_9__27_0 )
      {
        if ( !v16->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v16);
          v16 = BattleMoviePlayer___c_TypeInfo;
        }
        v18 = (Il2CppObject *)v16->static_fields->__9;
        _9__27_0 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
        System_Func_object__bool____ctor(_9__27_0, v18, Method_BattleMoviePlayer___c__StartMovie_b__27_0__, 0LL);
        static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
        static_fields->__9__27_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__27_0;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v20, v21);
      }
      this = (BattleMoviePlayer__StartMovie_d__27_o *)BasicHelper__Any_object_(
                                                        MovieInfoList,
                                                        (System_Func_T__bool__o *)_9__27_0,
                                                        (const MethodInfo_2E27164 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_18;
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_69;
      actorcamera = perf->fields.actorcamera;
      if ( !actorcamera )
        goto LABEL_69;
      cullingMask = UnityEngine_Camera__get_cullingMask(perf->fields.actorcamera, 0LL);
      UnityEngine_Camera__set_cullingMask(actorcamera, cullingMask & 0xFFEFFFFF, 0LL);
LABEL_18:
      this = (BattleMoviePlayer__StartMovie_d__27_o *)_4__this->fields.currMovieObj;
      if ( !this )
        goto LABEL_69;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      _4__this->fields.currController = (struct CriManaMovieController_o *)Component_object;
      p_currController = &_4__this->fields.currController;
      sub_1B649A4(
        (ServantStatusBattleListViewItem_o *)&_4__this->fields.currController,
        (int32_t)Component_object,
        v27,
        v28);
      v29 = _4__this->fields.MovieInfoList;
      if ( !v29 )
        goto LABEL_69;
      if ( v29->fields._size >= 1 )
      {
        if ( *p_currController )
        {
          player_k__BackingField = (*p_currController)->fields._player_k__BackingField;
          timeScale = UnityEngine_Time__get_timeScale(0LL);
          this = (BattleMoviePlayer__StartMovie_d__27_o *)_4__this->fields.MovieInfoList;
          if ( this )
          {
            v32 = timeScale;
            this = (BattleMoviePlayer__StartMovie_d__27_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              0,
                                                              (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
            if ( this )
            {
              if ( player_k__BackingField )
              {
                CriMana_Player__SetSpeed(player_k__BackingField, v32 * *(float *)&this[1].monitor, 0LL);
                if ( *p_currController )
                {
                  this = (BattleMoviePlayer__StartMovie_d__27_o *)(*p_currController)->fields._player_k__BackingField;
                  if ( this )
                  {
                    CriMana_Player__Start((CriMana_Player_o *)this, 0LL);
                    v34 = BattleMoviePlayer__PlayMovie(_4__this, 0, v33);
                    started = UnityEngine_MonoBehaviour__StartCoroutine_69122748(
                                (UnityEngine_MonoBehaviour_o *)_4__this,
                                v34,
                                0LL);
                    v4->fields.__2__current = (Il2CppObject *)started;
                    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1B649A4(p__2__current, (int32_t)started, v37, v38);
                    LOBYTE(v39) = 1;
                    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
                    return (char)v39;
                  }
                }
              }
            }
          }
        }
        goto LABEL_69;
      }
LABEL_29:
      v40 = 0;
      for ( v4->fields._i_5__2 = 0; ; v4->fields._i_5__2 = v40 )
      {
        if ( !_4__this )
          goto LABEL_69;
        v50 = _4__this->fields.MovieInfoList;
        if ( !v50 )
          goto LABEL_69;
        p_currMovieObj = (BattleMoviePlayer__StartMovie_d__27_o **)&_4__this->fields.currMovieObj;
        v51 = _4__this->fields.currMovieObj;
        v53 = v50->fields._size - 1;
        _4__this->fields.pastMovieObj = v51;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v51, v2, v3);
        if ( v40 >= v53 )
        {
          _4__this->fields.currMovieObj = 0LL;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, 0, v54, v55);
          _4__this->fields.nextMovieObj = 0LL;
          sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, 0, v56, v57);
          v59 = _4__this->fields.MovieInfoList;
          if ( !v59 )
            goto LABEL_69;
          size = v59->fields._size;
          if ( size < 1 )
          {
LABEL_56:
            v39 = _4__this->fields.perf;
            if ( v39 )
            {
              BattlePerformance__OnBattleMovieEnd(v39, 0LL);
LABEL_58:
              LOBYTE(v39) = 0;
            }
            return (char)v39;
          }
          v61 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, size - 1, v58);
          v62 = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
          v63 = v61;
          v64 = BattleMoviePlayer___c_TypeInfo;
          if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
            v64 = BattleMoviePlayer___c_TypeInfo;
          }
          _9__27_1 = (System_Func_object__bool__o *)v64->static_fields->__9__27_1;
          if ( !_9__27_1 )
          {
            if ( !v64->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v64);
              v64 = BattleMoviePlayer___c_TypeInfo;
            }
            v66 = (Il2CppObject *)v64->static_fields->__9;
            _9__27_1 = (System_Func_object__bool__o *)sub_1B64C4C(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__27_1, v66, Method_BattleMoviePlayer___c__StartMovie_b__27_1__, 0LL);
            v67 = BattleMoviePlayer___c_TypeInfo->static_fields;
            v67->__9__27_1 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__27_1;
            sub_1B649A4((ServantStatusBattleListViewItem_o *)&v67->__9__27_1, (int32_t)_9__27_1, v68, v69);
          }
          this = (BattleMoviePlayer__StartMovie_d__27_o *)BasicHelper__Any_object_(
                                                            v62,
                                                            (System_Func_T__bool__o *)_9__27_1,
                                                            (const MethodInfo_2E27164 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v70 = _4__this->fields.perf;
            if ( !v70 )
              goto LABEL_69;
            v71 = v70->fields.actorcamera;
            if ( !v71 )
              goto LABEL_69;
            v72 = UnityEngine_Camera__get_cullingMask(v70->fields.actorcamera, 0LL);
            UnityEngine_Camera__set_cullingMask(v71, v72 | 0x100000, 0LL);
          }
          v73 = UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)_4__this, v63, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v73;
          v74 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B649A4(v74, (int32_t)v73, v75, v76);
          v77 = 3;
          goto LABEL_67;
        }
        nextMovieObj = _4__this->fields.nextMovieObj;
        _4__this->fields.currMovieObj = nextMovieObj;
        sub_1B649A4(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj,
          (int32_t)nextMovieObj,
          v54,
          v55);
        _4__this->fields.nextMovieObj = 0LL;
        sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, 0, v42, v43);
        v45 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, v4->fields._i_5__2, v44);
        this = (BattleMoviePlayer__StartMovie_d__27_o *)UnityEngine_MonoBehaviour__StartCoroutine_69122748(
                                                          (UnityEngine_MonoBehaviour_o *)_4__this,
                                                          v45,
                                                          0LL);
        v47 = _4__this->fields.MovieInfoList;
        if ( !v47 )
          goto LABEL_69;
        v48 = v4->fields._i_5__2 + 2;
        if ( v48 < v47->fields._size )
          BattleMoviePlayer__GetMoviePanelAdd(_4__this, v48, v46);
        v49 = *p_currMovieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleMoviePlayer__StartMovie_d__27_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v49,
                                                          0LL,
                                                          0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
LABEL_39:
        v40 = v4->fields._i_5__2 + 1;
      }
      this = *p_currMovieObj;
      if ( !*p_currMovieObj )
        goto LABEL_69;
      v78 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_2E8A7CC *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      _4__this->fields.currController = (struct CriManaMovieController_o *)v78;
      v79 = &_4__this->fields.currController;
      sub_1B649A4((ServantStatusBattleListViewItem_o *)&_4__this->fields.currController, (int32_t)v78, v80, v81);
      if ( !_4__this->fields.currController
        || (v82 = _4__this->fields.currController->fields._player_k__BackingField,
            v83 = UnityEngine_Time__get_timeScale(0LL),
            (this = (BattleMoviePlayer__StartMovie_d__27_o *)_4__this->fields.MovieInfoList) == 0LL)
        || (v84 = v83,
            (this = (BattleMoviePlayer__StartMovie_d__27_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)this,
                                                               v4->fields._i_5__2 + 1,
                                                               (const MethodInfo_34AFCF8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__)) == 0LL)
        || !v82
        || (CriMana_Player__SetSpeed(v82, v84 * *(float *)&this[1].monitor, 0LL), !*v79)
        || (this = (BattleMoviePlayer__StartMovie_d__27_o *)(*v79)->fields._player_k__BackingField) == 0LL )
      {
LABEL_69:
        sub_1B64C5C(this, method);
      }
      CriMana_Player__Start((CriMana_Player_o *)this, 0LL);
      v86 = BattleMoviePlayer__PlayMovie(_4__this, v4->fields._i_5__2 + 1, v85);
      v87 = UnityEngine_MonoBehaviour__StartCoroutine_69122748((UnityEngine_MonoBehaviour_o *)_4__this, v86, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v87;
      v74 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B649A4(v74, (int32_t)v87, v88, v89);
      v77 = 2;
LABEL_67:
      *(_DWORD *)&v74[-1].fields.isMine = v77;
      LOBYTE(v39) = 1;
      return (char)v39;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_29;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_39;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_69;
      BattleMoviePlayer__Dispose(_4__this, method);
      goto LABEL_56;
    default:
      goto LABEL_58;
  }
}


Il2CppObject *__fastcall BattleMoviePlayer__StartMovie_d__27__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__StartMovie_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__StartMovie_d__27__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__StartMovie_d__27_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B64A14(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B64C4C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B64A14(&Method_BattleMoviePlayer__StartMovie_d__27_System_Collections_IEnumerator_Reset__);
  sub_1B64B28(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__StartMovie_d__27__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__StartMovie_d__27_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__StartMovie_d__27__System_IDisposable_Dispose(
        BattleMoviePlayer__StartMovie_d__27_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A0111E & 1) == 0 )
  {
    sub_1B64A00(&BattleMoviePlayer___c_TypeInfo, v1);
    byte_4A0111E = 1;
  }
  v2 = (Il2CppObject *)sub_1B64C4C(BattleMoviePlayer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleMoviePlayer___c_TypeInfo->static_fields->__9 = (struct BattleMoviePlayer___c_o *)v2;
  sub_1B649A4((ServantStatusBattleListViewItem_o *)BattleMoviePlayer___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleMoviePlayer___c___ctor(BattleMoviePlayer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleMoviePlayer___c___Dispose_b__21_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64C5C(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___StartMovie_b__27_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64C5C(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___StartMovie_b__27_1(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64C5C(this, 0LL);
  return x->fields.cameraType == 1;
}