void __fastcall BattleMoviePlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleMoviePlayer_StaticFields *static_fields; // x8

  if ( (byte_4C2474F & 1) == 0 )
  {
    sub_1C3B764(&BattleMoviePlayer_TypeInfo, v1);
    byte_4C2474F = 1;
  }
  static_fields = BattleMoviePlayer_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BackMovieScale = xmmword_C0E490;
  *(_QWORD *)&static_fields->BasePanelPosition.fields.x = 0LL;
  static_fields->BasePanelPosition.fields.z = 10.0;
}


void __fastcall BattleMoviePlayer___ctor(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  System_Collections_Generic_List_object__o *v13; // x20
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  UnityEngine_Vector3_c *v21; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  _BOOL4 v24; // w9
  struct UnityEngine_Vector3_StaticFields *v25; // x10
  float v26; // s1
  struct UnityEngine_Vector3_StaticFields *v27; // x8
  float v28; // s1

  if ( (byte_4C2474E & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo, v4);
    sub_1C3B764(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4C2474E = 1;
  }
  this->fields.KeepStartPosition = 1;
  v6 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
  this->fields.MovieInfoList = (struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *)v6;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.MovieInfoList, (int64_t)v6, v7, v8, v9, v10, v11, v12);
  v13 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ObjList = (struct System_Collections_Generic_List_GameObject__o *)v13;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.ObjList, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  if ( !byte_4C1C511 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v20);
    byte_4C1C511 = 1;
  }
  v21 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.startPanelPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.startPanelPosition.fields.z = z;
  if ( byte_4C1C516 )
  {
    v24 = 0;
  }
  else
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v20);
    v21 = UnityEngine_Vector3_TypeInfo;
    byte_4C1C516 = 1;
    v24 = byte_4C1C511 == 0;
  }
  v25 = v21->static_fields;
  v26 = v25->oneVector.fields.z;
  *(_QWORD *)&this->fields.startPanelScale.fields.x = *(_QWORD *)&v25->oneVector.fields.x;
  this->fields.startPanelScale.fields.z = v26;
  if ( v24 )
  {
    sub_1C3B764(&UnityEngine_Vector3_TypeInfo, v20);
    v21 = UnityEngine_Vector3_TypeInfo;
    byte_4C1C511 = 1;
  }
  v27 = v21->static_fields;
  v28 = v27->zeroVector.fields.z;
  *(_QWORD *)&this->fields.cameraStartPosition.fields.x = *(_QWORD *)&v27->zeroVector.fields.x;
  this->fields.cameraStartPosition.fields.z = v28;
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
  struct BattlePerformance_o *v18; // x23
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  System_Collections_Generic_List_object__o *v25; // x8
  struct System_Object_array *v26; // x9
  _QWORD *v27; // x10
  __int64 v28; // x11
  BattleMoviePlayer_o *v29; // x21
  Il2CppClass **v30; // x0
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *moviePrefab; // x21
  UnityEngine_Transform_o *transform; // x23
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  System_Collections_Generic_List_object__o *ObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v42; // x10
  __int64 size; // x11
  Il2CppClass **v44; // x0
  int v45; // w8
  UnityEngine_Material_o **p_baseMat; // x23
  UnityEngine_Object_o *baseMat; // x24
  UnityEngine_Material_o *material; // x24
  UnityEngine_Material_o *v49; // x25
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  UnityEngine_Transform_o *v56; // x24
  float v57; // s8
  float y; // s9
  float v59; // s2
  UnityEngine_Transform_o *v60; // x22
  float v61; // s0
  float v62; // s1
  float v63; // s2
  UnityEngine_Transform_o *v64; // x22
  float x; // s8
  float v66; // s9
  float z; // s10
  float *v68; // x8
  UnityEngine_Material_o *v69; // x23
  UnityEngine_Material_o *v70; // x22
  const MethodInfo *v71; // x3
  Il2CppObject *v73; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C24742 & 1) == 0 )
  {
    sub_1C3B764(&BattleMoviePlayer_TypeInfo, movieInfo);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_BattlePerformance___, v7);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___, v8);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v9);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v10);
    sub_1C3B764(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_1C3B764(&UnityEngine_Material_TypeInfo, v13);
    sub_1C3B764(&Method_UnityEngine_Object_Instantiate_GameObject____77992824, v14);
    this = (BattleMoviePlayer_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v15);
    byte_4C24742 = 1;
  }
  component = 0LL;
  v73 = 0LL;
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
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__50818788(
                                    moviePrefab,
                                    transform,
                                    (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
    ObjList = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !ObjList )
      goto LABEL_63;
    items = ObjList->fields._items;
    v42 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++ObjList->fields._version;
    if ( !items )
      goto LABEL_63;
    size = ObjList->fields._size;
    v29 = this;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        ObjList,
        (Il2CppObject *)this,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
    }
    else
    {
      v44 = &items->obj.klass + size;
      ObjList->fields._size = size + 1;
      v44[4] = (Il2CppClass *)v29;
      sub_1C3B708((PartyOrganizationUtility_o *)(v44 + 4), (int64_t)v29, v34, v35, v36, v37, v38, v39);
    }
    if ( !v29 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v29,
           &v73,
           (const MethodInfo_3042CA8 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)v73;
      if ( !v73 )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v73, v6->fields.perf, 0, 0LL);
    }
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v29, 11, 0LL);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v29,
                                    (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v45 = 1;
  }
  else
  {
    if ( cameraType )
    {
      v29 = 0LL;
      goto LABEL_39;
    }
    this = (BattleMoviePlayer_o *)v6->fields.perf;
    if ( !this )
      goto LABEL_63;
    v17 = (Il2CppObject *)v6->fields.moviePrefab;
    this = (BattleMoviePlayer_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    if ( !this )
      goto LABEL_63;
    v18 = this[1].fields.perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__50818788(
                                    v17,
                                    (UnityEngine_Transform_o *)v18,
                                    (const MethodInfo_3076EE4 *)Method_UnityEngine_Object_Instantiate_GameObject____77992824);
    v25 = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !v25 )
      goto LABEL_63;
    v26 = v25->fields._items;
    v27 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v25->fields._version;
    if ( !v26 )
      goto LABEL_63;
    v28 = v25->fields._size;
    v29 = this;
    if ( (unsigned int)v28 >= v26->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v25,
        (Il2CppObject *)this,
        *(const MethodInfo_368BC6C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &v26->obj.klass + v28;
      v25->fields._size = v28 + 1;
      v30[4] = (Il2CppClass *)v29;
      sub_1C3B708((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v29, v19, v20, v21, v22, v23, v24);
    }
    if ( !v29 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v29,
           &component,
           (const MethodInfo_3042CA8 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)component;
      if ( !component )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)component, v6->fields.perf, 1, 0LL);
    }
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v29,
                                    (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v45 = 0;
  }
  LODWORD(this->fields.moviePrefab) = v45;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
LABEL_39:
  p_baseMat = &v6->fields.baseMat;
  baseMat = (UnityEngine_Object_o *)v6->fields.baseMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleMoviePlayer_o *)UnityEngine_Object__op_Equality(baseMat, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v29 )
      goto LABEL_63;
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v29,
                                    (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !this )
      goto LABEL_63;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
    v49 = (UnityEngine_Material_o *)sub_1C3B9B0(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_70986020(v49, material, 0LL);
    *p_baseMat = v49;
    sub_1C3B708((PartyOrganizationUtility_o *)&v6->fields.baseMat, (int64_t)v49, v50, v51, v52, v53, v54, v55);
  }
  else if ( !v29 )
  {
    goto LABEL_63;
  }
  v56 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
  if ( !this )
    goto LABEL_63;
  LODWORD(v57) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
  if ( !this )
    goto LABEL_63;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  y = position.fields.y;
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
  if ( !this )
    goto LABEL_63;
  *(UnityEngine_Vector3_o *)(&v59 - 2) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  if ( !v56 )
    goto LABEL_63;
  v76.fields.y = y;
  v76.fields.z = (float)((float)no * 0.1) + v59;
  v76.fields.x = v57;
  UnityEngine_Transform__set_position(v56, v76, 0LL);
  if ( movieInfo->fields.isBackMovie )
  {
    v60 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
    if ( this )
    {
      *(UnityEngine_Vector3_o *)&v61 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      if ( v60 )
      {
        v77.fields.z = v63 + 0.1;
        v77.fields.y = v62 + 0.0;
        v77.fields.x = v61 + 0.0;
        UnityEngine_Transform__set_position(v60, v77, 0LL);
        this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
        if ( this )
        {
          v64 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v29, 0LL);
          if ( this )
          {
            localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
            this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            x = localScale.fields.x;
            v66 = localScale.fields.y;
            z = localScale.fields.z;
            if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
              this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            }
            if ( v64 )
            {
              v68 = *(float **)&this[1].fields.m_CachedPtr;
              v79.fields.z = z * *v68;
              v79.fields.y = v66 * *v68;
              v79.fields.x = x * *v68;
              UnityEngine_Transform__set_localScale(v64, v79, 0LL);
              goto LABEL_59;
            }
          }
        }
      }
    }
