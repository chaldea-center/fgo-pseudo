void BattleMoviePlayer___cctor(const MethodInfo *method)
{
  struct BattleMoviePlayer_StaticFields *static_fields; // x8

  if ( (byte_4D2F473 & 1) == 0 )
  {
    sub_1C94098(&BattleMoviePlayer_TypeInfo);
    byte_4D2F473 = 1;
  }
  static_fields = BattleMoviePlayer_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BackMovieScale = xmmword_CFFB60;
  *(_QWORD *)&static_fields->BasePanelPosition.fields.x = 0;
  static_fields->BasePanelPosition.fields.z = 10.0;
}


void BattleMoviePlayer___ctor(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_Vector3_c *v17; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  _BOOL4 v20; // w9
  struct UnityEngine_Vector3_StaticFields *v21; // x10
  float v22; // s1
  struct UnityEngine_Vector3_StaticFields *v23; // x8
  float v24; // s1

  if ( (byte_4D2F472 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
    sub_1C94098(&System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
    sub_1C94098(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4D2F472 = 1;
  }
  this->fields.KeepStartPosition = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
  this->fields.MovieInfoList = (struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.MovieInfoList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ObjList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.ObjList, (int32_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !byte_4D25F19 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  v17 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.startPanelPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.startPanelPosition.fields.z = z;
  if ( byte_4D25F1E )
  {
    v20 = 0;
  }
  else
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    v17 = UnityEngine_Vector3_TypeInfo;
    byte_4D25F1E = 1;
    v20 = byte_4D25F19 == 0;
  }
  v21 = v17->static_fields;
  v22 = v21->oneVector.fields.z;
  *(_QWORD *)&this->fields.startPanelScale.fields.x = *(_QWORD *)&v21->oneVector.fields.x;
  this->fields.startPanelScale.fields.z = v22;
  if ( v20 )
  {
    sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    v17 = UnityEngine_Vector3_TypeInfo;
    byte_4D25F19 = 1;
  }
  v23 = v17->static_fields;
  v24 = v23->zeroVector.fields.z;
  *(_QWORD *)&this->fields.cameraStartPosition.fields.x = *(_QWORD *)&v23->zeroVector.fields.x;
  this->fields.cameraStartPosition.fields.z = v24;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_GameObject_o *BattleMoviePlayer__CreateBattleMoviePanel(
        BattleMoviePlayer_o *this,
        BattleMoviePlayer_MovieInfo_o *movieInfo,
        int32_t no,
        const MethodInfo *method)
{
  BattleMoviePlayer_o *v6; // x20
  int32_t cameraType; // w8
  Il2CppObject *v8; // x21
  struct UnityEngine_GameObject_o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *v16; // x8
  struct System_Object_array *v17; // x9
  _QWORD *v18; // x10
  __int64 v19; // x11
  BattleMoviePlayer_o *v20; // x21
  Il2CppClass **v21; // x0
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *moviePrefab; // x21
  UnityEngine_Transform_o *transform; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  System_Collections_Generic_List_object__o *ObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v33; // x10
  __int64 size; // x11
  Il2CppClass **v35; // x0
  int v36; // w8
  UnityEngine_Material_o **p_baseMat; // x23
  UnityEngine_Object_o *baseMat; // x24
  UnityEngine_Material_o *material; // x24
  UnityEngine_Material_o *v40; // x25
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  UnityEngine_Transform_o *v47; // x24
  float v48; // s8
  float y; // s9
  UnityEngine_Transform_o *v50; // x22
  UnityEngine_Transform_o *v51; // x22
  float x; // s8
  float v53; // s9
  float z; // s10
  float *m_CachedPtr; // x8
  UnityEngine_Material_o *v56; // x23
  UnityEngine_Material_o *v57; // x22
  const MethodInfo *v58; // x3
  Il2CppObject *v60; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4D2F466 & 1) == 0 )
  {
    sub_1C94098(&BattleMoviePlayer_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C94098(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C94098(&UnityEngine_Material_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    this = (BattleMoviePlayer_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F466 = 1;
  }
  component = 0;
  v60 = 0;
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
    this = (BattleMoviePlayer_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_63;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__52598436(
                                    moviePrefab,
                                    transform,
                                    (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    ObjList = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !ObjList )
      goto LABEL_63;
    items = ObjList->fields._items;
    v33 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++ObjList->fields._version;
    if ( !items )
      goto LABEL_63;
    size = ObjList->fields._size;
    v20 = this;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        ObjList,
        (Il2CppObject *)this,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      ObjList->fields._size = size + 1;
      v35[4] = (Il2CppClass *)v20;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)v20, v25, v26, v27, v28, v29, v30);
    }
    if ( !v20 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v20,
           &v60,
           (const MethodInfo_31F5A20 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)v60;
      if ( !v60 )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize(
        (BattleCameraFullScaleSetter_o *)v60,
        v6->fields.perf,
        0,
        movieInfo->fields.isFlip,
        0);
    }
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v20, 11, 0);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v20,
                                    (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v36 = 1;
  }
  else
  {
    if ( cameraType )
    {
      v20 = 0;
      goto LABEL_39;
    }
    this = (BattleMoviePlayer_o *)v6->fields.perf;
    if ( !this )
      goto LABEL_63;
    v8 = (Il2CppObject *)v6->fields.moviePrefab;
    this = (BattleMoviePlayer_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    if ( !this )
      goto LABEL_63;
    v9 = this[1].fields.moviePrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__52598436(
                                    v8,
                                    (UnityEngine_Transform_o *)v9,
                                    (const MethodInfo_32296A4 *)Method_UnityEngine_Object_Instantiate_GameObject____79133288);
    v16 = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !v16 )
      goto LABEL_63;
    v17 = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v16->fields._version;
    if ( !v17 )
      goto LABEL_63;
    v19 = v16->fields._size;
    v20 = this;
    if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        (Il2CppObject *)this,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &v17->obj.klass + v19;
      v16->fields._size = v19 + 1;
      v21[4] = (Il2CppClass *)v20;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)v20, v10, v11, v12, v13, v14, v15);
    }
    if ( !v20 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v20,
           &component,
           (const MethodInfo_31F5A20 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)component;
      if ( !component )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize(
        (BattleCameraFullScaleSetter_o *)component,
        v6->fields.perf,
        1,
        movieInfo->fields.isFlip,
        0);
    }
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v20,
                                    (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v36 = 0;
  }
  LODWORD(this->fields.moviePrefab) = v36;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
LABEL_39:
  p_baseMat = &v6->fields.baseMat;
  baseMat = (UnityEngine_Object_o *)v6->fields.baseMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleMoviePlayer_o *)UnityEngine_Object__op_Equality(baseMat, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_63;
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v20,
                                    (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !this )
      goto LABEL_63;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
    v40 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_71973536(v40, material, 0);
    *p_baseMat = v40;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&v6->fields.baseMat, (int32_t)v40, v41, v42, v43, v44, v45, v46);
  }
  else if ( !v20 )
  {
    goto LABEL_63;
  }
  v47 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  if ( !this )
    goto LABEL_63;
  LODWORD(v48) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  if ( !this )
    goto LABEL_63;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  y = position.fields.y;
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  if ( !this )
    goto LABEL_63;
  v63 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  if ( !v47 )
    goto LABEL_63;
  v64.fields.y = y;
  v64.fields.z = (float)((float)no * 0.1) + v63.fields.z;
  v64.fields.x = v48;
  UnityEngine_Transform__set_position(v47, v64, 0);
  if ( movieInfo->fields.isBackMovie )
  {
    v50 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
    if ( this )
    {
      v65 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
      if ( v50 )
      {
        v66.fields.z = v65.fields.z + 0.1;
        v66.fields.y = v65.fields.y + 0.0;
        v66.fields.x = v65.fields.x + 0.0;
        UnityEngine_Transform__set_position(v50, v66, 0);
        this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
        if ( this )
        {
          v51 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
          this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
          if ( this )
          {
            localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0);
            this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            x = localScale.fields.x;
            v53 = localScale.fields.y;
            z = localScale.fields.z;
            if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
              this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            }
            if ( v51 )
            {
              m_CachedPtr = (float *)this[1].fields.m_CachedPtr;
              v68.fields.z = z * *m_CachedPtr;
              v68.fields.y = v53 * *m_CachedPtr;
              v68.fields.x = x * *m_CachedPtr;
              UnityEngine_Transform__set_localScale(v51, v68, 0);
              goto LABEL_59;
            }
          }
        }
      }
    }
LABEL_63:
    sub_1C942F0(this, movieInfo);
  }
