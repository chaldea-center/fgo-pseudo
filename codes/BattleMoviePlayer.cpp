void __fastcall BattleMoviePlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FE9FC & 1) == 0 )
  {
    sub_1B640C8(&BattleMoviePlayer_TypeInfo, v1);
    byte_49FE9FC = 1;
  }
  LODWORD(BattleMoviePlayer_TypeInfo->static_fields->DefaultFov) = (struct BattleMoviePlayer_StaticFields)1109393408;
}


void __fastcall BattleMoviePlayer___ctor(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x1
  UnityEngine_Vector3_c *v16; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  _BOOL4 v19; // w9
  struct UnityEngine_Vector3_StaticFields *v20; // x10
  float v21; // s1
  struct UnityEngine_Vector3_StaticFields *v22; // x8
  float v23; // s1

  if ( (byte_49FE9FB & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo, v5);
    sub_1B640C8(&System_Collections_Generic_List_GameObject__TypeInfo, v6);
    byte_49FE9FB = 1;
  }
  this->fields.KeepStartPosition = 1;
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
  this->fields.MovieInfoList = (struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *)v7;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.MovieInfoList, (int32_t)v7, v8, v9);
  v12 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_GameObject__TypeInfo,
                                                       v10,
                                                       v11);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ObjList = (struct System_Collections_Generic_List_GameObject__o *)v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.ObjList, (int32_t)v12, v13, v14);
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v15);
    byte_49F7111 = 1;
  }
  v16 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.startPanelPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.startPanelPosition.fields.z = z;
  if ( byte_49F7116 )
  {
    v19 = 0;
  }
  else
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v15);
    v16 = UnityEngine_Vector3_TypeInfo;
    byte_49F7116 = 1;
    v19 = byte_49F7111 == 0;
  }
  v20 = v16->static_fields;
  v21 = v20->oneVector.fields.z;
  *(_QWORD *)&this->fields.startPanelScale.fields.x = *(_QWORD *)&v20->oneVector.fields.x;
  this->fields.startPanelScale.fields.z = v21;
  if ( v19 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v15);
    v16 = UnityEngine_Vector3_TypeInfo;
    byte_49F7111 = 1;
  }
  v22 = v16->static_fields;
  v23 = v22->zeroVector.fields.z;
  *(_QWORD *)&this->fields.cameraStartPosition.fields.x = *(_QWORD *)&v22->zeroVector.fields.x;
  this->fields.cameraStartPosition.fields.z = v23;
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
  const MethodInfo_34CE468 **v32; // x29
  int32_t v33; // w27
  __int64 v34; // x1
  __int64 v35; // x2
  BattleMoviePlayer_o *v36; // x26
  float v37; // s8
  float v38; // s9
  int32_t v39; // w19
  float Item; // s10
  BattleMoviePlayer_o *v41; // x25
  float v42; // s11
  const MethodInfo_34CE468 **v43; // x28
  System_Collections_Generic_List_float__o *v44; // x29
  System_Collections_Generic_List_object__o *MovieInfoList; // x20
  BattleMoviePlayer_MovieInfo_o *v46; // x23
  const MethodInfo *v47; // x5
  int32_t v48; // w2
  int32_t v49; // w3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_List_T__o *v54; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_UnityEvent__o *v55; // [xsp+8h] [xbp-B8h]
  BattleMoviePlayer_o *v58; // [xsp+20h] [xbp-A0h]
  int32_t typea; // [xsp+2Ch] [xbp-94h]

  v16 = (System_Collections_Generic_List_T__o *)type;
  v58 = this;
  if ( (byte_49FE9FA & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__, type);
    sub_1B640C8(&Method_System_Collections_Generic_List_float__get_Count__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Count__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_UnityEvent__get_Count__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Count__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Count__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__get_Item__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_UnityEvent__get_Item__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__, v24);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__get_Item__, v25);
    sub_1B640C8(&Method_System_Collections_Generic_List_float__get_Item__, v26);
    sub_1B640C8(&BattleMoviePlayer_MovieInfo_TypeInfo, v27);
    this = (BattleMoviePlayer_o *)sub_1B640C8(&StringLiteral_1/*""*/, v28);
    byte_49FE9FA = 1;
  }
  v58->fields.KeepStartPosition = keepStartPosition;
  v58->fields.OverrideZDepth = overrideZDepth;
  if ( !path )
LABEL_44:
    sub_1B64324(this);
  v29 = valid;
  v30 = speed;
  if ( path->fields._size >= 1 )
  {
    v32 = (const MethodInfo_34CE468 **)&Method_System_Collections_Generic_List_float__get_Item__;
    v33 = 0;
    v54 = v16;
    v55 = effect;
    do
    {
      this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)path,
                                      v33,
                                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                                              (const MethodInfo_34924B8 *)Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
              typea = (int)this;
            }
            if ( v33 >= path->fields._size )
            {
              v36 = (BattleMoviePlayer_o *)StringLiteral_1/*""*/;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)path,
                                              v33,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_string__get_Item__);
              v36 = this;
            }
            if ( !v29 )
              goto LABEL_44;
            v37 = 0.0;
            v38 = 0.0;
            if ( v33 < v29->fields._size )
              v38 = fmaxf(System_Collections_Generic_List_float___get_Item(v29, v33, *v32), 0.0);
            if ( v33 < fade->fields._size )
              v37 = fmaxf(System_Collections_Generic_List_float___get_Item(fade, v33, *v32), 1.0);
            if ( v33 >= cam->fields._size )
            {
              v39 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_int___get_Item(
                                              cam,
                                              v33,
                                              (const MethodInfo_348FBEC *)Method_System_Collections_Generic_List_int__get_Item__);
              v39 = (int)this;
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
              v41 = 0LL;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)effect,
                                              v33,
                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_UnityEvent__get_Item__);
              v41 = this;
            }
            if ( !effRest )
              goto LABEL_44;
            v42 = 0.0;
            if ( v33 < effRest->fields._size )
              v42 = System_Collections_Generic_List_float___get_Item(effRest, v33, *v32);
            v43 = v32;
            v44 = effRest;
            MovieInfoList = (System_Collections_Generic_List_object__o *)v58->fields.MovieInfoList;
            v46 = (BattleMoviePlayer_MovieInfo_o *)sub_1B64314(BattleMoviePlayer_MovieInfo_TypeInfo, v34, v35);
            BattleMoviePlayer_MovieInfo___ctor(
              v46,
              typea,
              (System_String_o *)v36,
              v38,
              v37,
              v39,
              Item,
              (UnityEngine_Events_UnityEvent_o *)v41,
              v42,
              v47);
            if ( !MovieInfoList )
              goto LABEL_44;
            items = MovieInfoList->fields._items;
            v16 = v54;
            effect = v55;
            v51 = Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__;
            ++MovieInfoList->fields._version;
            if ( !items )
              goto LABEL_44;
            size = MovieInfoList->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                MovieInfoList,
                (Il2CppObject *)v46,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = &items->obj.klass + size;
              MovieInfoList->fields._size = size + 1;
              v53[4] = (Il2CppClass *)v46;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v46, v48, v49);
            }
            effRest = v44;
            v32 = v43;
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
  __int64 v16; // x2
  System_Collections_Generic_List_T__o *MovieInfoList; // x20
  BattleMoviePlayer___c_c *v18; // x0
  System_Func_object__bool__o *_9__21_0; // x21
  Il2CppObject *v20; // x22
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct BattlePerformance_o *v24; // x8
  UnityEngine_Camera_o *actorcamera; // x20
  int32_t cullingMask; // w0
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v27; // x8
  int32_t size; // w2
  int v29; // w9
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v31; // x8
  int32_t v32; // w2
  int v33; // w9
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_49FE9F2 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B640C8(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Clear__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&Method_BattleMoviePlayer___c__Dispose_b__21_0__, v11);
    sub_1B640C8(&BattleMoviePlayer___c_TypeInfo, v12);
    byte_49FE9F2 = 1;
  }
  memset(&v36, 0, sizeof(v36));
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjList = (struct System_Collections_Generic_List_GameObject__o *)UnityEngine_Object__op_Inequality(perf, 0LL, 0LL);
  if ( ((unsigned __int8)ObjList & 1) != 0 )
  {
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v18 = BattleMoviePlayer___c_TypeInfo;
    if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
      v18 = BattleMoviePlayer___c_TypeInfo;
    }
    _9__21_0 = (System_Func_object__bool__o *)v18->static_fields->__9__21_0;
    if ( !_9__21_0 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = BattleMoviePlayer___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__21_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                  System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo,
                                                  v15,
                                                  v16);
      System_Func_object__bool____ctor(_9__21_0, v20, Method_BattleMoviePlayer___c__Dispose_b__21_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__21_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__21_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__21_0, (int32_t)_9__21_0, v22, v23);
    }
    ObjList = (struct System_Collections_Generic_List_GameObject__o *)BasicHelper__Any_object_(
                                                                        MovieInfoList,
                                                                        (System_Func_T__bool__o *)_9__21_0,
                                                                        (const MethodInfo_2E24870 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    if ( ((unsigned __int8)ObjList & 1) != 0 )
    {
      v24 = this->fields.perf;
      if ( !v24 )
        goto LABEL_34;
      actorcamera = v24->fields.actorcamera;
      if ( !actorcamera )
        goto LABEL_34;
      cullingMask = UnityEngine_Camera__get_cullingMask(v24->fields.actorcamera, 0LL);
      UnityEngine_Camera__set_cullingMask(actorcamera, cullingMask | 0x100000, 0LL);
    }
  }
  v27 = this->fields.MovieInfoList;
  if ( !v27 )
    goto LABEL_34;
  size = v27->fields._size;
  v29 = v27->fields._version + 1;
  v27->fields._size = 0;
  v27->fields._version = v29;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v27->fields._items, 0, size, 0LL);
  ObjList = this->fields.ObjList;
  if ( !ObjList )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)ObjList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v36 = v35;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v36.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v31 = this->fields.ObjList;
  if ( !v31 )