LABEL_63:
    sub_1C3B9C0(this, movieInfo);
  }
LABEL_59:
  v69 = *p_baseMat;
  v70 = (UnityEngine_Material_o *)sub_1C3B9B0(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_70986020(v70, v69, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v29,
                                  (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v70, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v29,
                                  (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
  if ( !this )
    goto LABEL_63;
  CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v70, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v29, 1, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v29,
                                  (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
  BattleMoviePlayer__InitMovie(v6, (UnityEngine_GameObject_o *)v29, no, v71);
  return (UnityEngine_GameObject_o *)v29;
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
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  struct System_Object_array *items; // x8
  _QWORD *v55; // x9
  __int64 size; // x10
  Il2CppClass **v57; // x0
  const MethodInfo *v58; // [xsp+0h] [xbp-F0h]
  System_Collections_Generic_List_UnityEvent__o *v59; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_float__o *v60; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_List_int__o *v61; // [xsp+20h] [xbp-D0h]
  BattleMoviePlayer_o *v64; // [xsp+38h] [xbp-B8h]
  int32_t cama; // [xsp+44h] [xbp-ACh]
  UnityEngine_Events_UnityEvent_o *eff; // [xsp+48h] [xbp-A8h]
  System_String_o *patha; // [xsp+58h] [xbp-98h]

  v64 = this;
  if ( (byte_4C2474D & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__, type);
    sub_1C3B764(&Method_System_Collections_Generic_List_float__get_Count__, v21);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Count__, v22);
    sub_1C3B764(&Method_System_Collections_Generic_List_UnityEvent__get_Count__, v23);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Count__, v24);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Count__, v25);
    sub_1C3B764(&Method_System_Collections_Generic_List_string__get_Item__, v26);
    sub_1C3B764(&Method_System_Collections_Generic_List_UnityEvent__get_Item__, v27);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__, v28);
    sub_1C3B764(&Method_System_Collections_Generic_List_int__get_Item__, v29);
    sub_1C3B764(&Method_System_Collections_Generic_List_float__get_Item__, v30);
    sub_1C3B764(&BattleMoviePlayer_MovieInfo_TypeInfo, v31);
    this = (BattleMoviePlayer_o *)sub_1C3B764(&StringLiteral_1/*""*/, v32);
    byte_4C2474D = 1;
  }
  v64->fields.KeepStartPosition = keepStartPosition;
  v64->fields.OverrideZDepth = overrideZDepth;
  v64->fields.IgnoreTimeScale = ignoreTS;
  v64->fields.Loop = loop;
  v64->fields.IsBackMovie = isBackMovie;
  if ( !path )
LABEL_47:
    sub_1C3B9C0(this, type);
  v33 = valid;
  if ( path->fields._size >= 1 )
  {
    v34 = effRest;
    v35 = 0;
    v60 = speed;
    v61 = cam;
    v59 = effect;
    do
    {
      this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)path,
                                      v35,
                                      (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
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
                                              (const MethodInfo_3671184 *)Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
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
                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_string__get_Item__);
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
                        (const MethodInfo_36AC0F0 *)Method_System_Collections_Generic_List_float__get_Item__),
                      0.0);
            if ( v35 < fadeout->fields._size )
              v37 = fmaxf(
                      System_Collections_Generic_List_float___get_Item(
                        fadeout,
                        v35,
                        (const MethodInfo_36AC0F0 *)Method_System_Collections_Generic_List_float__get_Item__),
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
                                              (const MethodInfo_366E958 *)Method_System_Collections_Generic_List_int__get_Item__);
              v39 = (int)this;
            }
            if ( !speed )
              goto LABEL_47;
            Item = 1.0;
            if ( v35 < speed->fields._size )
              Item = System_Collections_Generic_List_float___get_Item(
                       speed,
                       v35,
                       (const MethodInfo_36AC0F0 *)Method_System_Collections_Generic_List_float__get_Item__);
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
                                              (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_UnityEvent__get_Item__);
              eff = (UnityEngine_Events_UnityEvent_o *)this;
            }
            if ( !v34 )
              goto LABEL_47;
            v41 = 0.0;
            if ( v35 < v34->fields._size )
              v41 = System_Collections_Generic_List_float___get_Item(
                      v34,
                      v35,
                      (const MethodInfo_36AC0F0 *)Method_System_Collections_Generic_List_float__get_Item__);
            if ( !fadein )
              goto LABEL_47;
            v42 = 0.0;
            cama = v39;
            if ( v35 < fadein->fields._size )
              v42 = System_Collections_Generic_List_float___get_Item(
                      fadein,
                      v35,
                      (const MethodInfo_36AC0F0 *)Method_System_Collections_Generic_List_float__get_Item__);
            MovieInfoList = (System_Collections_Generic_List_object__o *)v64->fields.MovieInfoList;
            IgnoreTimeScale = v64->fields.IgnoreTimeScale;
            v45 = v64->fields.Loop;
            v46 = v64->fields.IsBackMovie;
            v47 = (BattleMoviePlayer_MovieInfo_o *)sub_1C3B9B0(BattleMoviePlayer_MovieInfo_TypeInfo);
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
              v58);
            if ( !MovieInfoList )
              goto LABEL_47;
            items = MovieInfoList->fields._items;
            v55 = Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__;
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
                *(const MethodInfo_368BC6C **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
            }
            else
            {
              v57 = &items->obj.klass + size;
              MovieInfoList->fields._size = size + 1;
              v57[4] = (Il2CppClass *)v47;
              sub_1C3B708((PartyOrganizationUtility_o *)(v57 + 4), (int64_t)v47, v48, v49, v50, v51, v52, v53);
            }
            effect = v59;
            speed = v60;
            cam = v61;
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  const MethodInfo *v27; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v28; // x8
  int32_t size; // w2
  int v30; // w9
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v32; // x8
  int32_t v33; // w2
  int v34; // w9
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4C24741 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1C3B764(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1C3B764(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v6);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Clear__, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    sub_1C3B764(&Method_BattleMoviePlayer___c__Dispose_b__27_0__, v11);
    sub_1C3B764(&BattleMoviePlayer___c_TypeInfo, v12);
    byte_4C24741 = 1;
  }
  memset(&v37, 0, sizeof(v37));
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
      _9__27_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__27_0, v19, Method_BattleMoviePlayer___c__Dispose_b__27_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__27_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__27_0,
        (int64_t)_9__27_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    ObjList = (struct System_Collections_Generic_List_GameObject__o *)BasicHelper__Any_object_(
                                                                        MovieInfoList,
                                                                        (System_Func_T__bool__o *)_9__27_0,
                                                                        (const MethodInfo_2FDAB74 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    if ( ((unsigned __int8)ObjList & 1) != 0 )
      BattleMoviePlayer__ShowBg(this, 1, v27);
  }
  v28 = this->fields.MovieInfoList;
  if ( !v28 )
    goto LABEL_32;
  size = v28->fields._size;
  v30 = v28->fields._version + 1;
  v28->fields._size = 0;
  v28->fields._version = v30;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v28->fields._items, 0, size, 0LL);
  ObjList = this->fields.ObjList;
  if ( !ObjList )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v36,
    (System_Collections_Generic_List_object__o *)ObjList,
    (const MethodInfo_368C764 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v37 = v36;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v37,
            (const MethodInfo_34203C4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v37.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71122748((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v37,
    (const MethodInfo_34203C0 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v32 = this->fields.ObjList;
  if ( !v32 )
LABEL_32:
    sub_1C3B9C0(ObjList, v15);
  v33 = v32->fields._size;
  v34 = v32->fields._version + 1;
  v32->fields._size = 0;
  v32->fields._version = v34;
  if ( v33 >= 1 )
    System_Array__Clear((System_Array_o *)v32->fields._items, 0, v33, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71122748(gameObject, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__FadeoutDeleteMovie(
        BattleMoviePlayer_o *this,
        System_Action_o *FadeOuted,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C24748 & 1) == 0 )
  {
    sub_1C3B764(&BattleMoviePlayer__FadeoutDeleteMovie_d__38_TypeInfo, FadeOuted);
    byte_4C24748 = 1;
  }
  v5 = sub_1C3B9B0(BattleMoviePlayer__FadeoutDeleteMovie_d__38_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = FadeOuted;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)FadeOuted, v12, v13, v14, v15, v16, v17);
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
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4C24744 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, *(_QWORD *)&i);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v5);
    byte_4C24744 = 1;
  }
  MovieInfoList = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
  if ( !MovieInfoList )
    sub_1C3B9C0(0LL, *(_QWORD *)&i);
  if ( MovieInfoList->fields._size > i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             MovieInfoList,
             i,
             (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(this, (BattleMoviePlayer_MovieInfo_o *)Item, i, v8);
    this->fields.nextMovieObj = BattleMoviePanel;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.nextMovieObj,
      (int64_t)BattleMoviePanel,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__GetMoviePanelFirst(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4C24743 & 1) == 0 )
  {
    sub_1C3B764(&BattleMoviePlayer__GetMoviePanelFirst_d__30_TypeInfo, performance);
    byte_4C24743 = 1;
  }
  v5 = sub_1C3B9B0(BattleMoviePlayer__GetMoviePanelFirst_d__30_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = performance;
  sub_1C3B708((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)performance, v12, v13, v14, v15, v16, v17);
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

  if ( (byte_4C2474C & 1) == 0 )
  {
    sub_1C3B764(&UnityEngine_Application_TypeInfo, obj);
    sub_1C3B764(&AssetManager_TypeInfo, v7);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v8);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v9);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v10);
    sub_1C3B764(&StringLiteral_1100/*"/Screenshot_"*/, v11);
    sub_1C3B764(&StringLiteral_1146/*"000"*/, v12);
    sub_1C3B764(&StringLiteral_1141/*"0.0.0.0"*/, v13);
    byte_4C2474C = 1;
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
                      (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v16 = (System_String_o *)*((_QWORD *)MovieInfoList + 3);
    if ( !v16 )
      goto LABEL_41;
    if ( !System_String__EndsWith(*((System_String_o **)MovieInfoList + 3), (System_String_o *)StringLiteral_1100/*"/Screenshot_"*/, 0LL) )
      v16 = System_String__Concat_63368612(v16, (System_String_o *)StringLiteral_1100/*"/Screenshot_"*/, 0LL);
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
                      (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
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
                        (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v22 = &StringLiteral_1141/*"0.0.0.0"*/;
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
                        (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v22 = &StringLiteral_1146/*"000"*/;
    }
    MovieInfoList = System_String__Concat_63379872(
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
                                                   (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
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
    sub_1C3B9C0(MovieInfoList, v14);
  }
}


void __fastcall BattleMoviePlayer__Initialize(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *MoviePanelFirst; // x1

  MoviePanelFirst = BattleMoviePlayer__GetMoviePanelFirst(this, perf, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)this, MoviePanelFirst, 0LL);
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
  if ( (byte_4C24749 & 1) == 0 )
  {
    sub_1C3B764(&BattleMoviePlayer_TypeInfo, method);
    this = (BattleMoviePlayer_o *)sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C24749 = 1;
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
    sub_1C3B9C0(this, method);
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

  if ( (byte_4C24747 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, method);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v3);
    byte_4C24747 = 1;
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
                                                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___)) == 0LL
    || (Component_object = (UnityEngine_GameObject_o *)Component_object[2].monitor) == 0LL )
  {
    sub_1C3B9C0(Component_object, v5);
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  const MethodInfo *v26; // x2

  if ( (byte_4C24746 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, v);
    sub_1C3B764(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v5);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v6);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v7);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v8);
    sub_1C3B764(&Method_BattleMoviePlayer___c__PauseMovie_b__36_0__, v9);
    sub_1C3B764(&BattleMoviePlayer___c_TypeInfo, v10);
    byte_4C24746 = 1;
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
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
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
      _9__36_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__36_0, v18, Method_BattleMoviePlayer___c__PauseMovie_b__36_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__36_0;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
        (int64_t)_9__36_0,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25);
    }
    if ( BasicHelper__Any_object_(
           MovieInfoList,
           (System_Func_T__bool__o *)_9__36_0,
           (const MethodInfo_2FDAB74 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
    {
      BattleMoviePlayer__ShowBg(this, v, v26);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v14,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !Component_object )
LABEL_19:
      sub_1C3B9C0(Component_object, v13);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7

  if ( (byte_4C2474A & 1) == 0 )
  {
    sub_1C3B764(&BattleMoviePlayer__PlayMovie_d__44_TypeInfo, movieObj);
    byte_4C2474A = 1;
  }
  v7 = sub_1C3B9B0(BattleMoviePlayer__PlayMovie_d__44_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = movieObj;
  sub_1C3B708((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)movieObj, v14, v15, v16, v17, v18, v19);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4C2474B & 1) == 0 )
  {
    sub_1C3B764(&BattleMoviePlayer__PlayMovieFadeOut_d__45_TypeInfo, movieObj);
    byte_4C2474B = 1;
  }
  v9 = forceFadeout;
  v10 = sub_1C3B9B0(BattleMoviePlayer__PlayMovieFadeOut_d__45_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  *(_DWORD *)(v10 + 16) = 0;
  *(_QWORD *)(v10 + 40) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 40), (int64_t)this, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v10 + 32) = movieObj;
  sub_1C3B708((PartyOrganizationUtility_o *)(v10 + 32), (int64_t)movieObj, v17, v18, v19, v20, v21, v22);
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
    sub_1C3B9C0(this, v);
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
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4C24745 & 1) == 0 )
  {
    sub_1C3B764(&BattleMoviePlayer__StartMovie_d__35_TypeInfo, method);
    byte_4C24745 = 1;
  }
  v3 = sub_1C3B9B0(BattleMoviePlayer__StartMovie_d__35_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C3B708((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
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
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  v24 = ignoreTmScl;
  v25 = lp;
  v26 = backMovie;
  this->fields.playSpeed = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.pathType = type;
  this->fields.moviePath = path;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.moviePath, (int64_t)path, v27, v28, v29, v30, v31, v32);
  this->fields.effectEvent = eff;
  this->fields.validTime = valid;
  this->fields.fadeRestTime = fade;
  this->fields.cameraType = cam;
  this->fields.playSpeed = speed;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.effectEvent, (int64_t)eff, v33, v34, v35, v36, v37, v38);
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
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x2
  UnityEngine_Coroutine_o *started; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  BattlePerformance_o *perf; // x0
  struct System_Action_o *FadeOuted; // x8

  v2 = this;
  if ( (byte_4C24751 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1C3B764(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v3);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v4);
    sub_1C3B764(&Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__38_0__, v5);
    this = (BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *)sub_1C3B764(&BattleMoviePlayer___c_TypeInfo, v6);
    byte_4C24751 = 1;
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
          _9__38_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__38_0,
            v16,
            Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__38_0__,
            0LL);
          static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
          static_fields->__9__38_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__38_0;
          sub_1C3B708(
            (PartyOrganizationUtility_o *)&static_fields->__9__38_0,
            (int64_t)_9__38_0,
            v18,
            v19,
            v20,
            v21,
            v22,
            v23);
        }
        if ( BasicHelper__Any_object_(
               MovieInfoList,
               (System_Func_T__bool__o *)_9__38_0,
               (const MethodInfo_2FDAB74 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
        {
          BattleMoviePlayer__ShowBg(_4__this, 1, v24);
        }
        started = UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)_4__this, v13, 0LL);
        v2->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C3B708(p__2__current, (int64_t)started, v27, v28, v29, v30, v31, v32);
        LOBYTE(perf) = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return (char)perf;
      }