LABEL_59:
  v56 = *p_baseMat;
  v57 = (UnityEngine_Material_o *)sub_1C942E4(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_71973536(v57, v56, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v20,
                                  (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v57, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v20,
                                  (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
  if ( !this )
    goto LABEL_63;
  CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v57, 0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 1, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v20,
                                  (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0);
  BattleMoviePlayer__InitMovie(v6, (UnityEngine_GameObject_o *)v20, no, v58);
  return (UnityEngine_GameObject_o *)v20;
}


void BattleMoviePlayer__CreateMovieInfoListEvent(
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
        bool isFlip,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v21; // x19
  System_Collections_Generic_List_float__o *v22; // x20
  System_Collections_Generic_List_float__o *v24; // x23
  const MethodInfo_38906B8 **v25; // x28
  int32_t v26; // w27
  BattleMoviePlayer_o *v27; // x25
  float v28; // s8
  float v29; // s9
  int32_t v30; // w19
  float Item; // s10
  BattleMoviePlayer_o *v32; // x20
  float v33; // s11
  System_String_o *v34; // x26
  float v35; // s12
  const MethodInfo_38906B8 **v36; // x22
  System_Collections_Generic_List_float__o *v37; // x25
  System_Collections_Generic_List_object__o *MovieInfoList; // x28
  bool IgnoreTimeScale; // w19
  bool v40; // w20
  bool v41; // w21
  bool flip; // w23
  BattleMoviePlayer_MovieInfo_o *v43; // x29
  int32_t v44; // w2
  int32_t v45; // w3
  System_String_o *v46; // x4
  int32_t v47; // w5
  int64_t v48; // x6
  System_String_o *v49; // x7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  const MethodInfo *v54; // [xsp+8h] [xbp-F8h]
  System_Collections_Generic_List_float__o *v55; // [xsp+18h] [xbp-E8h]
  System_Collections_Generic_List_float__o *v56; // [xsp+20h] [xbp-E0h]
  System_Collections_Generic_List_UnityEvent__o *v57; // [xsp+30h] [xbp-D0h]
  BattleMoviePlayer_o *v61; // [xsp+50h] [xbp-B0h]
  UnityEngine_Events_UnityEvent_o *eff; // [xsp+58h] [xbp-A8h]
  int32_t v63; // [xsp+68h] [xbp-98h]
  int32_t v64; // [xsp+6Ch] [xbp-94h]

  v61 = this;
  if ( (byte_4D2F471 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_UnityEvent__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_UnityEvent__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C94098(&Method_System_Collections_Generic_List_float__get_Item__);
    sub_1C94098(&BattleMoviePlayer_MovieInfo_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_1C94098(&StringLiteral_1/*""*/);
    byte_4D2F471 = 1;
  }
  v61->fields.KeepStartPosition = keepStartPosition;
  v61->fields.OverrideZDepth = overrideZDepth;
  v61->fields.IgnoreTimeScale = ignoreTS;
  v61->fields.Loop = loop;
  v61->fields.IsBackMovie = isBackMovie;
  v61->fields.IsFlip = isFlip;
  if ( !path )
LABEL_47:
    sub_1C942F0(this, type);
  v22 = valid;
  v21 = cam;
  if ( path->fields._size >= 1 )
  {
    v24 = effRest;
    v25 = (const MethodInfo_38906B8 **)&Method_System_Collections_Generic_List_float__get_Item__;
    v26 = 0;
    v57 = effect;
    v55 = speed;
    v56 = fadeout;
    do
    {
      this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)path,
                                      v26,
                                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        if ( !fadeout )
          goto LABEL_47;
        if ( v26 < fadeout->fields._size )
        {
          if ( !v21 )
            goto LABEL_47;
          if ( v26 < v21->fields._size )
          {
            this = (BattleMoviePlayer_o *)type;
            if ( !type )
              goto LABEL_47;
            if ( v26 >= type->fields._size )
            {
              v64 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                              (System_Collections_Generic_List_T__o *)type,
                                              v26,
                                              (const MethodInfo_385034C *)Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
              v64 = (int)this;
            }
            if ( v26 >= path->fields._size )
            {
              v27 = (BattleMoviePlayer_o *)StringLiteral_1/*""*/;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)path,
                                              v26,
                                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_string__get_Item__);
              v27 = this;
            }
            if ( !v22 )
              goto LABEL_47;
            v28 = 0.0;
            v29 = 0.0;
            if ( v26 < v22->fields._size )
              v29 = fmaxf(System_Collections_Generic_List_float___get_Item(v22, v26, *v25), 0.0);
            if ( v26 < fadeout->fields._size )
              v28 = fmaxf(System_Collections_Generic_List_float___get_Item(fadeout, v26, *v25), 1.0);
            if ( v26 >= v21->fields._size )
            {
              v30 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_int___get_Item(
                                              v21,
                                              v26,
                                              (const MethodInfo_384DB20 *)Method_System_Collections_Generic_List_int__get_Item__);
              v30 = (int)this;
            }
            if ( !speed )
              goto LABEL_47;
            Item = 1.0;
            if ( v26 < speed->fields._size )
              Item = System_Collections_Generic_List_float___get_Item(speed, v26, *v25);
            if ( !effect )
              goto LABEL_47;
            if ( v26 >= effect->fields._size )
            {
              v32 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)effect,
                                              v26,
                                              (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_UnityEvent__get_Item__);
              v32 = this;
            }
            if ( !v24 )
              goto LABEL_47;
            v33 = 0.0;
            if ( v26 < v24->fields._size )
              v33 = System_Collections_Generic_List_float___get_Item(v24, v26, *v25);
            if ( !fadein )
              goto LABEL_47;
            v34 = (System_String_o *)v27;
            v35 = 0.0;
            eff = (UnityEngine_Events_UnityEvent_o *)v32;
            v63 = v30;
            if ( v26 < fadein->fields._size )
              v35 = System_Collections_Generic_List_float___get_Item(fadein, v26, *v25);
            v36 = v25;
            v37 = fadein;
            MovieInfoList = (System_Collections_Generic_List_object__o *)v61->fields.MovieInfoList;
            IgnoreTimeScale = v61->fields.IgnoreTimeScale;
            v40 = v61->fields.Loop;
            v41 = v61->fields.IsBackMovie;
            flip = v61->fields.IsFlip;
            v43 = (BattleMoviePlayer_MovieInfo_o *)sub_1C942E4(BattleMoviePlayer_MovieInfo_TypeInfo);
            BattleMoviePlayer_MovieInfo___ctor(
              v43,
              v64,
              v34,
              v29,
              v28,
              v63,
              Item,
              eff,
              v33,
              IgnoreTimeScale,
              v35,
              v40,
              v41,
              flip,
              v54);
            if ( !MovieInfoList )
              goto LABEL_47;
            items = MovieInfoList->fields._items;
            v51 = Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__;
            ++MovieInfoList->fields._version;
            if ( !items )
              goto LABEL_47;
            size = MovieInfoList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                MovieInfoList,
                (Il2CppObject *)v43,
                *(const MethodInfo_386AE34 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = &items->obj.klass + size;
              MovieInfoList->fields._size = size + 1;
              v53[4] = (Il2CppClass *)v43;
              sub_1C9403C((GrandQuestFolderBoardItem_o *)(v53 + 4), (int32_t)v43, v44, v45, v46, v47, v48, v49);
            }
            fadein = v37;
            v24 = effRest;
            effect = v57;
            v22 = valid;
            v21 = cam;
            v25 = v36;
            speed = v55;
            fadeout = v56;
          }
        }
      }
      ++v26;
    }
    while ( v26 < path->fields._size );
  }
}


void BattleMoviePlayer__Dispose(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *perf; // x20
  struct System_Collections_Generic_List_GameObject__o *ObjList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *MovieInfoList; // x20
  BattleMoviePlayer___c_c *v7; // x0
  System_Func_object__bool__o *_9__28_0; // x21
  Il2CppObject *v9; // x22
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  const MethodInfo *v17; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v22; // x8
  int32_t v23; // w2
  int v24; // w9
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4D2F465 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C94098(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_BattleMoviePlayer___c__Dispose_b__28_0__);
    sub_1C94098(&BattleMoviePlayer___c_TypeInfo);
    byte_4D2F465 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjList = (struct System_Collections_Generic_List_GameObject__o *)UnityEngine_Object__op_Inequality(perf, 0, 0);
  if ( ((unsigned __int8)ObjList & 1) != 0 )
  {
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v7 = BattleMoviePlayer___c_TypeInfo;
    if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
      v7 = BattleMoviePlayer___c_TypeInfo;
    }
    _9__28_0 = (System_Func_object__bool__o *)v7->static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleMoviePlayer___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__28_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__28_0, v9, Method_BattleMoviePlayer___c__Dispose_b__28_0__, 0);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__28_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__28_0,
        (int32_t)_9__28_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    ObjList = (struct System_Collections_Generic_List_GameObject__o *)BasicHelper__Any_object_(
                                                                        MovieInfoList,
                                                                        (System_Func_T__bool__o *)_9__28_0,
                                                                        (const MethodInfo_3185468 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    if ( ((unsigned __int8)ObjList & 1) != 0 )
      BattleMoviePlayer__ShowBg(this, 1, v17);
  }
  v18 = this->fields.MovieInfoList;
  if ( !v18 )
    goto LABEL_32;
  size = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0);
  ObjList = this->fields.ObjList;
  if ( !ObjList )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)ObjList,
    (const MethodInfo_386B92C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_35EC1C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_72110972((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_35EC1BC *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v22 = this->fields.ObjList;
  if ( !v22 )
LABEL_32:
    sub_1C942F0(ObjList, v5);
  v23 = v22->fields._size;
  v24 = v22->fields._version + 1;
  v22->fields._size = 0;
  v22->fields._version = v24;
  if ( v23 >= 1 )
    System_Array__Clear((System_Array_o *)v22->fields._items, 0, v23, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972(gameObject, 0);
}


System_Collections_IEnumerator_o *BattleMoviePlayer__FadeoutDeleteMovie(
        BattleMoviePlayer_o *this,
        System_Action_o *FadeOuted,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2F46C & 1) == 0 )
  {
    sub_1C94098(&BattleMoviePlayer__FadeoutDeleteMovie_d__39_TypeInfo);
    byte_4D2F46C = 1;
  }
  v5 = sub_1C942E4(BattleMoviePlayer__FadeoutDeleteMovie_d__39_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = FadeOuted;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)FadeOuted, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void BattleMoviePlayer__GetMoviePanelAdd(BattleMoviePlayer_o *this, int32_t i, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *MovieInfoList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v7; // x3
  struct UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7

  if ( (byte_4D2F468 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    byte_4D2F468 = 1;
  }
  MovieInfoList = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
  if ( !MovieInfoList )
    sub_1C942F0(0, *(_QWORD *)&i);
  if ( MovieInfoList->fields._size > i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             MovieInfoList,
             i,
             (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(this, (BattleMoviePlayer_MovieInfo_o *)Item, i, v7);
    this->fields.nextMovieObj = BattleMoviePanel;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&this->fields.nextMovieObj,
      (int32_t)BattleMoviePanel,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
}


System_Collections_IEnumerator_o *BattleMoviePlayer__GetMoviePanelFirst(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2F467 & 1) == 0 )
  {
    sub_1C94098(&BattleMoviePlayer__GetMoviePanelFirst_d__31_TypeInfo);
    byte_4D2F467 = 1;
  }
  v5 = sub_1C942E4(BattleMoviePlayer__GetMoviePanelFirst_d__31_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = performance;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)performance, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleMoviePlayer__InitMovie(
        BattleMoviePlayer_o *this,
        UnityEngine_GameObject_o *obj,
        int32_t pathnum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  void *MovieInfoList; // x0
  System_String_o *v9; // x22
  AssetData_o *AssetStorageData; // x0
  System_String_o *v11; // x22
  int v12; // w8
  System_Collections_Generic_List_object__o *v13; // x8
  System_String_o *v14; // x21
  __int64 *v15; // x8
  System_Collections_Generic_List_object__o *v16; // x8
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_4D2F470 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Application_TypeInfo);
    sub_1C94098(&AssetManager_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_1039/*".usm"*/);
    sub_1C94098(&StringLiteral_1085/*"/StreamingAssets/"*/);
    sub_1C94098(&StringLiteral_1080/*"/Resources/"*/);
    byte_4D2F470 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)obj, 0) )
  {
    MovieInfoList = this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_41;
    MovieInfoList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)MovieInfoList,
                      pathnum,
                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v9 = (System_String_o *)*((_QWORD *)MovieInfoList + 3);
    if ( !v9 )
      goto LABEL_41;
    if ( !System_String__EndsWith(*((System_String_o **)MovieInfoList + 3), (System_String_o *)StringLiteral_1039/*".usm"*/, 0) )
      v9 = System_String__Concat_64417744(v9, (System_String_o *)StringLiteral_1039/*".usm"*/, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageData = AssetManager__getAssetStorageData(v9, 0);
    v11 = AssetStorageData ? AssetData__get_Path(AssetStorageData, 0) : 0LL;
    MovieInfoList = this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_41;
    MovieInfoList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)MovieInfoList,
                      pathnum,
                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v12 = *((_DWORD *)MovieInfoList + 4);
    if ( v12 == 102 )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0);
      v16 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v16 )
        goto LABEL_41;
      v14 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v16,
                        pathnum,
                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v15 = &StringLiteral_1080/*"/Resources/"*/;
    }
    else
    {
      if ( v12 != 101 )
        goto LABEL_31;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0);
      v13 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v13 )
        goto LABEL_41;
      v14 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v13,
                        pathnum,
                        (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v15 = &StringLiteral_1085/*"/StreamingAssets/"*/;
    }
    MovieInfoList = System_String__Concat_64456008(
                      v14,
                      (System_String_o *)*v15,
                      *((System_String_o **)MovieInfoList + 3),
                      0);
    v11 = (System_String_o *)MovieInfoList;
