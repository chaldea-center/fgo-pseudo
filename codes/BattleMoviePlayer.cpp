void __fastcall BattleMoviePlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleMoviePlayer_StaticFields *static_fields; // x8

  if ( (byte_4A50D59 & 1) == 0 )
  {
    sub_1B863B8(&BattleMoviePlayer_TypeInfo, v1);
    byte_4A50D59 = 1;
  }
  static_fields = BattleMoviePlayer_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BackMovieScale = xmmword_BC3A80;
  *(_QWORD *)&static_fields->BasePanelPosition.fields.x = 0LL;
  static_fields->BasePanelPosition.fields.z = 10.0;
}


void __fastcall BattleMoviePlayer___ctor(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x1
  UnityEngine_Vector3_c *v13; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  _BOOL4 v16; // w9
  struct UnityEngine_Vector3_StaticFields *v17; // x10
  float v18; // s1
  struct UnityEngine_Vector3_StaticFields *v19; // x8
  float v20; // s1

  if ( (byte_4A50D58 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo, v4);
    sub_1B863B8(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4A50D58 = 1;
  }
  this->fields.KeepStartPosition = 1;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
  this->fields.MovieInfoList = (struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *)v6;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.MovieInfoList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ObjList = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.ObjList, (int32_t)v9, v10, v11);
  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v12);
    byte_4A487E1 = 1;
  }
  v13 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.startPanelPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.startPanelPosition.fields.z = z;
  if ( byte_4A487E6 )
  {
    v16 = 0;
  }
  else
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v12);
    v13 = UnityEngine_Vector3_TypeInfo;
    byte_4A487E6 = 1;
    v16 = byte_4A487E1 == 0;
  }
  v17 = v13->static_fields;
  v18 = v17->oneVector.fields.z;
  *(_QWORD *)&this->fields.startPanelScale.fields.x = *(_QWORD *)&v17->oneVector.fields.x;
  this->fields.startPanelScale.fields.z = v18;
  if ( v16 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v12);
    v13 = UnityEngine_Vector3_TypeInfo;
    byte_4A487E1 = 1;
  }
  v19 = v13->static_fields;
  v20 = v19->zeroVector.fields.z;
  *(_QWORD *)&this->fields.cameraStartPosition.fields.x = *(_QWORD *)&v19->zeroVector.fields.x;
  this->fields.cameraStartPosition.fields.z = v20;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall BattleMoviePlayer__CreateBattleMoviePanel(
        BattleMoviePlayer_o *this,
        BattleMoviePlayer_MovieInfo_o *movieInfo,
        int32_t no,
        const MethodInfo *method)
{
  BattleMoviePlayer_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t cameraType; // w8
  Il2CppObject *v17; // x21
  struct UnityEngine_GameObject_o *v18; // x23
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x8
  struct System_Object_array *v22; // x9
  _QWORD *v23; // x10
  __int64 v24; // x11
  BattleMoviePlayer_o *v25; // x21
  Il2CppClass **v26; // x0
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *moviePrefab; // x21
  UnityEngine_Transform_o *transform; // x23
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  System_Collections_Generic_List_object__o *ObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  int v37; // w8
  UnityEngine_Material_o **p_baseMat; // x23
  UnityEngine_Object_o *baseMat; // x24
  UnityEngine_Material_o *material; // x24
  UnityEngine_Material_o *v41; // x25
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UnityEngine_Transform_o *v44; // x24
  float v45; // s8
  float y; // s9
  float v47; // s2
  UnityEngine_Transform_o *v48; // x22
  float v49; // s0
  float v50; // s1
  float v51; // s2
  UnityEngine_Transform_o *v52; // x22
  float x; // s8
  float v54; // s9
  float z; // s10
  float *v56; // x8
  UnityEngine_Material_o *v57; // x23
  UnityEngine_Material_o *v58; // x22
  const MethodInfo *v59; // x3
  Il2CppObject *v61; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4A50D4C & 1) == 0 )
  {
    sub_1B863B8(&BattleMoviePlayer_TypeInfo, movieInfo);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_BattlePerformance___, v7);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___, v8);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v9);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v10);
    sub_1B863B8(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_1B863B8(&UnityEngine_Material_TypeInfo, v13);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v14);
    this = (BattleMoviePlayer_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v15);
    byte_4A50D4C = 1;
  }
  component = 0LL;
  v61 = 0LL;
  if ( !movieInfo )
    goto LABEL_63;
  cameraType = movieInfo->fields.cameraType;
  if ( cameraType == 1 )
  {
    perf = v6->fields.perf;
    if ( !perf )
      goto LABEL_63;
    this = (BattleMoviePlayer_o *)perf->fields.actorcamera;
    if ( !this )
      goto LABEL_63;
    moviePrefab = (Il2CppObject *)v6->fields.moviePrefab;
    this = (BattleMoviePlayer_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_63;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__50290416(
                                    moviePrefab,
                                    transform,
                                    (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
    ObjList = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !ObjList )
      goto LABEL_63;
    items = ObjList->fields._items;
    v34 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++ObjList->fields._version;
    if ( !items )
      goto LABEL_63;
    size = ObjList->fields._size;
    v25 = this;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        ObjList,
        (Il2CppObject *)this,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      ObjList->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v25;
      sub_1B8635C((CGThumbnailListItem_o *)(v36 + 4), (int32_t)v25, v30, v31);
    }
    if ( !v25 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v25,
           &v61,
           (const MethodInfo_2FC2080 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)v61;
      if ( !v61 )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v61, v6->fields.perf, 0, 0LL);
    }
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v25, 11, 0LL);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v25,
                                    (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v37 = 1;
  }
  else
  {
    if ( cameraType )
    {
      v25 = 0LL;
      goto LABEL_39;
    }
    this = (BattleMoviePlayer_o *)v6->fields.perf;
    if ( !this )
      goto LABEL_63;
    v17 = (Il2CppObject *)v6->fields.moviePrefab;
    this = (BattleMoviePlayer_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    if ( !this )
      goto LABEL_63;
    v18 = this[1].fields.moviePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__50290416(
                                    v17,
                                    (UnityEngine_Transform_o *)v18,
                                    (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
    v21 = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !v21 )
      goto LABEL_63;
    v22 = v21->fields._items;
    v23 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v21->fields._version;
    if ( !v22 )
      goto LABEL_63;
    v24 = v21->fields._size;
    v25 = this;
    if ( (unsigned int)v24 >= v22->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v21,
        (Il2CppObject *)this,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &v22->obj.klass + v24;
      v21->fields._size = v24 + 1;
      v26[4] = (Il2CppClass *)v25;
      sub_1B8635C((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v25, v19, v20);
    }
    if ( !v25 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v25,
           &component,
           (const MethodInfo_2FC2080 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)component;
      if ( !component )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)component, v6->fields.perf, 1, 0LL);
    }
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v25,
                                    (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v37 = 0;
  }
  LODWORD(this->fields.moviePrefab) = v37;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
LABEL_39:
  p_baseMat = &v6->fields.baseMat;
  baseMat = (UnityEngine_Object_o *)v6->fields.baseMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleMoviePlayer_o *)UnityEngine_Object__op_Equality(baseMat, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v25 )
      goto LABEL_63;
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v25,
                                    (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !this )
      goto LABEL_63;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
    v41 = (UnityEngine_Material_o *)sub_1B86604(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_69219356(v41, material, 0LL);
    *p_baseMat = v41;
    sub_1B8635C((CGThumbnailListItem_o *)&v6->fields.baseMat, (int32_t)v41, v42, v43);
  }
  else if ( !v25 )
  {
    goto LABEL_63;
  }
  v44 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL);
  if ( !this )
    goto LABEL_63;
  LODWORD(v45) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL);
  if ( !this )
    goto LABEL_63;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  y = position.fields.y;
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL);
  if ( !this )
    goto LABEL_63;
  *(UnityEngine_Vector3_o *)(&v47 - 2) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  if ( !v44 )
    goto LABEL_63;
  v64.fields.y = y;
  v64.fields.z = (float)((float)no * 0.1) + v47;
  v64.fields.x = v45;
  UnityEngine_Transform__set_position(v44, v64, 0LL);
  if ( movieInfo->fields.isBackMovie )
  {
    v48 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL);
    if ( this )
    {
      *(UnityEngine_Vector3_o *)&v49 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      if ( v48 )
      {
        v65.fields.z = v51 + 0.1;
        v65.fields.y = v50 + 0.0;
        v65.fields.x = v49 + 0.0;
        UnityEngine_Transform__set_position(v48, v65, 0LL);
        this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL);
        if ( this )
        {
          v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL);
          if ( this )
          {
            localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
            this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            x = localScale.fields.x;
            v54 = localScale.fields.y;
            z = localScale.fields.z;
            if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
              this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            }
            if ( v52 )
            {
              v56 = *(float **)&this[1].fields.m_CachedPtr;
              v67.fields.z = z * *v56;
              v67.fields.y = v54 * *v56;
              v67.fields.x = x * *v56;
              UnityEngine_Transform__set_localScale(v52, v67, 0LL);
              goto LABEL_59;
            }
          }
        }
      }
    }
LABEL_63:
    sub_1B86614(this, movieInfo);
  }