LABEL_23:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
LABEL_25:
    sub_1C3B9C0(this, method);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleMoviePlayer__FadeoutDeleteMovie_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  UnityEngine_Object_o **p_perf; // x20
  UnityEngine_Object_o *perf; // x22
  UnityEngine_Object_o *performance; // x22
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  UnityEngine_Object_o *v18; // x21
  Il2CppObject *Component_object; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  UnityEngine_Object_o *v26; // x20
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x3
  UnityEngine_GameObject_o *v29; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *Item; // x0
  const MethodInfo *v37; // x3
  UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7

  v2 = this;
  if ( (byte_4C24752 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___, method);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v3);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v4);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v5);
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)sub_1C3B764(&StringLiteral_10819/*"RESERVE_BATTKE_SAVEKEY"*/, v6);
    byte_4C24752 = 1;
  }
  if ( !v2->fields.__1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    p_perf = (UnityEngine_Object_o **)&_4__this->fields.perf;
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
      v17 = (int64_t)v2->fields.performance;
      *p_perf = (UnityEngine_Object_o *)v17;
      sub_1C3B708((PartyOrganizationUtility_o *)&_4__this->fields.perf, v17, v11, v12, v13, v14, v15, v16);
    }
    v18 = *p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
      goto LABEL_19;
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)UnityEngine_GameObject__Find(
                                                              (System_String_o *)StringLiteral_10819/*"RESERVE_BATTKE_SAVEKEY"*/,
                                                              0LL);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    *p_perf = (UnityEngine_Object_o *)Component_object;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&_4__this->fields.perf,
      (int64_t)Component_object,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v26 = *p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v26, 0LL, 0LL) )
    {
LABEL_19:
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)_4__this->fields.MovieInfoList;
      if ( this )
      {
        if ( SLODWORD(this->fields.__2__current) < 1
          || (v27 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__),
              v29 = BattleMoviePlayer__CreateBattleMoviePanel(_4__this, (BattleMoviePlayer_MovieInfo_o *)v27, 0, v28),
              _4__this->fields.currMovieObj = v29,
              sub_1C3B708(
                (PartyOrganizationUtility_o *)&_4__this->fields.currMovieObj,
                (int64_t)v29,
                v30,
                v31,
                v32,
                v33,
                v34,
                v35),
              (this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)_4__this->fields.MovieInfoList) != 0LL) )
        {
          if ( SLODWORD(this->fields.__2__current) > 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     1,
                     (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
            BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(
                                 _4__this,
                                 (BattleMoviePlayer_MovieInfo_o *)Item,
                                 1,
                                 v37);
            _4__this->fields.nextMovieObj = BattleMoviePanel;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&_4__this->fields.nextMovieObj,
              (int64_t)BattleMoviePanel,
              v39,
              v40,
              v41,
              v42,
              v43,
              v44);
          }
          return 0;
        }
      }