LABEL_31:
    if ( obj )
    {
      Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   obj,
                                                   (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0) )
        return;
      MovieInfoList = (void *)System_String__IsNullOrEmpty(v11, 0);
      if ( ((unsigned __int8)MovieInfoList & 1) != 0 )
        return;
      if ( Component_object )
      {
        MovieInfoList = Component_object[2].monitor;
        if ( MovieInfoList )
        {
          CriMana_Player__SetFile((CriMana_Player_o *)MovieInfoList, 0, v11, 0, 0);
          MovieInfoList = Component_object[2].monitor;
          if ( MovieInfoList )
          {
            CriMana_Player__PrepareForRendering((CriMana_Player_o *)MovieInfoList, 0);
            return;
          }
        }
      }
    }
LABEL_41:
    sub_1C942F0(MovieInfoList, v7);
  }
}


void BattleMoviePlayer__Initialize(BattleMoviePlayer_o *this, BattlePerformance_o *perf, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *MoviePanelFirst; // x1

  MoviePanelFirst = BattleMoviePlayer__GetMoviePanelFirst(this, perf, method);
  UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)this, MoviePanelFirst, 0);
}


bool BattleMoviePlayer__IsBossCamera(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  BattleMoviePlayer_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actorcamera; // x20
  struct BattlePerformance_o *v5; // x8
  float fieldOfView; // s8
  BattleMoviePlayer_c *v7; // x0

  v2 = this;
  if ( (byte_4D2F46D & 1) == 0 )
  {
    sub_1C94098(&BattleMoviePlayer_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F46D = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_16;
  actorcamera = (UnityEngine_Object_o *)perf->fields.actorcamera;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleMoviePlayer_o *)UnityEngine_Object__op_Implicit(actorcamera, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2->fields.perf;
    if ( v5 )
    {
      this = (BattleMoviePlayer_o *)v5->fields.actorcamera;
      if ( this )
      {
        fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)this, 0);
        v7 = BattleMoviePlayer_TypeInfo;
        goto LABEL_13;
      }
    }
LABEL_16:
    sub_1C942F0(this, method);
  }
  v7 = BattleMoviePlayer_TypeInfo;
  if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
    v7 = BattleMoviePlayer_TypeInfo;
  }
  fieldOfView = v7->static_fields->DefaultFov;
LABEL_13:
  if ( !v7->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v7);
    v7 = BattleMoviePlayer_TypeInfo;
  }
  return fieldOfView > v7->static_fields->DefaultFov;
}


bool BattleMoviePlayer__IsPausedMovie(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *currMovieObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4D2F46B & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2F46B = 1;
  }
  currMovieObj = (UnityEngine_Object_o *)this->fields.currMovieObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(currMovieObj, 0, 0) )
    return 0;
  Component_object = this->fields.currMovieObj;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___)) == 0
    || (Component_object = (UnityEngine_GameObject_o *)Component_object[2].monitor) == 0 )
  {
    sub_1C942F0(Component_object, v4);
  }
  return CriMana_Player__IsPaused((CriMana_Player_o *)Component_object, 0);
}


void BattleMoviePlayer__PauseMovie(BattleMoviePlayer_o *this, bool v, const MethodInfo *method)
{
  UnityEngine_Object_o *currMovieObj; // x21
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x21
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  BattleMoviePlayer___c_c *v10; // x0
  System_Func_object__bool__o *_9__37_0; // x23
  Il2CppObject *v12; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_4D2F46A & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C94098(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_BattleMoviePlayer___c__PauseMovie_b__37_0__);
    sub_1C94098(&BattleMoviePlayer___c_TypeInfo);
    byte_4D2F46A = 1;
  }
  currMovieObj = (UnityEngine_Object_o *)this->fields.currMovieObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(currMovieObj, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    v8 = this->fields.currMovieObj;
    if ( !v8 )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         this->fields.currMovieObj,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    if ( !Component_object )
      goto LABEL_19;
    Component_object = (Il2CppObject *)Component_object[3].monitor;
    if ( !Component_object )
      goto LABEL_19;
    CriMana_Player__Pause((CriMana_Player_o *)Component_object, v, 0);
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v10 = BattleMoviePlayer___c_TypeInfo;
    if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
      v10 = BattleMoviePlayer___c_TypeInfo;
    }
    _9__37_0 = (System_Func_object__bool__o *)v10->static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleMoviePlayer___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__37_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__37_0, v12, Method_BattleMoviePlayer___c__PauseMovie_b__37_0__, 0);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__37_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__37_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__37_0,
        (int32_t)_9__37_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( BasicHelper__Any_object_(
           MovieInfoList,
           (System_Func_T__bool__o *)_9__37_0,
           (const MethodInfo_3185468 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
    {
      BattleMoviePlayer__ShowBg(this, v, v20);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v8,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !Component_object )
LABEL_19:
      sub_1C942F0(Component_object, v7);
    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)Component_object, !v, 0);
  }
}


System_Collections_IEnumerator_o *BattleMoviePlayer__PlayMovie(
        BattleMoviePlayer_o *this,
        UnityEngine_GameObject_o *movieObj,
        int32_t num,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2F46E & 1) == 0 )
  {
    sub_1C94098(&BattleMoviePlayer__PlayMovie_d__45_TypeInfo);
    byte_4D2F46E = 1;
  }
  v7 = sub_1C942E4(BattleMoviePlayer__PlayMovie_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = movieObj;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)movieObj, v14, v15, v16, v17, v18, v19);
  *(_DWORD *)(v7 + 48) = num;
  return (System_Collections_IEnumerator_o *)v7;
}


System_Collections_IEnumerator_o *BattleMoviePlayer__PlayMovieFadeOut(
        BattleMoviePlayer_o *this,
        UnityEngine_GameObject_o *movieObj,
        int32_t num,
        bool forceFadeout,
        const MethodInfo *method)
{
  bool v9; // w23
  __int64 v10; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D2F46F & 1) == 0 )
  {
    sub_1C94098(&BattleMoviePlayer__PlayMovieFadeOut_d__46_TypeInfo);
    byte_4D2F46F = 1;
  }
  v9 = forceFadeout;
  v10 = sub_1C942E4(BattleMoviePlayer__PlayMovieFadeOut_d__46_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 40) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v10 + 40), (int32_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 32) = movieObj;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v10 + 32), (int32_t)movieObj, v17, v18, v19, v20, v21, v22);
  *(_DWORD *)(v10 + 48) = num;
  *(_BYTE *)(v10 + 52) = v9;
  return (System_Collections_IEnumerator_o *)v10;
}


// local variable allocation has failed, the output may be wrong!
void BattleMoviePlayer__ShowBg(BattleMoviePlayer_o *this, bool v, const MethodInfo *method)
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
        v6 = UnityEngine_Camera__get_cullingMask(perf->fields.actorcamera, 0) & 0xFFEFFFFF;
LABEL_12:
        UnityEngine_Camera__set_cullingMask(actorcamera, v6, 0);
        return;
      }
    }
LABEL_13:
    sub_1C942F0(this, v);
  }
  if ( this->fields.IsBackMovie )
    goto LABEL_9;
  this = (BattleMoviePlayer_o *)this->fields.perf;
  if ( !this )
    goto LABEL_13;
  this = (BattleMoviePlayer_o *)BattlePerformance__IsExistBackMovie((BattlePerformance_o *)this, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
LABEL_9:
    v7 = v3->fields.perf;
    if ( v7 )
    {
      actorcamera = v7->fields.actorcamera;
      if ( actorcamera )
      {
        v6 = UnityEngine_Camera__get_cullingMask(v7->fields.actorcamera, 0) | 0x100000;
        goto LABEL_12;
      }
    }
    goto LABEL_13;
  }
}


System_Collections_IEnumerator_o *BattleMoviePlayer__StartMovie(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2F469 & 1) == 0 )
  {
    sub_1C94098(&BattleMoviePlayer__StartMovie_d__36_TypeInfo);
    byte_4D2F469 = 1;
  }
  v3 = sub_1C942E4(BattleMoviePlayer__StartMovie_d__36_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


bool BattleMoviePlayer__get_ForceFadeout(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields._ForceFadeout_k__BackingField;
}


bool BattleMoviePlayer__get_UseDepth(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  return this->fields._UseDepth_k__BackingField;
}


void BattleMoviePlayer__set_ForceFadeout(BattleMoviePlayer_o *this, bool value, const MethodInfo *method)
{
  this->fields._ForceFadeout_k__BackingField = value;
}


void BattleMoviePlayer_MovieInfo___ctor(
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
        bool flip,
        const MethodInfo *method)
{
  bool v25; // w24
  bool v26; // w25
  bool v27; // w26
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7

  v25 = ignoreTmScl;
  v26 = lp;
  v27 = backMovie;
  this->fields.playSpeed = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.pathType = type;
  this->fields.moviePath = path;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.moviePath, (int32_t)path, v28, v29, v30, v31, v32, v33);
  this->fields.effectEvent = eff;
  this->fields.validTime = valid;
  this->fields.fadeRestTime = fade;
  this->fields.cameraType = cam;
  this->fields.playSpeed = speed;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.effectEvent, (int32_t)eff, v34, v35, v36, v37, v38, v39);
  this->fields.effectRestTime = effRest;
  this->fields.ignoreTimeScale = v25;
  this->fields.fadeinTime = fadein;
  this->fields.loop = v26;
  this->fields.isBackMovie = v27;
  this->fields.isFlip = flip;
}


float BattleMoviePlayer_MovieInfo__GetTimeScale(BattleMoviePlayer_MovieInfo_o *this, const MethodInfo *method)
{
  if ( this->fields.ignoreTimeScale )
    return 1.0;
  else
    return UnityEngine_Time__get_timeScale(0);
}