LABEL_34:
    sub_1B64324(ObjList);
  v32 = v31->fields._size;
  v33 = v31->fields._version + 1;
  v31->fields._size = 0;
  v31->fields._version = v33;
  if ( v32 >= 1 )
    System_Array__Clear((System_Array_o *)v31->fields._items, 0, v32, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoviePlayer__GetMoviePanelAdd(BattleMoviePlayer_o *this, int32_t i, const MethodInfo *method)
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
  Il2CppObject *v25; // x1
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  __int64 v29; // x8
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *moviePrefab; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v33; // x0
  struct UnityEngine_GameObject_o **p_nextMovieObj; // x21
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w2
  int32_t v38; // w3
  Il2CppObject *v39; // x1
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  int v44; // w8
  UnityEngine_Transform_o *v45; // x21
  unsigned int position; // s0
  float v47; // s8
  float v48; // s1
  float v49; // s9
  float v50; // s2
  UnityEngine_Material_o *baseMat; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  UnityEngine_Material_o *v54; // x21
  const MethodInfo *v55; // x3
  Il2CppObject *v56; // [xsp+8h] [xbp-48h] BYREF
  Il2CppObject *component; // [xsp+28h] [xbp-28h] BYREF
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FE9F4 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BattlePerformance___, *(_QWORD *)&i);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v11);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v12);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    byte_49FE9F4 = 1;
  }
  component = 0LL;
  v56 = 0LL;
  MovieInfoList = (int *)this->fields.MovieInfoList;
  if ( !MovieInfoList )
    goto LABEL_60;
  if ( MovieInfoList[6] <= i )
    return;
  MovieInfoList = (int *)System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)MovieInfoList,
                           i,
                           (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
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
          v33 = UnityEngine_Object__Instantiate_object__49003980(
                  moviePrefab,
                  transform,
                  (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
          this->fields.nextMovieObj = (struct UnityEngine_GameObject_o *)v33;
          p_nextMovieObj = &this->fields.nextMovieObj;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nextMovieObj, (int32_t)v33, v35, v36);
          MovieInfoList = (int *)this->fields.ObjList;
          if ( MovieInfoList )
          {
            v39 = (Il2CppObject *)*p_nextMovieObj;
            v40 = *((_QWORD *)MovieInfoList + 2);
            v41 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++MovieInfoList[7];
            if ( v40 )
            {
              v42 = MovieInfoList[6];
              if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)MovieInfoList,
                  v39,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
              }
              else
              {
                v43 = v40 + 8 * v42;
                MovieInfoList[6] = v42 + 1;
                *(_QWORD *)(v43 + 32) = v39;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v43 + 32), (int32_t)v39, v37, v38);
              }
              MovieInfoList = (int *)*p_nextMovieObj;
              if ( *p_nextMovieObj )
              {
                if ( UnityEngine_GameObject__TryGetComponent_object_(
                       (UnityEngine_GameObject_o *)MovieInfoList,
                       &v56,
                       (const MethodInfo_2E89168 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
                {
                  MovieInfoList = (int *)v56;
                  if ( !v56 )
                    goto LABEL_60;
                  BattleCameraFullScaleSetter__Initialize(
                    (BattleCameraFullScaleSetter_o *)v56,
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
                                             (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
                    if ( MovieInfoList )
                    {
                      v44 = 1;
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
    sub_1B64324(MovieInfoList);
  }
  if ( !v16 )
  {
    MovieInfoList = (int *)this->fields.perf;
    if ( MovieInfoList )
    {
      v17 = (Il2CppObject *)this->fields.moviePrefab;
      MovieInfoList = (int *)UnityEngine_Component__GetComponent_object_(
                               (UnityEngine_Component_o *)MovieInfoList,
                               (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
      if ( MovieInfoList )
      {
        v18 = (UnityEngine_Transform_o *)*((_QWORD *)MovieInfoList + 23);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v19 = UnityEngine_Object__Instantiate_object__49003980(
                v17,
                v18,
                (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
        this->fields.nextMovieObj = (struct UnityEngine_GameObject_o *)v19;
        v20 = &this->fields.nextMovieObj;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.nextMovieObj, (int32_t)v19, v21, v22);
        MovieInfoList = (int *)this->fields.ObjList;
        if ( MovieInfoList )
        {
          v25 = (Il2CppObject *)*v20;
          v26 = *((_QWORD *)MovieInfoList + 2);
          v27 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++MovieInfoList[7];
          if ( v26 )
          {
            v28 = MovieInfoList[6];
            if ( (unsigned int)v28 >= *(_DWORD *)(v26 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)MovieInfoList,
                v25,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
            }
            else
            {
              v29 = v26 + 8 * v28;
              MovieInfoList[6] = v28 + 1;
              *(_QWORD *)(v29 + 32) = v25;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v29 + 32), (int32_t)v25, v23, v24);
            }
            MovieInfoList = (int *)*v20;
            if ( *v20 )
            {
              if ( UnityEngine_GameObject__TryGetComponent_object_(
                     (UnityEngine_GameObject_o *)MovieInfoList,
                     &component,
                     (const MethodInfo_2E89168 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
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
                                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
                if ( MovieInfoList )
                {
                  v44 = 0;
LABEL_42:
                  MovieInfoList[10] = v44;
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
  v45 = (UnityEngine_Transform_o *)MovieInfoList;
  MovieInfoList = (int *)UnityEngine_GameObject__get_transform(this->fields.nextMovieObj, 0LL);
  if ( !MovieInfoList )
    goto LABEL_60;
  position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)MovieInfoList, 0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  v47 = *(float *)&position;
  MovieInfoList = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MovieInfoList, 0LL);
  if ( !MovieInfoList )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)(&v48 - 1) = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)MovieInfoList,
                                           0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  v49 = v48;
  MovieInfoList = (int *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)MovieInfoList, 0LL);
  if ( !MovieInfoList )
    goto LABEL_60;
  *(UnityEngine_Vector3_o *)(&v50 - 2) = UnityEngine_Transform__get_position(
                                           (UnityEngine_Transform_o *)MovieInfoList,
                                           0LL);
  if ( !v45 )
    goto LABEL_60;
  v58.fields.z = (float)((float)i * 0.1) + v50;
  v58.fields.x = v47;
  v58.fields.y = v49;
  UnityEngine_Transform__set_position(v45, v58, 0LL);
  baseMat = this->fields.baseMat;
  v54 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v52, v53);
  UnityEngine_Material___ctor_68991096(v54, baseMat, 0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  MovieInfoList = (int *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)MovieInfoList,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !MovieInfoList )
    goto LABEL_60;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)MovieInfoList, v54, 0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  MovieInfoList = (int *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)MovieInfoList,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
  if ( !MovieInfoList )
    goto LABEL_60;
  CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)MovieInfoList, v54, 0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)MovieInfoList, 1, 0LL);
  MovieInfoList = (int *)this->fields.nextMovieObj;
  if ( !MovieInfoList )
    goto LABEL_60;
  MovieInfoList = (int *)UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)MovieInfoList,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !MovieInfoList )
    goto LABEL_60;
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)MovieInfoList, 0, 0LL);
  BattleMoviePlayer__InitMovie(this, this->fields.nextMovieObj, i, v55);
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

  if ( (byte_49FE9F3 & 1) == 0 )
  {
    sub_1B640C8(&BattleMoviePlayer__GetMoviePanelFirst_d__22_TypeInfo, performance);
    byte_49FE9F3 = 1;
  }
  v5 = sub_1B64314(BattleMoviePlayer__GetMoviePanelFirst_d__22_TypeInfo, performance, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = performance;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)performance, v8, v9);
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
  void *MovieInfoList; // x0
  System_String_o *v15; // x22
  AssetData_o *AssetStorageData; // x0
  System_String_o *v17; // x22
  int v18; // w8
  System_Collections_Generic_List_object__o *v19; // x8
  System_String_o *v20; // x21
  __int64 *v21; // x8
  System_Collections_Generic_List_object__o *v22; // x8
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_49FE9F9 & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_Application_TypeInfo, obj);
    sub_1B640C8(&AssetManager_TypeInfo, v7);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v9);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B640C8(&StringLiteral_1122/*".usm"*/, v11);
    sub_1B640C8(&StringLiteral_1168/*"/StreamingAssets/"*/, v12);
    sub_1B640C8(&StringLiteral_1163/*"/Resources/"*/, v13);
    byte_49FE9F9 = 1;
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
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v15 = (System_String_o *)*((_QWORD *)MovieInfoList + 3);
    if ( !v15 )
      goto LABEL_41;
    if ( !System_String__EndsWith(*((System_String_o **)MovieInfoList + 3), (System_String_o *)StringLiteral_1122/*".usm"*/, 0LL) )
      v15 = System_String__Concat_61375396(v15, (System_String_o *)StringLiteral_1122/*".usm"*/, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageData = AssetManager__getAssetStorageData(v15, 0LL);
    v17 = AssetStorageData ? AssetData__get_Path(AssetStorageData, 0LL) : 0LL;
    MovieInfoList = this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_41;
    MovieInfoList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)MovieInfoList,
                      pathnum,
                      (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v18 = *((_DWORD *)MovieInfoList + 4);
    if ( v18 == 102 )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0LL);
      v22 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v22 )
        goto LABEL_41;
      v20 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v22,
                        pathnum,
                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v21 = &StringLiteral_1163/*"/Resources/"*/;
    }
    else
    {
      if ( v18 != 101 )
        goto LABEL_31;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0LL);
      v19 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v19 )
        goto LABEL_41;
      v20 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v19,
                        pathnum,
                        (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v21 = &StringLiteral_1168/*"/StreamingAssets/"*/;
    }
    MovieInfoList = System_String__Concat_61386656(
                      v20,
                      (System_String_o *)*v21,
                      *((System_String_o **)MovieInfoList + 3),
                      0LL);
    v17 = (System_String_o *)MovieInfoList;