LABEL_59:
  v57 = *p_baseMat;
  v58 = (UnityEngine_Material_o *)sub_1B86604(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_69219356(v58, v57, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v25,
                                  (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v58, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v25,
                                  (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
  if ( !this )
    goto LABEL_63;
  CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v58, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v25, 1, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v25,
                                  (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
  BattleMoviePlayer__InitMovie(v6, (UnityEngine_GameObject_o *)v25, no, v59);
  return (UnityEngine_GameObject_o *)v25;
}


void __fastcall BattleMoviePlayer__CreateMovieInfoListEvent(
        BattleMoviePlayer_o *this,
        System_Collections_Generic_List_BattleMoviePlayer_PathType__o *type,
        System_Collections_Generic_List_string__o *path,
        System_Collections_Generic_List_float__o *valid,
        System_Collections_Generic_List_float__o *fadeout,
        System_Collections_Generic_List_int__o *cam,
        System_Collections_Generic_List_float__o *speed,
        System_Collections_Generic_List_UnityEvent__o *effect,
        System_Collections_Generic_List_float__o *effRest,
        bool keepStartPosition,
        bool overrideZDepth,
        bool ignoreTS,
        System_Collections_Generic_List_float__o *fadein,
        bool loop,
        bool isBackMovie,
        const MethodInfo *method)
{
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  System_Collections_Generic_List_float__o *v33; // x19
  System_Collections_Generic_List_float__o *v34; // x21
  int32_t v35; // w27
  int32_t v36; // w25
  float v37; // s8
  float v38; // s9
  int32_t v39; // w19
  float Item; // s10
  float v41; // s11
  float v42; // s12
  System_Collections_Generic_List_object__o *MovieInfoList; // x28
  bool IgnoreTimeScale; // w19
  bool v45; // w23
  bool v46; // w21
  BattleMoviePlayer_MovieInfo_o *v47; // x29
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  const MethodInfo *v54; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_List_UnityEvent__o *v55; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_float__o *v56; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_List_int__o *v57; // [xsp+20h] [xbp-D0h]
  BattleMoviePlayer_o *v60; // [xsp+38h] [xbp-B8h]
  int32_t cama; // [xsp+44h] [xbp-ACh]
  UnityEngine_Events_UnityEvent_o *eff; // [xsp+48h] [xbp-A8h]
  System_String_o *patha; // [xsp+58h] [xbp-98h]

  v60 = this;
  if ( (byte_4A50D57 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__, type);
    sub_1B863B8(&Method_System_Collections_Generic_List_float__get_Count__, v21);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Count__, v22);
    sub_1B863B8(&Method_System_Collections_Generic_List_UnityEvent__get_Count__, v23);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Count__, v24);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v25);
    sub_1B863B8(&Method_System_Collections_Generic_List_string__get_Item__, v26);
    sub_1B863B8(&Method_System_Collections_Generic_List_UnityEvent__get_Item__, v27);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__, v28);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v29);
    sub_1B863B8(&Method_System_Collections_Generic_List_float__get_Item__, v30);
    sub_1B863B8(&BattleMoviePlayer_MovieInfo_TypeInfo, v31);
    this = (BattleMoviePlayer_o *)sub_1B863B8(&StringLiteral_1/*""*/, v32);
    byte_4A50D57 = 1;
  }
  v60->fields.KeepStartPosition = keepStartPosition;
  v60->fields.OverrideZDepth = overrideZDepth;
  v60->fields.IgnoreTimeScale = ignoreTS;
  v60->fields.Loop = loop;
  v60->fields.IsBackMovie = isBackMovie;
  if ( !path )