bool BattleMoviePlayer_MovieInfo__get_UsePlayMakerShakeParam(
        BattleMoviePlayer_MovieInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._UsePlayMakerShakeParam_k__BackingField;
}


void BattleMoviePlayer_MovieInfo__set_UsePlayMakerShakeParam(
        BattleMoviePlayer_MovieInfo_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._UsePlayMakerShakeParam_k__BackingField = value;
}


void BattleMoviePlayer__FadeoutDeleteMovie_d__39___ctor(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMoviePlayer__FadeoutDeleteMovie_d__39__MoveNext(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *v2; // x19
  int32_t _1__state; // w8
  BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  const MethodInfo *v6; // x4
  System_Collections_IEnumerator_o *v7; // x0
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  System_Collections_IEnumerator_o *v9; // x21
  BattleMoviePlayer___c_c *v10; // x8
  System_Func_object__bool__o *_9__39_0; // x23
  Il2CppObject *v12; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x2
  UnityEngine_Coroutine_o *started; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  BattlePerformance_o *perf; // x0
  struct System_Action_o *FadeOuted; // x8

  v2 = this;
  if ( (byte_4D2F475 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C94098(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__39_0__);
    this = (BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *)sub_1C94098(&BattleMoviePlayer___c_TypeInfo);
    byte_4D2F475 = 1;
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
      if ( UnityEngine_Object__op_Inequality(currMovieObj, 0, 0) )
      {
        v7 = BattleMoviePlayer__PlayMovieFadeOut(
               _4__this,
               _4__this->fields.currMovieObj,
               _4__this->fields.currentMovieNum,
               1,
               v6);
        MovieInfoList = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
        v9 = v7;
        v10 = BattleMoviePlayer___c_TypeInfo;
        if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
          v10 = BattleMoviePlayer___c_TypeInfo;
        }
        _9__39_0 = (System_Func_object__bool__o *)v10->static_fields->__9__39_0;
        if ( !_9__39_0 )
        {
          if ( !v10->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v10);
            v10 = BattleMoviePlayer___c_TypeInfo;
          }
          v12 = (Il2CppObject *)v10->static_fields->__9;
          _9__39_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__39_0, v12, Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__39_0__, 0);
          static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
          static_fields->__9__39_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__39_0;
          sub_1C9403C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__39_0,
            (int32_t)_9__39_0,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19);
        }
        if ( BasicHelper__Any_object_(
               MovieInfoList,
               (System_Func_T__bool__o *)_9__39_0,
               (const MethodInfo_3185468 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
        {
          BattleMoviePlayer__ShowBg(_4__this, 1, v20);
        }
        started = UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)_4__this, v9, 0);
        v2->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C9403C(p__2__current, (int32_t)started, v23, v24, v25, v26, v27, v28);
        LOBYTE(perf) = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return (char)perf;
      }
LABEL_23:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
LABEL_25:
    sub_1C942F0(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  BattleMoviePlayer__Dispose(_4__this, method);
  FadeOuted = v2->fields.FadeOuted;
  if ( FadeOuted )
    ((void (__fastcall *)(intptr_t, intptr_t))FadeOuted->fields.invoke_impl)(
      FadeOuted->fields.method_code,
      FadeOuted->fields.method);
  perf = _4__this->fields.perf;
  if ( perf )
  {
    BattlePerformance__OnBattleMovieEnd(perf, 0);
    goto LABEL_23;
  }
  return (char)perf;
}


Il2CppObject *BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleMoviePlayer__FadeoutDeleteMovie_d__39_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_IDisposable_Dispose(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__GetMoviePanelFirst_d__31___ctor(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMoviePlayer__GetMoviePanelFirst_d__31__MoveNext(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  BattleMoviePlayer__GetMoviePanelFirst_d__31_o *v2; // x21
  struct BattleMoviePlayer_o *_4__this; // x19
  Il2CppObject **p_perf; // x20
  UnityEngine_Object_o *perf; // x22
  UnityEngine_Object_o *performance; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct BattlePerformance_o *v13; // x1
  UnityEngine_Object_o *v14; // x21
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_Object_o *v22; // x20
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x3
  UnityEngine_GameObject_o *v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v33; // x3
  UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7

  v2 = this;
  if ( (byte_4D2F476 & 1) == 0 )
  {
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)sub_1C94098(&StringLiteral_10636/*"Performance"*/);
    byte_4D2F476 = 1;
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
    if ( !UnityEngine_Object__op_Equality(perf, 0, 0) )
      goto LABEL_19;
    performance = (UnityEngine_Object_o *)v2->fields.performance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(performance, 0, 0) )
    {
      v13 = v2->fields.performance;
      *p_perf = (Il2CppObject *)v13;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.perf, (int32_t)v13, v7, v8, v9, v10, v11, v12);
    }
    v14 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v14, 0, 0) )
      goto LABEL_19;
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)UnityEngine_GameObject__Find(
                                                              (System_String_o *)StringLiteral_10636/*"Performance"*/,
                                                              0);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    *p_perf = Component_object;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.perf,
      (int32_t)Component_object,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v22, 0, 0) )
    {
LABEL_19:
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)_4__this->fields.MovieInfoList;
      if ( this )
      {
        if ( SLODWORD(this->fields.__2__current) < 1
          || (v23 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__),
              v25 = BattleMoviePlayer__CreateBattleMoviePanel(_4__this, (BattleMoviePlayer_MovieInfo_o *)v23, 0, v24),
              _4__this->fields.currMovieObj = v25,
              sub_1C9403C(
                (GrandQuestFolderBoardItem_o *)&_4__this->fields.currMovieObj,
                (int32_t)v25,
                v26,
                v27,
                v28,
                v29,
                v30,
                v31),
              (this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)_4__this->fields.MovieInfoList) != 0) )
        {
          if ( SLODWORD(this->fields.__2__current) > 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     1,
                     (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
            BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(
                                 _4__this,
                                 (BattleMoviePlayer_MovieInfo_o *)Item,
                                 1,
                                 v33);
            _4__this->fields.nextMovieObj = BattleMoviePanel;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&_4__this->fields.nextMovieObj,
              (int32_t)BattleMoviePanel,
              v35,
              v36,
              v37,
              v38,
              v39,
              v40);
          }
          return 0;
        }
      }
LABEL_25:
      sub_1C942F0(this, method);
    }
  }
  return 0;
}