LABEL_31:
    if ( obj )
    {
      Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   obj,
                                                   (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL) )
        return;
      MovieInfoList = (void *)System_String__IsNullOrEmpty(v17, 0LL);
      if ( ((unsigned __int8)MovieInfoList & 1) != 0 )
        return;
      if ( Component_object )
      {
        MovieInfoList = Component_object[2].monitor;
        if ( MovieInfoList )
        {
          CriMana_Player__SetFile((CriMana_Player_o *)MovieInfoList, 0LL, v17, 0, 0LL);
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
    sub_1B64324(MovieInfoList);
  }
}


void __fastcall BattleMoviePlayer__Initialize(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *MoviePanelFirst; // x1

  MoviePanelFirst = BattleMoviePlayer__GetMoviePanelFirst(this, perf, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, MoviePanelFirst, 0LL);
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
  if ( (byte_49FE9F6 & 1) == 0 )
  {
    sub_1B640C8(&BattleMoviePlayer_TypeInfo, method);
    this = (BattleMoviePlayer_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v3);
    byte_49FE9F6 = 1;
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
    sub_1B64324(this);
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

  if ( (byte_49FE9F7 & 1) == 0 )
  {
    sub_1B640C8(&BattleMoviePlayer__PlayMovie_d__30_TypeInfo, *(_QWORD *)&num);
    byte_49FE9F7 = 1;
  }
  v5 = sub_1B64314(BattleMoviePlayer__PlayMovie_d__30_TypeInfo, *(_QWORD *)&num, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_49FE9F8 & 1) == 0 )
  {
    sub_1B640C8(&BattleMoviePlayer__PlayMovieFadeOut_d__31_TypeInfo, *(_QWORD *)&num);
    byte_49FE9F8 = 1;
  }
  v5 = sub_1B64314(BattleMoviePlayer__PlayMovieFadeOut_d__31_TypeInfo, *(_QWORD *)&num, method);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_DWORD *)(v5 + 40) = num;
  return (System_Collections_IEnumerator_o *)v5;
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__StartMovie(
        BattleMoviePlayer_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FE9F5 & 1) == 0 )
  {
    sub_1B640C8(&BattleMoviePlayer__StartMovie_d__27_TypeInfo, method);
    byte_49FE9F5 = 1;
  }
  v4 = sub_1B64314(BattleMoviePlayer__StartMovie_d__27_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.moviePath, (int32_t)path, v19, v20);
  this->fields.effectEvent = eff;
  this->fields.validTime = valid;
  this->fields.fadeRestTime = fade;
  this->fields.cameraType = cam;
  this->fields.playSpeed = speed;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.effectEvent, (int32_t)eff, v21, v22);
  this->fields.effectRestTime = effRest;
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
  BattleMoviePlayer__GetMoviePanelFirst_d__22_o **v31; // x21
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  BattleMoviePlayer__GetMoviePanelFirst_d__22_o *v36; // x1
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  struct BattlePerformance_o *v41; // x8
  Il2CppObject *moviePrefab; // x21
  UnityEngine_Transform_o *transform; // x22
  Il2CppObject *v44; // x0
  BattleMoviePlayer__GetMoviePanelFirst_d__22_o **p_currMovieObj; // x21
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  BattleMoviePlayer__GetMoviePanelFirst_d__22_o *v50; // x1
  __int64 v51; // x8
  _QWORD *v52; // x9
  __int64 _2__current_low; // x10
  __int64 v54; // x8
  int v55; // w8
  UnityEngine_Object_o *baseMat; // x22
  __int64 v57; // x1
  __int64 v58; // x2
  UnityEngine_Material_o *material; // x22
  __int64 v60; // x1
  __int64 v61; // x2
  UnityEngine_Material_o *v62; // x23
  int32_t v63; // w2
  int32_t v64; // w3
  UnityEngine_Material_o *v65; // x22
  UnityEngine_Material_o *v66; // x21
  const MethodInfo *v67; // x3
  int v68; // w8
  Il2CppObject *v69; // x21
  struct BattlePerformance_o *v70; // x22
  Il2CppObject *v71; // x0
  BattleMoviePlayer__GetMoviePanelFirst_d__22_o **v72; // x21
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  BattleMoviePlayer__GetMoviePanelFirst_d__22_o *v77; // x1
  __int64 v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x8
  struct BattlePerformance_o *v82; // x8
  Il2CppObject *v83; // x21
  UnityEngine_Transform_o *v84; // x22
  Il2CppObject *v85; // x0
  BattleMoviePlayer__GetMoviePanelFirst_d__22_o **p_nextMovieObj; // x21
  int32_t v87; // w2
  int32_t v88; // w3
  int32_t v89; // w2
  int32_t v90; // w3
  BattleMoviePlayer__GetMoviePanelFirst_d__22_o *v91; // x1
  __int64 v92; // x8
  _QWORD *v93; // x9
  __int64 v94; // x10
  __int64 v95; // x8
  int v96; // w8
  BattleMoviePlayer__GetMoviePanelFirst_d__22_o *v97; // x20
  unsigned int position; // s0
  float v99; // s8
  float v100; // s1
  float v101; // s9
  float v102; // s2
  UnityEngine_Material_o *v103; // x21
  __int64 v104; // x1
  __int64 v105; // x2
  UnityEngine_Material_o *v106; // x20
  const MethodInfo *v107; // x3
  Il2CppObject *v109; // [xsp+8h] [xbp-68h] BYREF
  Il2CppObject *v110; // [xsp+10h] [xbp-60h] BYREF
  Il2CppObject *v111; // [xsp+18h] [xbp-58h] BYREF
  Il2CppObject *component; // [xsp+38h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_49FE9FE & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_BattlePerformance___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___, v3);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___, v4);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v10);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v11);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v12);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v13);
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)sub_1B640C8(&StringLiteral_10551/*"Performance"*/, v14);
    byte_49FE9FE = 1;
  }
  component = 0LL;
  v110 = 0LL;
  v111 = 0LL;
  v109 = 0LL;
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
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.perf, (int32_t)v21, v19, v20);
    }
    v22 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v22, 0LL, 0LL) )
    {
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__Find(
                                                                (System_String_o *)StringLiteral_10551/*"Performance"*/,
                                                                0LL);
      if ( !this )
        goto LABEL_129;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)this,
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
      *p_perf = (BattlePerformance_o *)Component_object;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.perf, (int32_t)Component_object, v24, v25);
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
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !this )
      goto LABEL_129;
    klass_high = HIDWORD(this[1].klass);
    if ( klass_high == 1 )
    {
      v41 = _4__this->fields.perf;
      if ( !v41 )
        goto LABEL_129;
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)v41->fields.actorcamera;
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
      v44 = UnityEngine_Object__Instantiate_object__49003980(
              moviePrefab,
              transform,
              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
      _4__this->fields.currMovieObj = (struct UnityEngine_GameObject_o *)v44;
      p_currMovieObj = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o **)&_4__this->fields.currMovieObj;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, (int32_t)v44, v46, v47);
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.ObjList;
      if ( !this )
        goto LABEL_129;
      v50 = *p_currMovieObj;
      v51 = *(_QWORD *)&this->fields.__1__state;
      v52 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v51 )
        goto LABEL_129;
      _2__current_low = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)_2__current_low >= *(_DWORD *)(v51 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v50,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
      }
      else
      {
        v54 = v51 + 8 * _2__current_low;
        LODWORD(this->fields.__2__current) = _2__current_low + 1;
        *(_QWORD *)(v54 + 32) = v50;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v54 + 32), (int32_t)v50, v48, v49);
      }
      this = *p_currMovieObj;
      if ( !*p_currMovieObj )
        goto LABEL_129;
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)this,
             &v111,
             (const MethodInfo_2E89168 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
      {
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)v111;
        if ( !v111 )
          goto LABEL_129;
        BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v111, *p_perf, 0, 0LL);
      }
      this = *p_currMovieObj;
      if ( !*p_currMovieObj )
        goto LABEL_129;
      UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, 11, 0LL);
      this = *p_currMovieObj;
      if ( !*p_currMovieObj )
        goto LABEL_129;
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
      if ( !this )
        goto LABEL_129;
      v55 = 1;
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
                                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
          if ( !this )
            goto LABEL_129;
          material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
          v62 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v60, v61);
          UnityEngine_Material___ctor_68991096(v62, material, 0LL);
          _4__this->fields.baseMat = v62;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.baseMat, (int32_t)v62, v63, v64);
        }
        v65 = _4__this->fields.baseMat;
        v66 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v57, v58);
        UnityEngine_Material___ctor_68991096(v66, v65, 0LL);
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.currMovieObj;
        if ( !this )
          goto LABEL_129;
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_129;
        UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v66, 0LL);
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.currMovieObj;
        if ( !this )
          goto LABEL_129;
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
        if ( !this )
          goto LABEL_129;
        CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v66, 0LL);
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.currMovieObj;
        if ( !this )
          goto LABEL_129;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.currMovieObj;
        if ( !this )
          goto LABEL_129;
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                  (UnityEngine_GameObject_o *)this,
                                                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_129;
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
        BattleMoviePlayer__InitMovie(_4__this, _4__this->fields.currMovieObj, 0, v67);
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
                                                                (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
      if ( !this )
        goto LABEL_129;
      v29 = this[3].fields.performance;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v30 = UnityEngine_Object__Instantiate_object__49003980(
              v28,
              (UnityEngine_Transform_o *)v29,
              (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
      _4__this->fields.currMovieObj = (struct UnityEngine_GameObject_o *)v30;
      v31 = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o **)&_4__this->fields.currMovieObj;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, (int32_t)v30, v32, v33);
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.ObjList;
      if ( !this )
        goto LABEL_129;
      v36 = *v31;
      v37 = *(_QWORD *)&this->fields.__1__state;
      v38 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++HIDWORD(this->fields.__2__current);
      if ( !v37 )
        goto LABEL_129;
      v39 = SLODWORD(this->fields.__2__current);
      if ( (unsigned int)v39 >= *(_DWORD *)(v37 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v36,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = v37 + 8 * v39;
        LODWORD(this->fields.__2__current) = v39 + 1;
        *(_QWORD *)(v40 + 32) = v36;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v40 + 32), (int32_t)v36, v34, v35);
      }
      this = *v31;
      if ( !*v31 )
        goto LABEL_129;
      if ( UnityEngine_GameObject__TryGetComponent_object_(
             (UnityEngine_GameObject_o *)this,
             &component,
             (const MethodInfo_2E89168 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
      {
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)component;
        if ( !component )
          goto LABEL_129;
        BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)component, *p_perf, 1, 0LL);
      }
      this = *v31;
      if ( !*v31 )
        goto LABEL_129;
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                (UnityEngine_GameObject_o *)this,
                                                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
      if ( !this )
        goto LABEL_129;
      v55 = 0;
    }
    LODWORD(this->fields.performance) = v55;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
    goto LABEL_59;
  }