LABEL_47:
    sub_1B86614(this, type);
  v33 = valid;
  if ( path->fields._size >= 1 )
  {
    v34 = effRest;
    v35 = 0;
    v56 = speed;
    v57 = cam;
    v55 = effect;
    do
    {
      this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)path,
                                      v35,
                                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        if ( !fadeout )
          goto LABEL_47;
        if ( v35 < fadeout->fields._size )
        {
          if ( !cam )
            goto LABEL_47;
          if ( v35 < cam->fields._size )
          {
            this = (BattleMoviePlayer_o *)type;
            if ( !type )
              goto LABEL_47;
            if ( v35 >= type->fields._size )
            {
              v36 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                              (System_Collections_Generic_List_T__o *)type,
                                              v35,
                                              (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
              v36 = (int)this;
            }
            if ( v35 >= path->fields._size )
            {
              patha = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)path,
                                              v35,
                                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_string__get_Item__);
              patha = (System_String_o *)this;
            }
            if ( !v33 )
              goto LABEL_47;
            v37 = 0.0;
            v38 = 0.0;
            if ( v35 < v33->fields._size )
              v38 = fmaxf(
                      System_Collections_Generic_List_float___get_Item(
                        v33,
                        v35,
                        (const MethodInfo_361CDDC *)Method_System_Collections_Generic_List_float__get_Item__),
                      0.0);
            if ( v35 < fadeout->fields._size )
              v37 = fmaxf(
                      System_Collections_Generic_List_float___get_Item(
                        fadeout,
                        v35,
                        (const MethodInfo_361CDDC *)Method_System_Collections_Generic_List_float__get_Item__),
                      1.0);
            if ( v35 >= cam->fields._size )
            {
              v39 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_int___get_Item(
                                              cam,
                                              v35,
                                              (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
              v39 = (int)this;
            }
            if ( !speed )
              goto LABEL_47;
            Item = 1.0;
            if ( v35 < speed->fields._size )
              Item = System_Collections_Generic_List_float___get_Item(
                       speed,
                       v35,
                       (const MethodInfo_361CDDC *)Method_System_Collections_Generic_List_float__get_Item__);
            if ( !effect )
              goto LABEL_47;
            if ( v35 >= effect->fields._size )
            {
              eff = 0LL;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)effect,
                                              v35,
                                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_UnityEvent__get_Item__);
              eff = (UnityEngine_Events_UnityEvent_o *)this;
            }
            if ( !v34 )
              goto LABEL_47;
            v41 = 0.0;
            if ( v35 < v34->fields._size )
              v41 = System_Collections_Generic_List_float___get_Item(
                      v34,
                      v35,
                      (const MethodInfo_361CDDC *)Method_System_Collections_Generic_List_float__get_Item__);
            if ( !fadein )
              goto LABEL_47;
            v42 = 0.0;
            cama = v39;
            if ( v35 < fadein->fields._size )
              v42 = System_Collections_Generic_List_float___get_Item(
                      fadein,
                      v35,
                      (const MethodInfo_361CDDC *)Method_System_Collections_Generic_List_float__get_Item__);
            MovieInfoList = (System_Collections_Generic_List_object__o *)v60->fields.MovieInfoList;
            IgnoreTimeScale = v60->fields.IgnoreTimeScale;
            v45 = v60->fields.Loop;
            v46 = v60->fields.IsBackMovie;
            v47 = (BattleMoviePlayer_MovieInfo_o *)sub_1B86604(BattleMoviePlayer_MovieInfo_TypeInfo);
            BattleMoviePlayer_MovieInfo___ctor(
              v47,
              v36,
              patha,
              v38,
              v37,
              cama,
              Item,
              eff,
              v41,
              IgnoreTimeScale,
              v42,
              v45,
              v46,
              v54);
            if ( !MovieInfoList )
              goto LABEL_47;
            items = MovieInfoList->fields._items;
            v51 = Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__;
            ++MovieInfoList->fields._version;
            if ( !items )
              goto LABEL_47;
            size = MovieInfoList->fields._size;
            v34 = effRest;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                MovieInfoList,
                (Il2CppObject *)v47,
                *(const MethodInfo_35FC958 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = &items->obj.klass + size;
              MovieInfoList->fields._size = size + 1;
              v53[4] = (Il2CppClass *)v47;
              sub_1B8635C((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v47, v48, v49);
            }
            effect = v55;
            speed = v56;
            cam = v57;
            v33 = valid;
          }
        }
      }
      ++v35;
    }
    while ( v35 < path->fields._size );
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
  System_Func_object__bool__o *_9__27_0; // x21
  Il2CppObject *v19; // x22
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v24; // x8
  int32_t size; // w2
  int v26; // w9
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v28; // x8
  int32_t v29; // w2
  int v30; // w9
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A50D4B & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B863B8(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Clear__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&Method_BattleMoviePlayer___c__Dispose_b__27_0__, v11);
    sub_1B863B8(&BattleMoviePlayer___c_TypeInfo, v12);
    byte_4A50D4B = 1;
  }
  memset(&v33, 0, sizeof(v33));
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
    _9__27_0 = (System_Func_object__bool__o *)v17->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleMoviePlayer___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__27_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__27_0, v19, Method_BattleMoviePlayer___c__Dispose_b__27_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__27_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__27_0, (int32_t)_9__27_0, v21, v22);
    }
    ObjList = (struct System_Collections_Generic_List_GameObject__o *)BasicHelper__Any_object_(
                                                                        MovieInfoList,
                                                                        (System_Func_T__bool__o *)_9__27_0,
                                                                        (const MethodInfo_2F57CB4 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    if ( ((unsigned __int8)ObjList & 1) != 0 )
      BattleMoviePlayer__ShowBg(this, 1, v23);
  }
  v24 = this->fields.MovieInfoList;
  if ( !v24 )
    goto LABEL_32;
  size = v24->fields._size;
  v26 = v24->fields._version + 1;
  v24->fields._size = 0;
  v24->fields._version = v26;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v24->fields._items, 0, size, 0LL);
  ObjList = this->fields.ObjList;
  if ( !ObjList )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)ObjList,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v33 = v32;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v33.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69356292((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v28 = this->fields.ObjList;
  if ( !v28 )
LABEL_32:
    sub_1B86614(ObjList, v15);
  v29 = v28->fields._size;
  v30 = v28->fields._version + 1;
  v28->fields._size = 0;
  v28->fields._version = v30;
  if ( v29 >= 1 )
    System_Array__Clear((System_Array_o *)v28->fields._items, 0, v29, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__FadeoutDeleteMovie(
        BattleMoviePlayer_o *this,
        System_Action_o *FadeOuted,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A50D52 & 1) == 0 )
  {
    sub_1B863B8(&BattleMoviePlayer__FadeoutDeleteMovie_d__38_TypeInfo, FadeOuted);
    byte_4A50D52 = 1;
  }
  v5 = sub_1B86604(BattleMoviePlayer__FadeoutDeleteMovie_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = FadeOuted;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)FadeOuted, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoviePlayer__GetMoviePanelAdd(BattleMoviePlayer_o *this, int32_t i, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *MovieInfoList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v8; // x3
  struct UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A50D4E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, *(_QWORD *)&i);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v5);
    byte_4A50D4E = 1;
  }
  MovieInfoList = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
  if ( !MovieInfoList )
    sub_1B86614(0LL, *(_QWORD *)&i);
  if ( MovieInfoList->fields._size > i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             MovieInfoList,
             i,
             (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(this, (BattleMoviePlayer_MovieInfo_o *)Item, i, v8);
    this->fields.nextMovieObj = BattleMoviePanel;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.nextMovieObj, (int32_t)BattleMoviePanel, v10, v11);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__GetMoviePanelFirst(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A50D4D & 1) == 0 )
  {
    sub_1B863B8(&BattleMoviePlayer__GetMoviePanelFirst_d__30_TypeInfo, performance);
    byte_4A50D4D = 1;
  }
  v5 = sub_1B86604(BattleMoviePlayer__GetMoviePanelFirst_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = performance;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)performance, v8, v9);
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

  if ( (byte_4A50D56 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Application_TypeInfo, obj);
    sub_1B863B8(&AssetManager_TypeInfo, v7);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_1056/*".usm"*/, v11);
    sub_1B863B8(&StringLiteral_1102/*"/StreamingAssets/"*/, v12);
    sub_1B863B8(&StringLiteral_1097/*"/Resources/"*/, v13);
    byte_4A50D56 = 1;
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
                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v16 = (System_String_o *)*((_QWORD *)MovieInfoList + 3);
    if ( !v16 )
      goto LABEL_41;
    if ( !System_String__EndsWith(*((System_String_o **)MovieInfoList + 3), (System_String_o *)StringLiteral_1056/*".usm"*/, 0LL) )
      v16 = System_String__Concat_61645176(v16, (System_String_o *)StringLiteral_1056/*".usm"*/, 0LL);
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
                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
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
                        (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v22 = &StringLiteral_1097/*"/Resources/"*/;
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
                        (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v22 = &StringLiteral_1102/*"/StreamingAssets/"*/;
    }
    MovieInfoList = System_String__Concat_61683424(
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
                                                   (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
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
    sub_1B86614(MovieInfoList, v14);
  }
}


void __fastcall BattleMoviePlayer__Initialize(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *MoviePanelFirst; // x1

  MoviePanelFirst = BattleMoviePlayer__GetMoviePanelFirst(this, perf, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, MoviePanelFirst, 0LL);
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
  if ( (byte_4A50D53 & 1) == 0 )
  {
    sub_1B863B8(&BattleMoviePlayer_TypeInfo, method);
    this = (BattleMoviePlayer_o *)sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A50D53 = 1;
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
    sub_1B86614(this, method);
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


bool __fastcall BattleMoviePlayer__IsPausedMovie(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *currMovieObj; // x20
  __int64 v5; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4A50D51 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    byte_4A50D51 = 1;
  }
  currMovieObj = (UnityEngine_Object_o *)this->fields.currMovieObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currMovieObj, 0LL, 0LL) )
    return 0;
  Component_object = this->fields.currMovieObj;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___)) == 0LL
    || (Component_object = (UnityEngine_GameObject_o *)Component_object[2].monitor) == 0LL )
  {
    sub_1B86614(Component_object, v5);
  }
  return CriMana_Player__IsPaused((CriMana_Player_o *)Component_object, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoviePlayer__PauseMovie(BattleMoviePlayer_o *this, bool v, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  UnityEngine_Object_o *currMovieObj; // x21
  Il2CppObject *Component_object; // x0
  __int64 v13; // x1
  UnityEngine_GameObject_o *v14; // x21
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  BattleMoviePlayer___c_c *v16; // x0
  System_Func_object__bool__o *_9__36_0; // x23
  Il2CppObject *v18; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2

  if ( (byte_4A50D50 & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, v);
    sub_1B863B8(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v5);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v6);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v7);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B863B8(&Method_BattleMoviePlayer___c__PauseMovie_b__36_0__, v9);
    sub_1B863B8(&BattleMoviePlayer___c_TypeInfo, v10);
    byte_4A50D50 = 1;
  }
  currMovieObj = (UnityEngine_Object_o *)this->fields.currMovieObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(currMovieObj, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    v14 = this->fields.currMovieObj;
    if ( !v14 )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         this->fields.currMovieObj,
                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    if ( !Component_object )
      goto LABEL_19;
    Component_object = (Il2CppObject *)Component_object[3].monitor;
    if ( !Component_object )
      goto LABEL_19;
    CriMana_Player__Pause((CriMana_Player_o *)Component_object, v, 0LL);
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v16 = BattleMoviePlayer___c_TypeInfo;
    if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
      v16 = BattleMoviePlayer___c_TypeInfo;
    }
    _9__36_0 = (System_Func_object__bool__o *)v16->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = BattleMoviePlayer___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__36_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__36_0, v18, Method_BattleMoviePlayer___c__PauseMovie_b__36_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__36_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v20, v21);
    }
    if ( BasicHelper__Any_object_(
           MovieInfoList,
           (System_Func_T__bool__o *)_9__36_0,
           (const MethodInfo_2F57CB4 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
    {
      BattleMoviePlayer__ShowBg(this, v, v22);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v14,
                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !Component_object )
LABEL_19:
      sub_1B86614(Component_object, v13);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, !v, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__PlayMovie(
        BattleMoviePlayer_o *this,
        UnityEngine_GameObject_o *movieObj,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A50D54 & 1) == 0 )
  {
    sub_1B863B8(&BattleMoviePlayer__PlayMovie_d__44_TypeInfo, movieObj);
    byte_4A50D54 = 1;
  }
  v7 = sub_1B86604(BattleMoviePlayer__PlayMovie_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = movieObj;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)movieObj, v10, v11);
  *(_DWORD *)(v7 + 48) = num;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__PlayMovieFadeOut(
        BattleMoviePlayer_o *this,
        UnityEngine_GameObject_o *movieObj,
        int32_t num,
        bool forceFadeout,
        const MethodInfo *method)
{
  bool v9; // w23
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4A50D55 & 1) == 0 )
  {
    sub_1B863B8(&BattleMoviePlayer__PlayMovieFadeOut_d__45_TypeInfo, movieObj);
    byte_4A50D55 = 1;
  }
  v9 = forceFadeout;
  v10 = sub_1B86604(BattleMoviePlayer__PlayMovieFadeOut_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 40) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 40), (int32_t)this, v11, v12);
  *(_QWORD *)(v10 + 32) = movieObj;
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 32), (int32_t)movieObj, v13, v14);
  *(_DWORD *)(v10 + 48) = num;
  *(_BYTE *)(v10 + 52) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoviePlayer__ShowBg(BattleMoviePlayer_o *this, bool v, const MethodInfo *method)
{
  BattleMoviePlayer_o *v3; // x19
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x19
  int32_t v6; // w1
  struct BattlePerformance_o *v7; // x8

  v3 = this;
  if ( !v )
  {
    perf = this->fields.perf;
    if ( perf )
    {
      actorcamera = perf->fields.actorcamera;
      if ( actorcamera )
      {
        v6 = UnityEngine_Camera__get_cullingMask(perf->fields.actorcamera, 0LL) & 0xFFEFFFFF;
LABEL_12:
        UnityEngine_Camera__set_cullingMask(actorcamera, v6, 0LL);
        return;
      }
    }
LABEL_13:
    sub_1B86614(this, v);
  }
  if ( this->fields.IsBackMovie )
    goto LABEL_9;
  this = (BattleMoviePlayer_o *)this->fields.perf;
  if ( !this )
    goto LABEL_13;
  this = (BattleMoviePlayer_o *)BattlePerformance__IsExistBackMovie((BattlePerformance_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_9:
    v7 = v3->fields.perf;
    if ( v7 )
    {
      actorcamera = v7->fields.actorcamera;
      if ( actorcamera )
      {
        v6 = UnityEngine_Camera__get_cullingMask(v7->fields.actorcamera, 0LL) | 0x100000;
        goto LABEL_12;
      }
    }
    goto LABEL_13;
  }
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__StartMovie(
        BattleMoviePlayer_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4A50D4F & 1) == 0 )
  {
    sub_1B863B8(&BattleMoviePlayer__StartMovie_d__35_TypeInfo, method);
    byte_4A50D4F = 1;
  }
  v3 = sub_1B86604(BattleMoviePlayer__StartMovie_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


bool __fastcall BattleMoviePlayer__get_ForceFadeout(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields._ForceFadeout_k__BackingField;
}


bool __fastcall BattleMoviePlayer__get_UseDepth(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields._UseDepth_k__BackingField;
}


void __fastcall BattleMoviePlayer__set_ForceFadeout(BattleMoviePlayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._ForceFadeout_k__BackingField = value;
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
        bool ignoreTmScl,
        float fadein,
        bool lp,
        bool backMovie,
        const MethodInfo *method)
{
  bool v24; // w24
  bool v25; // w25
  bool v26; // w26
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  v24 = ignoreTmScl;
  v25 = lp;
  v26 = backMovie;
  this->fields.playSpeed = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.pathType = type;
  this->fields.moviePath = path;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.moviePath, (int32_t)path, v27, v28);
  this->fields.effectEvent = eff;
  this->fields.validTime = valid;
  this->fields.fadeRestTime = fade;
  this->fields.cameraType = cam;
  this->fields.playSpeed = speed;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.effectEvent, (int32_t)eff, v29, v30);
  this->fields.effectRestTime = effRest;
  this->fields.ignoreTimeScale = v24;
  this->fields.fadeinTime = fadein;
  this->fields.loop = v25;
  this->fields.isBackMovie = v26;
}