LABEL_25:
      sub_1C3B9C0(this, method);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleMoviePlayer__GetMoviePanelFirst_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *movieObj; // x21
  struct CriManaMovieController_o *v20; // x8
  UnityEngine_Material_o *material; // x0
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o **p_movieMaterial_5__2; // x21
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct BattleMoviePlayer_MovieInfo_o *v37; // x8
  float validTime; // s8
  struct CriManaMovieController_o *v39; // x8
  float effectRestTime; // s0
  struct CriManaMovieController_o *v41; // x8
  _BOOL4 forceFadeout; // w8
  struct BattleMoviePlayer_MovieInfo_o *v43; // x8
  struct CriManaMovieController_o *currController; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  int32_t num; // w8
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x9
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__3; // x8
  float v49; // s0
  float v50; // s1
  bool v51; // nf
  float v52; // s0
  struct BattleMoviePlayer_MovieInfo_o *v53; // x8
  float restTime_5__6; // s8
  float timeScale; // s0
  float *monitor; // x9
  struct BattlePerformance_o *perf; // x8
  float v58; // w10
  __int64 v59; // x9
  struct BattlePerformance_o *v60; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v64; // x1
  char v65; // w22
  float v66; // s11
  float v67; // s12
  float v68; // s13
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o *v69; // x21
  float v70; // s0
  int32_t v71; // w2
  float *v72; // x9
  float v73; // s8
  float v74; // s9
  float v75; // s10
  float v76; // s0
  BattleMoviePlayer_c *v77; // x8
  struct BattlePerformance_o *v78; // x8
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o *v79; // x21
  int v80; // s0
  float v82; // s2
  float v83; // s4
  float v84; // s2
  float v85; // s8
  float v86; // s9
  float v87; // s10
  const MethodInfo *v88; // x1
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v90; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v92; // s0
  float v93; // s1
  float v94; // s2
  float v95; // s11
  float v96; // s12
  float v97; // s13
  float v98; // s0
  float v99; // s0
  float v100; // s2
  float v101; // s1
  float v102; // s0
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o **p_movInfo_5__3; // x21
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  UnityEngine_Object_o *v118; // x19
  float v119; // s0
  float v120; // s1
  float v121; // s2
  float v122; // s11
  float v123; // s12
  float v124; // s13
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v130; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v131; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v132; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v133; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4C24754 & 1) == 0 )
  {
    sub_1C3B764(&BattleMoviePlayer_TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_GameObject__Remove__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v12);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_16730/*"baseUtcOffset"*/, v14);
    sub_1C3B764(&StringLiteral_16729/*"baseUserSvtId"*/, v15);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)sub_1C3B764(&StringLiteral_16696/*"badEndId"*/, v16);
    byte_4C24754 = 1;
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
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)CriMana_Player__GetDisplayedFrameNo(
                                                            player_k__BackingField,
                                                            0LL);
    if ( v8->fields._effectTime_5__4 <= (float)(int)this )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v8->fields._movInfo_5__3;
      if ( !this )
        goto LABEL_121;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v8->fields._movInfo_5__3;
        if ( !this )
          goto LABEL_121;
      }
      *(_QWORD *)&this->fields.num = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.num, 0LL, v2, v3, v4, v5, v6, v7);
    }
    num = v8->fields.num;
    if ( (num & 0x80000000) != 0 )
      goto LABEL_61;
    MovieInfoList = _4__this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_121;
    if ( num >= MovieInfoList->fields._size )
    {
LABEL_61:
      v8->fields._pastError_5__5 = 1;
LABEL_105:
      p_movInfo_5__3 = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o **)&v8->fields._movInfo_5__3;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v8->fields._movInfo_5__3;
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
      sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.num, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !v8->fields._pastError_5__5 )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v8->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16729/*"baseUserSvtId"*/, 4, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v8->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16696/*"badEndId"*/, 1.0, 0LL);
      }
      v8->fields._movieMaterial_5__2 = 0LL;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v8->fields._movieMaterial_5__2,
        0LL,
        v106,
        v107,
        v108,
        v109,
        v110,
        v111);
      v8->fields._movInfo_5__3 = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields._movInfo_5__3, 0LL, v112, v113, v114, v115, v116, v117);
      goto LABEL_113;
    }
    movInfo_5__3 = v8->fields._movInfo_5__3;
    if ( !movInfo_5__3 )
      goto LABEL_121;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v8->fields._movieMaterial_5__2;
    if ( !this )
      goto LABEL_121;
    v49 = 1.0 - (float)(v8->fields._restTime_5__6 / movInfo_5__3->fields.fadeRestTime);
    v50 = fminf(v49, 1.0);
    v51 = v49 < 0.0;
    v52 = 0.0;
    if ( !v51 )
      v52 = v50;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16696/*"badEndId"*/, v52, 0LL);
    v53 = v8->fields._movInfo_5__3;
    if ( !v53 )
      goto LABEL_121;
    restTime_5__6 = v8->fields._restTime_5__6;
    timeScale = 1.0;
    if ( !v53->fields.ignoreTimeScale )
    {
      timeScale = UnityEngine_Time__get_timeScale(0LL);
      v53 = v8->fields._movInfo_5__3;
      if ( !v53 )
        goto LABEL_121;
    }
    v8->fields._restTime_5__6 = restTime_5__6 - (float)(timeScale * v53->fields.playSpeed);
    if ( _4__this->fields.KeepStartPosition )
    {
      if ( v53->fields._UsePlayMakerShakeParam_k__BackingField )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        }
        monitor = (float *)this[2].monitor;
        perf = _4__this->fields.perf;
        v58 = monitor[6];
        v59 = *((_QWORD *)monitor + 2);
        _4__this->fields.startPanelPosition.fields.z = v58;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v59;
        if ( !perf )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v60 = _4__this->fields.perf;
        if ( !v60 )
          goto LABEL_121;
        if ( !this )
          goto LABEL_121;
        v125 = UnityEngine_Transform__InverseTransformVector(
                 (UnityEngine_Transform_o *)this,
                 v60->fields._CurrentShakeWidth_k__BackingField,
                 0LL);
        x = v125.fields.x;
        y = v125.fields.y;
        z = v125.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer__IsBossCamera(_4__this, v64);
        if ( !_4__this->fields.currController )
          goto LABEL_121;
        v65 = (char)this;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)_4__this->fields.currController,
                                                                0LL);
        v66 = _4__this->fields.startPanelPosition.fields.x;
        v67 = _4__this->fields.startPanelPosition.fields.y;
        v68 = _4__this->fields.startPanelPosition.fields.z;
        v69 = this;
        if ( (v65 & 1) == 0 )
        {
          if ( !this )
            goto LABEL_121;
          v132.fields.z = z + v68;
          v132.fields.y = y + v67;
          v132.fields.x = x + v66;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v132, 0LL);
          goto LABEL_103;
        }
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !v69 )
          goto LABEL_121;
        v70 = *((float *)this[2].monitor + 3) / *((float *)this[2].monitor + 2);
        v126.fields.z = (float)(v68 * v70) + (float)(z * v70);
        v126.fields.y = (float)(v67 * v70) + (float)(y * v70);
        v126.fields.x = (float)(v66 * v70) + (float)(x * v70);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v69, v126, 0LL);
      }
      else
      {
        v78 = _4__this->fields.perf;
        if ( !v78 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v78->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v79 = this;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
        position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
        position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
        *(UnityEngine_Vector3_o *)&v80 = UnityEngine_Transform__InverseTransformVector(
                                           (UnityEngine_Transform_o *)v79,
                                           position,
                                           0LL);
        v83 = fminf(v82, 1.0);
        if ( v82 < -0.3 )
          v84 = -0.3;
        else
          v84 = v83;
        v129 = UnityEngine_Transform__TransformDirection(
                 (UnityEngine_Transform_o *)v79,
                 *(UnityEngine_Vector3_o *)&v80,
                 0LL);
        v85 = v129.fields.x;
        v86 = v129.fields.y;
        v87 = v129.fields.z;
        IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, v88);
        v90 = BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          v90 = BattleMoviePlayer_TypeInfo;
        }
        static_fields = v90->static_fields;
        if ( !IsBossCamera )
        {
          *(UnityEngine_Vector3_o *)&v119 = UnityEngine_Transform__TransformPoint(
                                              (UnityEngine_Transform_o *)v79,
                                              static_fields->BasePanelPosition,
                                              0LL);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_121;
          v122 = v119;
          v123 = v120;
          v124 = v121;
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !this )
            goto LABEL_121;
          v133.fields.z = v124 - v87;
          v133.fields.y = v123 - v86;
          v133.fields.x = v122 - v85;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v133, 0LL);
          goto LABEL_103;
        }
        v130.fields.z = static_fields->BossPanelDist;
        v130.fields.x = 0.0;
        v130.fields.y = 0.0;
        *(UnityEngine_Vector3_o *)&v92 = UnityEngine_Transform__TransformPoint(
                                           (UnityEngine_Transform_o *)v79,
                                           v130,
                                           0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        v95 = v92;
        v96 = v93;
        v97 = v94;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v98 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v131.fields.z = v97 - (float)(v87 * v98);
        v131.fields.y = v96 - (float)(v86 * v98);
        v131.fields.x = v95 - (float)(v85 * v98);
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v131, 0LL);
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v77 = BattleMoviePlayer_TypeInfo;
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
        v101 = _4__this->fields.startPanelScale.fields.y;
        v100 = _4__this->fields.startPanelScale.fields.z;
        v102 = _4__this->fields.startPanelScale.fields.x;
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
      v72 = (float *)this[2].monitor;
      v74 = v72[5];
      v73 = v72[6];
      v75 = v72[4];
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this->fields.currController,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v76 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
          / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
      v127.fields.z = v73 * v76;
      v127.fields.y = v74 * v76;
      v127.fields.x = v75 * v76;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v127, 0LL);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v77 = BattleMoviePlayer_TypeInfo;
    }
    v99 = v77->static_fields->BossPanelDist / v77->static_fields->BaseDist;
    v100 = v99 * _4__this->fields.startPanelScale.fields.z;
    v101 = v99 * _4__this->fields.startPanelScale.fields.y;
    v102 = v99 * _4__this->fields.startPanelScale.fields.x;