Il2CppObject *BattleMoviePlayer__GetMoviePanelFirst_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__GetMoviePanelFirst_d__31__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleMoviePlayer__GetMoviePanelFirst_d__31_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattleMoviePlayer__GetMoviePanelFirst_d__31__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__GetMoviePanelFirst_d__31__System_IDisposable_Dispose(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__PlayMovieFadeOut_d__46___ctor(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool BattleMoviePlayer__PlayMovieFadeOut_d__46__MoveNext(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *movieObj; // x21
  struct CriManaMovieController_o *v12; // x8
  UnityEngine_Material_o *material; // x0
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o **p_movieMaterial_5__2; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  struct BattleMoviePlayer_MovieInfo_o *v29; // x8
  float validTime; // s8
  struct CriManaMovieController_o *v31; // x8
  float effectRestTime; // s0
  struct CriManaMovieController_o *v33; // x8
  _BOOL4 forceFadeout; // w8
  struct BattleMoviePlayer_MovieInfo_o *v35; // x8
  struct CriManaMovieController_o *currController; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  int32_t num; // w8
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x9
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__3; // x8
  float v41; // s0
  float v42; // s1
  bool v43; // nf
  float v44; // s0
  struct BattleMoviePlayer_MovieInfo_o *v45; // x8
  float restTime_5__6; // s8
  float timeScale; // s0
  float *monitor; // x9
  struct BattlePerformance_o *perf; // x8
  float v50; // w10
  __int64 v51; // x9
  struct BattlePerformance_o *v52; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v56; // x1
  char v57; // w22
  float v58; // s11
  float v59; // s12
  float v60; // s13
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v61; // x21
  float v62; // s0
  int32_t v63; // w2
  float *v64; // x9
  float v65; // s8
  float v66; // s9
  float v67; // s10
  float v68; // s0
  BattleMoviePlayer_c *v69; // x8
  struct BattlePerformance_o *v70; // x8
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v71; // x21
  float v72; // s4
  float v73; // s2
  float v74; // s8
  float v75; // s9
  float v76; // s10
  const MethodInfo *v77; // x1
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v79; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v81; // s11
  float v82; // s12
  float v83; // s13
  float v84; // s0
  float v85; // s0
  float v86; // s2
  float v87; // s1
  float v88; // s0 OVERLAPPED
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o **p_movInfo_5__3; // x21
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  UnityEngine_Object_o *v104; // x19
  float v105; // s11
  float v106; // s12
  float v107; // s13
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v112; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4D2F478 & 1) == 0 )
  {
    sub_1C94098(&BattleMoviePlayer_TypeInfo);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C94098(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_16479/*"_ZWriteMode"*/);
    sub_1C94098(&StringLiteral_16478/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)sub_1C94098(&StringLiteral_16444/*"_Transparency"*/);
    byte_4D2F478 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_121;
    currController = _4__this->fields.currController;
    if ( !currController )
      goto LABEL_121;
    player_k__BackingField = currController->fields._player_k__BackingField;
    if ( !player_k__BackingField )
      goto LABEL_105;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__GetDisplayedFrameNo(player_k__BackingField, 0);
    if ( v8->fields._effectTime_5__4 <= (float)(int)this )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movInfo_5__3;
      if ( !this )
        goto LABEL_121;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movInfo_5__3;
        if ( !this )
          goto LABEL_121;
      }
      *(_QWORD *)&this->fields.num = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.num, 0, v2, v3, v4, v5, v6, v7);
    }
    num = v8->fields.num;
    if ( num < 0 )
      goto LABEL_61;
    MovieInfoList = _4__this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_121;
    if ( num >= MovieInfoList->fields._size )
    {
LABEL_61:
      v8->fields._pastError_5__5 = 1;
LABEL_105:
      p_movInfo_5__3 = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o **)&v8->fields._movInfo_5__3;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movInfo_5__3;
      if ( !this )
        goto LABEL_121;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0);
        this = *p_movInfo_5__3;
        if ( !*p_movInfo_5__3 )
          goto LABEL_121;
      }
      *(_QWORD *)&this->fields.num = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.num, 0, v2, v3, v4, v5, v6, v7);
      if ( !v8->fields._pastError_5__5 )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16478/*"_ZTestMode"*/, 4, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16444/*"_Transparency"*/, 1.0, 0);
      }
      v8->fields._movieMaterial_5__2 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._movieMaterial_5__2, 0, v92, v93, v94, v95, v96, v97);
      v8->fields._movInfo_5__3 = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._movInfo_5__3, 0, v98, v99, v100, v101, v102, v103);
      goto LABEL_113;
    }
    movInfo_5__3 = v8->fields._movInfo_5__3;
    if ( !movInfo_5__3 )
      goto LABEL_121;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movieMaterial_5__2;
    if ( !this )
      goto LABEL_121;
    v41 = 1.0 - (float)(v8->fields._restTime_5__6 / movInfo_5__3->fields.fadeRestTime);
    v42 = fminf(v41, 1.0);
    v43 = v41 < 0.0;
    v44 = 0.0;
    if ( !v43 )
      v44 = v42;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16444/*"_Transparency"*/, v44, 0);
    v45 = v8->fields._movInfo_5__3;
    if ( !v45 )
      goto LABEL_121;
    restTime_5__6 = v8->fields._restTime_5__6;
    timeScale = 1.0;
    if ( !v45->fields.ignoreTimeScale )
    {
      timeScale = UnityEngine_Time__get_timeScale(0);
      v45 = v8->fields._movInfo_5__3;
      if ( !v45 )
        goto LABEL_121;
    }
    v8->fields._restTime_5__6 = restTime_5__6 - (float)(timeScale * v45->fields.playSpeed);
    if ( _4__this->fields.KeepStartPosition )
    {
      if ( v45->fields._UsePlayMakerShakeParam_k__BackingField )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        }
        monitor = (float *)this[2].monitor;
        perf = _4__this->fields.perf;
        v50 = monitor[6];
        v51 = *((_QWORD *)monitor + 2);
        _4__this->fields.startPanelPosition.fields.z = v50;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v51;
        if ( !perf )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        v52 = _4__this->fields.perf;
        if ( !v52 )
          goto LABEL_121;
        if ( !this )
          goto LABEL_121;
        v108 = UnityEngine_Transform__InverseTransformVector(
                 (UnityEngine_Transform_o *)this,
                 v52->fields._CurrentShakeWidth_k__BackingField,
                 0);
        x = v108.fields.x;
        y = v108.fields.y;
        z = v108.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer__IsBossCamera(_4__this, v56);
        if ( !_4__this->fields.currController )
          goto LABEL_121;
        v57 = (char)this;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)_4__this->fields.currController,
                                                                0);
        v58 = _4__this->fields.startPanelPosition.fields.x;
        v59 = _4__this->fields.startPanelPosition.fields.y;
        v60 = _4__this->fields.startPanelPosition.fields.z;
        v61 = this;
        if ( (v57 & 1) == 0 )
        {
          if ( !this )
            goto LABEL_121;
          v117.fields.z = z + v60;
          v117.fields.y = y + v59;
          v117.fields.x = x + v58;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v117, 0);
          goto LABEL_103;
        }
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !v61 )
          goto LABEL_121;
        v62 = *((float *)this[2].monitor + 3) / *((float *)this[2].monitor + 2);
        v109.fields.z = (float)(v60 * v62) + (float)(z * v62);
        v109.fields.y = (float)(v59 * v62) + (float)(y * v62);
        v109.fields.x = (float)(v58 * v62) + (float)(x * v62);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v61, v109, 0);
      }
      else
      {
        v70 = _4__this->fields.perf;
        if ( !v70 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v70->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        v71 = this;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
        position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
        position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
        position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
        v112 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)v71, position, 0);
        v72 = fminf(v112.fields.z, 1.0);
        if ( v112.fields.z < -0.3 )
          v73 = -0.3;
        else
          v73 = v72;
        v113 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)v71, v112, 0);
        v74 = v113.fields.x;
        v75 = v113.fields.y;
        v76 = v113.fields.z;
        IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, v77);
        v79 = BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          v79 = BattleMoviePlayer_TypeInfo;
        }
        static_fields = v79->static_fields;
        if ( !IsBossCamera )
        {
          v118 = UnityEngine_Transform__TransformPoint(
                   (UnityEngine_Transform_o *)v71,
                   static_fields->BasePanelPosition,
                   0);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_121;
          v105 = v118.fields.x;
          v106 = v118.fields.y;
          v107 = v118.fields.z;
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
          if ( !this )
            goto LABEL_121;
          v119.fields.z = v107 - v76;
          v119.fields.y = v106 - v75;
          v119.fields.x = v105 - v74;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v119, 0);
          goto LABEL_103;
        }
        v114.fields.z = static_fields->BossPanelDist;
        v114.fields.x = 0.0;
        v114.fields.y = 0.0;
        v115 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)v71, v114, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        v81 = v115.fields.x;
        v82 = v115.fields.y;
        v83 = v115.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        v84 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v116.fields.z = v83 - (float)(v76 * v84);
        v116.fields.y = v82 - (float)(v75 * v84);
        v116.fields.x = v81 - (float)(v74 * v84);
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v116, 0);
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      if ( !this )
        goto LABEL_121;
      v69 = BattleMoviePlayer_TypeInfo;
    }
    else
    {
      if ( !BattleMoviePlayer__IsBossCamera(_4__this, method) )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)this,
          _4__this->fields.startPanelPosition,
          0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_121;
        v87 = _4__this->fields.startPanelScale.fields.y;
        v86 = _4__this->fields.startPanelScale.fields.z;
        v88 = _4__this->fields.startPanelScale.fields.x;
        goto LABEL_102;
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
      if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
      }
      if ( !_4__this->fields.currController )
        goto LABEL_121;
      v64 = (float *)this[2].monitor;
      v66 = v64[5];
      v65 = v64[6];
      v67 = v64[4];
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this->fields.currController,
                                                              0);
      if ( !this )
        goto LABEL_121;
      v68 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
          / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
      v110.fields.z = v65 * v68;
      v110.fields.y = v66 * v68;
      v110.fields.x = v67 * v68;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v110, 0);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      if ( !this )
        goto LABEL_121;
      v69 = BattleMoviePlayer_TypeInfo;
    }
    v85 = v69->static_fields->BossPanelDist / v69->static_fields->BaseDist;
    v86 = v85 * _4__this->fields.startPanelScale.fields.z;
    v87 = v85 * _4__this->fields.startPanelScale.fields.y;
    v88 = v85 * _4__this->fields.startPanelScale.fields.x;
LABEL_102:
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v88, 0);
LABEL_103:
    if ( v8->fields._restTime_5__6 > 0.0 )
    {
      v8->fields.__2__current = 0;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C9403C(p__2__current, 0, v2, v3, v4, v5, v6, v7);
      result = 1;
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return result;
    }
    goto LABEL_105;
  }
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    movieObj = (UnityEngine_Object_o *)v8->fields.movieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Object__op_Inequality(movieObj, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !_4__this )
        goto LABEL_121;
LABEL_113:
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.ObjList;
      if ( this )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v8->fields.movieObj,
          (const MethodInfo_386C35C *)Method_System_Collections_Generic_List_GameObject__Remove__);
        v104 = (UnityEngine_Object_o *)v8->fields.movieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_72110972(v104, 0);
        return 0;
      }
      goto LABEL_121;
    }
    if ( !_4__this )
      goto LABEL_121;
    v12 = _4__this->fields.currController;
    if ( !v12 )
      goto LABEL_121;
    if ( v12->fields._player_k__BackingField )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields.movieObj;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_121;
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
      v8->fields._movieMaterial_5__2 = material;
      p_movieMaterial_5__2 = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o **)&v8->fields._movieMaterial_5__2;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._movieMaterial_5__2,
        (int32_t)material,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_121;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v8->fields.num,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v8->fields._movInfo_5__3 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      v22 = &v8->fields._movInfo_5__3;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._movInfo_5__3, (int32_t)Item, v23, v24, v25, v26, v27, v28);
      v29 = v8->fields._movInfo_5__3;
      if ( !v29 )
        goto LABEL_121;
      validTime = v29->fields.validTime;
      if ( validTime <= 0.0 )
      {
        v31 = _4__this->fields.currController;
        if ( !v31 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v31->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0);
        if ( !this )
          goto LABEL_121;
        v29 = *v22;
        if ( !*v22 )
          goto LABEL_121;
        validTime = (float)(unsigned int)this->fields.num;
      }
      effectRestTime = v29->fields.effectRestTime;
      v8->fields._pastError_5__5 = 0;
      v8->fields._effectTime_5__4 = fmaxf(validTime - effectRestTime, 0.0);
      v33 = _4__this->fields.currController;
      if ( !v33 )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v33->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__GetDisplayedFrameNo(
                                                              (CriMana_Player_o *)this,
                                                              0);
      forceFadeout = v8->fields.forceFadeout;
      v8->fields._restTime_5__6 = validTime - (float)(int)this;
      if ( !forceFadeout )
      {
        v35 = *v22;
        if ( !*v22 )
          goto LABEL_121;
        goto LABEL_63;
      }
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v35 = *v22;
        if ( !*v22 )
          goto LABEL_121;
        v8->fields._restTime_5__6 = v35->fields.fadeRestTime;
        _4__this->fields._ForceFadeout_k__BackingField = 1;
LABEL_63:
        if ( v35->fields.isBackMovie )
        {
          this = *p_movieMaterial_5__2;
          if ( !*p_movieMaterial_5__2 )
            goto LABEL_121;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16479/*"_ZWriteMode"*/, 0, 0);
        }
        this = *p_movieMaterial_5__2;
        if ( !*p_movieMaterial_5__2 )
LABEL_121:
          sub_1C942F0(this, method);
        if ( _4__this->fields.OverrideZDepth )
          v63 = 8;
        else
          v63 = 4;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16478/*"_ZTestMode"*/, v63, 0);
        goto LABEL_103;
      }
    }
  }
  return 0;
}