float __fastcall BattleMoviePlayer_MovieInfo__GetTimeScale(
        BattleMoviePlayer_MovieInfo_o *this,
        const MethodInfo *method)
{
  if ( this->fields.ignoreTimeScale )
    return 1.0;
  else
    return UnityEngine_Time__get_timeScale(0LL);
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


void __fastcall BattleMoviePlayer__FadeoutDeleteMovie_d__38___ctor(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleMoviePlayer__FadeoutDeleteMovie_d__38__MoveNext(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        const MethodInfo *method)
{
  BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  const MethodInfo *v10; // x4
  System_Collections_IEnumerator_o *v11; // x0
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  System_Collections_IEnumerator_o *v13; // x21
  BattleMoviePlayer___c_c *v14; // x8
  System_Func_object__bool__o *_9__38_0; // x23
  Il2CppObject *v16; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  UnityEngine_Coroutine_o *started; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  BattlePerformance_o *perf; // x0
  struct System_Action_o *FadeOuted; // x8

  v2 = this;
  if ( (byte_4A50D5B & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1B863B8(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v3);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__38_0__, v5);
    this = (BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *)sub_1B863B8(&BattleMoviePlayer___c_TypeInfo, v6);
    byte_4A50D5B = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state != 1 )
  {
    if ( _1__state )
      goto LABEL_23;
    v2->fields.__1__state = -1;
    if ( _4__this )
    {
      currMovieObj = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(currMovieObj, 0LL, 0LL) )
      {
        v11 = BattleMoviePlayer__PlayMovieFadeOut(
                _4__this,
                _4__this->fields.currMovieObj,
                _4__this->fields.currentMovieNum,
                1,
                v10);
        MovieInfoList = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
        v13 = v11;
        v14 = BattleMoviePlayer___c_TypeInfo;
        if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
          v14 = BattleMoviePlayer___c_TypeInfo;
        }
        _9__38_0 = (System_Func_object__bool__o *)v14->static_fields->__9__38_0;
        if ( !_9__38_0 )
        {
          if ( !v14->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v14);
            v14 = BattleMoviePlayer___c_TypeInfo;
          }
          v16 = (Il2CppObject *)v14->static_fields->__9;
          _9__38_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__38_0,
            v16,
            Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__38_0__,
            0LL);
          static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
          static_fields->__9__38_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__38_0;
          sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__38_0, (int32_t)_9__38_0, v18, v19);
        }
        if ( BasicHelper__Any_object_(
               MovieInfoList,
               (System_Func_T__bool__o *)_9__38_0,
               (const MethodInfo_2F57CB4 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
        {
          BattleMoviePlayer__ShowBg(_4__this, 1, v20);
        }
        started = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v13, 0LL);
        v2->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1B8635C(p__2__current, (int32_t)started, v23, v24);
        LOBYTE(perf) = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return (char)perf;
      }
LABEL_23:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
LABEL_25:
    sub_1B86614(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  BattleMoviePlayer__Dispose(_4__this, method);
  FadeOuted = v2->fields.FadeOuted;
  if ( FadeOuted )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))FadeOuted->fields.m_target)(
      FadeOuted->fields.original_method_info,
      *(_QWORD *)&FadeOuted->fields.extra_arg);
  perf = _4__this->fields.perf;
  if ( perf )
  {
    BattlePerformance__OnBattleMovieEnd(perf, 0LL);
    goto LABEL_23;
  }
  return (char)perf;
}


Il2CppObject *__fastcall BattleMoviePlayer__FadeoutDeleteMovie_d__38__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__FadeoutDeleteMovie_d__38__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_BattleMoviePlayer__FadeoutDeleteMovie_d__38_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__FadeoutDeleteMovie_d__38__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__FadeoutDeleteMovie_d__38__System_IDisposable_Dispose(
        BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__GetMoviePanelFirst_d__30___ctor(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleMoviePlayer__GetMoviePanelFirst_d__30__MoveNext(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        const MethodInfo *method)
{
  BattleMoviePlayer__GetMoviePanelFirst_d__30_o *v2; // x21
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleMoviePlayer_o *_4__this; // x19
  Il2CppObject **p_perf; // x20
  UnityEngine_Object_o *perf; // x22
  UnityEngine_Object_o *performance; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattlePerformance_o *v13; // x1
  UnityEngine_Object_o *v14; // x21
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UnityEngine_Object_o *v18; // x20
  Il2CppObject *v19; // x0
  const MethodInfo *v20; // x3
  UnityEngine_GameObject_o *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *Item; // x0
  const MethodInfo *v25; // x3
  UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3

  v2 = this;
  if ( (byte_4A50D5C & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)sub_1B863B8(&StringLiteral_10441/*"Performance"*/, v6);
    byte_4A50D5C = 1;
  }
  if ( !v2->fields.__1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    p_perf = (Il2CppObject **)&_4__this->fields.perf;
    perf = (UnityEngine_Object_o *)_4__this->fields.perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(perf, 0LL, 0LL) )
      goto LABEL_19;
    performance = (UnityEngine_Object_o *)v2->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(performance, 0LL, 0LL) )
    {
      v13 = v2->fields.performance;
      *p_perf = (Il2CppObject *)v13;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.perf, (int32_t)v13, v11, v12);
    }
    v14 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
      goto LABEL_19;
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)UnityEngine_GameObject__Find(
                                                              (System_String_o *)StringLiteral_10441/*"Performance"*/,
                                                              0LL);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    *p_perf = Component_object;
    sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.perf, (int32_t)Component_object, v16, v17);
    v18 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
    {
LABEL_19:
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)_4__this->fields.MovieInfoList;
      if ( this )
      {
        if ( SLODWORD(this->fields.__2__current) < 1
          || (v19 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__),
              v21 = BattleMoviePlayer__CreateBattleMoviePanel(_4__this, (BattleMoviePlayer_MovieInfo_o *)v19, 0, v20),
              _4__this->fields.currMovieObj = v21,
              sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.currMovieObj, (int32_t)v21, v22, v23),
              (this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)_4__this->fields.MovieInfoList) != 0LL) )
        {
          if ( SLODWORD(this->fields.__2__current) > 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     1,
                     (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
            BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(
                                 _4__this,
                                 (BattleMoviePlayer_MovieInfo_o *)Item,
                                 1,
                                 v25);
            _4__this->fields.nextMovieObj = BattleMoviePanel;
            sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.nextMovieObj, (int32_t)BattleMoviePanel, v27, v28);
          }
          return 0;
        }
      }
LABEL_25:
      sub_1B86614(this, method);
    }
  }
  return 0;
}


Il2CppObject *__fastcall BattleMoviePlayer__GetMoviePanelFirst_d__30__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__GetMoviePanelFirst_d__30__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_BattleMoviePlayer__GetMoviePanelFirst_d__30_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__GetMoviePanelFirst_d__30__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__GetMoviePanelFirst_d__30__System_IDisposable_Dispose(
        BattleMoviePlayer__GetMoviePanelFirst_d__30_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__45___ctor(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__45__MoveNext(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *movieObj; // x21
  struct CriManaMovieController_o *v16; // x8
  UnityEngine_Material_o *material; // x0
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o **p_movieMaterial_5__2; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct BattleMoviePlayer_MovieInfo_o *v25; // x8
  float validTime; // s8
  struct CriManaMovieController_o *v27; // x8
  float effectRestTime; // s0
  struct CriManaMovieController_o *v29; // x8
  _BOOL4 forceFadeout; // w8
  struct BattleMoviePlayer_MovieInfo_o *v31; // x8
  struct CriManaMovieController_o *currController; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  int32_t num; // w8
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x9
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__3; // x8
  float v37; // s0
  float v38; // s1
  bool v39; // nf
  float v40; // s0
  struct BattleMoviePlayer_MovieInfo_o *v41; // x8
  float restTime_5__6; // s8
  float timeScale; // s0
  float *monitor; // x9
  struct BattlePerformance_o *perf; // x8
  float v46; // w10
  __int64 v47; // x9
  UnityEngine_Vector3_o *v48; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v52; // x1
  char v53; // w22
  float v54; // s11
  float v55; // s12
  float v56; // s13
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o *v57; // x21
  float v58; // s0
  int32_t v59; // w2
  float *v60; // x9
  float v61; // s8
  float v62; // s9
  float v63; // s10
  float v64; // s0
  BattleMoviePlayer_c *v65; // x8
  struct BattlePerformance_o *v66; // x8
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o *v67; // x21
  int v68; // s0
  float v70; // s2
  float v71; // s4
  float v72; // s2
  float v73; // s8
  float v74; // s9
  float v75; // s10
  const MethodInfo *v76; // x1
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v78; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v80; // s0
  float v81; // s1
  float v82; // s2
  float v83; // s11
  float v84; // s12
  float v85; // s13
  float v86; // s0
  float v87; // s0
  float v88; // s2
  float v89; // s1
  float v90; // s0
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o **p_movInfo_5__3; // x21
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  UnityEngine_Object_o *v98; // x19
  float v99; // s0
  float v100; // s1
  float v101; // s2
  float v102; // s11
  float v103; // s12
  float v104; // s13
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A50D5E & 1) == 0 )
  {
    sub_1B863B8(&BattleMoviePlayer_TypeInfo, method);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_GameObject__Remove__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_16178/*"_ZWriteMode"*/, v10);
    sub_1B863B8(&StringLiteral_16177/*"_ZTestMode"*/, v11);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)sub_1B863B8(&StringLiteral_16144/*"_Transparency"*/, v12);
    byte_4A50D5E = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_121;
    currController = _4__this->fields.currController;
    if ( !currController )
      goto LABEL_121;
    player_k__BackingField = currController->fields._player_k__BackingField;
    if ( !player_k__BackingField )
      goto LABEL_105;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)CriMana_Player__GetDisplayedFrameNo(
                                                            player_k__BackingField,
                                                            0LL);
    if ( v4->fields._effectTime_5__4 <= (float)(int)this )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movInfo_5__3;
      if ( !this )
        goto LABEL_121;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movInfo_5__3;
        if ( !this )
          goto LABEL_121;
      }
      *(_QWORD *)&this->fields.num = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.num, 0, v2, v3);
    }
    num = v4->fields.num;
    if ( (num & 0x80000000) != 0 )
      goto LABEL_61;
    MovieInfoList = _4__this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_121;
    if ( num >= MovieInfoList->fields._size )
    {
LABEL_61:
      v4->fields._pastError_5__5 = 1;
LABEL_105:
      p_movInfo_5__3 = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o **)&v4->fields._movInfo_5__3;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movInfo_5__3;
      if ( !this )
        goto LABEL_121;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
        this = *p_movInfo_5__3;
        if ( !*p_movInfo_5__3 )
          goto LABEL_121;
      }
      *(_QWORD *)&this->fields.num = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.num, 0, v2, v3);
      if ( !v4->fields._pastError_5__5 )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16177/*"_ZTestMode"*/, 4, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16144/*"_Transparency"*/, 1.0, 0LL);
      }
      v4->fields._movieMaterial_5__2 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._movieMaterial_5__2, 0, v94, v95);
      v4->fields._movInfo_5__3 = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._movInfo_5__3, 0, v96, v97);
      goto LABEL_113;
    }
    movInfo_5__3 = v4->fields._movInfo_5__3;
    if ( !movInfo_5__3 )
      goto LABEL_121;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields._movieMaterial_5__2;
    if ( !this )
      goto LABEL_121;
    v37 = 1.0 - (float)(v4->fields._restTime_5__6 / movInfo_5__3->fields.fadeRestTime);
    v38 = fminf(v37, 1.0);
    v39 = v37 < 0.0;
    v40 = 0.0;
    if ( !v39 )
      v40 = v38;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16144/*"_Transparency"*/, v40, 0LL);
    v41 = v4->fields._movInfo_5__3;
    if ( !v41 )
      goto LABEL_121;
    restTime_5__6 = v4->fields._restTime_5__6;
    timeScale = 1.0;
    if ( !v41->fields.ignoreTimeScale )
    {
      timeScale = UnityEngine_Time__get_timeScale(0LL);
      v41 = v4->fields._movInfo_5__3;
      if ( !v41 )
        goto LABEL_121;
    }
    v4->fields._restTime_5__6 = restTime_5__6 - (float)(timeScale * v41->fields.playSpeed);
    if ( _4__this->fields.KeepStartPosition )
    {
      if ( v41->fields._UsePlayMakerShakeParam_k__BackingField )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        }
        monitor = (float *)this[2].monitor;
        perf = _4__this->fields.perf;
        v46 = monitor[6];
        v47 = *((_QWORD *)monitor + 2);
        _4__this->fields.startPanelPosition.fields.z = v46;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v47;
        if ( !perf )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v48 = (UnityEngine_Vector3_o *)_4__this->fields.perf;
        if ( !v48 )
          goto LABEL_121;
        if ( !this )
          goto LABEL_121;
        v105 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)this, v48[110], 0LL);
        x = v105.fields.x;
        y = v105.fields.y;
        z = v105.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer__IsBossCamera(_4__this, v52);
        if ( !_4__this->fields.currController )
          goto LABEL_121;
        v53 = (char)this;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)_4__this->fields.currController,
                                                                0LL);
        v54 = _4__this->fields.startPanelPosition.fields.x;
        v55 = _4__this->fields.startPanelPosition.fields.y;
        v56 = _4__this->fields.startPanelPosition.fields.z;
        v57 = this;
        if ( (v53 & 1) == 0 )
        {
          if ( !this )
            goto LABEL_121;
          v112.fields.z = z + v56;
          v112.fields.y = y + v55;
          v112.fields.x = x + v54;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v112, 0LL);
          goto LABEL_103;
        }
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !v57 )
          goto LABEL_121;
        v58 = *((float *)this[2].monitor + 3) / *((float *)this[2].monitor + 2);
        v106.fields.z = (float)(v56 * v58) + (float)(z * v58);
        v106.fields.y = (float)(v55 * v58) + (float)(y * v58);
        v106.fields.x = (float)(v54 * v58) + (float)(x * v58);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v57, v106, 0LL);
      }
      else
      {
        v66 = _4__this->fields.perf;
        if ( !v66 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v66->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v67 = this;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
        position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
        position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
        *(UnityEngine_Vector3_o *)&v68 = UnityEngine_Transform__InverseTransformVector(
                                           (UnityEngine_Transform_o *)v67,
                                           position,
                                           0LL);
        v71 = fminf(v70, 1.0);
        if ( v70 < -0.3 )
          v72 = -0.3;
        else
          v72 = v71;
        v109 = UnityEngine_Transform__TransformDirection(
                 (UnityEngine_Transform_o *)v67,
                 *(UnityEngine_Vector3_o *)&v68,
                 0LL);
        v73 = v109.fields.x;
        v74 = v109.fields.y;
        v75 = v109.fields.z;
        IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, v76);
        v78 = BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          v78 = BattleMoviePlayer_TypeInfo;
        }
        static_fields = v78->static_fields;
        if ( !IsBossCamera )
        {
          *(UnityEngine_Vector3_o *)&v99 = UnityEngine_Transform__TransformPoint(
                                             (UnityEngine_Transform_o *)v67,
                                             static_fields->BasePanelPosition,
                                             0LL);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_121;
          v102 = v99;
          v103 = v100;
          v104 = v101;
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !this )
            goto LABEL_121;
          v113.fields.z = v104 - v75;
          v113.fields.y = v103 - v74;
          v113.fields.x = v102 - v73;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v113, 0LL);
          goto LABEL_103;
        }
        v110.fields.z = static_fields->BossPanelDist;
        v110.fields.x = 0.0;
        v110.fields.y = 0.0;
        *(UnityEngine_Vector3_o *)&v80 = UnityEngine_Transform__TransformPoint(
                                           (UnityEngine_Transform_o *)v67,
                                           v110,
                                           0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        v83 = v80;
        v84 = v81;
        v85 = v82;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v86 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v111.fields.z = v85 - (float)(v75 * v86);
        v111.fields.y = v84 - (float)(v74 * v86);
        v111.fields.x = v83 - (float)(v73 * v86);
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v111, 0LL);
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v65 = BattleMoviePlayer_TypeInfo;
    }
    else
    {
      if ( !BattleMoviePlayer__IsBossCamera(_4__this, method) )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)this,
          _4__this->fields.startPanelPosition,
          0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v89 = _4__this->fields.startPanelScale.fields.y;
        v88 = _4__this->fields.startPanelScale.fields.z;
        v90 = _4__this->fields.startPanelScale.fields.x;
        goto LABEL_102;
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
      if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
      }
      if ( !_4__this->fields.currController )
        goto LABEL_121;
      v60 = (float *)this[2].monitor;
      v62 = v60[5];
      v61 = v60[6];
      v63 = v60[4];
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this->fields.currController,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v64 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
          / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
      v107.fields.z = v61 * v64;
      v107.fields.y = v62 * v64;
      v107.fields.x = v63 * v64;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v107, 0LL);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v65 = BattleMoviePlayer_TypeInfo;
    }
    v87 = v65->static_fields->BossPanelDist / v65->static_fields->BaseDist;
    v88 = v87 * _4__this->fields.startPanelScale.fields.z;
    v89 = v87 * _4__this->fields.startPanelScale.fields.y;
    v90 = v87 * _4__this->fields.startPanelScale.fields.x;