LABEL_102:
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v102, 0LL);
LABEL_103:
    if ( v8->fields._restTime_5__6 > 0.0 )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C3B708(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
          (Il2CppObject *)v8->fields.movieObj,
          (const MethodInfo_368D194 *)Method_System_Collections_Generic_List_GameObject__Remove__);
        v118 = (UnityEngine_Object_o *)v8->fields.movieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71122748(v118, 0LL);
        return 0;
      }
      goto LABEL_121;
    }
    if ( !_4__this )
      goto LABEL_121;
    v20 = _4__this->fields.currController;
    if ( !v20 )
      goto LABEL_121;
    if ( v20->fields._player_k__BackingField )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v8->fields.movieObj;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_121;
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      v8->fields._movieMaterial_5__2 = material;
      p_movieMaterial_5__2 = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o **)&v8->fields._movieMaterial_5__2;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&v8->fields._movieMaterial_5__2,
        (int64_t)material,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_121;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v8->fields.num,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v8->fields._movInfo_5__3 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      v30 = &v8->fields._movInfo_5__3;
      sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields._movInfo_5__3, (int64_t)Item, v31, v32, v33, v34, v35, v36);
      v37 = v8->fields._movInfo_5__3;
      if ( !v37 )
        goto LABEL_121;
      validTime = v37->fields.validTime;
      if ( validTime <= 0.0 )
      {
        v39 = _4__this->fields.currController;
        if ( !v39 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v39->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)CriMana_Player__get_movieInfo(
                                                                (CriMana_Player_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v37 = *v30;
        if ( !*v30 )
          goto LABEL_121;
        validTime = (float)(unsigned int)this->fields.num;
      }
      effectRestTime = v37->fields.effectRestTime;
      v8->fields._pastError_5__5 = 0;
      v8->fields._effectTime_5__4 = fmaxf(validTime - effectRestTime, 0.0);
      v41 = _4__this->fields.currController;
      if ( !v41 )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v41->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)CriMana_Player__GetDisplayedFrameNo(
                                                              (CriMana_Player_o *)this,
                                                              0LL);
      forceFadeout = v8->fields.forceFadeout;
      v8->fields._restTime_5__6 = validTime - (float)(int)this;
      if ( !forceFadeout )
      {
        v43 = *v30;
        if ( !*v30 )
          goto LABEL_121;
        goto LABEL_63;
      }
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v43 = *v30;
        if ( !*v30 )
          goto LABEL_121;
        v8->fields._restTime_5__6 = v43->fields.fadeRestTime;
        _4__this->fields._ForceFadeout_k__BackingField = 1;
LABEL_63:
        if ( v43->fields.isBackMovie )
        {
          this = *p_movieMaterial_5__2;
          if ( !*p_movieMaterial_5__2 )
            goto LABEL_121;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16730/*"baseUtcOffset"*/, 0, 0LL);
        }
        this = *p_movieMaterial_5__2;
        if ( !*p_movieMaterial_5__2 )