Il2CppObject *BattleMoviePlayer__PlayMovieFadeOut_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__PlayMovieFadeOut_d__46__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleMoviePlayer__PlayMovieFadeOut_d__46_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattleMoviePlayer__PlayMovieFadeOut_d__46__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__PlayMovieFadeOut_d__46__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__PlayMovie_d__45___ctor(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool BattleMoviePlayer__PlayMovie_d__45__MoveNext(BattleMoviePlayer__PlayMovie_d__45_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleMoviePlayer__PlayMovie_d__45_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct CriManaMovieController_o **p_currController; // x21
  UnityEngine_Object_o *v18; // x22
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **p_movInfo_5__2; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct BattleMoviePlayer_MovieInfo_o *v27; // x8
  CriMana_Player_o *v28; // x23
  float v29; // s0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct BattleMoviePlayer_MovieInfo_o *v36; // x8
  GrandQuestFolderBoardItem_o *v37; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovie_d__45_o *v39; // x22
  BattleMoviePlayer__PlayMovie_d__45_o *v40; // x21
  BattleMoviePlayer__PlayMovie_d__45_o *v41; // x22
  float v42; // s0
  int32_t v43; // w2
  float fadeinTime_5__5; // s0
  struct CriManaMovieController_o *v45; // x8
  struct BattleMoviePlayer_MovieInfo_o *v46; // x8
  float skipFrame_5__4; // s8
  float timeScale; // s0
  struct CriManaMovieController_o *v49; // x8
  BattleCameraFullScaleSetter_o *v50; // x21
  struct CriManaMovieController_o *v51; // x8
  CriMana_Player_o *player_k__BackingField; // x8
  uint32_t v53; // w22
  struct CriManaMovieController_o *v54; // x9
  struct BattleMoviePlayer_MovieInfo_o *v55; // x8
  BattleMoviePlayer__PlayMovie_d__45_o *v56; // x21
  float *v57; // x8
  float v58; // s0
  struct CriManaMovieController_o *v59; // x8
  struct CriManaMovieController_o *v60; // x8
  unsigned int num; // w9
  _BOOL4 KeepStartPosition; // w8
  struct BattlePerformance_o *v63; // x8
  const MethodInfo *v64; // x2
  struct BattleMoviePlayer_MovieInfo_o *v65; // x8
  BattleMoviePlayer__PlayMovie_d__45_o *v66; // x21
  int32_t v67; // w2
  struct BattleMoviePlayer_MovieInfo_o *v68; // x8
  struct CriManaMovieController_o *v69; // x8
  struct BattleMoviePlayer_MovieInfo_o *v70; // x8
  float v71; // s0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  const MethodInfo *v73; // x2
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  struct BattleMoviePlayer_MovieInfo_o *v75; // x8
  struct CriManaMovieController_o *currController; // x8
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  float effectTime_5__7; // s0
  struct BattlePerformance_o *perf; // x8
  struct BattleMoviePlayer_MovieInfo_o *v85; // x9
  float *v86; // x9
  float v87; // s8
  float v88; // s9
  float v89; // s10
  float v90; // s0
  BattleMoviePlayer_c *v91; // x8
  __int64 v92; // x9
  float v93; // w10
  __int64 v94; // x9
  struct BattlePerformance_o *v95; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v99; // x1
  char v100; // w22
  float v101; // s11
  float v102; // s12
  float v103; // s13
  BattleMoviePlayer__PlayMovie_d__45_o *v104; // x21
  float v105; // s0
  BattleMoviePlayer__PlayMovie_d__45_o *v106; // x21
  float v107; // s4
  float v108; // s2
  float v109; // s8
  float v110; // s9
  float v111; // s10
  const MethodInfo *v112; // x1
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v114; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v116; // s11
  float v117; // s12
  float v118; // s13
  float v119; // s0
  float v120; // s0
  float v121; // s2
  float v122; // s1
  float v123; // s0 OVERLAPPED
  float v124; // s11
  float v125; // s12
  float v126; // s13
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v134; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4D2F477 & 1) == 0 )
  {
    sub_1C94098(&BattleMoviePlayer_TypeInfo);
    sub_1C94098(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C94098(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_16479/*"_ZWriteMode"*/);
    sub_1C94098(&StringLiteral_16478/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovie_d__45_o *)sub_1C94098(&StringLiteral_16444/*"_Transparency"*/);
    byte_4D2F477 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  switch ( _1__state )
  {
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_189;
      if ( !this->fields._movInfo_5__2 )
      {
LABEL_117:
        v8->fields._movInfo_5__2 = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._movInfo_5__2, 0, v2, v3, v4, v5, v6, v7);
        return 0;
      }
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_189;
      v39 = this;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                       (UnityEngine_Renderer_o *)this,
                                                       0);
      v40 = this;
      if ( v8->fields._fadeinTime_5__5 > 0.0 )
      {
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v39, 1, 0);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                         (UnityEngine_Renderer_o *)v39,
                                                         0);
        if ( !_4__this->fields.baseMat )
          goto LABEL_189;
        v41 = this;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Material__get_renderQueue(
                                                         _4__this->fields.baseMat,
                                                         0);
        if ( !v41 )
          goto LABEL_189;
        UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v41, (int32_t)this, 0);
        v42 = (float)v8->fields._currentFrame_5__3 / v8->fields._fadeinTime_5__5;
        if ( v42 >= 1.0 )
        {
          if ( !v40 )
            goto LABEL_189;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v40, (System_String_o *)StringLiteral_16478/*"_ZTestMode"*/, 4, 0);
          UnityEngine_Material__SetFloat((UnityEngine_Material_o *)v40, (System_String_o *)StringLiteral_16444/*"_Transparency"*/, 0.0, 0);
          movInfo_5__2 = v8->fields._movInfo_5__2;
          if ( !movInfo_5__2 )
            goto LABEL_189;
          if ( movInfo_5__2->fields.cameraType == 1 )
            BattleMoviePlayer__ShowBg(_4__this, 0, v73);
          v8->fields._fadeinTime_5__5 = 0.0;
        }
        else
        {
          if ( !v40 )
            goto LABEL_189;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v40,
            (System_String_o *)StringLiteral_16444/*"_Transparency"*/,
            1.0 - v42,
            0);
          if ( _4__this->fields.OverrideZDepth )
            v43 = 8;
          else
            v43 = 4;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v40, (System_String_o *)StringLiteral_16478/*"_ZTestMode"*/, v43, 0);
        }
      }
      v75 = v8->fields._movInfo_5__2;
      if ( !v75 )
        goto LABEL_189;
      if ( v75->fields.isBackMovie )
      {
        if ( !v40 )
          goto LABEL_189;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)v40, (System_String_o *)StringLiteral_16479/*"_ZWriteMode"*/, 0, 0);
      }
      if ( _4__this->fields._ForceFadeout_k__BackingField )
        return 0;
      currController = _4__this->fields.currController;
      if ( !currController
        || (this = (BattleMoviePlayer__PlayMovie_d__45_o *)currController->fields._player_k__BackingField) == 0 )
      {
LABEL_189:
        sub_1C942F0(this, method);
      }
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
      effectTime_5__7 = v8->fields._effectTime_5__7;
      v8->fields._currentFrame_5__3 = (int)this;
      if ( effectTime_5__7 <= (float)(int)this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)v8->fields._movInfo_5__2;
        if ( !this )
          goto LABEL_189;
        if ( *(_QWORD *)&this->fields.num )
        {
          UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v8->fields._movInfo_5__2;
          if ( !this )
            goto LABEL_189;
        }
        *(_QWORD *)&this->fields.num = 0;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.num, 0, v77, v78, v79, v80, v81, v82);
      }
      if ( _4__this->fields.KeepStartPosition )
      {
        perf = _4__this->fields.perf;
        if ( !perf )
          goto LABEL_189;
        v85 = v8->fields._movInfo_5__2;
        if ( perf->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          if ( !v85 )
            goto LABEL_189;
          v85->fields._UsePlayMakerShakeParam_k__BackingField = 1;
        }
        else if ( !v85 )
        {
          goto LABEL_189;
        }
        if ( v85->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
            perf = _4__this->fields.perf;
          }
          v92 = *(_QWORD *)&this[1].fields._isLoopMovie_5__9;
          v93 = *(float *)(v92 + 24);
          v94 = *(_QWORD *)(v92 + 16);
          _4__this->fields.startPanelPosition.fields.z = v93;
          *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v94;
          if ( !perf )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          v95 = _4__this->fields.perf;
          if ( !v95 )
            goto LABEL_189;
          if ( !this )
            goto LABEL_189;
          v130 = UnityEngine_Transform__InverseTransformVector(
                   (UnityEngine_Transform_o *)this,
                   v95->fields._CurrentShakeWidth_k__BackingField,
                   0);
          x = v130.fields.x;
          y = v130.fields.y;
          z = v130.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer__IsBossCamera(_4__this, v99);
          if ( !_4__this->fields.currController )
            goto LABEL_189;
          v100 = (char)this;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)_4__this->fields.currController,
                                                           0);
          v101 = _4__this->fields.startPanelPosition.fields.x;
          v102 = _4__this->fields.startPanelPosition.fields.y;
          v103 = _4__this->fields.startPanelPosition.fields.z;
          v104 = this;
          if ( (v100 & 1) == 0 )
          {
            if ( this )
            {
              v138.fields.z = z + v103;
              v138.fields.y = y + v102;
              v138.fields.x = x + v101;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v138, 0);
              goto LABEL_114;
            }
            goto LABEL_189;
          }
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
          }
          if ( !v104 )
            goto LABEL_189;
          v105 = *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 12LL)
               / *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 8LL);
          v131.fields.z = (float)(v103 * v105) + (float)(z * v105);
          v131.fields.y = (float)(v102 * v105) + (float)(y * v105);
          v131.fields.x = (float)(v101 * v105) + (float)(x * v105);
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v104, v131, 0);
        }
        else
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          v106 = this;
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
          position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
          position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
          position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
          v133 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)v106, position, 0);
          v107 = fminf(v133.fields.z, 1.0);
          if ( v133.fields.z < -0.3 )
            v108 = -0.3;
          else
            v108 = v107;
          v134 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)v106, v133, 0);
          v109 = v134.fields.x;
          v110 = v134.fields.y;
          v111 = v134.fields.z;
          IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, v112);
          v114 = BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            v114 = BattleMoviePlayer_TypeInfo;
          }
          static_fields = v114->static_fields;
          if ( !IsBossCamera )
          {
            v139 = UnityEngine_Transform__TransformPoint(
                     (UnityEngine_Transform_o *)v106,
                     static_fields->BasePanelPosition,
                     0);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
            if ( this )
            {
              v124 = v139.fields.x;
              v125 = v139.fields.y;
              v126 = v139.fields.z;
              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
              if ( this )
              {
                v140.fields.z = v126 - v111;
                v140.fields.y = v125 - v110;
                v140.fields.x = v124 - v109;
                UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v140, 0);
                goto LABEL_114;
              }
            }
            goto LABEL_189;
          }
          v135.fields.z = static_fields->BossPanelDist;
          v135.fields.x = 0.0;
          v135.fields.y = 0.0;
          v136 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)v106, v135, 0);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          v116 = v136.fields.x;
          v117 = v136.fields.y;
          v118 = v136.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          v119 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
               / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
          v137.fields.z = v118 - (float)(v111 * v119);
          v137.fields.y = v117 - (float)(v110 * v119);
          v137.fields.x = v116 - (float)(v109 * v119);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v137, 0);
        }
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( !this )
          goto LABEL_189;
        v91 = BattleMoviePlayer_TypeInfo;
      }
      else
      {
        if ( !BattleMoviePlayer__IsBossCamera(_4__this, method) )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)this,
            _4__this->fields.startPanelPosition,
            0);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_189;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_189;
          v122 = _4__this->fields.startPanelScale.fields.y;
          v121 = _4__this->fields.startPanelScale.fields.z;
          v123 = _4__this->fields.startPanelScale.fields.x;