LABEL_102:
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v90, 0LL);
LABEL_103:
    if ( v4->fields._restTime_5__6 > 0.0 )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(p__2__current, 0, v2, v3);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    }
    goto LABEL_105;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    movieObj = (UnityEngine_Object_o *)v4->fields.movieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Object__op_Inequality(movieObj, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !_4__this )
        goto LABEL_121;
LABEL_113:
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.ObjList;
      if ( this )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v4->fields.movieObj,
          (const MethodInfo_35FDE80 *)Method_System_Collections_Generic_List_GameObject__Remove__);
        v98 = (UnityEngine_Object_o *)v4->fields.movieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69356292(v98, 0LL);
        return 0;
      }
      goto LABEL_121;
    }
    if ( !_4__this )
      goto LABEL_121;
    v16 = _4__this->fields.currController;
    if ( !v16 )
      goto LABEL_121;
    if ( v16->fields._player_k__BackingField )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v4->fields.movieObj;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_121;
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      v4->fields._movieMaterial_5__2 = material;
      p_movieMaterial_5__2 = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o **)&v4->fields._movieMaterial_5__2;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._movieMaterial_5__2, (int32_t)material, v19, v20);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_121;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v4->fields.num,
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v4->fields._movInfo_5__3 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      v22 = &v4->fields._movInfo_5__3;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._movInfo_5__3, (int32_t)Item, v23, v24);
      v25 = v4->fields._movInfo_5__3;
      if ( !v25 )
        goto LABEL_121;
      validTime = v25->fields.validTime;
      if ( validTime <= 0.0 )
      {
        v27 = _4__this->fields.currController;
        if ( !v27 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v27->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)CriMana_Player__get_movieInfo(
                                                                (CriMana_Player_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v25 = *v22;
        if ( !*v22 )
          goto LABEL_121;
        validTime = (float)(unsigned int)this->fields.num;
      }
      effectRestTime = v25->fields.effectRestTime;
      v4->fields._pastError_5__5 = 0;
      v4->fields._effectTime_5__4 = fmaxf(validTime - effectRestTime, 0.0);
      v29 = _4__this->fields.currController;
      if ( !v29 )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v29->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)CriMana_Player__GetDisplayedFrameNo(
                                                              (CriMana_Player_o *)this,
                                                              0LL);
      forceFadeout = v4->fields.forceFadeout;
      v4->fields._restTime_5__6 = validTime - (float)(int)this;
      if ( !forceFadeout )
      {
        v31 = *v22;
        if ( !*v22 )
          goto LABEL_121;
        goto LABEL_63;
      }
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v31 = *v22;
        if ( !*v22 )
          goto LABEL_121;
        v4->fields._restTime_5__6 = v31->fields.fadeRestTime;
        _4__this->fields._ForceFadeout_k__BackingField = 1;
LABEL_63:
        if ( v31->fields.isBackMovie )
        {
          this = *p_movieMaterial_5__2;
          if ( !*p_movieMaterial_5__2 )
            goto LABEL_121;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16178/*"_ZWriteMode"*/, 0, 0LL);
        }
        this = *p_movieMaterial_5__2;
        if ( !*p_movieMaterial_5__2 )