LABEL_121:
          sub_1C3B9C0(this, method);
        if ( _4__this->fields.OverrideZDepth )
          v71 = 8;
        else
          v71 = 4;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16729/*"baseUserSvtId"*/, v71, 0LL);
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleMoviePlayer__PlayMovieFadeOut_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleMoviePlayer__PlayMovie_d__44_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct CriManaMovieController_o **p_currController; // x21
  UnityEngine_Object_o *v26; // x22
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **p_movInfo_5__2; // x22
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  struct BattleMoviePlayer_MovieInfo_o *v35; // x8
  CriMana_Player_o *player_k__BackingField; // x23
  float v37; // s0
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7
  struct BattleMoviePlayer_MovieInfo_o *v44; // x8
  PartyOrganizationUtility_o *v45; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovie_d__44_o *v47; // x22
  BattleMoviePlayer__PlayMovie_d__44_o *v48; // x21
  BattleMoviePlayer__PlayMovie_d__44_o *v49; // x22
  float v50; // s0
  int32_t v51; // w2
  float fadeinTime_5__5; // s0
  struct CriManaMovieController_o *v53; // x8
  struct BattleMoviePlayer_MovieInfo_o *v54; // x8
  float skipFrame_5__4; // s8
  float timeScale; // s0
  struct CriManaMovieController_o *v57; // x9
  struct BattleMoviePlayer_MovieInfo_o *v58; // x8
  BattleMoviePlayer__PlayMovie_d__44_o *v59; // x21
  float *v60; // x8
  float v61; // s0
  struct CriManaMovieController_o *v62; // x8
  struct CriManaMovieController_o *v63; // x8
  unsigned int num; // w9
  _BOOL4 KeepStartPosition; // w8
  struct BattlePerformance_o *v66; // x8
  const MethodInfo *v67; // x2
  struct BattleMoviePlayer_MovieInfo_o *v68; // x8
  BattleMoviePlayer__PlayMovie_d__44_o *v69; // x21
  int32_t v70; // w2
  struct BattleMoviePlayer_MovieInfo_o *v71; // x8
  struct CriManaMovieController_o *v72; // x8
  struct BattleMoviePlayer_MovieInfo_o *v73; // x8
  float v74; // s0
  PartyOrganizationUtility_o *p__2__current; // x19
  const MethodInfo *v76; // x2
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  struct BattleMoviePlayer_MovieInfo_o *v78; // x8
  struct CriManaMovieController_o *currController; // x8
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  float effectTime_5__7; // s0
  struct BattlePerformance_o *perf; // x8
  struct BattleMoviePlayer_MovieInfo_o *v88; // x9
  float *v89; // x9
  float v90; // s8
  float v91; // s9
  float v92; // s10
  float v93; // s0
  BattleMoviePlayer_c *v94; // x8
  __int64 v95; // x9
  float v96; // w10
  __int64 v97; // x9
  struct BattlePerformance_o *v98; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  const MethodInfo *v102; // x1
  char v103; // w22
  float v104; // s11
  float v105; // s12
  float v106; // s13
  BattleMoviePlayer__PlayMovie_d__44_o *v107; // x21
  float v108; // s0
  BattleMoviePlayer__PlayMovie_d__44_o *v109; // x21
  int v110; // s0
  float v112; // s2
  float v113; // s4
  float v114; // s2
  float v115; // s8
  float v116; // s9
  float v117; // s10
  const MethodInfo *v118; // x1
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v120; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v122; // s0
  float v123; // s1
  float v124; // s2
  float v125; // s11
  float v126; // s12
  float v127; // s13
  float v128; // s0
  float v129; // s0
  float v130; // s2
  float v131; // s1
  float v132; // s0
  float v133; // s0
  float v134; // s1
  float v135; // s2
  float v136; // s11
  float v137; // s12
  float v138; // s13
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v148; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v149; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4C24753 & 1) == 0 )
  {
    sub_1C3B764(&BattleMoviePlayer_TypeInfo, method);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v9);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v10);
    sub_1C3B764(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v12);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_16730/*"baseUtcOffset"*/, v14);
    sub_1C3B764(&StringLiteral_16729/*"baseUserSvtId"*/, v15);
    this = (BattleMoviePlayer__PlayMovie_d__44_o *)sub_1C3B764(&StringLiteral_16696/*"badEndId"*/, v16);
    byte_4C24753 = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  switch ( _1__state )
  {
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_181;
      if ( !this->fields._movInfo_5__2 )
      {
LABEL_109:
        v8->fields._movInfo_5__2 = 0LL;
        sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields._movInfo_5__2, 0LL, v2, v3, v4, v5, v6, v7);
        return 0;
      }
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_181;
      v47 = this;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                       (UnityEngine_Renderer_o *)this,
                                                       0LL);
      v48 = this;
      if ( v8->fields._fadeinTime_5__5 > 0.0 )
      {
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v47, 1, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                         (UnityEngine_Renderer_o *)v47,
                                                         0LL);
        if ( !_4__this->fields.baseMat )
          goto LABEL_181;
        v49 = this;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Material__get_renderQueue(
                                                         _4__this->fields.baseMat,
                                                         0LL);
        if ( !v49 )
          goto LABEL_181;
        UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v49, (int32_t)this, 0LL);
        v50 = (float)v8->fields._currentFrame_5__3 / v8->fields._fadeinTime_5__5;
        if ( v50 >= 1.0 )
        {
          if ( !v48 )
            goto LABEL_181;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v48, (System_String_o *)StringLiteral_16729/*"baseUserSvtId"*/, 4, 0LL);
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v48,
            (System_String_o *)StringLiteral_16696/*"badEndId"*/,
            0.0,
            0LL);
          movInfo_5__2 = v8->fields._movInfo_5__2;
          if ( !movInfo_5__2 )
            goto LABEL_181;
          if ( movInfo_5__2->fields.cameraType == 1 )
            BattleMoviePlayer__ShowBg(_4__this, 0, v76);
          v8->fields._fadeinTime_5__5 = 0.0;
        }
        else
        {
          if ( !v48 )
            goto LABEL_181;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v48,
            (System_String_o *)StringLiteral_16696/*"badEndId"*/,
            1.0 - v50,
            0LL);
          if ( _4__this->fields.OverrideZDepth )
            v51 = 8;
          else
            v51 = 4;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v48, (System_String_o *)StringLiteral_16729/*"baseUserSvtId"*/, v51, 0LL);
        }
      }
      v78 = v8->fields._movInfo_5__2;
      if ( !v78 )
        goto LABEL_181;
      if ( v78->fields.isBackMovie )
      {
        if ( !v48 )
          goto LABEL_181;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)v48, (System_String_o *)StringLiteral_16730/*"baseUtcOffset"*/, 0, 0LL);
      }
      if ( _4__this->fields._ForceFadeout_k__BackingField )
        return 0;
      currController = _4__this->fields.currController;
      if ( !currController
        || (this = (BattleMoviePlayer__PlayMovie_d__44_o *)currController->fields._player_k__BackingField) == 0LL )
      {
LABEL_181:
        sub_1C3B9C0(this, method);
      }
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      effectTime_5__7 = v8->fields._effectTime_5__7;
      v8->fields._currentFrame_5__3 = (int)this;
      if ( effectTime_5__7 <= (float)(int)this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)v8->fields._movInfo_5__2;
        if ( !this )
          goto LABEL_181;
        if ( *(_QWORD *)&this->fields.num )
        {
          UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)v8->fields._movInfo_5__2;
          if ( !this )
            goto LABEL_181;
        }
        *(_QWORD *)&this->fields.num = 0LL;
        sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.num, 0LL, v80, v81, v82, v83, v84, v85);
      }
      if ( _4__this->fields.KeepStartPosition )
      {
        perf = _4__this->fields.perf;
        if ( !perf )
          goto LABEL_181;
        v88 = v8->fields._movInfo_5__2;
        if ( perf->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          if ( !v88 )
            goto LABEL_181;
          v88->fields._UsePlayMakerShakeParam_k__BackingField = 1;
        }
        else if ( !v88 )
        {
          goto LABEL_181;
        }
        if ( v88->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
            perf = _4__this->fields.perf;
          }
          v95 = *(_QWORD *)&this[1].fields._isLoopMovie_5__9;
          v96 = *(float *)(v95 + 24);
          v97 = *(_QWORD *)(v95 + 16);
          _4__this->fields.startPanelPosition.fields.z = v96;
          *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v97;
          if ( !perf )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          v98 = _4__this->fields.perf;
          if ( !v98 )
            goto LABEL_181;
          if ( !this )
            goto LABEL_181;
          v142 = UnityEngine_Transform__InverseTransformVector(
                   (UnityEngine_Transform_o *)this,
                   v98->fields._CurrentShakeWidth_k__BackingField,
                   0LL);
          x = v142.fields.x;
          y = v142.fields.y;
          z = v142.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer__IsBossCamera(_4__this, v102);
          if ( !_4__this->fields.currController )
            goto LABEL_181;
          v103 = (char)this;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)_4__this->fields.currController,
                                                           0LL);
          v104 = _4__this->fields.startPanelPosition.fields.x;
          v105 = _4__this->fields.startPanelPosition.fields.y;
          v106 = _4__this->fields.startPanelPosition.fields.z;
          v107 = this;
          if ( (v103 & 1) == 0 )
          {
            if ( this )
            {
              v148.fields.z = z + v106;
              v148.fields.y = y + v105;
              v148.fields.x = x + v104;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v148, 0LL);
              goto LABEL_106;
            }
            goto LABEL_181;
          }
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
          }
          if ( !v107 )
            goto LABEL_181;
          v108 = *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 12LL)
               / *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 8LL);
          v143.fields.z = (float)(v106 * v108) + (float)(z * v108);
          v143.fields.y = (float)(v105 * v108) + (float)(y * v108);
          v143.fields.x = (float)(v104 * v108) + (float)(x * v108);
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v107, v143, 0LL);
        }
        else
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_181;
          v109 = this;
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
          position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
          position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
          position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
          *(UnityEngine_Vector3_o *)&v110 = UnityEngine_Transform__InverseTransformVector(
                                              (UnityEngine_Transform_o *)v109,
                                              position,
                                              0LL);
          v113 = fminf(v112, 1.0);
          if ( v112 < -0.3 )
            v114 = -0.3;
          else
            v114 = v113;
          v145 = UnityEngine_Transform__TransformDirection(
                   (UnityEngine_Transform_o *)v109,
                   *(UnityEngine_Vector3_o *)&v110,
                   0LL);
          v115 = v145.fields.x;
          v116 = v145.fields.y;
          v117 = v145.fields.z;
          IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, v118);
          v120 = BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            v120 = BattleMoviePlayer_TypeInfo;
          }
          static_fields = v120->static_fields;
          if ( !IsBossCamera )
          {
            *(UnityEngine_Vector3_o *)&v133 = UnityEngine_Transform__TransformPoint(
                                                (UnityEngine_Transform_o *)v109,
                                                static_fields->BasePanelPosition,
                                                0LL);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
            if ( this )
            {
              v136 = v133;
              v137 = v134;
              v138 = v135;
              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( this )
              {
                v149.fields.z = v138 - v117;
                v149.fields.y = v137 - v116;
                v149.fields.x = v136 - v115;
                UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v149, 0LL);
                goto LABEL_106;
              }
            }
            goto LABEL_181;
          }
          v146.fields.z = static_fields->BossPanelDist;
          v146.fields.x = 0.0;
          v146.fields.y = 0.0;
          *(UnityEngine_Vector3_o *)&v122 = UnityEngine_Transform__TransformPoint(
                                              (UnityEngine_Transform_o *)v109,
                                              v146,
                                              0LL);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_181;
          v125 = v122;
          v126 = v123;
          v127 = v124;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_181;
          v128 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
               / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
          v147.fields.z = v127 - (float)(v117 * v128);
          v147.fields.y = v126 - (float)(v116 * v128);
          v147.fields.x = v125 - (float)(v115 * v128);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v147, 0LL);
        }
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v94 = BattleMoviePlayer_TypeInfo;
      }
      else
      {
        if ( !BattleMoviePlayer__IsBossCamera(_4__this, method) )
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_181;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)this,
            _4__this->fields.startPanelPosition,
            0LL);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_181;
          v131 = _4__this->fields.startPanelScale.fields.y;
          v130 = _4__this->fields.startPanelScale.fields.z;
          v132 = _4__this->fields.startPanelScale.fields.x;