LABEL_185:
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v123, 0);
          goto LABEL_114;
        }
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !_4__this->fields.currController )
          goto LABEL_189;
        v86 = *(float **)&this[1].fields._isLoopMovie_5__9;
        v88 = v86[5];
        v87 = v86[6];
        v89 = v86[4];
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)_4__this->fields.currController,
                                                         0);
        if ( !this )
          goto LABEL_189;
        v90 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v129.fields.z = v87 * v90;
        v129.fields.y = v88 * v90;
        v129.fields.x = v89 * v90;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v129, 0);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( !this )
          goto LABEL_189;
        v91 = BattleMoviePlayer_TypeInfo;
      }
      v120 = v91->static_fields->BossPanelDist / v91->static_fields->BaseDist;
      v121 = v120 * _4__this->fields.startPanelScale.fields.z;
      v122 = v120 * _4__this->fields.startPanelScale.fields.y;
      v123 = v120 * _4__this->fields.startPanelScale.fields.x;
      goto LABEL_185;
    case 1:
      fadeinTime_5__5 = v8->fields._fadeinTime_5__5;
      v8->fields.__1__state = -1;
      if ( fadeinTime_5__5 <= 0.0 )
      {
        if ( !_4__this )
          goto LABEL_189;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_189;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_189;
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0);
      }
      v45 = _4__this->fields.currController;
      if ( !v45 )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v45->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
      v46 = v8->fields._movInfo_5__2;
      v8->fields._currentFrame_5__3 = (int)this;
      if ( !v46 )
        goto LABEL_189;
      skipFrame_5__4 = v8->fields._skipFrame_5__4;
      if ( v46->fields.ignoreTimeScale )
      {
        timeScale = 1.0;
      }
      else
      {
        timeScale = UnityEngine_Time__get_timeScale(0);
        LODWORD(this) = v8->fields._currentFrame_5__3;
      }
      v8->fields._skipFrame_5__4 = skipFrame_5__4 + timeScale;
      if ( ((unsigned int)this & 0x80000000) != 0 )
        goto LABEL_23;