LABEL_121:
          sub_1B86614(this, method);
        if ( _4__this->fields.OverrideZDepth )
          v59 = 8;
        else
          v59 = 4;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16177/*"_ZTestMode"*/, v59, 0LL);
        goto LABEL_103;
      }
    }
  }
  return 0;
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovieFadeOut_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__PlayMovieFadeOut_d__45__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_BattleMoviePlayer__PlayMovieFadeOut_d__45_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovieFadeOut_d__45__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__45__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovieFadeOut_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__PlayMovie_d__44___ctor(
        BattleMoviePlayer__PlayMovie_d__44_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMoviePlayer__PlayMovie_d__44__MoveNext(
        BattleMoviePlayer__PlayMovie_d__44_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleMoviePlayer__PlayMovie_d__44_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct CriManaMovieController_o **p_currController; // x21
  UnityEngine_Object_o *v19; // x22
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **p_movInfo_5__2; // x22
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct BattleMoviePlayer_MovieInfo_o *v24; // x8
  CriMana_Player_o *v25; // x23
  float v26; // s0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct BattleMoviePlayer_MovieInfo_o *v29; // x8
  CGThumbnailListItem_o *v30; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovie_d__44_o *v32; // x22
  BattleMoviePlayer__PlayMovie_d__44_o *v33; // x21
  BattleMoviePlayer__PlayMovie_d__44_o *v34; // x22
  float v35; // s0
  int32_t v36; // w2
  float fadeinTime_5__5; // s0
  struct CriManaMovieController_o *v38; // x8
  struct BattleMoviePlayer_MovieInfo_o *v39; // x8
  float skipFrame_5__4; // s8
  float timeScale; // s0
  struct CriManaMovieController_o *v42; // x8
  BattleCameraFullScaleSetter_o *v43; // x21
  struct CriManaMovieController_o *v44; // x8
  CriMana_Player_o *player_k__BackingField; // x8
  uint32_t v46; // w22
  struct CriManaMovieController_o *v47; // x9
  struct BattleMoviePlayer_MovieInfo_o *v48; // x8
  BattleMoviePlayer__PlayMovie_d__44_o *v49; // x21
  float *v50; // x8
  float v51; // s0
  struct CriManaMovieController_o *v52; // x8
  struct CriManaMovieController_o *v53; // x8
  unsigned int num; // w9
  _BOOL4 KeepStartPosition; // w8
  struct BattlePerformance_o *v56; // x8
  const MethodInfo *v57; // x2
  struct BattleMoviePlayer_MovieInfo_o *v58; // x8
  BattleMoviePlayer__PlayMovie_d__44_o *v59; // x21
  int32_t v60; // w2
  struct BattleMoviePlayer_MovieInfo_o *v61; // x8
  struct CriManaMovieController_o *v62; // x8
  struct BattleMoviePlayer_MovieInfo_o *v63; // x8
  float v64; // s0
  CGThumbnailListItem_o *p__2__current; // x19
  const MethodInfo *v66; // x2
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  struct BattleMoviePlayer_MovieInfo_o *v68; // x8
  struct CriManaMovieController_o *currController; // x8
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  float effectTime_5__7; // s0
  struct BattlePerformance_o *perf; // x8
  struct BattleMoviePlayer_MovieInfo_o *v74; // x9
  float *v75; // x9
  float v76; // s8
  float v77; // s9
  float v78; // s10
  float v79; // s0
  BattleMoviePlayer_c *v80; // x8
  __int64 v81; // x9
  float v82; // w10
  __int64 v83; // x9
  UnityEngine_Vector3_o *v84; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v88; // x1
  char v89; // w22
  float v90; // s11
  float v91; // s12
  float v92; // s13
  BattleMoviePlayer__PlayMovie_d__44_o *v93; // x21
  float v94; // s0
  BattleMoviePlayer__PlayMovie_d__44_o *v95; // x21
  int v96; // s0
  float v98; // s2
  float v99; // s4
  float v100; // s2
  float v101; // s8
  float v102; // s9
  float v103; // s10
  const MethodInfo *v104; // x1
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v106; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v108; // s0
  float v109; // s1
  float v110; // s2
  float v111; // s11
  float v112; // s12
  float v113; // s13
  float v114; // s0
  float v115; // s0
  float v116; // s2
  float v117; // s1
  float v118; // s0
  float v119; // s0
  float v120; // s1
  float v121; // s2
  float v122; // s11
  float v123; // s12
  float v124; // s13
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A50D5D & 1) == 0 )
  {
    sub_1B863B8(&BattleMoviePlayer_TypeInfo, method);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v5);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___, v6);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v7);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&StringLiteral_16178/*"_ZWriteMode"*/, v11);
    sub_1B863B8(&StringLiteral_16177/*"_ZTestMode"*/, v12);
    this = (BattleMoviePlayer__PlayMovie_d__44_o *)sub_1B863B8(&StringLiteral_16144/*"_Transparency"*/, v13);
    byte_4A50D5D = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  switch ( _1__state )
  {
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_189;
      if ( !this->fields._movInfo_5__2 )
      {
LABEL_117:
        v4->fields._movInfo_5__2 = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._movInfo_5__2, 0, v2, v3);
        return 0;
      }
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_189;
      v32 = this;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                       (UnityEngine_Renderer_o *)this,
                                                       0LL);
      v33 = this;
      if ( v4->fields._fadeinTime_5__5 > 0.0 )
      {
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v32, 1, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                         (UnityEngine_Renderer_o *)v32,
                                                         0LL);
        if ( !_4__this->fields.baseMat )
          goto LABEL_189;
        v34 = this;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Material__get_renderQueue(
                                                         _4__this->fields.baseMat,
                                                         0LL);
        if ( !v34 )
          goto LABEL_189;
        UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v34, (int32_t)this, 0LL);
        v35 = (float)v4->fields._currentFrame_5__3 / v4->fields._fadeinTime_5__5;
        if ( v35 >= 1.0 )
        {
          if ( !v33 )
            goto LABEL_189;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v33, (System_String_o *)StringLiteral_16177/*"_ZTestMode"*/, 4, 0LL);
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v33,
            (System_String_o *)StringLiteral_16144/*"_Transparency"*/,
            0.0,
            0LL);
          movInfo_5__2 = v4->fields._movInfo_5__2;
          if ( !movInfo_5__2 )
            goto LABEL_189;
          if ( movInfo_5__2->fields.cameraType == 1 )
            BattleMoviePlayer__ShowBg(_4__this, 0, v66);
          v4->fields._fadeinTime_5__5 = 0.0;
        }
        else
        {
          if ( !v33 )
            goto LABEL_189;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v33,
            (System_String_o *)StringLiteral_16144/*"_Transparency"*/,
            1.0 - v35,
            0LL);
          if ( _4__this->fields.OverrideZDepth )
            v36 = 8;
          else
            v36 = 4;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v33, (System_String_o *)StringLiteral_16177/*"_ZTestMode"*/, v36, 0LL);
        }
      }
      v68 = v4->fields._movInfo_5__2;
      if ( !v68 )
        goto LABEL_189;
      if ( v68->fields.isBackMovie )
      {
        if ( !v33 )
          goto LABEL_189;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)v33, (System_String_o *)StringLiteral_16178/*"_ZWriteMode"*/, 0, 0LL);
      }
      if ( _4__this->fields._ForceFadeout_k__BackingField )
        return 0;
      currController = _4__this->fields.currController;
      if ( !currController
        || (this = (BattleMoviePlayer__PlayMovie_d__44_o *)currController->fields._player_k__BackingField) == 0LL )
      {
LABEL_189:
        sub_1B86614(this, method);
      }
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      effectTime_5__7 = v4->fields._effectTime_5__7;
      v4->fields._currentFrame_5__3 = (int)this;
      if ( effectTime_5__7 <= (float)(int)this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)v4->fields._movInfo_5__2;
        if ( !this )
          goto LABEL_189;
        if ( *(_QWORD *)&this->fields.num )
        {
          UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)v4->fields._movInfo_5__2;
          if ( !this )
            goto LABEL_189;
        }
        *(_QWORD *)&this->fields.num = 0LL;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.num, 0, v70, v71);
      }
      if ( _4__this->fields.KeepStartPosition )
      {
        perf = _4__this->fields.perf;
        if ( !perf )
          goto LABEL_189;
        v74 = v4->fields._movInfo_5__2;
        if ( perf->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          if ( !v74 )
            goto LABEL_189;
          v74->fields._UsePlayMakerShakeParam_k__BackingField = 1;
        }
        else if ( !v74 )
        {
          goto LABEL_189;
        }
        if ( v74->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
            perf = _4__this->fields.perf;
          }
          v81 = *(_QWORD *)&this[1].fields._isLoopMovie_5__9;
          v82 = *(float *)(v81 + 24);
          v83 = *(_QWORD *)(v81 + 16);
          _4__this->fields.startPanelPosition.fields.z = v82;
          *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v83;
          if ( !perf )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          v84 = (UnityEngine_Vector3_o *)_4__this->fields.perf;
          if ( !v84 )
            goto LABEL_189;
          if ( !this )
            goto LABEL_189;
          v128 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)this, v84[110], 0LL);
          x = v128.fields.x;
          y = v128.fields.y;
          z = v128.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer__IsBossCamera(_4__this, v88);
          if ( !_4__this->fields.currController )
            goto LABEL_189;
          v89 = (char)this;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)_4__this->fields.currController,
                                                           0LL);
          v90 = _4__this->fields.startPanelPosition.fields.x;
          v91 = _4__this->fields.startPanelPosition.fields.y;
          v92 = _4__this->fields.startPanelPosition.fields.z;
          v93 = this;
          if ( (v89 & 1) == 0 )
          {
            if ( this )
            {
              v134.fields.z = z + v92;
              v134.fields.y = y + v91;
              v134.fields.x = x + v90;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v134, 0LL);
              goto LABEL_114;
            }
            goto LABEL_189;
          }
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
          }
          if ( !v93 )
            goto LABEL_189;
          v94 = *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 12LL)
              / *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 8LL);
          v129.fields.z = (float)(v92 * v94) + (float)(z * v94);
          v129.fields.y = (float)(v91 * v94) + (float)(y * v94);
          v129.fields.x = (float)(v90 * v94) + (float)(x * v94);
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v93, v129, 0LL);
        }
        else
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_189;
          v95 = this;
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
          position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
          position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
          position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
          *(UnityEngine_Vector3_o *)&v96 = UnityEngine_Transform__InverseTransformVector(
                                             (UnityEngine_Transform_o *)v95,
                                             position,
                                             0LL);
          v99 = fminf(v98, 1.0);
          if ( v98 < -0.3 )
            v100 = -0.3;
          else
            v100 = v99;
          v131 = UnityEngine_Transform__TransformDirection(
                   (UnityEngine_Transform_o *)v95,
                   *(UnityEngine_Vector3_o *)&v96,
                   0LL);
          v101 = v131.fields.x;
          v102 = v131.fields.y;
          v103 = v131.fields.z;
          IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, v104);
          v106 = BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            v106 = BattleMoviePlayer_TypeInfo;
          }
          static_fields = v106->static_fields;
          if ( !IsBossCamera )
          {
            *(UnityEngine_Vector3_o *)&v119 = UnityEngine_Transform__TransformPoint(
                                                (UnityEngine_Transform_o *)v95,
                                                static_fields->BasePanelPosition,
                                                0LL);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
            if ( this )
            {
              v122 = v119;
              v123 = v120;
              v124 = v121;
              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( this )
              {
                v135.fields.z = v124 - v103;
                v135.fields.y = v123 - v102;
                v135.fields.x = v122 - v101;
                UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v135, 0LL);
                goto LABEL_114;
              }
            }
            goto LABEL_189;
          }
          v132.fields.z = static_fields->BossPanelDist;
          v132.fields.x = 0.0;
          v132.fields.y = 0.0;
          *(UnityEngine_Vector3_o *)&v108 = UnityEngine_Transform__TransformPoint(
                                              (UnityEngine_Transform_o *)v95,
                                              v132,
                                              0LL);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          v111 = v108;
          v112 = v109;
          v113 = v110;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_189;
          v114 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
               / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
          v133.fields.z = v113 - (float)(v103 * v114);
          v133.fields.y = v112 - (float)(v102 * v114);
          v133.fields.x = v111 - (float)(v101 * v114);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v133, 0LL);
        }
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_189;
        v80 = BattleMoviePlayer_TypeInfo;
      }
      else
      {
        if ( !BattleMoviePlayer__IsBossCamera(_4__this, method) )
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_189;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)this,
            _4__this->fields.startPanelPosition,
            0LL);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_189;
          v117 = _4__this->fields.startPanelScale.fields.y;
          v116 = _4__this->fields.startPanelScale.fields.z;
          v118 = _4__this->fields.startPanelScale.fields.x;