LABEL_73:
  if ( SLODWORD(this->fields.__2__current) > 1 )
  {
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              1,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !this )
      goto LABEL_129;
    v68 = HIDWORD(this[1].klass);
    if ( v68 == 1 )
    {
      v82 = _4__this->fields.perf;
      if ( v82 )
      {
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)v82->fields.actorcamera;
        if ( this )
        {
          v83 = (Il2CppObject *)_4__this->fields.moviePrefab;
          this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
          if ( this )
          {
            v84 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            v85 = UnityEngine_Object__Instantiate_object__49003980(
                    v83,
                    v84,
                    (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
            _4__this->fields.nextMovieObj = (struct UnityEngine_GameObject_o *)v85;
            p_nextMovieObj = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o **)&_4__this->fields.nextMovieObj;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, (int32_t)v85, v87, v88);
            this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.ObjList;
            if ( this )
            {
              v91 = *p_nextMovieObj;
              v92 = *(_QWORD *)&this->fields.__1__state;
              v93 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++HIDWORD(this->fields.__2__current);
              if ( v92 )
              {
                v94 = SLODWORD(this->fields.__2__current);
                if ( (unsigned int)v94 >= *(_DWORD *)(v92 + 24) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    (System_Collections_Generic_List_object__o *)this,
                    (Il2CppObject *)v91,
                    *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v93[4] + 192LL) + 112LL));
                }
                else
                {
                  v95 = v92 + 8 * v94;
                  LODWORD(this->fields.__2__current) = v94 + 1;
                  *(_QWORD *)(v95 + 32) = v91;
                  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v95 + 32), (int32_t)v91, v89, v90);
                }
                this = *p_nextMovieObj;
                if ( *p_nextMovieObj )
                {
                  if ( UnityEngine_GameObject__TryGetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         &v109,
                         (const MethodInfo_2E89168 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
                  {
                    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)v109;
                    if ( !v109 )
                      goto LABEL_129;
                    BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v109, *p_perf, 0, 0LL);
                  }
                  this = *p_nextMovieObj;
                  if ( *p_nextMovieObj )
                  {
                    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)this, 11, 0LL);
                    this = *p_nextMovieObj;
                    if ( *p_nextMovieObj )
                    {
                      this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                (UnityEngine_GameObject_o *)this,
                                                                                (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
                      if ( this )
                      {
                        v96 = 1;
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
      if ( v68 )
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
            v97 = this;
            this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__get_transform(
                                                                      _4__this->fields.nextMovieObj,
                                                                      0LL);
            if ( this )
            {
              position = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
              this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
              if ( this )
              {
                v99 = *(float *)&position;
                this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__get_transform(
                                                                          (UnityEngine_GameObject_o *)this,
                                                                          0LL);
                if ( this )
                {
                  *(UnityEngine_Vector3_o *)(&v100 - 1) = UnityEngine_Transform__get_position(
                                                            (UnityEngine_Transform_o *)this,
                                                            0LL);
                  this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
                  if ( this )
                  {
                    v101 = v100;
                    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__get_transform(
                                                                              (UnityEngine_GameObject_o *)this,
                                                                              0LL);
                    if ( this )
                    {
                      *(UnityEngine_Vector3_o *)(&v102 - 2) = UnityEngine_Transform__get_position(
                                                                (UnityEngine_Transform_o *)this,
                                                                0LL);
                      if ( v97 )
                      {
                        v113.fields.y = v101;
                        v113.fields.z = v102 + 0.1;
                        v113.fields.x = v99;
                        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)v97, v113, 0LL);
                        v103 = _4__this->fields.baseMat;
                        v106 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v104, v105);
                        UnityEngine_Material___ctor_68991096(v106, v103, 0LL);
                        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
                        if ( this )
                        {
                          this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                    (UnityEngine_GameObject_o *)this,
                                                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                          if ( this )
                          {
                            UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v106, 0LL);
                            this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
                            if ( this )
                            {
                              this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                        (UnityEngine_GameObject_o *)this,
                                                                                        (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
                              if ( this )
                              {
                                CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v106, 0LL);
                                this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
                                if ( this )
                                {
                                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
                                  this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.nextMovieObj;
                                  if ( this )
                                  {
                                    this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                              (UnityEngine_GameObject_o *)this,
                                                                                              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                                    if ( this )
                                    {
                                      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
                                      BattleMoviePlayer__InitMovie(_4__this, _4__this->fields.nextMovieObj, 1, v107);
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
        v69 = (Il2CppObject *)_4__this->fields.moviePrefab;
        this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_Component__GetComponent_object_(
                                                                  (UnityEngine_Component_o *)this,
                                                                  (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
        if ( this )
        {
          v70 = this[3].fields.performance;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v71 = UnityEngine_Object__Instantiate_object__49003980(
                  v69,
                  (UnityEngine_Transform_o *)v70,
                  (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
          _4__this->fields.nextMovieObj = (struct UnityEngine_GameObject_o *)v71;
          v72 = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o **)&_4__this->fields.nextMovieObj;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, (int32_t)v71, v73, v74);
          this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)_4__this->fields.ObjList;
          if ( this )
          {
            v77 = *v72;
            v78 = *(_QWORD *)&this->fields.__1__state;
            v79 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++HIDWORD(this->fields.__2__current);
            if ( v78 )
            {
              v80 = SLODWORD(this->fields.__2__current);
              if ( (unsigned int)v80 >= *(_DWORD *)(v78 + 24) )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  (System_Collections_Generic_List_object__o *)this,
                  (Il2CppObject *)v77,
                  *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
              }
              else
              {
                v81 = v78 + 8 * v80;
                LODWORD(this->fields.__2__current) = v80 + 1;
                *(_QWORD *)(v81 + 32) = v77;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)(v81 + 32), (int32_t)v77, v75, v76);
              }
              this = *v72;
              if ( *v72 )
              {
                if ( UnityEngine_GameObject__TryGetComponent_object_(
                       (UnityEngine_GameObject_o *)this,
                       &v110,
                       (const MethodInfo_2E89168 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
                {
                  this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)v110;
                  if ( !v110 )
                    goto LABEL_129;
                  BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v110, *p_perf, 1, 0LL);
                }
                this = *v72;
                if ( *v72 )
                {
                  this = (BattleMoviePlayer__GetMoviePanelFirst_d__22_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                            (UnityEngine_GameObject_o *)this,
                                                                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
                  if ( this )
                  {
                    v96 = 0;
LABEL_111:
                    LODWORD(this->fields.performance) = v96;
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
    sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleMoviePlayer__GetMoviePanelFirst_d__22_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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


void __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__31___ctor(
        BattleMoviePlayer__PlayMovieFadeOut_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__31__MoveNext(
        BattleMoviePlayer__PlayMovieFadeOut_d__31_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleMoviePlayer__PlayMovieFadeOut_d__31_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x19
  UnityEngine_Object_o *pastMovieObj; // x21
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Material_o *material; // x0
  BattleMoviePlayer__PlayMovieFadeOut_d__31_o **p_pastMaterial; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **v23; // x22
  int32_t v24; // w2
  int32_t v25; // w3
  struct BattleMoviePlayer_MovieInfo_o *v26; // x8
  float validTime; // s8
  struct CriManaMovieController_o *v28; // x8
  float effectRestTime; // s0
  struct CriManaMovieController_o *v30; // x8
  int32_t v31; // w2
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  bool result; // w0
  struct CriManaMovieController_o *currController; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  int32_t num; // w8
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x9
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  float v39; // s0
  float v40; // s1
  bool v41; // nf
  float v42; // s0
  float restTime_5__5; // s8
  float timeScale; // s0
  struct BattleMoviePlayer_MovieInfo_o *v45; // x8
  struct BattlePerformance_o *perf; // x8
  BattleMoviePlayer__PlayMovieFadeOut_d__31_o *v47; // x21
  int v48; // s0
  float v50; // s2
  float v51; // s4
  float v52; // s2
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v56; // x1
  float v57; // s0
  float v58; // s1
  float v59; // s2
  float v60; // s11
  float v61; // s12
  float v62; // s13
  BattleMoviePlayer__PlayMovieFadeOut_d__31_o **p_movInfo_5__2; // x21
  int32_t v64; // w2
  int32_t v65; // w3
  UnityEngine_Object_o *v66; // x20
  int32_t v67; // w2
  int32_t v68; // w3
  float v69; // s0
  float v70; // s1
  float v71; // s2
  float v72; // s11
  float v73; // s12
  float v74; // s13
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49FEA00 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_GameObject__Remove__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_16341/*"_ZTestMode"*/, v10);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)sub_1B640C8(&StringLiteral_16309/*"_Transparency"*/, v11);
    byte_49FEA00 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_75;
    currController = _4__this->fields.currController;
    if ( !currController )
      goto LABEL_75;
    player_k__BackingField = currController->fields._player_k__BackingField;
    if ( !player_k__BackingField )
      goto LABEL_59;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)CriMana_Player__GetDisplayedFrameNo(
                                                            player_k__BackingField,
                                                            0LL);
    if ( v4->fields._effectTime_5__3 <= (float)(int)this )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)v4->fields._movInfo_5__2;
      if ( !this )
        goto LABEL_75;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)v4->fields._movInfo_5__2;
        if ( !this )
          goto LABEL_75;
      }
      *(_QWORD *)&this->fields.num = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v2, v3);
    }
    num = v4->fields.num;
    if ( (num & 0x80000000) != 0 )
      goto LABEL_58;
    MovieInfoList = _4__this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_75;
    if ( num >= MovieInfoList->fields._size )
    {
LABEL_58:
      v4->fields._pastError_5__4 = 1;
LABEL_59:
      p_movInfo_5__2 = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o **)&v4->fields._movInfo_5__2;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)v4->fields._movInfo_5__2;
      if ( !this )
        goto LABEL_75;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
        this = *p_movInfo_5__2;
        if ( !*p_movInfo_5__2 )
          goto LABEL_75;
      }
      *(_QWORD *)&this->fields.num = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v2, v3);
      if ( !v4->fields._pastError_5__4 )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)_4__this->fields.pastMaterial;
        if ( !this )
          goto LABEL_75;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16341/*"_ZTestMode"*/, 4, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)_4__this->fields.pastMaterial;
        if ( !this )
          goto LABEL_75;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16309/*"_Transparency"*/, 1.0, 0LL);
      }
      *p_movInfo_5__2 = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, 0, v64, v65);
      goto LABEL_67;
    }
    movInfo_5__2 = v4->fields._movInfo_5__2;
    if ( !movInfo_5__2 )
      goto LABEL_75;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)_4__this->fields.pastMaterial;
    if ( !this )
      goto LABEL_75;
    v39 = 1.0 - (float)(v4->fields._restTime_5__5 / movInfo_5__2->fields.fadeRestTime);
    v40 = fminf(v39, 1.0);
    v41 = v39 < 0.0;
    v42 = 0.0;
    if ( !v41 )
      v42 = v40;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16309/*"_Transparency"*/, v42, 0LL);
    restTime_5__5 = v4->fields._restTime_5__5;
    timeScale = UnityEngine_Time__get_timeScale(0LL);
    v45 = v4->fields._movInfo_5__2;
    if ( !v45 )
      goto LABEL_75;
    v4->fields._restTime_5__5 = restTime_5__5 - (float)(timeScale * v45->fields.playSpeed);
    if ( _4__this->fields.KeepStartPosition )
    {
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_75;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)perf->fields.actorcamera;
      if ( !this )
        goto LABEL_75;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_75;
      v47 = this;
      position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
      position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
      position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
      *(UnityEngine_Vector3_o *)&v48 = UnityEngine_Transform__InverseTransformVector(
                                         (UnityEngine_Transform_o *)v47,
                                         position,
                                         0LL);
      v51 = fminf(v50, 1.0);
      if ( v50 < -0.3 )
        v52 = -0.3;
      else
        v52 = v51;
      v76 = UnityEngine_Transform__TransformDirection(
              (UnityEngine_Transform_o *)v47,
              *(UnityEngine_Vector3_o *)&v48,
              0LL);
      x = v76.fields.x;
      y = v76.fields.y;
      z = v76.fields.z;
      if ( BattleMoviePlayer__IsBossCamera(_4__this, v56) )
      {
        v77.fields.x = 0.0;
        v77.fields.y = 0.0;
        v77.fields.z = 200.0;
        *(UnityEngine_Vector3_o *)&v57 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)v47, v77, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_75;
        v60 = v57;
        v61 = v58;
        v62 = v59;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_75;
        v78.fields.z = v62 - (float)(z * 20.0);
        v78.fields.y = v61 - (float)(y * 20.0);
        v78.fields.x = v60 - (float)(x * 20.0);
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v78, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_75;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_75;
        v79.fields.z = _4__this->fields.startPanelScale.fields.z * 20.0;
        v79.fields.y = _4__this->fields.startPanelScale.fields.y * 20.0;
        v79.fields.x = _4__this->fields.startPanelScale.fields.x * 20.0;
        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v79, 0LL);
      }
      else
      {
        v80.fields.x = 0.0;
        v80.fields.y = 0.0;
        v80.fields.z = 10.0;
        *(UnityEngine_Vector3_o *)&v69 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)v47, v80, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_75;
        v72 = v69;
        v73 = v70;
        v74 = v71;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_75;
        v81.fields.z = v74 - z;
        v81.fields.y = v73 - y;
        v81.fields.x = v72 - x;
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v81, 0LL);
      }
    }