LABEL_50:
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v8->fields.movieObj;
      if ( this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         (UnityEngine_GameObject_o *)this,
                                                         (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
        v49 = _4__this->fields.currController;
        if ( v49 )
        {
          v50 = (BattleCameraFullScaleSetter_o *)this;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v49->fields._player_k__BackingField;
          if ( this )
          {
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0);
            if ( this )
            {
              v51 = _4__this->fields.currController;
              if ( v51 )
              {
                player_k__BackingField = v51->fields._player_k__BackingField;
                if ( player_k__BackingField )
                {
                  v53 = (uint32_t)this->fields.__4__this;
                  this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
                                                                   player_k__BackingField,
                                                                   0);
                  if ( this )
                  {
                    if ( v50 )
                    {
                      BattleCameraFullScaleSetter__AdjustPanelSize(v50, v53, HIDWORD(this->fields.__4__this), 0);
                      v54 = _4__this->fields.currController;
                      if ( v54 )
                      {
                        v55 = v8->fields._movInfo_5__2;
                        if ( v55 )
                        {
                          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v54->fields._player_k__BackingField;
                          if ( this )
                          {
                            CriMana_Player__Loop((CriMana_Player_o *)this, v55->fields.loop, 0);
                            this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                            if ( this )
                            {
                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                               (UnityEngine_Component_o *)this,
                                                                               (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                              if ( this )
                              {
                                this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                 0);
                                if ( _4__this->fields.baseMat )
                                {
                                  v56 = this;
                                  this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Material__get_renderQueue(
                                                                                   _4__this->fields.baseMat,
                                                                                   0);
                                  if ( v56 )
                                  {
                                    UnityEngine_Material__set_renderQueue(
                                      (UnityEngine_Material_o *)v56,
                                      (int32_t)this,
                                      0);
                                    if ( v8->fields._fadeinTime_5__5 > 0.0 )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                      if ( !this )
                                        goto LABEL_189;
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                      if ( !this )
                                        goto LABEL_189;
                                      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0);
                                    }
                                    v57 = (float *)v8->fields._movInfo_5__2;
                                    if ( !v57 )
                                      goto LABEL_189;
                                    v58 = v57[8];
                                    if ( v58 <= 0.0 )
                                    {
                                      v59 = _4__this->fields.currController;
                                      if ( !v59 )
                                        goto LABEL_189;
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v59->fields._player_k__BackingField;
                                      if ( !this )
                                        goto LABEL_189;
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
                                                                                       (CriMana_Player_o *)this,
                                                                                       0);
                                      if ( this )
                                      {
                                        v60 = _4__this->fields.currController;
                                        if ( !v60 )
                                          goto LABEL_189;
                                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)v60->fields._player_k__BackingField;
                                        if ( !this )
                                          goto LABEL_189;
                                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
                                                                                         (CriMana_Player_o *)this,
                                                                                         0);
                                        if ( !this )
                                          goto LABEL_189;
                                        num = this->fields.num;
                                      }
                                      else
                                      {
                                        num = 0;
                                      }
                                      v57 = (float *)v8->fields._movInfo_5__2;
                                      if ( !v57 )
                                        goto LABEL_189;
                                      v58 = (float)num;
                                    }
                                    v8->fields._fadeoutTime_5__6 = fmaxf(v58 - v57[10], 0.0);
                                    v8->fields._effectTime_5__7 = fmaxf(v58 - v57[14], 0.0);
                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                    if ( this )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       0);
                                      if ( this )
                                      {
                                        localPosition = UnityEngine_Transform__get_localPosition(
                                                          (UnityEngine_Transform_o *)this,
                                                          0);
                                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                        _4__this->fields.startPanelPosition = localPosition;
                                        if ( this )
                                        {
                                          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                                                           (UnityEngine_Component_o *)this,
                                                                                           0);
                                          if ( this )
                                          {
                                            localScale = UnityEngine_Transform__get_localScale(
                                                           (UnityEngine_Transform_o *)this,
                                                           0);
                                            KeepStartPosition = _4__this->fields.KeepStartPosition;
                                            _4__this->fields.startPanelScale = localScale;
                                            if ( KeepStartPosition )
                                            {
                                              v63 = _4__this->fields.perf;
                                              if ( !v63 )
                                                goto LABEL_189;
                                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)v63->fields.actorcamera;
                                              if ( !this )
                                                goto LABEL_189;
                                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                                                               (UnityEngine_Component_o *)this,
                                                                                               0);
                                              if ( !this )
                                                goto LABEL_189;
                                              _4__this->fields.cameraStartPosition = UnityEngine_Transform__get_position(
                                                                                       (UnityEngine_Transform_o *)this,
                                                                                       0);
                                            }
                                            this = (BattleMoviePlayer__PlayMovie_d__45_o *)v8->fields.movieObj;
                                            if ( this )
                                            {
                                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                               (UnityEngine_GameObject_o *)this,
                                                                                               (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                                              if ( this )
                                              {
                                                this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                                 0);
                                                v65 = v8->fields._movInfo_5__2;
                                                if ( v65 )
                                                {
                                                  v66 = this;
                                                  if ( v65->fields.cameraType == 1 )
                                                    BattleMoviePlayer__ShowBg(
                                                      _4__this,
                                                      v8->fields._fadeinTime_5__5 > 0.0,
                                                      v64);
                                                  if ( v8->fields._fadeinTime_5__5 <= 0.0 )
                                                  {
                                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                                    if ( !this )
                                                      goto LABEL_189;
                                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                                                     (UnityEngine_Component_o *)this,
                                                                                                     (const MethodInfo_3192904 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                                    if ( !this )
                                                      goto LABEL_189;
                                                    UnityEngine_Renderer__set_enabled(
                                                      (UnityEngine_Renderer_o *)this,
                                                      1,
                                                      0);
                                                  }
                                                  else
                                                  {
                                                    if ( !v66 )
                                                      goto LABEL_189;
                                                    if ( _4__this->fields.OverrideZDepth )
                                                      v67 = 8;
                                                    else
                                                      v67 = 4;
                                                    UnityEngine_Material__SetInt(
                                                      (UnityEngine_Material_o *)v66,
                                                      (System_String_o *)StringLiteral_16478/*"_ZTestMode"*/,
                                                      v67,
                                                      0);
                                                    UnityEngine_Material__SetFloat(
                                                      (UnityEngine_Material_o *)v66,
                                                      (System_String_o *)StringLiteral_16444/*"_Transparency"*/,
                                                      1.0,
                                                      0);
                                                  }
                                                  v68 = v8->fields._movInfo_5__2;
                                                  if ( !v68 )
                                                    goto LABEL_189;
                                                  if ( v68->fields.isBackMovie )
                                                  {
                                                    if ( !v66 )
                                                      goto LABEL_189;
                                                    UnityEngine_Material__SetInt(
                                                      (UnityEngine_Material_o *)v66,
                                                      (System_String_o *)StringLiteral_16479/*"_ZWriteMode"*/,
                                                      0,
                                                      0);
                                                  }
                                                  v69 = _4__this->fields.currController;
                                                  if ( v69 )
                                                  {
                                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)v69->fields._player_k__BackingField;
                                                    if ( this )
                                                    {
                                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
                                                      v70 = v8->fields._movInfo_5__2;
                                                      v8->fields._currentFrame_5__3 = (int)this;
                                                      if ( v70 )
                                                      {
                                                        v71 = 1.0;
                                                        if ( v70->fields.ignoreTimeScale
                                                          || (v71 = UnityEngine_Time__get_timeScale(0),
                                                              (v70 = v8->fields._movInfo_5__2) != 0) )
                                                        {
                                                          v8->fields._playSpeed_5__8 = v71 * v70->fields.playSpeed;
                                                          v8->fields._isLoopMovie_5__9 = v70->fields.loop;
LABEL_114:
                                                          if ( v8->fields._isLoopMovie_5__9
                                                            || (float)((float)(v8->fields._skipFrame_5__4
                                                                             + (float)v8->fields._currentFrame_5__3)
                                                                     + v8->fields._playSpeed_5__8) < v8->fields._fadeoutTime_5__6 )
                                                          {
                                                            v8->fields.__2__current = 0;
                                                            p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
                                                            sub_1C9403C(p__2__current, 0, v2, v3, v4, v5, v6, v7);
                                                            LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 2;
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
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v8->fields.movieObj;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)this,
                                                       (const MethodInfo_31F4790 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !_4__this )
        goto LABEL_189;
      _4__this->fields.currController = (struct CriManaMovieController_o *)this;
      p_currController = &_4__this->fields.currController;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&_4__this->fields.currController,
        (int32_t)this,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      _4__this->fields.currentMovieNum = v8->fields.num;
      v18 = (UnityEngine_Object_o *)_4__this->fields.currController;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v18, 0, 0) )
        return 0;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_189;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v8->fields.num,
               (const MethodInfo_386AB64 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v8->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      p_movInfo_5__2 = &v8->fields._movInfo_5__2;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&v8->fields._movInfo_5__2, (int32_t)Item, v21, v22, v23, v24, v25, v26);
      if ( !*p_currController )
        goto LABEL_189;
      v27 = *p_movInfo_5__2;
      if ( !*p_movInfo_5__2 )
        goto LABEL_189;
      v28 = (*p_currController)->fields._player_k__BackingField;
      v29 = 1.0;
      if ( !v27->fields.ignoreTimeScale )
      {
        v29 = UnityEngine_Time__get_timeScale(0);
        v27 = *p_movInfo_5__2;
        if ( !*p_movInfo_5__2 )
          goto LABEL_189;
      }
      if ( !v28 )
        goto LABEL_189;
      CriMana_Player__SetSpeed(v28, v29 * v27->fields.playSpeed, 0);
      if ( !*p_currController )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      CriMana_Player__Start((CriMana_Player_o *)this, 0);
      if ( !*p_currController )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_189;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
      v36 = v8->fields._movInfo_5__2;
      *(_QWORD *)&v8->fields._currentFrame_5__3 = (unsigned int)this;
      if ( !v36 )
        goto LABEL_189;
      v8->fields._fadeinTime_5__5 = v36->fields.fadeinTime;
      if ( ((unsigned int)this & 0x80000000) != 0 )
      {
LABEL_23:
        v8->fields.__2__current = 0;
        v37 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C9403C(v37, 0, v30, v31, v32, v33, v34, v35);
        result = 1;
        LODWORD(v37[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
      goto LABEL_50;
  }
  return 0;
}


Il2CppObject *BattleMoviePlayer__PlayMovie_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__PlayMovie_d__45__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleMoviePlayer__PlayMovie_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattleMoviePlayer__PlayMovie_d__45__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__PlayMovie_d__45__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer__StartMovie_d__36___ctor(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleMoviePlayer__StartMovie_d__36__MoveNext(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleMoviePlayer__StartMovie_d__36_o *v8; // x19
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x8
  System_Collections_IEnumerator_o *v12; // x0
  UnityEngine_Coroutine_o *started; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  BattlePerformance_o *perf; // x0
  int v22; // w8
  struct UnityEngine_GameObject_o *v23; // x1
  struct UnityEngine_GameObject_o *nextMovieObj; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  const MethodInfo *v37; // x4
  System_Collections_IEnumerator_o *v38; // x0
  const MethodInfo *v39; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v40; // x8
  int32_t v41; // w1
  UnityEngine_Object_o *v42; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v43; // x9
  struct UnityEngine_GameObject_o *v44; // x1
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w2
  int32_t v52; // w3
  System_String_o *v53; // x4
  int32_t v54; // w5
  int64_t v55; // x6
  System_String_o *v56; // x7
  const MethodInfo *v57; // x4
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v58; // x8
  int size; // w8
  System_Collections_IEnumerator_o *v60; // x0
  System_Collections_Generic_List_T__o *v61; // x22
  System_Collections_IEnumerator_o *v62; // x21
  BattleMoviePlayer___c_c *v63; // x8
  System_Func_object__bool__o *_9__36_0; // x23
  Il2CppObject *v65; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  const MethodInfo *v73; // x2
  UnityEngine_Coroutine_o *v74; // x0
  GrandQuestFolderBoardItem_o *v75; // x19
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  int v82; // w8
  System_Collections_IEnumerator_o *v83; // x0
  UnityEngine_Coroutine_o *v84; // x0
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7

  v8 = this;
  if ( (byte_4D2F479 & 1) == 0 )
  {
    sub_1C94098(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C94098(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_BattleMoviePlayer___c__StartMovie_b__36_0__);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)sub_1C94098(&BattleMoviePlayer___c_TypeInfo);
    byte_4D2F479 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_45;
      currMovieObj = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (BattleMoviePlayer__StartMovie_d__36_o *)UnityEngine_Object__op_Inequality(currMovieObj, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_12;
      MovieInfoList = _4__this->fields.MovieInfoList;
      if ( !MovieInfoList )
        goto LABEL_45;
      if ( MovieInfoList->fields._size >= 1 )
      {
        v12 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, 0, v3);
        started = UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)_4__this, v12, 0);
        v8->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C9403C(p__2__current, (int32_t)started, v15, v16, v17, v18, v19, v20);
        LOBYTE(perf) = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return (char)perf;
      }
LABEL_12:
      v22 = 0;
      v8->fields._i_5__2 = 0;
      break;
    case 1:
      v8->fields.__1__state = -1;
      goto LABEL_12;
    case 2:
      v8->fields.__1__state = -1;
      goto LABEL_23;
    case 3:
      v8->fields.__1__state = -1;
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
    v43 = _4__this->fields.MovieInfoList;
    if ( !v43 )
      goto LABEL_45;
    if ( v22 >= v43->fields._size - 1 || _4__this->fields._ForceFadeout_k__BackingField )
    {
      v44 = _4__this->fields.currMovieObj;
      _4__this->fields.pastMovieObj = v44;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&_4__this->fields.pastMovieObj,
        (int32_t)v44,
        v2,
        (int32_t)v3,
        v4,
        v5,
        v6,
        v7);
      _4__this->fields.currMovieObj = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.currMovieObj, 0, v45, v46, v47, v48, v49, v50);
      _4__this->fields.nextMovieObj = 0;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.nextMovieObj, 0, v51, v52, v53, v54, v55, v56);
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v58 = _4__this->fields.MovieInfoList;
        if ( !v58 )
LABEL_45:
          sub_1C942F0(this, method);
        size = v58->fields._size;
        if ( size >= 1 )
        {
          v60 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, size - 1, 0, v57);
          v61 = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
          v62 = v60;
          v63 = BattleMoviePlayer___c_TypeInfo;
          if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
            v63 = BattleMoviePlayer___c_TypeInfo;
          }
          _9__36_0 = (System_Func_object__bool__o *)v63->static_fields->__9__36_0;
          if ( !_9__36_0 )
          {
            if ( !v63->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v63);
              v63 = BattleMoviePlayer___c_TypeInfo;
            }
            v65 = (Il2CppObject *)v63->static_fields->__9;
            _9__36_0 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__36_0, v65, Method_BattleMoviePlayer___c__StartMovie_b__36_0__, 0);
            static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
            static_fields->__9__36_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__36_0;
            sub_1C9403C(
              (GrandQuestFolderBoardItem_o *)&static_fields->__9__36_0,
              (int32_t)_9__36_0,
              v67,
              v68,
              v69,
              v70,
              v71,
              v72);
          }
          if ( BasicHelper__Any_object_(
                 v61,
                 (System_Func_T__bool__o *)_9__36_0,
                 (const MethodInfo_3185468 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
          {
            BattleMoviePlayer__ShowBg(_4__this, 1, v73);
          }
          v74 = UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)_4__this, v62, 0);
          v8->fields.__2__current = (Il2CppObject *)v74;
          v75 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
          sub_1C9403C(v75, (int32_t)v74, v76, v77, v78, v79, v80, v81);
          v82 = 3;
          goto LABEL_43;
        }
LABEL_39:
        perf = _4__this->fields.perf;
        if ( !perf )
          return (char)perf;
        BattlePerformance__OnBattleMovieEnd(perf, 0);
      }
LABEL_41:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
    v23 = _4__this->fields.currMovieObj;
    _4__this->fields.pastMovieObj = v23;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.pastMovieObj,
      (int32_t)v23,
      v2,
      (int32_t)v3,
      v4,
      v5,
      v6,
      v7);
    nextMovieObj = _4__this->fields.nextMovieObj;
    _4__this->fields.currMovieObj = nextMovieObj;
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.currMovieObj,
      (int32_t)nextMovieObj,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    _4__this->fields.nextMovieObj = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&_4__this->fields.nextMovieObj, 0, v31, v32, v33, v34, v35, v36);
    v38 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, v8->fields._i_5__2, 0, v37);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)UnityEngine_MonoBehaviour__StartCoroutine_72096164(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      v38,
                                                      0);
    v40 = _4__this->fields.MovieInfoList;
    if ( !v40 )
      goto LABEL_45;
    v41 = v8->fields._i_5__2 + 2;
    if ( v41 < v40->fields._size )
      BattleMoviePlayer__GetMoviePanelAdd(_4__this, v41, v39);
    v42 = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)UnityEngine_Object__op_Inequality(v42, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_23:
    v22 = v8->fields._i_5__2 + 1;
    v8->fields._i_5__2 = v22;
  }
  v83 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, v8->fields._i_5__2 + 1, v3);
  v84 = UnityEngine_MonoBehaviour__StartCoroutine_72096164((UnityEngine_MonoBehaviour_o *)_4__this, v83, 0);
  v8->fields.__2__current = (Il2CppObject *)v84;
  v75 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
  sub_1C9403C(v75, (int32_t)v84, v85, v86, v87, v88, v89, v90);
  v82 = 2;
LABEL_43:
  LODWORD(v75[-1].fields._ClosedMessage_k__BackingField) = v82;
  LOBYTE(perf) = 1;
  return (char)perf;
}


Il2CppObject *BattleMoviePlayer__StartMovie_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleMoviePlayer__StartMovie_d__36__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C940AC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C942E4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C940AC(&Method_BattleMoviePlayer__StartMovie_d__36_System_Collections_IEnumerator_Reset__);
  sub_1C941C0(v3, v4);
}


Il2CppObject *BattleMoviePlayer__StartMovie_d__36__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleMoviePlayer__StartMovie_d__36__System_IDisposable_Dispose(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleMoviePlayer___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2F474 & 1) == 0 )
  {
    sub_1C94098(&BattleMoviePlayer___c_TypeInfo);
    byte_4D2F474 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(BattleMoviePlayer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMoviePlayer___c_TypeInfo->static_fields->__9 = (struct BattleMoviePlayer___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)BattleMoviePlayer___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void BattleMoviePlayer___c___ctor(BattleMoviePlayer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool BattleMoviePlayer___c___Dispose_b__28_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___FadeoutDeleteMovie_b__39_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___PauseMovie_b__37_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___StartMovie_b__36_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C942F0(this, 0);
  return x->fields.cameraType == 1;
}