LABEL_185:
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v118, 0LL);
          goto LABEL_114;
        }
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !_4__this->fields.currController )
          goto LABEL_189;
        v75 = *(float **)&this[1].fields._isLoopMovie_5__9;
        v77 = v75[5];
        v76 = v75[6];
        v78 = v75[4];
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)_4__this->fields.currController,
                                                         0LL);
        if ( !this )
          goto LABEL_189;
        v79 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v127.fields.z = v76 * v79;
        v127.fields.y = v77 * v79;
        v127.fields.x = v78 * v79;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v127, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_189;
        v80 = BattleMoviePlayer_TypeInfo;
      }
      v115 = v80->static_fields->BossPanelDist / v80->static_fields->BaseDist;
      v116 = v115 * _4__this->fields.startPanelScale.fields.z;
      v117 = v115 * _4__this->fields.startPanelScale.fields.y;
      v118 = v115 * _4__this->fields.startPanelScale.fields.x;
      goto LABEL_185;
    case 1:
      fadeinTime_5__5 = v4->fields._fadeinTime_5__5;
      v4->fields.__1__state = -1;
      if ( fadeinTime_5__5 <= 0.0 )
      {
        if ( !_4__this )
          goto LABEL_189;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_189;
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
      }
      v38 = _4__this->fields.currController;
      if ( !v38 )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v38->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      v39 = v4->fields._movInfo_5__2;
      v4->fields._currentFrame_5__3 = (int)this;
      if ( !v39 )
        goto LABEL_189;
      skipFrame_5__4 = v4->fields._skipFrame_5__4;
      if ( v39->fields.ignoreTimeScale )
      {
        timeScale = 1.0;
      }
      else
      {
        timeScale = UnityEngine_Time__get_timeScale(0LL);
        LODWORD(this) = v4->fields._currentFrame_5__3;
      }
      v4->fields._skipFrame_5__4 = skipFrame_5__4 + timeScale;
      if ( ((unsigned int)this & 0x80000000) != 0 )
        goto LABEL_23;