LABEL_27:
    if ( v4->fields._restTime_5__5 > 0.0 )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(p__2__current, 0, v2, v3);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
    goto LABEL_59;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_75;
    pastMovieObj = (UnityEngine_Object_o *)_4__this->fields.pastMovieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(pastMovieObj, 0LL, 0LL) )
    {
LABEL_67:
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)_4__this->fields.ObjList;
      if ( this )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)_4__this->fields.pastMovieObj,
          (const MethodInfo_34AEC9C *)Method_System_Collections_Generic_List_GameObject__Remove__);
        v66 = (UnityEngine_Object_o *)_4__this->fields.pastMovieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69127736(v66, 0LL);
        _4__this->fields.pastController = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.pastController, 0, v67, v68);
        return 0;
      }
LABEL_75:
      sub_1B64324(this);
    }
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)_4__this->fields.pastMovieObj;
    if ( !this )
      goto LABEL_75;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    _4__this->fields.pastController = (struct CriManaMovieController_o *)Component_object;
    sub_1B6406C(
      (ServantStatusBattleListViewItem_o *)&_4__this->fields.pastController,
      (int32_t)Component_object,
      v16,
      v17);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)_4__this->fields.pastMovieObj;
    if ( !this )
      goto LABEL_75;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)UnityEngine_GameObject__GetComponent_object_(
                                                            (UnityEngine_GameObject_o *)this,
                                                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !this )
      goto LABEL_75;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
    _4__this->fields.pastMaterial = material;
    p_pastMaterial = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o **)&_4__this->fields.pastMaterial;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.pastMaterial, (int32_t)material, v20, v21);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)_4__this->fields.MovieInfoList;
    if ( !this )
      goto LABEL_75;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v4->fields.num,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    v4->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
    v23 = &v4->fields._movInfo_5__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, (int32_t)Item, v24, v25);
    v26 = v4->fields._movInfo_5__2;
    if ( !v26 )
      goto LABEL_75;
    validTime = v26->fields.validTime;
    if ( validTime <= 0.0 )
    {
      v28 = _4__this->fields.currController;
      if ( !v28 )
        goto LABEL_75;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)v28->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_75;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
      if ( !this )
        goto LABEL_75;
      v26 = *v23;
      if ( !*v23 )
        goto LABEL_75;
      validTime = (float)LODWORD(this->fields._movInfo_5__2);
    }
    effectRestTime = v26->fields.effectRestTime;
    v4->fields._pastError_5__4 = 0;
    v4->fields._effectTime_5__3 = fmaxf(validTime - effectRestTime, 0.0);
    v30 = _4__this->fields.currController;
    if ( !v30 )
      goto LABEL_75;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__31_o *)v30->fields._player_k__BackingField;
    if ( !this )
      goto LABEL_75;
    v4->fields._restTime_5__5 = validTime - (float)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
    this = *p_pastMaterial;
    if ( !*p_pastMaterial )
      goto LABEL_75;
    if ( _4__this->fields.OverrideZDepth )
      v31 = 8;
    else
      v31 = 4;
    UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16341/*"_ZTestMode"*/, v31, 0LL);
    goto LABEL_27;
  }
  return 0;
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovieFadeOut_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__PlayMovieFadeOut_d__31__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovieFadeOut_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleMoviePlayer__PlayMovieFadeOut_d__31_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovieFadeOut_d__31__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__31__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovieFadeOut_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__PlayMovie_d__30___ctor(
        BattleMoviePlayer__PlayMovie_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMoviePlayer__PlayMovie_d__30__MoveNext(
        BattleMoviePlayer__PlayMovie_d__30_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleMoviePlayer__PlayMovie_d__30_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *v9; // x21
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **p_movInfo_5__2; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  float validTime; // s0
  struct CriManaMovieController_o *v15; // x8
  struct CriManaMovieController_o *v16; // x8
  struct CriManaMovieController_o *currController; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  float v19; // s14
  struct BattlePerformance_o *perf; // x8
  BattleMoviePlayer__PlayMovie_d__30_o *v21; // x21
  int v22; // s0
  float v24; // s2
  float v25; // s4
  float v26; // s2
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v30; // x1
  float v31; // s0
  float v32; // s1
  float v33; // s2
  float v34; // s11
  float v35; // s12
  float v36; // s13
  struct CriManaMovieController_o *v37; // x8
  int32_t v38; // w0
  float skipFrame_5__5; // s8
  int32_t v40; // w21
  int32_t v41; // w2
  int32_t v42; // w3
  _BOOL4 KeepStartPosition; // w8
  struct BattlePerformance_o *v44; // x8
  struct CriManaMovieController_o *v45; // x8
  int32_t v46; // w20
  float timeScale; // s0
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  float v51; // s0
  float v52; // s1
  float v53; // s2
  float v54; // s11
  float v55; // s12
  float v56; // s13
  struct BattleMoviePlayer_MovieInfo_o *v57; // x8
  struct CriManaMovieController_o *v58; // x8
  int32_t DisplayedFrameNo; // w0
  ServantStatusBattleListViewItem_o *v60; // x19
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49FE9FF & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v5);
    this = (BattleMoviePlayer__PlayMovie_d__30_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FE9FF = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      currController = _4__this->fields.currController;
      if ( currController )
      {
        player_k__BackingField = currController->fields._player_k__BackingField;
        if ( !player_k__BackingField )
        {
LABEL_62:
          v4->fields._movInfo_5__2 = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, 0, v2, v3);
          return 0;
        }
        this = (BattleMoviePlayer__PlayMovie_d__30_o *)CriMana_Player__GetDisplayedFrameNo(player_k__BackingField, 0LL);
        v19 = (float)(int)this;
        if ( v4->fields._effectTime_5__4 <= (float)(int)this )
        {
          this = (BattleMoviePlayer__PlayMovie_d__30_o *)v4->fields._movInfo_5__2;
          if ( !this )
            goto LABEL_73;
          if ( *(_QWORD *)&this->fields.num )
          {
            UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
            this = (BattleMoviePlayer__PlayMovie_d__30_o *)v4->fields._movInfo_5__2;
            if ( !this )
              goto LABEL_73;
          }
          *(_QWORD *)&this->fields.num = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v2, v3);
        }
        if ( !_4__this->fields.KeepStartPosition )
          goto LABEL_60;
        perf = _4__this->fields.perf;
        if ( perf )
        {
          this = (BattleMoviePlayer__PlayMovie_d__30_o *)perf->fields.actorcamera;
          if ( this )
          {
            this = (BattleMoviePlayer__PlayMovie_d__30_o *)UnityEngine_Component__get_transform(
                                                             (UnityEngine_Component_o *)this,
                                                             0LL);
            if ( this )
            {
              v21 = this;
              position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
              position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
              position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
              position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
              *(UnityEngine_Vector3_o *)&v22 = UnityEngine_Transform__InverseTransformVector(
                                                 (UnityEngine_Transform_o *)v21,
                                                 position,
                                                 0LL);
              v25 = fminf(v24, 1.0);
              if ( v24 < -0.3 )
                v26 = -0.3;
              else
                v26 = v25;
              v62 = UnityEngine_Transform__TransformDirection(
                      (UnityEngine_Transform_o *)v21,
                      *(UnityEngine_Vector3_o *)&v22,
                      0LL);
              x = v62.fields.x;
              y = v62.fields.y;
              z = v62.fields.z;
              if ( BattleMoviePlayer__IsBossCamera(_4__this, v30) )
              {
                v63.fields.x = 0.0;
                v63.fields.y = 0.0;
                v63.fields.z = 200.0;
                *(UnityEngine_Vector3_o *)&v31 = UnityEngine_Transform__TransformPoint(
                                                   (UnityEngine_Transform_o *)v21,
                                                   v63,
                                                   0LL);
                this = (BattleMoviePlayer__PlayMovie_d__30_o *)_4__this->fields.currController;
                if ( this )
                {
                  v34 = v31;
                  v35 = v32;
                  v36 = v33;
                  this = (BattleMoviePlayer__PlayMovie_d__30_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
                  if ( this )
                  {
                    v64.fields.z = v36 - (float)(z * 20.0);
                    v64.fields.y = v35 - (float)(y * 20.0);
                    v64.fields.x = v34 - (float)(x * 20.0);
                    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v64, 0LL);
                    this = (BattleMoviePlayer__PlayMovie_d__30_o *)_4__this->fields.currController;
                    if ( this )
                    {
                      this = (BattleMoviePlayer__PlayMovie_d__30_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL);
                      if ( this )
                      {
                        v65.fields.z = _4__this->fields.startPanelScale.fields.z * 20.0;
                        v65.fields.y = _4__this->fields.startPanelScale.fields.y * 20.0;
                        v65.fields.x = _4__this->fields.startPanelScale.fields.x * 20.0;
                        UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, v65, 0LL);
                        goto LABEL_60;
                      }
                    }
                  }
                }
              }
              else
              {
                v68.fields.x = 0.0;
                v68.fields.y = 0.0;
                v68.fields.z = 10.0;
                *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Transform__TransformPoint(
                                                   (UnityEngine_Transform_o *)v21,
                                                   v68,
                                                   0LL);
                this = (BattleMoviePlayer__PlayMovie_d__30_o *)_4__this->fields.currController;
                if ( this )
                {
                  v54 = v51;
                  v55 = v52;
                  v56 = v53;
                  this = (BattleMoviePlayer__PlayMovie_d__30_o *)UnityEngine_Component__get_transform(
                                                                   (UnityEngine_Component_o *)this,
                                                                   0LL);
                  if ( this )
                  {
                    v69.fields.z = v56 - z;
                    v69.fields.y = v55 - y;
                    v69.fields.x = v54 - x;
                    UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v69, 0LL);
LABEL_60:
                    if ( (float)((float)(v4->fields._skipFrame_5__5 + v19) + v4->fields._playSpeed_5__6) < v4->fields._fadeTime_5__3 )
                    {
                      v4->fields.__2__current = 0LL;
                      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                      sub_1B6406C(p__2__current, 0, v2, v3);
                      *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
                      return 1;
                    }
                    goto LABEL_62;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_73:
    sub_1B64324(this);
  }
  if ( _1__state != 1 )
  {
    if ( _1__state )
      return 0;
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_73;
    v9 = (UnityEngine_Object_o *)_4__this->fields.currController;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v9, 0LL, 0LL) )
      return 0;
    this = (BattleMoviePlayer__PlayMovie_d__30_o *)_4__this->fields.MovieInfoList;
    if ( !this )
      goto LABEL_73;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)this,
             v4->fields.num,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    v4->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
    p_movInfo_5__2 = &v4->fields._movInfo_5__2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, (int32_t)Item, v12, v13);
    if ( !v4->fields._movInfo_5__2 )
      goto LABEL_73;
    validTime = v4->fields._movInfo_5__2->fields.validTime;
    if ( validTime <= 0.0 )
    {
      v15 = _4__this->fields.currController;
      if ( !v15 )
        goto LABEL_73;
      this = (BattleMoviePlayer__PlayMovie_d__30_o *)v15->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_73;
      this = (BattleMoviePlayer__PlayMovie_d__30_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
      if ( this )
      {
        v16 = _4__this->fields.currController;
        if ( !v16 )
          goto LABEL_73;
        this = (BattleMoviePlayer__PlayMovie_d__30_o *)v16->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_73;
        this = (BattleMoviePlayer__PlayMovie_d__30_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
        if ( !this )
          goto LABEL_73;
        validTime = (float)LODWORD(this->fields._movInfo_5__2);
      }
      else
      {
        validTime = 0.0;
      }
    }
    v57 = *p_movInfo_5__2;
    if ( !*p_movInfo_5__2 )
      goto LABEL_73;
    v4->fields._fadeTime_5__3 = fmaxf(validTime - v57->fields.fadeRestTime, 0.0);
    v4->fields._effectTime_5__4 = fmaxf(validTime - v57->fields.effectRestTime, 0.0);
    v58 = _4__this->fields.currController;
    if ( !v58 )
      goto LABEL_73;
    this = (BattleMoviePlayer__PlayMovie_d__30_o *)v58->fields._player_k__BackingField;
    if ( !this )
      goto LABEL_73;
    DisplayedFrameNo = CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
    v4->fields._skipFrame_5__5 = 0.0;
    if ( (DisplayedFrameNo & 0x80000000) != 0 )
      goto LABEL_72;
    goto LABEL_45;
  }
  v4->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_73;
  v37 = _4__this->fields.currController;
  if ( !v37 )
    goto LABEL_73;
  this = (BattleMoviePlayer__PlayMovie_d__30_o *)v37->fields._player_k__BackingField;
  if ( !this )
    goto LABEL_73;
  v38 = CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
  skipFrame_5__5 = v4->fields._skipFrame_5__5;
  v40 = v38;
  v4->fields._skipFrame_5__5 = skipFrame_5__5 + UnityEngine_Time__get_timeScale(0LL);
  if ( (v40 & 0x80000000) == 0 )
  {
LABEL_45:
    this = (BattleMoviePlayer__PlayMovie_d__30_o *)_4__this->fields.currController;
    if ( this )
    {
      this = (BattleMoviePlayer__PlayMovie_d__30_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
      if ( this )
      {
        v66 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__30_o *)_4__this->fields.currController;
        _4__this->fields.startPanelPosition = v66;
        if ( this )
        {
          this = (BattleMoviePlayer__PlayMovie_d__30_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( this )
          {
            localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
            KeepStartPosition = _4__this->fields.KeepStartPosition;
            _4__this->fields.startPanelScale = localScale;
            if ( KeepStartPosition )
            {
              v44 = _4__this->fields.perf;
              if ( !v44 )
                goto LABEL_73;
              this = (BattleMoviePlayer__PlayMovie_d__30_o *)v44->fields.actorcamera;
              if ( !this )
                goto LABEL_73;
              this = (BattleMoviePlayer__PlayMovie_d__30_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( !this )
                goto LABEL_73;
              _4__this->fields.cameraStartPosition = UnityEngine_Transform__get_position(
                                                       (UnityEngine_Transform_o *)this,
                                                       0LL);
            }
            this = (BattleMoviePlayer__PlayMovie_d__30_o *)_4__this->fields.currController;
            if ( this )
            {
              this = (BattleMoviePlayer__PlayMovie_d__30_o *)UnityEngine_Component__GetComponent_object_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_2E2FE90 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
              if ( this )
              {
                UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 1, 0LL);
                v45 = _4__this->fields.currController;
                if ( v45 )
                {
                  this = (BattleMoviePlayer__PlayMovie_d__30_o *)v45->fields._player_k__BackingField;
                  if ( this )
                  {
                    v46 = CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
                    timeScale = UnityEngine_Time__get_timeScale(0LL);
                    movInfo_5__2 = v4->fields._movInfo_5__2;
                    if ( movInfo_5__2 )
                    {
                      v19 = (float)v46;
                      v4->fields._playSpeed_5__6 = timeScale * movInfo_5__2->fields.playSpeed;
                      goto LABEL_60;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_73;
  }
LABEL_72:
  v4->fields.__2__current = 0LL;
  v60 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B6406C(v60, 0, v41, v42);
  result = 1;
  *(_DWORD *)&v60[-1].fields.isMine = 1;
  return result;
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovie_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovie_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__PlayMovie_d__30__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovie_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleMoviePlayer__PlayMovie_d__30_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovie_d__30__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovie_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__PlayMovie_d__30__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovie_d__30_o *this,
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
  __int64 v2; // x2
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
  __int64 v15; // x1
  System_Collections_Generic_List_T__o *MovieInfoList; // x21
  BattleMoviePlayer___c_c *v17; // x0
  System_Func_object__bool__o *_9__27_0; // x22
  Il2CppObject *v19; // x23
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x21
  int32_t cullingMask; // w0
  Il2CppObject *Component_object; // x0
  struct CriManaMovieController_o **p_currController; // x21
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v30; // x8
  CriMana_Player_o *player_k__BackingField; // x22
  float timeScale; // s0
  float v33; // s8
  const MethodInfo *v34; // x2
  System_Collections_IEnumerator_o *v35; // x0
  UnityEngine_Coroutine_o *started; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v38; // w2
  int32_t v39; // w3
  BattlePerformance_o *v40; // x0
  int v41; // w22
  struct UnityEngine_GameObject_o *nextMovieObj; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  const MethodInfo *v45; // x2
  System_Collections_IEnumerator_o *v46; // x0
  const MethodInfo *v47; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v48; // x8
  int32_t v49; // w1
  BattleMoviePlayer__StartMovie_d__27_o *v50; // x22
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v51; // x8
  struct UnityEngine_GameObject_o *v52; // x1
  BattleMoviePlayer__StartMovie_d__27_o **p_currMovieObj; // x21
  int v54; // w23
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w2
  int32_t v58; // w3
  const MethodInfo *v59; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v60; // x8
  int size; // w8
  System_Collections_IEnumerator_o *v62; // x0
  __int64 v63; // x1
  __int64 v64; // x2
  System_Collections_Generic_List_T__o *v65; // x22
  System_Collections_IEnumerator_o *v66; // x21
  BattleMoviePlayer___c_c *v67; // x8
  System_Func_object__bool__o *_9__27_1; // x23
  Il2CppObject *v69; // x24
  struct BattleMoviePlayer___c_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  struct BattlePerformance_o *v73; // x8
  UnityEngine_Camera_o *v74; // x22
  int32_t v75; // w0
  UnityEngine_Coroutine_o *v76; // x0
  ServantStatusBattleListViewItem_o *v77; // x19
  int32_t v78; // w2
  int32_t v79; // w3
  int v80; // w8
  Il2CppObject *v81; // x0
  struct CriManaMovieController_o **v82; // x21
  int32_t v83; // w2
  int32_t v84; // w3
  CriMana_Player_o *v85; // x22
  float v86; // s0
  float v87; // s8
  const MethodInfo *v88; // x2
  System_Collections_IEnumerator_o *v89; // x0
  UnityEngine_Coroutine_o *v90; // x0
  int32_t v91; // w2
  int32_t v92; // w3

  v4 = this;
  if ( (byte_49FEA01 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1B640C8(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v8);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B640C8(&Method_BattleMoviePlayer___c__StartMovie_b__27_0__, v10);
    sub_1B640C8(&Method_BattleMoviePlayer___c__StartMovie_b__27_1__, v11);
    this = (BattleMoviePlayer__StartMovie_d__27_o *)sub_1B640C8(&BattleMoviePlayer___c_TypeInfo, v12);
    byte_49FEA01 = 1;
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
      v17 = BattleMoviePlayer___c_TypeInfo;
      if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
        v17 = BattleMoviePlayer___c_TypeInfo;
      }
      _9__27_0 = (System_Func_object__bool__o *)v17->static_fields->__9__27_0;
      if ( !_9__27_0 )
      {
        if ( !v17->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v17);
          v17 = BattleMoviePlayer___c_TypeInfo;
        }
        v19 = (Il2CppObject *)v17->static_fields->__9;
        _9__27_0 = (System_Func_object__bool__o *)sub_1B64314(
                                                    System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo,
                                                    v15,
                                                    v2);
        System_Func_object__bool____ctor(_9__27_0, v19, Method_BattleMoviePlayer___c__StartMovie_b__27_0__, 0LL);
        static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
        static_fields->__9__27_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__27_0;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v21, v22);
      }
      this = (BattleMoviePlayer__StartMovie_d__27_o *)BasicHelper__Any_object_(
                                                        MovieInfoList,
                                                        (System_Func_T__bool__o *)_9__27_0,
                                                        (const MethodInfo_2E24870 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
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
                           (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      _4__this->fields.currController = (struct CriManaMovieController_o *)Component_object;
      p_currController = &_4__this->fields.currController;
      sub_1B6406C(
        (ServantStatusBattleListViewItem_o *)&_4__this->fields.currController,
        (int32_t)Component_object,
        v28,
        v29);
      v30 = _4__this->fields.MovieInfoList;
      if ( !v30 )
        goto LABEL_69;
      if ( v30->fields._size >= 1 )
      {
        if ( *p_currController )
        {
          player_k__BackingField = (*p_currController)->fields._player_k__BackingField;
          timeScale = UnityEngine_Time__get_timeScale(0LL);
          this = (BattleMoviePlayer__StartMovie_d__27_o *)_4__this->fields.MovieInfoList;
          if ( this )
          {
            v33 = timeScale;
            this = (BattleMoviePlayer__StartMovie_d__27_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)this,
                                                              0,
                                                              (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
            if ( this )
            {
              if ( player_k__BackingField )
              {
                CriMana_Player__SetSpeed(player_k__BackingField, v33 * *(float *)&this[1].monitor, 0LL);
                if ( *p_currController )
                {
                  this = (BattleMoviePlayer__StartMovie_d__27_o *)(*p_currController)->fields._player_k__BackingField;
                  if ( this )
                  {
                    CriMana_Player__Start((CriMana_Player_o *)this, 0LL);
                    v35 = BattleMoviePlayer__PlayMovie(_4__this, 0, v34);
                    started = UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                (UnityEngine_MonoBehaviour_o *)_4__this,
                                v35,
                                0LL);
                    v4->fields.__2__current = (Il2CppObject *)started;
                    p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                    sub_1B6406C(p__2__current, (int32_t)started, v38, v39);
                    LOBYTE(v40) = 1;
                    *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
                    return (char)v40;
                  }
                }
              }
            }
          }
        }
        goto LABEL_69;
      }
LABEL_29:
      v41 = 0;
      for ( v4->fields._i_5__2 = 0; ; v4->fields._i_5__2 = v41 )
      {
        if ( !_4__this )
          goto LABEL_69;
        v51 = _4__this->fields.MovieInfoList;
        if ( !v51 )
          goto LABEL_69;
        p_currMovieObj = (BattleMoviePlayer__StartMovie_d__27_o **)&_4__this->fields.currMovieObj;
        v52 = _4__this->fields.currMovieObj;
        v54 = v51->fields._size - 1;
        _4__this->fields.pastMovieObj = v52;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v52, v2, v3);
        if ( v41 >= v54 )
        {
          _4__this->fields.currMovieObj = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, 0, v55, v56);
          _4__this->fields.nextMovieObj = 0LL;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, 0, v57, v58);
          v60 = _4__this->fields.MovieInfoList;
          if ( !v60 )
            goto LABEL_69;
          size = v60->fields._size;
          if ( size < 1 )
          {
LABEL_56:
            v40 = _4__this->fields.perf;
            if ( v40 )
            {
              BattlePerformance__OnBattleMovieEnd(v40, 0LL);
LABEL_58:
              LOBYTE(v40) = 0;
            }
            return (char)v40;
          }
          v62 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, size - 1, v59);
          v65 = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
          v66 = v62;
          v67 = BattleMoviePlayer___c_TypeInfo;
          if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
            v67 = BattleMoviePlayer___c_TypeInfo;
          }
          _9__27_1 = (System_Func_object__bool__o *)v67->static_fields->__9__27_1;
          if ( !_9__27_1 )
          {
            if ( !v67->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v67);
              v67 = BattleMoviePlayer___c_TypeInfo;
            }
            v69 = (Il2CppObject *)v67->static_fields->__9;
            _9__27_1 = (System_Func_object__bool__o *)sub_1B64314(
                                                        System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo,
                                                        v63,
                                                        v64);
            System_Func_object__bool____ctor(_9__27_1, v69, Method_BattleMoviePlayer___c__StartMovie_b__27_1__, 0LL);
            v70 = BattleMoviePlayer___c_TypeInfo->static_fields;
            v70->__9__27_1 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__27_1;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)&v70->__9__27_1, (int32_t)_9__27_1, v71, v72);
          }
          this = (BattleMoviePlayer__StartMovie_d__27_o *)BasicHelper__Any_object_(
                                                            v65,
                                                            (System_Func_T__bool__o *)_9__27_1,
                                                            (const MethodInfo_2E24870 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v73 = _4__this->fields.perf;
            if ( !v73 )
              goto LABEL_69;
            v74 = v73->fields.actorcamera;
            if ( !v74 )
              goto LABEL_69;
            v75 = UnityEngine_Camera__get_cullingMask(v73->fields.actorcamera, 0LL);
            UnityEngine_Camera__set_cullingMask(v74, v75 | 0x100000, 0LL);
          }
          v76 = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, v66, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v76;
          v77 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B6406C(v77, (int32_t)v76, v78, v79);
          v80 = 3;
          goto LABEL_67;
        }
        nextMovieObj = _4__this->fields.nextMovieObj;
        _4__this->fields.currMovieObj = nextMovieObj;
        sub_1B6406C(
          (ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj,
          (int32_t)nextMovieObj,
          v55,
          v56);
        _4__this->fields.nextMovieObj = 0LL;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, 0, v43, v44);
        v46 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, v4->fields._i_5__2, v45);
        this = (BattleMoviePlayer__StartMovie_d__27_o *)UnityEngine_MonoBehaviour__StartCoroutine_69113008(
                                                          (UnityEngine_MonoBehaviour_o *)_4__this,
                                                          v46,
                                                          0LL);
        v48 = _4__this->fields.MovieInfoList;
        if ( !v48 )
          goto LABEL_69;
        v49 = v4->fields._i_5__2 + 2;
        if ( v49 < v48->fields._size )
          BattleMoviePlayer__GetMoviePanelAdd(_4__this, v49, v47);
        v50 = *p_currMovieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleMoviePlayer__StartMovie_d__27_o *)UnityEngine_Object__op_Inequality(
                                                          (UnityEngine_Object_o *)v50,
                                                          0LL,
                                                          0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
LABEL_39:
        v41 = v4->fields._i_5__2 + 1;
      }
      this = *p_currMovieObj;
      if ( !*p_currMovieObj )
        goto LABEL_69;
      v81 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)this,
              (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      _4__this->fields.currController = (struct CriManaMovieController_o *)v81;
      v82 = &_4__this->fields.currController;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.currController, (int32_t)v81, v83, v84);
      if ( !_4__this->fields.currController
        || (v85 = _4__this->fields.currController->fields._player_k__BackingField,
            v86 = UnityEngine_Time__get_timeScale(0LL),
            (this = (BattleMoviePlayer__StartMovie_d__27_o *)_4__this->fields.MovieInfoList) == 0LL)
        || (v87 = v86,
            (this = (BattleMoviePlayer__StartMovie_d__27_o *)System_Collections_Generic_List_object___get_Item(
                                                               (System_Collections_Generic_List_object__o *)this,
                                                               v4->fields._i_5__2 + 1,
                                                               (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__)) == 0LL)
        || !v85
        || (CriMana_Player__SetSpeed(v85, v87 * *(float *)&this[1].monitor, 0LL), !*v82)
        || (this = (BattleMoviePlayer__StartMovie_d__27_o *)(*v82)->fields._player_k__BackingField) == 0LL )
      {
LABEL_69:
        sub_1B64324(this);
      }
      CriMana_Player__Start((CriMana_Player_o *)this, 0LL);
      v89 = BattleMoviePlayer__PlayMovie(_4__this, v4->fields._i_5__2 + 1, v88);
      v90 = UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, v89, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v90;
      v77 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B6406C(v77, (int32_t)v90, v91, v92);
      v80 = 2;
LABEL_67:
      *(_DWORD *)&v77[-1].fields.isMine = v80;
      LOBYTE(v40) = 1;
      return (char)v40;
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_BattleMoviePlayer__StartMovie_d__27_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FE9FD & 1) == 0 )
  {
    sub_1B640C8(&BattleMoviePlayer___c_TypeInfo, v1);
    byte_49FE9FD = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(BattleMoviePlayer___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  BattleMoviePlayer___c_TypeInfo->static_fields->__9 = (struct BattleMoviePlayer___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)BattleMoviePlayer___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
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
    sub_1B64324(this);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___StartMovie_b__27_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___StartMovie_b__27_1(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B64324(this);
  return x->fields.cameraType == 1;
}