LABEL_177:
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v132, 0LL);
          goto LABEL_106;
        }
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !_4__this->fields.currController )
          goto LABEL_181;
        v89 = *(float **)&this[1].fields._isLoopMovie_5__9;
        v91 = v89[5];
        v90 = v89[6];
        v92 = v89[4];
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)_4__this->fields.currController,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v93 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v141.fields.z = v90 * v93;
        v141.fields.y = v91 * v93;
        v141.fields.x = v92 * v93;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v141, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v94 = BattleMoviePlayer_TypeInfo;
      }
      v129 = v94->static_fields->BossPanelDist / v94->static_fields->BaseDist;
      v130 = v129 * _4__this->fields.startPanelScale.fields.z;
      v131 = v129 * _4__this->fields.startPanelScale.fields.y;
      v132 = v129 * _4__this->fields.startPanelScale.fields.x;
      goto LABEL_177;
    case 1:
      fadeinTime_5__5 = v8->fields._fadeinTime_5__5;
      v8->fields.__1__state = -1;
      if ( fadeinTime_5__5 <= 0.0 )
      {
        if ( !_4__this )
          goto LABEL_181;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_181;
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
      }
      v53 = _4__this->fields.currController;
      if ( !v53 )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v53->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      v54 = v8->fields._movInfo_5__2;
      v8->fields._currentFrame_5__3 = (int)this;
      if ( !v54 )
        goto LABEL_181;
      skipFrame_5__4 = v8->fields._skipFrame_5__4;
      if ( v54->fields.ignoreTimeScale )
      {
        timeScale = 1.0;
      }
      else
      {
        timeScale = UnityEngine_Time__get_timeScale(0LL);
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)(unsigned int)v8->fields._currentFrame_5__3;
      }
      v8->fields._skipFrame_5__4 = skipFrame_5__4 + timeScale;
      if ( ((unsigned int)this & 0x80000000) != 0 )
        goto LABEL_23;