LABEL_50:
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v4->fields.movieObj;
      if ( this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
        v42 = _4__this->fields.currController;
        if ( v42 )
        {
          v43 = (BattleCameraFullScaleSetter_o *)this;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)v42->fields._player_k__BackingField;
          if ( this )
          {
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0LL);
            if ( this )
            {
              v44 = _4__this->fields.currController;
              if ( v44 )
              {
                player_k__BackingField = v44->fields._player_k__BackingField;
                if ( player_k__BackingField )
                {
                  v46 = (uint32_t)this->fields.__4__this;
                  this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__get_movieInfo(
                                                                   player_k__BackingField,
                                                                   0LL);
                  if ( this )
                  {
                    if ( v43 )
                    {
                      BattleCameraFullScaleSetter__AdjustPanelSize(v43, v46, HIDWORD(this->fields.__4__this), 0LL);
                      v47 = _4__this->fields.currController;
                      if ( v47 )
                      {
                        v48 = v4->fields._movInfo_5__2;
                        if ( v48 )
                        {
                          this = (BattleMoviePlayer__PlayMovie_d__44_o *)v47->fields._player_k__BackingField;
                          if ( this )
                          {
                            CriMana_Player__Loop((CriMana_Player_o *)this, v48->fields.loop, 0LL);
                            this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                            if ( this )
                            {
                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                               (UnityEngine_Component_o *)this,
                                                                               (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                              if ( this )
                              {
                                this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                 0LL);
                                if ( _4__this->fields.baseMat )
                                {
                                  v49 = this;
                                  this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Material__get_renderQueue(
                                                                                   _4__this->fields.baseMat,
                                                                                   0LL);
                                  if ( v49 )
                                  {
                                    UnityEngine_Material__set_renderQueue(
                                      (UnityEngine_Material_o *)v49,
                                      (int32_t)this,
                                      0LL);
                                    if ( v4->fields._fadeinTime_5__5 > 0.0 )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                                      if ( !this )
                                        goto LABEL_189;
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                      if ( !this )
                                        goto LABEL_189;
                                      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
                                    }
                                    v50 = (float *)v4->fields._movInfo_5__2;
                                    if ( !v50 )
                                      goto LABEL_189;
                                    v51 = v50[8];
                                    if ( v51 <= 0.0 )
                                    {
                                      v52 = _4__this->fields.currController;
                                      if ( !v52 )
                                        goto LABEL_189;
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v52->fields._player_k__BackingField;
                                      if ( !this )
                                        goto LABEL_189;
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__get_movieInfo(
                                                                                       (CriMana_Player_o *)this,
                                                                                       0LL);
                                      if ( this )
                                      {
                                        v53 = _4__this->fields.currController;
                                        if ( !v53 )
                                          goto LABEL_189;
                                        this = (BattleMoviePlayer__PlayMovie_d__44_o *)v53->fields._player_k__BackingField;
                                        if ( !this )
                                          goto LABEL_189;
                                        this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__get_movieInfo(
                                                                                         (CriMana_Player_o *)this,
                                                                                         0LL);
                                        if ( !this )
                                          goto LABEL_189;
                                        num = this->fields.num;
                                      }
                                      else
                                      {
                                        num = 0;
                                      }
                                      v50 = (float *)v4->fields._movInfo_5__2;
                                      if ( !v50 )
                                        goto LABEL_189;
                                      v51 = (float)num;
                                    }
                                    v4->fields._fadeoutTime_5__6 = fmaxf(v51 - v50[10], 0.0);
                                    v4->fields._effectTime_5__7 = fmaxf(v51 - v50[14], 0.0);
                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                                    if ( this )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0LL);
                                      if ( this )
                                      {
                                        localPosition = UnityEngine_Transform__get_localPosition(
                                                          (UnityEngine_Transform_o *)this,
                                                          0LL);
                                        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                                        _4__this->fields.startPanelPosition = localPosition;
                                        if ( this )
                                        {
                                          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                                                           (UnityEngine_Component_o *)this,
                                                                                           0LL);
                                          if ( this )
                                          {
                                            localScale = UnityEngine_Transform__get_localScale(
                                                           (UnityEngine_Transform_o *)this,
                                                           0LL);
                                            KeepStartPosition = _4__this->fields.KeepStartPosition;
                                            _4__this->fields.startPanelScale = localScale;
                                            if ( KeepStartPosition )
                                            {
                                              v56 = _4__this->fields.perf;
                                              if ( !v56 )
                                                goto LABEL_189;
                                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)v56->fields.actorcamera;
                                              if ( !this )
                                                goto LABEL_189;
                                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                                                               (UnityEngine_Component_o *)this,
                                                                                               0LL);
                                              if ( !this )
                                                goto LABEL_189;
                                              _4__this->fields.cameraStartPosition = UnityEngine_Transform__get_position(
                                                                                       (UnityEngine_Transform_o *)this,
                                                                                       0LL);
                                            }
                                            this = (BattleMoviePlayer__PlayMovie_d__44_o *)v4->fields.movieObj;
                                            if ( this )
                                            {
                                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                               (UnityEngine_GameObject_o *)this,
                                                                                               (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                                              if ( this )
                                              {
                                                this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                                 0LL);
                                                v58 = v4->fields._movInfo_5__2;
                                                if ( v58 )
                                                {
                                                  v59 = this;
                                                  if ( v58->fields.cameraType == 1 )
                                                    BattleMoviePlayer__ShowBg(
                                                      _4__this,
                                                      v4->fields._fadeinTime_5__5 > 0.0,
                                                      v57);
                                                  if ( v4->fields._fadeinTime_5__5 <= 0.0 )
                                                  {
                                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                                                    if ( !this )
                                                      goto LABEL_189;
                                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                                                     (UnityEngine_Component_o *)this,
                                                                                                     (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                                    if ( !this )
                                                      goto LABEL_189;
                                                    UnityEngine_Renderer__set_enabled(
                                                      (UnityEngine_Renderer_o *)this,
                                                      1,
                                                      0LL);
                                                  }
                                                  else
                                                  {
                                                    if ( !v59 )
                                                      goto LABEL_189;
                                                    if ( _4__this->fields.OverrideZDepth )
                                                      v60 = 8;
                                                    else
                                                      v60 = 4;
                                                    UnityEngine_Material__SetInt(
                                                      (UnityEngine_Material_o *)v59,
                                                      (System_String_o *)StringLiteral_16177/*"_ZTestMode"*/,
                                                      v60,
                                                      0LL);
                                                    UnityEngine_Material__SetFloat(
                                                      (UnityEngine_Material_o *)v59,
                                                      (System_String_o *)StringLiteral_16144/*"_Transparency"*/,
                                                      1.0,
                                                      0LL);
                                                  }
                                                  v61 = v4->fields._movInfo_5__2;
                                                  if ( !v61 )
                                                    goto LABEL_189;
                                                  if ( v61->fields.isBackMovie )
                                                  {
                                                    if ( !v59 )
                                                      goto LABEL_189;
                                                    UnityEngine_Material__SetInt(
                                                      (UnityEngine_Material_o *)v59,
                                                      (System_String_o *)StringLiteral_16178/*"_ZWriteMode"*/,
                                                      0,
                                                      0LL);
                                                  }
                                                  v62 = _4__this->fields.currController;
                                                  if ( v62 )
                                                  {
                                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)v62->fields._player_k__BackingField;
                                                    if ( this )
                                                    {
                                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
                                                      v63 = v4->fields._movInfo_5__2;
                                                      v4->fields._currentFrame_5__3 = (int)this;
                                                      if ( v63 )
                                                      {
                                                        v64 = 1.0;
                                                        if ( v63->fields.ignoreTimeScale
                                                          || (v64 = UnityEngine_Time__get_timeScale(0LL),
                                                              (v63 = v4->fields._movInfo_5__2) != 0LL) )
                                                        {
                                                          v4->fields._playSpeed_5__8 = v64 * v63->fields.playSpeed;
                                                          v4->fields._isLoopMovie_5__9 = v63->fields.loop;
LABEL_114:
                                                          if ( v4->fields._isLoopMovie_5__9
                                                            || (float)((float)(v4->fields._skipFrame_5__4
                                                                             + (float)v4->fields._currentFrame_5__3)
                                                                     + v4->fields._playSpeed_5__8) < v4->fields._fadeoutTime_5__6 )
                                                          {
                                                            v4->fields.__2__current = 0LL;
                                                            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                                                            sub_1B8635C(p__2__current, 0, v2, v3);
                                                            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
                                                            return 1;
                                                          }
                                                          goto LABEL_117;
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
      goto LABEL_189;
    case 0:
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v4->fields.movieObj;
      v4->fields.__1__state = -1;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)this,
                                                       (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !_4__this )
        goto LABEL_189;
      _4__this->fields.currController = (struct CriManaMovieController_o *)this;
      p_currController = &_4__this->fields.currController;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.currController, (int32_t)this, v16, v17);
      _4__this->fields.currentMovieNum = v4->fields.num;
      v19 = (UnityEngine_Object_o *)_4__this->fields.currController;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
        return 0;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_189;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v4->fields.num,
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v4->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      p_movInfo_5__2 = &v4->fields._movInfo_5__2;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._movInfo_5__2, (int32_t)Item, v22, v23);
      if ( !*p_currController )
        goto LABEL_189;
      v24 = *p_movInfo_5__2;
      if ( !*p_movInfo_5__2 )
        goto LABEL_189;
      v25 = (*p_currController)->fields._player_k__BackingField;
      v26 = 1.0;
      if ( !v24->fields.ignoreTimeScale )
      {
        v26 = UnityEngine_Time__get_timeScale(0LL);
        v24 = *p_movInfo_5__2;
        if ( !*p_movInfo_5__2 )
          goto LABEL_189;
      }
      if ( !v25 )
        goto LABEL_189;
      CriMana_Player__SetSpeed(v25, v26 * v24->fields.playSpeed, 0LL);
      if ( !*p_currController )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      CriMana_Player__Start((CriMana_Player_o *)this, 0LL);
      if ( !*p_currController )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      v29 = v4->fields._movInfo_5__2;
      *(_QWORD *)&v4->fields._currentFrame_5__3 = (unsigned int)this;
      if ( !v29 )
        goto LABEL_189;
      v4->fields._fadeinTime_5__5 = v29->fields.fadeinTime;
      if ( ((unsigned int)this & 0x80000000) != 0 )
      {
LABEL_23:
        v4->fields.__2__current = 0LL;
        v30 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(v30, 0, v27, v28);
        result = 1;
        LODWORD(v30[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      goto LABEL_50;
  }
  return 0;
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovie_d__44__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovie_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__PlayMovie_d__44__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovie_d__44_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_BattleMoviePlayer__PlayMovie_d__44_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovie_d__44__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovie_d__44_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__PlayMovie_d__44__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovie_d__44_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__StartMovie_d__35___ctor(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleMoviePlayer__StartMovie_d__35__MoveNext(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleMoviePlayer__StartMovie_d__35_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x8
  System_Collections_IEnumerator_o *v13; // x0
  UnityEngine_Coroutine_o *started; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BattlePerformance_o *perf; // x0
  int v19; // w8
  struct UnityEngine_GameObject_o *v20; // x1
  struct UnityEngine_GameObject_o *nextMovieObj; // x1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x4
  System_Collections_IEnumerator_o *v27; // x0
  const MethodInfo *v28; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v29; // x8
  int32_t v30; // w1
  UnityEngine_Object_o *v31; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v32; // x9
  struct UnityEngine_GameObject_o *v33; // x1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x4
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v39; // x8
  int size; // w8
  System_Collections_IEnumerator_o *v41; // x0
  System_Collections_Generic_List_T__o *v42; // x22
  System_Collections_IEnumerator_o *v43; // x21
  BattleMoviePlayer___c_c *v44; // x8
  System_Func_object__bool__o *_9__35_0; // x23
  Il2CppObject *v46; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x2
  UnityEngine_Coroutine_o *v51; // x0
  CGThumbnailListItem_o *v52; // x19
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int v55; // w8
  System_Collections_IEnumerator_o *v56; // x0
  UnityEngine_Coroutine_o *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3

  v4 = this;
  if ( (byte_4A50D5F & 1) == 0 )
  {
    sub_1B863B8(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1B863B8(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    sub_1B863B8(&Method_BattleMoviePlayer___c__StartMovie_b__35_0__, v8);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)sub_1B863B8(&BattleMoviePlayer___c_TypeInfo, v9);
    byte_4A50D5F = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_45;
      currMovieObj = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleMoviePlayer__StartMovie_d__35_o *)UnityEngine_Object__op_Inequality(currMovieObj, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_12;
      MovieInfoList = _4__this->fields.MovieInfoList;
      if ( !MovieInfoList )
        goto LABEL_45;
      if ( MovieInfoList->fields._size >= 1 )
      {
        v13 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, 0, v3);
        started = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v13, 0LL);
        v4->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(p__2__current, (int32_t)started, v16, v17);
        LOBYTE(perf) = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return (char)perf;
      }
LABEL_12:
      v19 = 0;
      v4->fields._i_5__2 = 0;
      break;
    case 1:
      v4->fields.__1__state = -1;
      goto LABEL_12;
    case 2:
      v4->fields.__1__state = -1;
      goto LABEL_23;
    case 3:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_45;
      BattleMoviePlayer__Dispose(_4__this, method);
      goto LABEL_39;
    default:
      goto LABEL_41;
  }
  while ( 1 )
  {
    if ( !_4__this )
      goto LABEL_45;
    v32 = _4__this->fields.MovieInfoList;
    if ( !v32 )
      goto LABEL_45;
    if ( v19 >= v32->fields._size - 1 || _4__this->fields._ForceFadeout_k__BackingField )
    {
      v33 = _4__this->fields.currMovieObj;
      _4__this->fields.pastMovieObj = v33;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v33, v2, v3);
      _4__this->fields.currMovieObj = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.currMovieObj, 0, v34, v35);
      _4__this->fields.nextMovieObj = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.nextMovieObj, 0, v36, v37);
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v39 = _4__this->fields.MovieInfoList;
        if ( !v39 )
LABEL_45:
          sub_1B86614(this, method);
        size = v39->fields._size;
        if ( size >= 1 )
        {
          v41 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, size - 1, 0, v38);
          v42 = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
          v43 = v41;
          v44 = BattleMoviePlayer___c_TypeInfo;
          if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
            v44 = BattleMoviePlayer___c_TypeInfo;
          }
          _9__35_0 = (System_Func_object__bool__o *)v44->static_fields->__9__35_0;
          if ( !_9__35_0 )
          {
            if ( !v44->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v44);
              v44 = BattleMoviePlayer___c_TypeInfo;
            }
            v46 = (Il2CppObject *)v44->static_fields->__9;
            _9__35_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__35_0, v46, Method_BattleMoviePlayer___c__StartMovie_b__35_0__, 0LL);
            static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
            static_fields->__9__35_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__35_0;
            sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__35_0, (int32_t)_9__35_0, v48, v49);
          }
          if ( BasicHelper__Any_object_(
                 v42,
                 (System_Func_T__bool__o *)_9__35_0,
                 (const MethodInfo_2F57CB4 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
          {
            BattleMoviePlayer__ShowBg(_4__this, 1, v50);
          }
          v51 = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v43, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v51;
          v52 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
          sub_1B8635C(v52, (int32_t)v51, v53, v54);
          v55 = 3;
          goto LABEL_43;
        }
LABEL_39:
        perf = _4__this->fields.perf;
        if ( !perf )
          return (char)perf;
        BattlePerformance__OnBattleMovieEnd(perf, 0LL);
      }
LABEL_41:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
    v20 = _4__this->fields.currMovieObj;
    _4__this->fields.pastMovieObj = v20;
    sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v20, v2, v3);
    nextMovieObj = _4__this->fields.nextMovieObj;
    _4__this->fields.currMovieObj = nextMovieObj;
    sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.currMovieObj, (int32_t)nextMovieObj, v22, v23);
    _4__this->fields.nextMovieObj = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.nextMovieObj, 0, v24, v25);
    v27 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, v4->fields._i_5__2, 0, v26);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)UnityEngine_MonoBehaviour__StartCoroutine_69341456(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      v27,
                                                      0LL);
    v29 = _4__this->fields.MovieInfoList;
    if ( !v29 )
      goto LABEL_45;
    v30 = v4->fields._i_5__2 + 2;
    if ( v30 < v29->fields._size )
      BattleMoviePlayer__GetMoviePanelAdd(_4__this, v30, v28);
    v31 = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_23:
    v19 = v4->fields._i_5__2 + 1;
    v4->fields._i_5__2 = v19;
  }
  v56 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, v4->fields._i_5__2 + 1, v3);
  v57 = UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v56, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v57;
  v52 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1B8635C(v52, (int32_t)v57, v58, v59);
  v55 = 2;
LABEL_43:
  LODWORD(v52[-1].fields._ThumbnailSpritePath_k__BackingField) = v55;
  LOBYTE(perf) = 1;
  return (char)perf;
}


Il2CppObject *__fastcall BattleMoviePlayer__StartMovie_d__35__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__StartMovie_d__35__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_BattleMoviePlayer__StartMovie_d__35_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__StartMovie_d__35__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__StartMovie_d__35__System_IDisposable_Dispose(
        BattleMoviePlayer__StartMovie_d__35_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A50D5A & 1) == 0 )
  {
    sub_1B863B8(&BattleMoviePlayer___c_TypeInfo, v1);
    byte_4A50D5A = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(BattleMoviePlayer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleMoviePlayer___c_TypeInfo->static_fields->__9 = (struct BattleMoviePlayer___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)BattleMoviePlayer___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleMoviePlayer___c___ctor(BattleMoviePlayer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleMoviePlayer___c___Dispose_b__27_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___FadeoutDeleteMovie_b__38_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___PauseMovie_b__36_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___StartMovie_b__35_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.cameraType == 1;
}