LABEL_50:
      v57 = _4__this->fields.currController;
      if ( v57 )
      {
        v58 = v8->fields._movInfo_5__2;
        if ( v58 )
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)v57->fields._player_k__BackingField;
          if ( this )
          {
            CriMana_Player__Loop((CriMana_Player_o *)this, v58->fields.loop, 0LL);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
            if ( this )
            {
              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
              if ( this )
              {
                this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                                 (UnityEngine_Renderer_o *)this,
                                                                 0LL);
                if ( _4__this->fields.baseMat )
                {
                  v59 = this;
                  this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Material__get_renderQueue(
                                                                   _4__this->fields.baseMat,
                                                                   0LL);
                  if ( v59 )
                  {
                    UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v59, (int32_t)this, 0LL);
                    if ( v8->fields._fadeinTime_5__5 > 0.0 )
                    {
                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                      if ( !this )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)this,
                                                                       (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                      if ( !this )
                        goto LABEL_181;
                      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
                    }
                    v60 = (float *)v8->fields._movInfo_5__2;
                    if ( !v60 )
                      goto LABEL_181;
                    v61 = v60[8];
                    if ( v61 <= 0.0 )
                    {
                      v62 = _4__this->fields.currController;
                      if ( !v62 )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v62->fields._player_k__BackingField;
                      if ( !this )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__get_movieInfo(
                                                                       (CriMana_Player_o *)this,
                                                                       0LL);
                      if ( this )
                      {
                        v63 = _4__this->fields.currController;
                        if ( !v63 )
                          goto LABEL_181;
                        this = (BattleMoviePlayer__PlayMovie_d__44_o *)v63->fields._player_k__BackingField;
                        if ( !this )
                          goto LABEL_181;
                        this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__get_movieInfo(
                                                                         (CriMana_Player_o *)this,
                                                                         0LL);
                        if ( !this )
                          goto LABEL_181;
                        num = this->fields.num;
                      }
                      else
                      {
                        num = 0;
                      }
                      v60 = (float *)v8->fields._movInfo_5__2;
                      if ( !v60 )
                        goto LABEL_181;
                      v61 = (float)num;
                    }
                    v8->fields._fadeoutTime_5__6 = fmaxf(v61 - v60[10], 0.0);
                    v8->fields._effectTime_5__7 = fmaxf(v61 - v60[14], 0.0);
                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                    if ( this )
                    {
                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL);
                      if ( this )
                      {
                        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
                        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                        _4__this->fields.startPanelPosition = localPosition;
                        if ( this )
                        {
                          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
                          if ( this )
                          {
                            localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
                            KeepStartPosition = _4__this->fields.KeepStartPosition;
                            _4__this->fields.startPanelScale = localScale;
                            if ( KeepStartPosition )
                            {
                              v66 = _4__this->fields.perf;
                              if ( !v66 )
                                goto LABEL_181;
                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)v66->fields.actorcamera;
                              if ( !this )
                                goto LABEL_181;
                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
                              if ( !this )
                                goto LABEL_181;
                              _4__this->fields.cameraStartPosition = UnityEngine_Transform__get_position(
                                                                       (UnityEngine_Transform_o *)this,
                                                                       0LL);
                            }
                            this = (BattleMoviePlayer__PlayMovie_d__44_o *)v8->fields.movieObj;
                            if ( this )
                            {
                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                               (UnityEngine_GameObject_o *)this,
                                                                               (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                              if ( this )
                              {
                                this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                 0LL);
                                v68 = v8->fields._movInfo_5__2;
                                if ( v68 )
                                {
                                  v69 = this;
                                  if ( v68->fields.cameraType == 1 )
                                    BattleMoviePlayer__ShowBg(_4__this, v8->fields._fadeinTime_5__5 > 0.0, v67);
                                  if ( v8->fields._fadeinTime_5__5 <= 0.0 )
                                  {
                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                                    if ( !this )
                                      goto LABEL_181;
                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                                     (UnityEngine_Component_o *)this,
                                                                                     (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                    if ( !this )
                                      goto LABEL_181;
                                    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 1, 0LL);
                                  }
                                  else
                                  {
                                    if ( !v69 )
                                      goto LABEL_181;
                                    if ( _4__this->fields.OverrideZDepth )
                                      v70 = 8;
                                    else
                                      v70 = 4;
                                    UnityEngine_Material__SetInt(
                                      (UnityEngine_Material_o *)v69,
                                      (System_String_o *)StringLiteral_16729/*"baseUserSvtId"*/,
                                      v70,
                                      0LL);
                                    UnityEngine_Material__SetFloat(
                                      (UnityEngine_Material_o *)v69,
                                      (System_String_o *)StringLiteral_16696/*"badEndId"*/,
                                      1.0,
                                      0LL);
                                  }
                                  v71 = v8->fields._movInfo_5__2;
                                  if ( !v71 )
                                    goto LABEL_181;
                                  if ( v71->fields.isBackMovie )
                                  {
                                    if ( !v69 )
                                      goto LABEL_181;
                                    UnityEngine_Material__SetInt(
                                      (UnityEngine_Material_o *)v69,
                                      (System_String_o *)StringLiteral_16730/*"baseUtcOffset"*/,
                                      0,
                                      0LL);
                                  }
                                  v72 = _4__this->fields.currController;
                                  if ( v72 )
                                  {
                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)v72->fields._player_k__BackingField;
                                    if ( this )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo(
                                                                                       (CriMana_Player_o *)this,
                                                                                       0LL);
                                      v73 = v8->fields._movInfo_5__2;
                                      v8->fields._currentFrame_5__3 = (int)this;
                                      if ( v73 )
                                      {
                                        v74 = 1.0;
                                        if ( v73->fields.ignoreTimeScale
                                          || (v74 = UnityEngine_Time__get_timeScale(0LL),
                                              (v73 = v8->fields._movInfo_5__2) != 0LL) )
                                        {
                                          v8->fields._playSpeed_5__8 = v74 * v73->fields.playSpeed;
                                          v8->fields._isLoopMovie_5__9 = v73->fields.loop;
LABEL_106:
                                          if ( v8->fields._isLoopMovie_5__9
                                            || (float)((float)(v8->fields._skipFrame_5__4
                                                             + (float)v8->fields._currentFrame_5__3)
                                                     + v8->fields._playSpeed_5__8) < v8->fields._fadeoutTime_5__6 )
                                          {
                                            v8->fields.__2__current = 0LL;
                                            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                                            sub_1C3B708(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
                                            *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
                                            return 1;
                                          }
                                          goto LABEL_109;
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
      goto LABEL_181;
    case 0:
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v8->fields.movieObj;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)this,
                                                       (const MethodInfo_3041A18 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !_4__this )
        goto LABEL_181;
      _4__this->fields.currController = (struct CriManaMovieController_o *)this;
      p_currController = &_4__this->fields.currController;
      sub_1C3B708(
        (PartyOrganizationUtility_o *)&_4__this->fields.currController,
        (int64_t)this,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      _4__this->fields.currentMovieNum = v8->fields.num;
      v26 = (UnityEngine_Object_o *)_4__this->fields.currController;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
        return 0;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_181;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v8->fields.num,
               (const MethodInfo_368B99C *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v8->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      p_movInfo_5__2 = &v8->fields._movInfo_5__2;
      sub_1C3B708((PartyOrganizationUtility_o *)&v8->fields._movInfo_5__2, (int64_t)Item, v29, v30, v31, v32, v33, v34);
      if ( !*p_currController )
        goto LABEL_181;
      v35 = *p_movInfo_5__2;
      if ( !*p_movInfo_5__2 )
        goto LABEL_181;
      player_k__BackingField = (*p_currController)->fields._player_k__BackingField;
      v37 = 1.0;
      if ( !v35->fields.ignoreTimeScale )
      {
        v37 = UnityEngine_Time__get_timeScale(0LL);
        v35 = *p_movInfo_5__2;
        if ( !*p_movInfo_5__2 )
          goto LABEL_181;
      }
      if ( !player_k__BackingField )
        goto LABEL_181;
      CriMana_Player__SetSpeed(player_k__BackingField, v37 * v35->fields.playSpeed, 0LL);
      if ( !*p_currController )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_181;
      CriMana_Player__Start((CriMana_Player_o *)this, 0LL);
      if ( !*p_currController )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      v44 = v8->fields._movInfo_5__2;
      *(_QWORD *)&v8->fields._currentFrame_5__3 = (unsigned int)this;
      if ( !v44 )
        goto LABEL_181;
      v8->fields._fadeinTime_5__5 = v44->fields.fadeinTime;
      if ( ((unsigned int)this & 0x80000000) != 0 )
      {
LABEL_23:
        v8->fields.__2__current = 0LL;
        v45 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C3B708(v45, 0LL, v38, v39, v40, v41, v42, v43);
        result = 1;
        *(_DWORD *)&v45[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleMoviePlayer__PlayMovie_d__44_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  int64_t v2; // x2
  const MethodInfo *v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleMoviePlayer__StartMovie_d__35_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x8
  System_Collections_IEnumerator_o *v17; // x0
  UnityEngine_Coroutine_o *started; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  BattlePerformance_o *perf; // x0
  int v27; // w8
  int64_t v28; // x1
  int64_t nextMovieObj; // x1
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  const MethodInfo *v42; // x4
  System_Collections_IEnumerator_o *v43; // x0
  const MethodInfo *v44; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v45; // x8
  int32_t v46; // w1
  UnityEngine_Object_o *v47; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v48; // x9
  int64_t v49; // x1
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  const MethodInfo *v62; // x4
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v63; // x8
  int size; // w8
  System_Collections_IEnumerator_o *v65; // x0
  System_Collections_Generic_List_T__o *v66; // x22
  System_Collections_IEnumerator_o *v67; // x21
  BattleMoviePlayer___c_c *v68; // x8
  System_Func_object__bool__o *_9__35_0; // x23
  Il2CppObject *v70; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  const MethodInfo *v78; // x2
  UnityEngine_Coroutine_o *v79; // x0
  PartyOrganizationUtility_o *v80; // x19
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int v87; // w8
  System_Collections_IEnumerator_o *v88; // x0
  UnityEngine_Coroutine_o *v89; // x0
  int64_t v90; // x2
  int32_t v91; // w3
  System_String_o *v92; // x4
  BattleSetupInfo_o *v93; // x5
  FollowerInfo_o *v94; // x6
  PartyListViewItem_o *v95; // x7

  v8 = this;
  if ( (byte_4C24755 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1C3B764(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v10);
    sub_1C3B764(&UnityEngine_Object_TypeInfo, v11);
    sub_1C3B764(&Method_BattleMoviePlayer___c__StartMovie_b__35_0__, v12);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)sub_1C3B764(&BattleMoviePlayer___c_TypeInfo, v13);
    byte_4C24755 = 1;
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
      this = (BattleMoviePlayer__StartMovie_d__35_o *)UnityEngine_Object__op_Inequality(currMovieObj, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_12;
      MovieInfoList = _4__this->fields.MovieInfoList;
      if ( !MovieInfoList )
        goto LABEL_45;
      if ( MovieInfoList->fields._size >= 1 )
      {
        v17 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, 0, v3);
        started = UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)_4__this, v17, 0LL);
        v8->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C3B708(p__2__current, (int64_t)started, v20, v21, v22, v23, v24, v25);
        LOBYTE(perf) = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return (char)perf;
      }
LABEL_12:
      v27 = 0;
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
    v48 = _4__this->fields.MovieInfoList;
    if ( !v48 )
      goto LABEL_45;
    if ( v27 >= v48->fields._size - 1 || _4__this->fields._ForceFadeout_k__BackingField )
    {
      v49 = (int64_t)_4__this->fields.currMovieObj;
      _4__this->fields.pastMovieObj = (struct UnityEngine_GameObject_o *)v49;
      sub_1C3B708((PartyOrganizationUtility_o *)&_4__this->fields.pastMovieObj, v49, v2, (int32_t)v3, v4, v5, v6, v7);
      _4__this->fields.currMovieObj = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&_4__this->fields.currMovieObj, 0LL, v50, v51, v52, v53, v54, v55);
      _4__this->fields.nextMovieObj = 0LL;
      sub_1C3B708((PartyOrganizationUtility_o *)&_4__this->fields.nextMovieObj, 0LL, v56, v57, v58, v59, v60, v61);
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v63 = _4__this->fields.MovieInfoList;
        if ( !v63 )
LABEL_45:
          sub_1C3B9C0(this, method);
        size = v63->fields._size;
        if ( size >= 1 )
        {
          v65 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, size - 1, 0, v62);
          v66 = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
          v67 = v65;
          v68 = BattleMoviePlayer___c_TypeInfo;
          if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
            v68 = BattleMoviePlayer___c_TypeInfo;
          }
          _9__35_0 = (System_Func_object__bool__o *)v68->static_fields->__9__35_0;
          if ( !_9__35_0 )
          {
            if ( !v68->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v68);
              v68 = BattleMoviePlayer___c_TypeInfo;
            }
            v70 = (Il2CppObject *)v68->static_fields->__9;
            _9__35_0 = (System_Func_object__bool__o *)sub_1C3B9B0(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__35_0, v70, Method_BattleMoviePlayer___c__StartMovie_b__35_0__, 0LL);
            static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
            static_fields->__9__35_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__35_0;
            sub_1C3B708(
              (PartyOrganizationUtility_o *)&static_fields->__9__35_0,
              (int64_t)_9__35_0,
              v72,
              v73,
              v74,
              v75,
              v76,
              v77);
          }
          if ( BasicHelper__Any_object_(
                 v66,
                 (System_Func_T__bool__o *)_9__35_0,
                 (const MethodInfo_2FDAB74 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
          {
            BattleMoviePlayer__ShowBg(_4__this, 1, v78);
          }
          v79 = UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)_4__this, v67, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v79;
          v80 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C3B708(v80, (int64_t)v79, v81, v82, v83, v84, v85, v86);
          v87 = 3;
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
    v28 = (int64_t)_4__this->fields.currMovieObj;
    _4__this->fields.pastMovieObj = (struct UnityEngine_GameObject_o *)v28;
    sub_1C3B708((PartyOrganizationUtility_o *)&_4__this->fields.pastMovieObj, v28, v2, (int32_t)v3, v4, v5, v6, v7);
    nextMovieObj = (int64_t)_4__this->fields.nextMovieObj;
    _4__this->fields.currMovieObj = (struct UnityEngine_GameObject_o *)nextMovieObj;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&_4__this->fields.currMovieObj,
      nextMovieObj,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    _4__this->fields.nextMovieObj = 0LL;
    sub_1C3B708((PartyOrganizationUtility_o *)&_4__this->fields.nextMovieObj, 0LL, v36, v37, v38, v39, v40, v41);
    v43 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, v8->fields._i_5__2, 0, v42);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)UnityEngine_MonoBehaviour__StartCoroutine_71108020(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      v43,
                                                      0LL);
    v45 = _4__this->fields.MovieInfoList;
    if ( !v45 )
      goto LABEL_45;
    v46 = v8->fields._i_5__2 + 2;
    if ( v46 < v45->fields._size )
      BattleMoviePlayer__GetMoviePanelAdd(_4__this, v46, v44);
    v47 = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)UnityEngine_Object__op_Inequality(v47, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_23:
    v27 = v8->fields._i_5__2 + 1;
    v8->fields._i_5__2 = v27;
  }
  v88 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, v8->fields._i_5__2 + 1, v3);
  v89 = UnityEngine_MonoBehaviour__StartCoroutine_71108020((UnityEngine_MonoBehaviour_o *)_4__this, v88, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v89;
  v80 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C3B708(v80, (int64_t)v89, v90, v91, v92, v93, v94, v95);
  v87 = 2;
LABEL_43:
  *(_DWORD *)&v80[-1].fields._IsQuestStartMenuMode_k__BackingField = v87;
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

  v2 = sub_1C3B778(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3B9B0(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C3B778(&Method_BattleMoviePlayer__StartMovie_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C3B88C(v3, v4);
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
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4C24750 & 1) == 0 )
  {
    sub_1C3B764(&BattleMoviePlayer___c_TypeInfo, v1);
    byte_4C24750 = 1;
  }
  v2 = (Il2CppObject *)sub_1C3B9B0(BattleMoviePlayer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleMoviePlayer___c_TypeInfo->static_fields->__9 = (struct BattleMoviePlayer___c_o *)v2;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)BattleMoviePlayer___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
    sub_1C3B9C0(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___FadeoutDeleteMovie_b__38_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___PauseMovie_b__36_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___StartMovie_b__35_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C3B9C0(this, 0LL);
  return x->fields.cameraType == 1;
}