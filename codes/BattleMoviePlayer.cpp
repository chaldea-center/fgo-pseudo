void __fastcall BattleMoviePlayer___cctor(const MethodInfo *method)
{
  struct BattleMoviePlayer_StaticFields *static_fields; // x8

  if ( (byte_4BDECAA & 1) == 0 )
  {
    sub_1C21E38(&BattleMoviePlayer_TypeInfo);
    byte_4BDECAA = 1;
  }
  static_fields = BattleMoviePlayer_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BackMovieScale = xmmword_BFF080;
  *(_QWORD *)&static_fields->BasePanelPosition.fields.x = 0LL;
  static_fields->BasePanelPosition.fields.z = 10.0;
}


void __fastcall BattleMoviePlayer___ctor(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  UnityEngine_Vector3_c *v17; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  _BOOL4 v20; // w9
  struct UnityEngine_Vector3_StaticFields *v21; // x10
  float v22; // s1
  struct UnityEngine_Vector3_StaticFields *v23; // x8
  float v24; // s1

  if ( (byte_4BDECA9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4BDECA9 = 1;
  }
  this->fields.KeepStartPosition = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
  this->fields.MovieInfoList = (struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.MovieInfoList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ObjList = (struct System_Collections_Generic_List_GameObject__o *)v10;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.ObjList, (int64_t)v10, v11, v12, v13, v14, v15, v16);
  if ( !byte_4BD6BB1 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  v17 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.startPanelPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.startPanelPosition.fields.z = z;
  if ( byte_4BD6BB6 )
  {
    v20 = 0;
  }
  else
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    v17 = UnityEngine_Vector3_TypeInfo;
    byte_4BD6BB6 = 1;
    v20 = byte_4BD6BB1 == 0;
  }
  v21 = v17->static_fields;
  v22 = v21->oneVector.fields.z;
  *(_QWORD *)&this->fields.startPanelScale.fields.x = *(_QWORD *)&v21->oneVector.fields.x;
  this->fields.startPanelScale.fields.z = v22;
  if ( v20 )
  {
    sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    v17 = UnityEngine_Vector3_TypeInfo;
    byte_4BD6BB1 = 1;
  }
  v23 = v17->static_fields;
  v24 = v23->zeroVector.fields.z;
  *(_QWORD *)&this->fields.cameraStartPosition.fields.x = *(_QWORD *)&v23->zeroVector.fields.x;
  this->fields.cameraStartPosition.fields.z = v24;
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
  int32_t cameraType; // w8
  Il2CppObject *v8; // x21
  struct BattlePerformance_o *v9; // x23
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  System_Collections_Generic_List_object__o *v16; // x8
  struct System_Object_array *v17; // x9
  _QWORD *v18; // x10
  __int64 v19; // x11
  BattleMoviePlayer_o *v20; // x21
  Il2CppClass **v21; // x0
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *moviePrefab; // x21
  UnityEngine_Transform_o *transform; // x23
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
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
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  UnityEngine_Transform_o *v47; // x24
  float v48; // s8
  float y; // s9
  float v50; // s2
  UnityEngine_Transform_o *v51; // x22
  float v52; // s0
  float v53; // s1
  float v54; // s2
  UnityEngine_Transform_o *v55; // x22
  float x; // s8
  float v57; // s9
  float z; // s10
  float *v59; // x8
  UnityEngine_Material_o *v60; // x23
  UnityEngine_Material_o *v61; // x22
  const MethodInfo *v62; // x3
  Il2CppObject *v64; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4BDEC9D & 1) == 0 )
  {
    sub_1C21E38(&BattleMoviePlayer_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C21E38(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&UnityEngine_Material_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject____77715568);
    this = (BattleMoviePlayer_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDEC9D = 1;
  }
  component = 0LL;
  v64 = 0LL;
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
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__50551272(
                                    moviePrefab,
                                    transform,
                                    (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
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
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        ObjList,
        (Il2CppObject *)this,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + size;
      ObjList->fields._size = size + 1;
      v35[4] = (Il2CppClass *)v20;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v20, v25, v26, v27, v28, v29, v30);
    }
    if ( !v20 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v20,
           &v64,
           (const MethodInfo_30017C4 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)v64;
      if ( !v64 )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v64, v6->fields.perf, 0, 0LL);
    }
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v20, 11, 0LL);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v20,
                                    (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v36 = 1;
  }
  else
  {
    if ( cameraType )
    {
      v20 = 0LL;
      goto LABEL_39;
    }
    this = (BattleMoviePlayer_o *)v6->fields.perf;
    if ( !this )
      goto LABEL_63;
    v8 = (Il2CppObject *)v6->fields.moviePrefab;
    this = (BattleMoviePlayer_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    if ( !this )
      goto LABEL_63;
    v9 = this[1].fields.perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__50551272(
                                    v8,
                                    (UnityEngine_Transform_o *)v9,
                                    (const MethodInfo_30359E8 *)Method_UnityEngine_Object_Instantiate_GameObject____77715568);
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
    if ( (unsigned int)v19 >= v17->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        (Il2CppObject *)this,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &v17->obj.klass + v19;
      v16->fields._size = v19 + 1;
      v21[4] = (Il2CppClass *)v20;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)v20, v10, v11, v12, v13, v14, v15);
    }
    if ( !v20 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v20,
           &component,
           (const MethodInfo_30017C4 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)component;
      if ( !component )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)component, v6->fields.perf, 1, 0LL);
    }
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v20,
                                    (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v36 = 0;
  }
  LODWORD(this->fields.moviePrefab) = v36;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
LABEL_39:
  p_baseMat = &v6->fields.baseMat;
  baseMat = (UnityEngine_Object_o *)v6->fields.baseMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleMoviePlayer_o *)UnityEngine_Object__op_Equality(baseMat, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_63;
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v20,
                                    (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !this )
      goto LABEL_63;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
    v40 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_70732884(v40, material, 0LL);
    *p_baseMat = v40;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields.baseMat, (int64_t)v40, v41, v42, v43, v44, v45, v46);
  }
  else if ( !v20 )
  {
    goto LABEL_63;
  }
  v47 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
  if ( !this )
    goto LABEL_63;
  LODWORD(v48) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
  if ( !this )
    goto LABEL_63;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  y = position.fields.y;
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
  if ( !this )
    goto LABEL_63;
  *(UnityEngine_Vector3_o *)(&v50 - 2) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  if ( !v47 )
    goto LABEL_63;
  v67.fields.y = y;
  v67.fields.z = (float)((float)no * 0.1) + v50;
  v67.fields.x = v48;
  UnityEngine_Transform__set_position(v47, v67, 0LL);
  if ( movieInfo->fields.isBackMovie )
  {
    v51 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
    if ( this )
    {
      *(UnityEngine_Vector3_o *)&v52 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      if ( v51 )
      {
        v68.fields.z = v54 + 0.1;
        v68.fields.y = v53 + 0.0;
        v68.fields.x = v52 + 0.0;
        UnityEngine_Transform__set_position(v51, v68, 0LL);
        this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
        if ( this )
        {
          v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0LL);
          if ( this )
          {
            localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
            this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            x = localScale.fields.x;
            v57 = localScale.fields.y;
            z = localScale.fields.z;
            if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
              this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            }
            if ( v55 )
            {
              v59 = *(float **)&this[1].fields.m_CachedPtr;
              v70.fields.z = z * *v59;
              v70.fields.y = v57 * *v59;
              v70.fields.x = x * *v59;
              UnityEngine_Transform__set_localScale(v55, v70, 0LL);
              goto LABEL_59;
            }
          }
        }
      }
    }
LABEL_63:
    sub_1C22094(this, movieInfo);
  }
LABEL_59:
  v60 = *p_baseMat;
  v61 = (UnityEngine_Material_o *)sub_1C22084(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_70732884(v61, v60, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v20,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v61, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v20,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
  if ( !this )
    goto LABEL_63;
  CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v61, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 1, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v20,
                                  (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
  BattleMoviePlayer__InitMovie(v6, (UnityEngine_GameObject_o *)v20, no, v62);
  return (UnityEngine_GameObject_o *)v20;
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
  System_Collections_Generic_List_float__o *v21; // x19
  System_Collections_Generic_List_float__o *v22; // x21
  int32_t v23; // w27
  int32_t v24; // w25
  float v25; // s8
  float v26; // s9
  int32_t v27; // w19
  float Item; // s10
  float v29; // s11
  float v30; // s12
  System_Collections_Generic_List_object__o *MovieInfoList; // x28
  bool IgnoreTimeScale; // w19
  bool v33; // w23
  bool v34; // w21
  BattleMoviePlayer_MovieInfo_o *v35; // x29
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  Il2CppClass **v45; // x0
  System_Collections_Generic_List_UnityEvent__o *v46; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_float__o *v47; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_List_int__o *v48; // [xsp+20h] [xbp-D0h]
  BattleMoviePlayer_o *v51; // [xsp+38h] [xbp-B8h]
  int32_t cama; // [xsp+44h] [xbp-ACh]
  UnityEngine_Events_UnityEvent_o *eff; // [xsp+48h] [xbp-A8h]
  System_String_o *patha; // [xsp+58h] [xbp-98h]

  v51 = this;
  if ( (byte_4BDECA8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UnityEvent__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_UnityEvent__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_float__get_Item__);
    sub_1C21E38(&BattleMoviePlayer_MovieInfo_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDECA8 = 1;
  }
  v51->fields.KeepStartPosition = keepStartPosition;
  v51->fields.OverrideZDepth = overrideZDepth;
  v51->fields.IgnoreTimeScale = ignoreTS;
  v51->fields.Loop = loop;
  v51->fields.IsBackMovie = isBackMovie;
  if ( !path )
LABEL_47:
    sub_1C22094(this, type);
  v21 = valid;
  if ( path->fields._size >= 1 )
  {
    v22 = effRest;
    v23 = 0;
    v47 = speed;
    v48 = cam;
    v46 = effect;
    do
    {
      this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)path,
                                      v23,
                                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( this )
      {
        if ( !fadeout )
          goto LABEL_47;
        if ( v23 < fadeout->fields._size )
        {
          if ( !cam )
            goto LABEL_47;
          if ( v23 < cam->fields._size )
          {
            this = (BattleMoviePlayer_o *)type;
            if ( !type )
              goto LABEL_47;
            if ( v23 >= type->fields._size )
            {
              v24 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                              (System_Collections_Generic_List_T__o *)type,
                                              v23,
                                              (const MethodInfo_36345CC *)Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
              v24 = (int)this;
            }
            if ( v23 >= path->fields._size )
            {
              patha = (System_String_o *)StringLiteral_1/*""*/;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)path,
                                              v23,
                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_string__get_Item__);
              patha = (System_String_o *)this;
            }
            if ( !v21 )
              goto LABEL_47;
            v25 = 0.0;
            v26 = 0.0;
            if ( v23 < v21->fields._size )
              v26 = fmaxf(
                      System_Collections_Generic_List_float___get_Item(
                        v21,
                        v23,
                        (const MethodInfo_366F538 *)Method_System_Collections_Generic_List_float__get_Item__),
                      0.0);
            if ( v23 < fadeout->fields._size )
              v25 = fmaxf(
                      System_Collections_Generic_List_float___get_Item(
                        fadeout,
                        v23,
                        (const MethodInfo_366F538 *)Method_System_Collections_Generic_List_float__get_Item__),
                      1.0);
            if ( v23 >= cam->fields._size )
            {
              v27 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_int___get_Item(
                                              cam,
                                              v23,
                                              (const MethodInfo_3631DA0 *)Method_System_Collections_Generic_List_int__get_Item__);
              v27 = (int)this;
            }
            if ( !speed )
              goto LABEL_47;
            Item = 1.0;
            if ( v23 < speed->fields._size )
              Item = System_Collections_Generic_List_float___get_Item(
                       speed,
                       v23,
                       (const MethodInfo_366F538 *)Method_System_Collections_Generic_List_float__get_Item__);
            if ( !effect )
              goto LABEL_47;
            if ( v23 >= effect->fields._size )
            {
              eff = 0LL;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              (System_Collections_Generic_List_object__o *)effect,
                                              v23,
                                              (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_UnityEvent__get_Item__);
              eff = (UnityEngine_Events_UnityEvent_o *)this;
            }
            if ( !v22 )
              goto LABEL_47;
            v29 = 0.0;
            if ( v23 < v22->fields._size )
              v29 = System_Collections_Generic_List_float___get_Item(
                      v22,
                      v23,
                      (const MethodInfo_366F538 *)Method_System_Collections_Generic_List_float__get_Item__);
            if ( !fadein )
              goto LABEL_47;
            v30 = 0.0;
            cama = v27;
            if ( v23 < fadein->fields._size )
              v30 = System_Collections_Generic_List_float___get_Item(
                      fadein,
                      v23,
                      (const MethodInfo_366F538 *)Method_System_Collections_Generic_List_float__get_Item__);
            MovieInfoList = (System_Collections_Generic_List_object__o *)v51->fields.MovieInfoList;
            IgnoreTimeScale = v51->fields.IgnoreTimeScale;
            v33 = v51->fields.Loop;
            v34 = v51->fields.IsBackMovie;
            v35 = (BattleMoviePlayer_MovieInfo_o *)sub_1C22084(BattleMoviePlayer_MovieInfo_TypeInfo);
            BattleMoviePlayer_MovieInfo___ctor(
              v35,
              v24,
              patha,
              v26,
              v25,
              cama,
              Item,
              eff,
              v29,
              IgnoreTimeScale,
              v30,
              v33,
              v34,
              0LL);
            if ( !MovieInfoList )
              goto LABEL_47;
            items = MovieInfoList->fields._items;
            v43 = Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__;
            ++MovieInfoList->fields._version;
            if ( !items )
              goto LABEL_47;
            size = MovieInfoList->fields._size;
            v22 = effRest;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                MovieInfoList,
                (Il2CppObject *)v35,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
            }
            else
            {
              v45 = &items->obj.klass + size;
              MovieInfoList->fields._size = size + 1;
              v45[4] = (Il2CppClass *)v35;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v45 + 4), (int64_t)v35, v36, v37, v38, v39, v40, v41);
            }
            effect = v46;
            speed = v47;
            cam = v48;
            v21 = valid;
          }
        }
      }
      ++v23;
    }
    while ( v23 < path->fields._size );
  }
}


void __fastcall BattleMoviePlayer__Dispose(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *perf; // x20
  struct System_Collections_Generic_List_GameObject__o *ObjList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_T__o *MovieInfoList; // x20
  BattleMoviePlayer___c_c *v7; // x0
  System_Func_object__bool__o *_9__27_0; // x21
  Il2CppObject *v9; // x22
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
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

  if ( (byte_4BDEC9C & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattleMoviePlayer___c__Dispose_b__27_0__);
    sub_1C21E38(&BattleMoviePlayer___c_TypeInfo);
    byte_4BDEC9C = 1;
  }
  memset(&v27, 0, sizeof(v27));
  perf = (UnityEngine_Object_o *)this->fields.perf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjList = (struct System_Collections_Generic_List_GameObject__o *)UnityEngine_Object__op_Inequality(perf, 0LL, 0LL);
  if ( ((unsigned __int8)ObjList & 1) != 0 )
  {
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v7 = BattleMoviePlayer___c_TypeInfo;
    if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
      v7 = BattleMoviePlayer___c_TypeInfo;
    }
    _9__27_0 = (System_Func_object__bool__o *)v7->static_fields->__9__27_0;
    if ( !_9__27_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleMoviePlayer___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__27_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__27_0, v9, Method_BattleMoviePlayer___c__Dispose_b__27_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__27_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__27_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__27_0,
        (int64_t)_9__27_0,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
    }
    ObjList = (struct System_Collections_Generic_List_GameObject__o *)BasicHelper__Any_object_(
                                                                        MovieInfoList,
                                                                        (System_Func_T__bool__o *)_9__27_0,
                                                                        (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
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
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
  ObjList = this->fields.ObjList;
  if ( !ObjList )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v26,
    (System_Collections_Generic_List_object__o *)ObjList,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v27 = v26;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v27.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v22 = this->fields.ObjList;
  if ( !v22 )
LABEL_32:
    sub_1C22094(ObjList, v5);
  v23 = v22->fields._size;
  v24 = v22->fields._version + 1;
  v22->fields._size = 0;
  v22->fields._version = v24;
  if ( v23 >= 1 )
    System_Array__Clear((System_Array_o *)v22->fields._items, 0, v23, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__FadeoutDeleteMovie(
        BattleMoviePlayer_o *this,
        System_Action_o *FadeOuted,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_4BDECA3 & 1) == 0 )
  {
    sub_1C21E38(&BattleMoviePlayer__FadeoutDeleteMovie_d__38_TypeInfo);
    byte_4BDECA3 = 1;
  }
  v5 = sub_1C22084(BattleMoviePlayer__FadeoutDeleteMovie_d__38_TypeInfo);
  BattleMoviePlayer__FadeoutDeleteMovie_d__38___ctor((BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = FadeOuted;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)FadeOuted, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoviePlayer__GetMoviePanelAdd(BattleMoviePlayer_o *this, int32_t i, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *MovieInfoList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v7; // x3
  struct UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4BDEC9F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    byte_4BDEC9F = 1;
  }
  MovieInfoList = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
  if ( !MovieInfoList )
    sub_1C22094(0LL, *(_QWORD *)&i);
  if ( MovieInfoList->fields._size > i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             MovieInfoList,
             i,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(this, (BattleMoviePlayer_MovieInfo_o *)Item, i, v7);
    this->fields.nextMovieObj = BattleMoviePanel;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.nextMovieObj,
      (int64_t)BattleMoviePanel,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__GetMoviePanelFirst(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *performance,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
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

  if ( (byte_4BDEC9E & 1) == 0 )
  {
    sub_1C21E38(&BattleMoviePlayer__GetMoviePanelFirst_d__30_TypeInfo);
    byte_4BDEC9E = 1;
  }
  v5 = sub_1C22084(BattleMoviePlayer__GetMoviePanelFirst_d__30_TypeInfo);
  BattleMoviePlayer__GetMoviePanelFirst_d__30___ctor((BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1C22094(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = performance;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v5 + 40), (int64_t)performance, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleMoviePlayer__InitMovie(
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

  if ( (byte_4BDECA7 & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Application_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1121/*".usm"*/);
    sub_1C21E38(&StringLiteral_1167/*"/StreamingAssets/"*/);
    sub_1C21E38(&StringLiteral_1162/*"/Resources/"*/);
    byte_4BDECA7 = 1;
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
                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v9 = (System_String_o *)*((_QWORD *)MovieInfoList + 3);
    if ( !v9 )
      goto LABEL_41;
    if ( !System_String__EndsWith(*((System_String_o **)MovieInfoList + 3), (System_String_o *)StringLiteral_1121/*".usm"*/, 0LL) )
      v9 = System_String__Concat_63115476(v9, (System_String_o *)StringLiteral_1121/*".usm"*/, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetStorageData = AssetManager__getAssetStorageData(v9, 0LL);
    v11 = AssetStorageData ? AssetData__get_Path(AssetStorageData, 0LL) : 0LL;
    MovieInfoList = this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_41;
    MovieInfoList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)MovieInfoList,
                      pathnum,
                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v12 = *((_DWORD *)MovieInfoList + 4);
    if ( v12 == 102 )
    {
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0LL);
      v16 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v16 )
        goto LABEL_41;
      v14 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v16,
                        pathnum,
                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v15 = &StringLiteral_1162/*"/Resources/"*/;
    }
    else
    {
      if ( v12 != 101 )
        goto LABEL_31;
      if ( !UnityEngine_Application_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo);
      MovieInfoList = UnityEngine_Application__get_dataPath(0LL);
      v13 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v13 )
        goto LABEL_41;
      v14 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v13,
                        pathnum,
                        (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v15 = &StringLiteral_1167/*"/StreamingAssets/"*/;
    }
    MovieInfoList = System_String__Concat_63126736(
                      v14,
                      (System_String_o *)*v15,
                      *((System_String_o **)MovieInfoList + 3),
                      0LL);
    v11 = (System_String_o *)MovieInfoList;
LABEL_31:
    if ( obj )
    {
      Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   obj,
                                                   (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(Component_object, 0LL, 0LL) )
        return;
      MovieInfoList = (void *)System_String__IsNullOrEmpty(v11, 0LL);
      if ( ((unsigned __int8)MovieInfoList & 1) != 0 )
        return;
      if ( Component_object )
      {
        MovieInfoList = Component_object[2].monitor;
        if ( MovieInfoList )
        {
          CriMana_Player__SetFile((CriMana_Player_o *)MovieInfoList, 0LL, v11, 0, 0LL);
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
    sub_1C22094(MovieInfoList, v7);
  }
}


void __fastcall BattleMoviePlayer__Initialize(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *MoviePanelFirst; // x1

  MoviePanelFirst = BattleMoviePlayer__GetMoviePanelFirst(this, perf, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, MoviePanelFirst, 0LL);
}


bool __fastcall BattleMoviePlayer__IsBossCamera(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  BattleMoviePlayer_o *v2; // x19
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Object_o *actorcamera; // x20
  struct BattlePerformance_o *v5; // x8
  float fieldOfView; // s8
  BattleMoviePlayer_c *v7; // x0

  v2 = this;
  if ( (byte_4BDECA4 & 1) == 0 )
  {
    sub_1C21E38(&BattleMoviePlayer_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDECA4 = 1;
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
    v5 = v2->fields.perf;
    if ( v5 )
    {
      this = (BattleMoviePlayer_o *)v5->fields.actorcamera;
      if ( this )
      {
        fieldOfView = UnityEngine_Camera__get_fieldOfView((UnityEngine_Camera_o *)this, 0LL);
        v7 = BattleMoviePlayer_TypeInfo;
        goto LABEL_13;
      }
    }
LABEL_16:
    sub_1C22094(this, method);
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


bool __fastcall BattleMoviePlayer__IsPausedMovie(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *currMovieObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_4BDECA2 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDECA2 = 1;
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
                                                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___)) == 0LL
    || (Component_object = (UnityEngine_GameObject_o *)Component_object[2].monitor) == 0LL )
  {
    sub_1C22094(Component_object, v4);
  }
  return CriMana_Player__IsPaused((CriMana_Player_o *)Component_object, 0LL);
}


void __fastcall BattleMoviePlayer__PauseMovie(BattleMoviePlayer_o *this, bool v, const MethodInfo *method)
{
  UnityEngine_Object_o *currMovieObj; // x21
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x21
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  BattleMoviePlayer___c_c *v10; // x0
  System_Func_object__bool__o *_9__36_0; // x23
  Il2CppObject *v12; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  const MethodInfo *v20; // x2

  if ( (byte_4BDECA1 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C21E38(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattleMoviePlayer___c__PauseMovie_b__36_0__);
    sub_1C21E38(&BattleMoviePlayer___c_TypeInfo);
    byte_4BDECA1 = 1;
  }
  currMovieObj = (UnityEngine_Object_o *)this->fields.currMovieObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(currMovieObj, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    v8 = this->fields.currMovieObj;
    if ( !v8 )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         this->fields.currMovieObj,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    if ( !Component_object )
      goto LABEL_19;
    Component_object = (Il2CppObject *)Component_object[3].monitor;
    if ( !Component_object )
      goto LABEL_19;
    CriMana_Player__Pause((CriMana_Player_o *)Component_object, v, 0LL);
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v10 = BattleMoviePlayer___c_TypeInfo;
    if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
      v10 = BattleMoviePlayer___c_TypeInfo;
    }
    _9__36_0 = (System_Func_object__bool__o *)v10->static_fields->__9__36_0;
    if ( !_9__36_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleMoviePlayer___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__36_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__36_0, v12, Method_BattleMoviePlayer___c__PauseMovie_b__36_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__36_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__36_0;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&static_fields->__9__36_0,
        (int64_t)_9__36_0,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
    }
    if ( BasicHelper__Any_object_(
           MovieInfoList,
           (System_Func_T__bool__o *)_9__36_0,
           (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
    {
      BattleMoviePlayer__ShowBg(this, v, v20);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v8,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !Component_object )
LABEL_19:
      sub_1C22094(Component_object, v7);
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
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4BDECA5 & 1) == 0 )
  {
    sub_1C21E38(&BattleMoviePlayer__PlayMovie_d__44_TypeInfo);
    byte_4BDECA5 = 1;
  }
  v7 = sub_1C22084(BattleMoviePlayer__PlayMovie_d__44_TypeInfo);
  BattleMoviePlayer__PlayMovie_d__44___ctor((BattleMoviePlayer__PlayMovie_d__44_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1C22094(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = movieObj;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)movieObj, v16, v17, v18, v19, v20, v21);
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
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4BDECA6 & 1) == 0 )
  {
    sub_1C21E38(&BattleMoviePlayer__PlayMovieFadeOut_d__45_TypeInfo);
    byte_4BDECA6 = 1;
  }
  v9 = sub_1C22084(BattleMoviePlayer__PlayMovieFadeOut_d__45_TypeInfo);
  BattleMoviePlayer__PlayMovieFadeOut_d__45___ctor((BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1C22094(v10, v11);
  *(_QWORD *)(v9 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 40), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = movieObj;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v9 + 32), (int64_t)movieObj, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v9 + 48) = num;
  *(_BYTE *)(v9 + 52) = forceFadeout;
  return (System_Collections_IEnumerator_o *)v9;
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
    sub_1C22094(this, v);
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
  __int64 v4; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4BDECA0 & 1) == 0 )
  {
    sub_1C21E38(&BattleMoviePlayer__StartMovie_d__35_TypeInfo);
    byte_4BDECA0 = 1;
  }
  v3 = sub_1C22084(BattleMoviePlayer__StartMovie_d__35_TypeInfo);
  BattleMoviePlayer__StartMovie_d__35___ctor((BattleMoviePlayer__StartMovie_d__35_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.moviePath, (int64_t)path, v27, v28, v29, v30, v31, v32);
  this->fields.effectEvent = eff;
  this->fields.validTime = valid;
  this->fields.fadeRestTime = fade;
  this->fields.cameraType = cam;
  this->fields.playSpeed = speed;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.effectEvent, (int64_t)eff, v33, v34, v35, v36, v37, v38);
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
  int32_t _1__state; // w8
  BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  System_Collections_IEnumerator_o *v6; // x0
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  System_Collections_IEnumerator_o *v8; // x21
  BattleMoviePlayer___c_c *v9; // x8
  System_Func_object__bool__o *_9__38_0; // x23
  Il2CppObject *v11; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  UnityEngine_Coroutine_o *started; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  BattlePerformance_o *perf; // x0
  struct System_Action_o *FadeOuted; // x8

  v2 = this;
  if ( (byte_4BDECAC & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C21E38(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__38_0__);
    this = (BattleMoviePlayer__FadeoutDeleteMovie_d__38_o *)sub_1C21E38(&BattleMoviePlayer___c_TypeInfo);
    byte_4BDECAC = 1;
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
        v6 = BattleMoviePlayer__PlayMovieFadeOut(
               _4__this,
               _4__this->fields.currMovieObj,
               _4__this->fields.currentMovieNum,
               1,
               0LL);
        MovieInfoList = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
        v8 = v6;
        v9 = BattleMoviePlayer___c_TypeInfo;
        if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
          v9 = BattleMoviePlayer___c_TypeInfo;
        }
        _9__38_0 = (System_Func_object__bool__o *)v9->static_fields->__9__38_0;
        if ( !_9__38_0 )
        {
          if ( !v9->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v9);
            v9 = BattleMoviePlayer___c_TypeInfo;
          }
          v11 = (Il2CppObject *)v9->static_fields->__9;
          _9__38_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__38_0,
            v11,
            Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__38_0__,
            0LL);
          static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
          static_fields->__9__38_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__38_0;
          sub_1C21DDC(
            (PartyOrganizationUtility_o *)&static_fields->__9__38_0,
            (int64_t)_9__38_0,
            v13,
            v14,
            v15,
            v16,
            v17,
            v18);
        }
        if ( BasicHelper__Any_object_(
               MovieInfoList,
               (System_Func_T__bool__o *)_9__38_0,
               (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
        {
          BattleMoviePlayer__ShowBg(_4__this, 1, 0LL);
        }
        started = UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v8, 0LL);
        v2->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(p__2__current, (int64_t)started, v21, v22, v23, v24, v25, v26);
        LOBYTE(perf) = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return (char)perf;
      }
LABEL_23:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
LABEL_25:
    sub_1C22094(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  BattleMoviePlayer__Dispose(_4__this, 0LL);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleMoviePlayer__FadeoutDeleteMovie_d__38_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  struct BattleMoviePlayer_o *_4__this; // x19
  UnityEngine_Object_o **p_perf; // x20
  UnityEngine_Object_o *perf; // x22
  UnityEngine_Object_o *performance; // x22
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x1
  UnityEngine_Object_o *v14; // x21
  Il2CppObject *Component_object; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  UnityEngine_Object_o *v22; // x20
  Il2CppObject *v23; // x0
  UnityEngine_GameObject_o *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7

  v2 = this;
  if ( (byte_4BDECAD & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)sub_1C21E38(&StringLiteral_10806/*"Performance"*/);
    byte_4BDECAD = 1;
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
      v13 = (int64_t)v2->fields.performance;
      *p_perf = (UnityEngine_Object_o *)v13;
      sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.perf, v13, v7, v8, v9, v10, v11, v12);
    }
    v14 = *p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
      goto LABEL_19;
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)UnityEngine_GameObject__Find(
                                                              (System_String_o *)StringLiteral_10806/*"Performance"*/,
                                                              0LL);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    *p_perf = (UnityEngine_Object_o *)Component_object;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&_4__this->fields.perf,
      (int64_t)Component_object,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v22 = *p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v22, 0LL, 0LL) )
    {
LABEL_19:
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)_4__this->fields.MovieInfoList;
      if ( this )
      {
        if ( SLODWORD(this->fields.__2__current) < 1
          || (v23 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__),
              v24 = BattleMoviePlayer__CreateBattleMoviePanel(_4__this, (BattleMoviePlayer_MovieInfo_o *)v23, 0, 0LL),
              _4__this->fields.currMovieObj = v24,
              sub_1C21DDC(
                (PartyOrganizationUtility_o *)&_4__this->fields.currMovieObj,
                (int64_t)v24,
                v25,
                v26,
                v27,
                v28,
                v29,
                v30),
              (this = (BattleMoviePlayer__GetMoviePanelFirst_d__30_o *)_4__this->fields.MovieInfoList) != 0LL) )
        {
          if ( SLODWORD(this->fields.__2__current) > 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     1,
                     (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
            BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(
                                 _4__this,
                                 (BattleMoviePlayer_MovieInfo_o *)Item,
                                 1,
                                 0LL);
            _4__this->fields.nextMovieObj = BattleMoviePanel;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&_4__this->fields.nextMovieObj,
              (int64_t)BattleMoviePanel,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
          }
          return 0;
        }
      }
LABEL_25:
      sub_1C22094(this, method);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleMoviePlayer__GetMoviePanelFirst_d__30_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *movieObj; // x21
  struct CriManaMovieController_o *v12; // x8
  UnityEngine_Material_o *material; // x0
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o **p_movieMaterial_5__2; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **v22; // x22
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
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
  char v56; // w22
  float v57; // s11
  float v58; // s12
  float v59; // s13
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o *v60; // x21
  float v61; // s0
  int32_t v62; // w2
  float *v63; // x9
  float v64; // s8
  float v65; // s9
  float v66; // s10
  float v67; // s0
  BattleMoviePlayer_c *v68; // x8
  struct BattlePerformance_o *v69; // x8
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o *v70; // x21
  int v71; // s0
  float v73; // s2
  float v74; // s4
  float v75; // s2
  float v76; // s8
  float v77; // s9
  float v78; // s10
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v80; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v82; // s0
  float v83; // s1
  float v84; // s2
  float v85; // s11
  float v86; // s12
  float v87; // s13
  float v88; // s0
  float v89; // s0
  float v90; // s2
  float v91; // s1
  float v92; // s0
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovieFadeOut_d__45_o **p_movInfo_5__3; // x21
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  int64_t v102; // x2
  int32_t v103; // w3
  System_String_o *v104; // x4
  BattleSetupInfo_o *v105; // x5
  FollowerInfo_o *v106; // x6
  PartyListViewItem_o *v107; // x7
  UnityEngine_Object_o *v108; // x19
  float v109; // s0
  float v110; // s1
  float v111; // s2
  float v112; // s11
  float v113; // s12
  float v114; // s13
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4BDECAF & 1) == 0 )
  {
    sub_1C21E38(&BattleMoviePlayer_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16691/*"_ZWriteMode"*/);
    sub_1C21E38(&StringLiteral_16690/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)sub_1C21E38(&StringLiteral_16657/*"_Transparency"*/);
    byte_4BDECAF = 1;
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
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.num, 0LL, v2, v3, v4, v5, v6, v7);
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
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.num, 0LL, v2, v3, v4, v5, v6, v7);
      if ( !v8->fields._pastError_5__5 )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v8->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16690/*"_ZTestMode"*/, 4, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v8->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16657/*"_Transparency"*/, 1.0, 0LL);
      }
      v8->fields._movieMaterial_5__2 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._movieMaterial_5__2, 0LL, v96, v97, v98, v99, v100, v101);
      v8->fields._movInfo_5__3 = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._movInfo_5__3, 0LL, v102, v103, v104, v105, v106, v107);
      goto LABEL_113;
    }
    movInfo_5__3 = v8->fields._movInfo_5__3;
    if ( !movInfo_5__3 )
      goto LABEL_121;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v8->fields._movieMaterial_5__2;
    if ( !this )
      goto LABEL_121;
    v41 = 1.0 - (float)(v8->fields._restTime_5__6 / movInfo_5__3->fields.fadeRestTime);
    v42 = fminf(v41, 1.0);
    v43 = v41 < 0.0;
    v44 = 0.0;
    if ( !v43 )
      v44 = v42;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16657/*"_Transparency"*/, v44, 0LL);
    v45 = v8->fields._movInfo_5__3;
    if ( !v45 )
      goto LABEL_121;
    restTime_5__6 = v8->fields._restTime_5__6;
    timeScale = 1.0;
    if ( !v45->fields.ignoreTimeScale )
    {
      timeScale = UnityEngine_Time__get_timeScale(0LL);
      v45 = v8->fields._movInfo_5__3;
      if ( !v45 )
        goto LABEL_121;
    }
    v8->fields._restTime_5__6 = restTime_5__6 - (float)(timeScale * v45->fields.playSpeed);
    if ( _4__this->fields.KeepStartPosition )
    {
      if ( v45->fields._UsePlayMakerShakeParam_k__BackingField )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        }
        monitor = (float *)this[2].monitor;
        perf = _4__this->fields.perf;
        v50 = monitor[6];
        v51 = *((_QWORD *)monitor + 2);
        _4__this->fields.startPanelPosition.fields.z = v50;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v51;
        if ( !perf )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v52 = _4__this->fields.perf;
        if ( !v52 )
          goto LABEL_121;
        if ( !this )
          goto LABEL_121;
        v115 = UnityEngine_Transform__InverseTransformVector(
                 (UnityEngine_Transform_o *)this,
                 v52->fields._CurrentShakeWidth_k__BackingField,
                 0LL);
        x = v115.fields.x;
        y = v115.fields.y;
        z = v115.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
        if ( !_4__this->fields.currController )
          goto LABEL_121;
        v56 = (char)this;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)_4__this->fields.currController,
                                                                0LL);
        v57 = _4__this->fields.startPanelPosition.fields.x;
        v58 = _4__this->fields.startPanelPosition.fields.y;
        v59 = _4__this->fields.startPanelPosition.fields.z;
        v60 = this;
        if ( (v56 & 1) == 0 )
        {
          if ( !this )
            goto LABEL_121;
          v122.fields.z = z + v59;
          v122.fields.y = y + v58;
          v122.fields.x = x + v57;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v122, 0LL);
          goto LABEL_103;
        }
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !v60 )
          goto LABEL_121;
        v61 = *((float *)this[2].monitor + 3) / *((float *)this[2].monitor + 2);
        v116.fields.z = (float)(v59 * v61) + (float)(z * v61);
        v116.fields.y = (float)(v58 * v61) + (float)(y * v61);
        v116.fields.x = (float)(v57 * v61) + (float)(x * v61);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v60, v116, 0LL);
      }
      else
      {
        v69 = _4__this->fields.perf;
        if ( !v69 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v69->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v70 = this;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
        position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
        position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
        *(UnityEngine_Vector3_o *)&v71 = UnityEngine_Transform__InverseTransformVector(
                                           (UnityEngine_Transform_o *)v70,
                                           position,
                                           0LL);
        v74 = fminf(v73, 1.0);
        if ( v73 < -0.3 )
          v75 = -0.3;
        else
          v75 = v74;
        v119 = UnityEngine_Transform__TransformDirection(
                 (UnityEngine_Transform_o *)v70,
                 *(UnityEngine_Vector3_o *)&v71,
                 0LL);
        v76 = v119.fields.x;
        v77 = v119.fields.y;
        v78 = v119.fields.z;
        IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
        v80 = BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          v80 = BattleMoviePlayer_TypeInfo;
        }
        static_fields = v80->static_fields;
        if ( !IsBossCamera )
        {
          *(UnityEngine_Vector3_o *)&v109 = UnityEngine_Transform__TransformPoint(
                                              (UnityEngine_Transform_o *)v70,
                                              static_fields->BasePanelPosition,
                                              0LL);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_121;
          v112 = v109;
          v113 = v110;
          v114 = v111;
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !this )
            goto LABEL_121;
          v123.fields.z = v114 - v78;
          v123.fields.y = v113 - v77;
          v123.fields.x = v112 - v76;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v123, 0LL);
          goto LABEL_103;
        }
        v120.fields.z = static_fields->BossPanelDist;
        v120.fields.x = 0.0;
        v120.fields.y = 0.0;
        *(UnityEngine_Vector3_o *)&v82 = UnityEngine_Transform__TransformPoint(
                                           (UnityEngine_Transform_o *)v70,
                                           v120,
                                           0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        v85 = v82;
        v86 = v83;
        v87 = v84;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v88 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v121.fields.z = v87 - (float)(v78 * v88);
        v121.fields.y = v86 - (float)(v77 * v88);
        v121.fields.x = v85 - (float)(v76 * v88);
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v121, 0LL);
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v68 = BattleMoviePlayer_TypeInfo;
    }
    else
    {
      if ( !BattleMoviePlayer__IsBossCamera(_4__this, 0LL) )
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
        v91 = _4__this->fields.startPanelScale.fields.y;
        v90 = _4__this->fields.startPanelScale.fields.z;
        v92 = _4__this->fields.startPanelScale.fields.x;
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
      v63 = (float *)this[2].monitor;
      v65 = v63[5];
      v64 = v63[6];
      v66 = v63[4];
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this->fields.currController,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v67 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
          / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
      v117.fields.z = v64 * v67;
      v117.fields.y = v65 * v67;
      v117.fields.x = v66 * v67;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v117, 0LL);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v68 = BattleMoviePlayer_TypeInfo;
    }
    v89 = v68->static_fields->BossPanelDist / v68->static_fields->BaseDist;
    v90 = v89 * _4__this->fields.startPanelScale.fields.z;
    v91 = v89 * _4__this->fields.startPanelScale.fields.y;
    v92 = v89 * _4__this->fields.startPanelScale.fields.x;
LABEL_102:
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v92, 0LL);
LABEL_103:
    if ( v8->fields._restTime_5__6 > 0.0 )
    {
      v8->fields.__2__current = 0LL;
      p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
      sub_1C21DDC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
          (const MethodInfo_36505DC *)Method_System_Collections_Generic_List_GameObject__Remove__);
        v108 = (UnityEngine_Object_o *)v8->fields.movieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70869612(v108, 0LL);
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
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v8->fields.movieObj;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_121;
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      v8->fields._movieMaterial_5__2 = material;
      p_movieMaterial_5__2 = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o **)&v8->fields._movieMaterial_5__2;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&v8->fields._movieMaterial_5__2,
        (int64_t)material,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_121;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v8->fields.num,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v8->fields._movInfo_5__3 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      v22 = &v8->fields._movInfo_5__3;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._movInfo_5__3, (int64_t)Item, v23, v24, v25, v26, v27, v28);
      v29 = v8->fields._movInfo_5__3;
      if ( !v29 )
        goto LABEL_121;
      validTime = v29->fields.validTime;
      if ( validTime <= 0.0 )
      {
        v31 = _4__this->fields.currController;
        if ( !v31 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v31->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)CriMana_Player__get_movieInfo(
                                                                (CriMana_Player_o *)this,
                                                                0LL);
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
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)v33->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__45_o *)CriMana_Player__GetDisplayedFrameNo(
                                                              (CriMana_Player_o *)this,
                                                              0LL);
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
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16691/*"_ZWriteMode"*/, 0, 0LL);
        }
        this = *p_movieMaterial_5__2;
        if ( !*p_movieMaterial_5__2 )
LABEL_121:
          sub_1C22094(this, method);
        if ( _4__this->fields.OverrideZDepth )
          v62 = 8;
        else
          v62 = 4;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16690/*"_ZTestMode"*/, v62, 0LL);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleMoviePlayer__PlayMovieFadeOut_d__45_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct CriManaMovieController_o **p_currController; // x21
  UnityEngine_Object_o *v18; // x22
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **p_movInfo_5__2; // x22
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct BattleMoviePlayer_MovieInfo_o *v27; // x8
  CriMana_Player_o *player_k__BackingField; // x23
  float v29; // s0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  struct BattleMoviePlayer_MovieInfo_o *v36; // x8
  PartyOrganizationUtility_o *v37; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovie_d__44_o *v39; // x22
  BattleMoviePlayer__PlayMovie_d__44_o *v40; // x21
  BattleMoviePlayer__PlayMovie_d__44_o *v41; // x22
  float v42; // s0
  int32_t v43; // w2
  float fadeinTime_5__5; // s0
  struct CriManaMovieController_o *v45; // x8
  struct BattleMoviePlayer_MovieInfo_o *v46; // x8
  float skipFrame_5__4; // s8
  float timeScale; // s0
  struct CriManaMovieController_o *v49; // x9
  struct BattleMoviePlayer_MovieInfo_o *v50; // x8
  BattleMoviePlayer__PlayMovie_d__44_o *v51; // x21
  float *v52; // x8
  float v53; // s0
  struct CriManaMovieController_o *v54; // x8
  struct CriManaMovieController_o *v55; // x8
  unsigned int num; // w9
  _BOOL4 KeepStartPosition; // w8
  struct BattlePerformance_o *v58; // x8
  struct BattleMoviePlayer_MovieInfo_o *v59; // x8
  BattleMoviePlayer__PlayMovie_d__44_o *v60; // x21
  int32_t v61; // w2
  struct BattleMoviePlayer_MovieInfo_o *v62; // x8
  struct CriManaMovieController_o *v63; // x8
  struct BattleMoviePlayer_MovieInfo_o *v64; // x8
  float v65; // s0
  PartyOrganizationUtility_o *p__2__current; // x19
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  struct BattleMoviePlayer_MovieInfo_o *v68; // x8
  struct CriManaMovieController_o *currController; // x8
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  float effectTime_5__7; // s0
  struct BattlePerformance_o *perf; // x8
  struct BattleMoviePlayer_MovieInfo_o *v78; // x9
  float *v79; // x9
  float v80; // s8
  float v81; // s9
  float v82; // s10
  float v83; // s0
  BattleMoviePlayer_c *v84; // x8
  __int64 v85; // x9
  float v86; // w10
  __int64 v87; // x9
  struct BattlePerformance_o *v88; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  char v92; // w22
  float v93; // s11
  float v94; // s12
  float v95; // s13
  BattleMoviePlayer__PlayMovie_d__44_o *v96; // x21
  float v97; // s0
  BattleMoviePlayer__PlayMovie_d__44_o *v98; // x21
  int v99; // s0
  float v101; // s2
  float v102; // s4
  float v103; // s2
  float v104; // s8
  float v105; // s9
  float v106; // s10
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v108; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v110; // s0
  float v111; // s1
  float v112; // s2
  float v113; // s11
  float v114; // s12
  float v115; // s13
  float v116; // s0
  float v117; // s0
  float v118; // s2
  float v119; // s1
  float v120; // s0
  float v121; // s0
  float v122; // s1
  float v123; // s2
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

  v8 = this;
  if ( (byte_4BDECAE & 1) == 0 )
  {
    sub_1C21E38(&BattleMoviePlayer_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_16691/*"_ZWriteMode"*/);
    sub_1C21E38(&StringLiteral_16690/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovie_d__44_o *)sub_1C21E38(&StringLiteral_16657/*"_Transparency"*/);
    byte_4BDECAE = 1;
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
        sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._movInfo_5__2, 0LL, v2, v3, v4, v5, v6, v7);
        return 0;
      }
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_181;
      v39 = this;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                       (UnityEngine_Renderer_o *)this,
                                                       0LL);
      v40 = this;
      if ( v8->fields._fadeinTime_5__5 > 0.0 )
      {
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v39, 1, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                         (UnityEngine_Renderer_o *)v39,
                                                         0LL);
        if ( !_4__this->fields.baseMat )
          goto LABEL_181;
        v41 = this;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Material__get_renderQueue(
                                                         _4__this->fields.baseMat,
                                                         0LL);
        if ( !v41 )
          goto LABEL_181;
        UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v41, (int32_t)this, 0LL);
        v42 = (float)v8->fields._currentFrame_5__3 / v8->fields._fadeinTime_5__5;
        if ( v42 >= 1.0 )
        {
          if ( !v40 )
            goto LABEL_181;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v40, (System_String_o *)StringLiteral_16690/*"_ZTestMode"*/, 4, 0LL);
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v40,
            (System_String_o *)StringLiteral_16657/*"_Transparency"*/,
            0.0,
            0LL);
          movInfo_5__2 = v8->fields._movInfo_5__2;
          if ( !movInfo_5__2 )
            goto LABEL_181;
          if ( movInfo_5__2->fields.cameraType == 1 )
            BattleMoviePlayer__ShowBg(_4__this, 0, 0LL);
          v8->fields._fadeinTime_5__5 = 0.0;
        }
        else
        {
          if ( !v40 )
            goto LABEL_181;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v40,
            (System_String_o *)StringLiteral_16657/*"_Transparency"*/,
            1.0 - v42,
            0LL);
          if ( _4__this->fields.OverrideZDepth )
            v43 = 8;
          else
            v43 = 4;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v40, (System_String_o *)StringLiteral_16690/*"_ZTestMode"*/, v43, 0LL);
        }
      }
      v68 = v8->fields._movInfo_5__2;
      if ( !v68 )
        goto LABEL_181;
      if ( v68->fields.isBackMovie )
      {
        if ( !v40 )
          goto LABEL_181;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)v40, (System_String_o *)StringLiteral_16691/*"_ZWriteMode"*/, 0, 0LL);
      }
      if ( _4__this->fields._ForceFadeout_k__BackingField )
        return 0;
      currController = _4__this->fields.currController;
      if ( !currController
        || (this = (BattleMoviePlayer__PlayMovie_d__44_o *)currController->fields._player_k__BackingField) == 0LL )
      {
LABEL_181:
        sub_1C22094(this, method);
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
        sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.num, 0LL, v70, v71, v72, v73, v74, v75);
      }
      if ( _4__this->fields.KeepStartPosition )
      {
        perf = _4__this->fields.perf;
        if ( !perf )
          goto LABEL_181;
        v78 = v8->fields._movInfo_5__2;
        if ( perf->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          if ( !v78 )
            goto LABEL_181;
          v78->fields._UsePlayMakerShakeParam_k__BackingField = 1;
        }
        else if ( !v78 )
        {
          goto LABEL_181;
        }
        if ( v78->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer_TypeInfo;
            perf = _4__this->fields.perf;
          }
          v85 = *(_QWORD *)&this[1].fields._isLoopMovie_5__9;
          v86 = *(float *)(v85 + 24);
          v87 = *(_QWORD *)(v85 + 16);
          _4__this->fields.startPanelPosition.fields.z = v86;
          *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v87;
          if ( !perf )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          v88 = _4__this->fields.perf;
          if ( !v88 )
            goto LABEL_181;
          if ( !this )
            goto LABEL_181;
          v130 = UnityEngine_Transform__InverseTransformVector(
                   (UnityEngine_Transform_o *)this,
                   v88->fields._CurrentShakeWidth_k__BackingField,
                   0LL);
          x = v130.fields.x;
          y = v130.fields.y;
          z = v130.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
          if ( !_4__this->fields.currController )
            goto LABEL_181;
          v92 = (char)this;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)_4__this->fields.currController,
                                                           0LL);
          v93 = _4__this->fields.startPanelPosition.fields.x;
          v94 = _4__this->fields.startPanelPosition.fields.y;
          v95 = _4__this->fields.startPanelPosition.fields.z;
          v96 = this;
          if ( (v92 & 1) == 0 )
          {
            if ( this )
            {
              v136.fields.z = z + v95;
              v136.fields.y = y + v94;
              v136.fields.x = x + v93;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v136, 0LL);
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
          if ( !v96 )
            goto LABEL_181;
          v97 = *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 12LL)
              / *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 8LL);
          v131.fields.z = (float)(v95 * v97) + (float)(z * v97);
          v131.fields.y = (float)(v94 * v97) + (float)(y * v97);
          v131.fields.x = (float)(v93 * v97) + (float)(x * v97);
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v96, v131, 0LL);
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
          v98 = this;
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
          position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
          position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
          position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
          *(UnityEngine_Vector3_o *)&v99 = UnityEngine_Transform__InverseTransformVector(
                                             (UnityEngine_Transform_o *)v98,
                                             position,
                                             0LL);
          v102 = fminf(v101, 1.0);
          if ( v101 < -0.3 )
            v103 = -0.3;
          else
            v103 = v102;
          v133 = UnityEngine_Transform__TransformDirection(
                   (UnityEngine_Transform_o *)v98,
                   *(UnityEngine_Vector3_o *)&v99,
                   0LL);
          v104 = v133.fields.x;
          v105 = v133.fields.y;
          v106 = v133.fields.z;
          IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
          v108 = BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            v108 = BattleMoviePlayer_TypeInfo;
          }
          static_fields = v108->static_fields;
          if ( !IsBossCamera )
          {
            *(UnityEngine_Vector3_o *)&v121 = UnityEngine_Transform__TransformPoint(
                                                (UnityEngine_Transform_o *)v98,
                                                static_fields->BasePanelPosition,
                                                0LL);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
            if ( this )
            {
              v124 = v121;
              v125 = v122;
              v126 = v123;
              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( this )
              {
                v137.fields.z = v126 - v106;
                v137.fields.y = v125 - v105;
                v137.fields.x = v124 - v104;
                UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v137, 0LL);
                goto LABEL_106;
              }
            }
            goto LABEL_181;
          }
          v134.fields.z = static_fields->BossPanelDist;
          v134.fields.x = 0.0;
          v134.fields.y = 0.0;
          *(UnityEngine_Vector3_o *)&v110 = UnityEngine_Transform__TransformPoint(
                                              (UnityEngine_Transform_o *)v98,
                                              v134,
                                              0LL);
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_181;
          v113 = v110;
          v114 = v111;
          v115 = v112;
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_181;
          v116 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
               / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
          v135.fields.z = v115 - (float)(v106 * v116);
          v135.fields.y = v114 - (float)(v105 * v116);
          v135.fields.x = v113 - (float)(v104 * v116);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v135, 0LL);
        }
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v84 = BattleMoviePlayer_TypeInfo;
      }
      else
      {
        if ( !BattleMoviePlayer__IsBossCamera(_4__this, 0LL) )
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
          v119 = _4__this->fields.startPanelScale.fields.y;
          v118 = _4__this->fields.startPanelScale.fields.z;
          v120 = _4__this->fields.startPanelScale.fields.x;
LABEL_177:
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v120, 0LL);
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
        v79 = *(float **)&this[1].fields._isLoopMovie_5__9;
        v81 = v79[5];
        v80 = v79[6];
        v82 = v79[4];
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)_4__this->fields.currController,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v83 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v129.fields.z = v80 * v83;
        v129.fields.y = v81 * v83;
        v129.fields.x = v82 * v83;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v129, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v84 = BattleMoviePlayer_TypeInfo;
      }
      v117 = v84->static_fields->BossPanelDist / v84->static_fields->BaseDist;
      v118 = v117 * _4__this->fields.startPanelScale.fields.z;
      v119 = v117 * _4__this->fields.startPanelScale.fields.y;
      v120 = v117 * _4__this->fields.startPanelScale.fields.x;
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
                                                         (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_181;
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
      }
      v45 = _4__this->fields.currController;
      if ( !v45 )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v45->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      v46 = v8->fields._movInfo_5__2;
      v8->fields._currentFrame_5__3 = (int)this;
      if ( !v46 )
        goto LABEL_181;
      skipFrame_5__4 = v8->fields._skipFrame_5__4;
      if ( v46->fields.ignoreTimeScale )
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
      v49 = _4__this->fields.currController;
      if ( v49 )
      {
        v50 = v8->fields._movInfo_5__2;
        if ( v50 )
        {
          this = (BattleMoviePlayer__PlayMovie_d__44_o *)v49->fields._player_k__BackingField;
          if ( this )
          {
            CriMana_Player__Loop((CriMana_Player_o *)this, v50->fields.loop, 0LL);
            this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
            if ( this )
            {
              this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
              if ( this )
              {
                this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                                 (UnityEngine_Renderer_o *)this,
                                                                 0LL);
                if ( _4__this->fields.baseMat )
                {
                  v51 = this;
                  this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Material__get_renderQueue(
                                                                   _4__this->fields.baseMat,
                                                                   0LL);
                  if ( v51 )
                  {
                    UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v51, (int32_t)this, 0LL);
                    if ( v8->fields._fadeinTime_5__5 > 0.0 )
                    {
                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                      if ( !this )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)this,
                                                                       (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                      if ( !this )
                        goto LABEL_181;
                      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
                    }
                    v52 = (float *)v8->fields._movInfo_5__2;
                    if ( !v52 )
                      goto LABEL_181;
                    v53 = v52[8];
                    if ( v53 <= 0.0 )
                    {
                      v54 = _4__this->fields.currController;
                      if ( !v54 )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)v54->fields._player_k__BackingField;
                      if ( !this )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__get_movieInfo(
                                                                       (CriMana_Player_o *)this,
                                                                       0LL);
                      if ( this )
                      {
                        v55 = _4__this->fields.currController;
                        if ( !v55 )
                          goto LABEL_181;
                        this = (BattleMoviePlayer__PlayMovie_d__44_o *)v55->fields._player_k__BackingField;
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
                      v52 = (float *)v8->fields._movInfo_5__2;
                      if ( !v52 )
                        goto LABEL_181;
                      v53 = (float)num;
                    }
                    v8->fields._fadeoutTime_5__6 = fmaxf(v53 - v52[10], 0.0);
                    v8->fields._effectTime_5__7 = fmaxf(v53 - v52[14], 0.0);
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
                              v58 = _4__this->fields.perf;
                              if ( !v58 )
                                goto LABEL_181;
                              this = (BattleMoviePlayer__PlayMovie_d__44_o *)v58->fields.actorcamera;
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
                                                                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                              if ( this )
                              {
                                this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Renderer__get_material(
                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                 0LL);
                                v59 = v8->fields._movInfo_5__2;
                                if ( v59 )
                                {
                                  v60 = this;
                                  if ( v59->fields.cameraType == 1 )
                                    BattleMoviePlayer__ShowBg(_4__this, v8->fields._fadeinTime_5__5 > 0.0, 0LL);
                                  if ( v8->fields._fadeinTime_5__5 <= 0.0 )
                                  {
                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.currController;
                                    if ( !this )
                                      goto LABEL_181;
                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)UnityEngine_Component__GetComponent_object_(
                                                                                     (UnityEngine_Component_o *)this,
                                                                                     (const MethodInfo_2FA68A8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                    if ( !this )
                                      goto LABEL_181;
                                    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 1, 0LL);
                                  }
                                  else
                                  {
                                    if ( !v60 )
                                      goto LABEL_181;
                                    if ( _4__this->fields.OverrideZDepth )
                                      v61 = 8;
                                    else
                                      v61 = 4;
                                    UnityEngine_Material__SetInt(
                                      (UnityEngine_Material_o *)v60,
                                      (System_String_o *)StringLiteral_16690/*"_ZTestMode"*/,
                                      v61,
                                      0LL);
                                    UnityEngine_Material__SetFloat(
                                      (UnityEngine_Material_o *)v60,
                                      (System_String_o *)StringLiteral_16657/*"_Transparency"*/,
                                      1.0,
                                      0LL);
                                  }
                                  v62 = v8->fields._movInfo_5__2;
                                  if ( !v62 )
                                    goto LABEL_181;
                                  if ( v62->fields.isBackMovie )
                                  {
                                    if ( !v60 )
                                      goto LABEL_181;
                                    UnityEngine_Material__SetInt(
                                      (UnityEngine_Material_o *)v60,
                                      (System_String_o *)StringLiteral_16691/*"_ZWriteMode"*/,
                                      0,
                                      0LL);
                                  }
                                  v63 = _4__this->fields.currController;
                                  if ( v63 )
                                  {
                                    this = (BattleMoviePlayer__PlayMovie_d__44_o *)v63->fields._player_k__BackingField;
                                    if ( this )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__44_o *)CriMana_Player__GetDisplayedFrameNo(
                                                                                       (CriMana_Player_o *)this,
                                                                                       0LL);
                                      v64 = v8->fields._movInfo_5__2;
                                      v8->fields._currentFrame_5__3 = (int)this;
                                      if ( v64 )
                                      {
                                        v65 = 1.0;
                                        if ( v64->fields.ignoreTimeScale
                                          || (v65 = UnityEngine_Time__get_timeScale(0LL),
                                              (v64 = v8->fields._movInfo_5__2) != 0LL) )
                                        {
                                          v8->fields._playSpeed_5__8 = v65 * v64->fields.playSpeed;
                                          v8->fields._isLoopMovie_5__9 = v64->fields.loop;
LABEL_106:
                                          if ( v8->fields._isLoopMovie_5__9
                                            || (float)((float)(v8->fields._skipFrame_5__4
                                                             + (float)v8->fields._currentFrame_5__3)
                                                     + v8->fields._playSpeed_5__8) < v8->fields._fadeoutTime_5__6 )
                                          {
                                            v8->fields.__2__current = 0LL;
                                            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
                                            sub_1C21DDC(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
                                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !_4__this )
        goto LABEL_181;
      _4__this->fields.currController = (struct CriManaMovieController_o *)this;
      p_currController = &_4__this->fields.currController;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&_4__this->fields.currController,
        (int64_t)this,
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
      if ( !UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
        return 0;
      this = (BattleMoviePlayer__PlayMovie_d__44_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_181;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v8->fields.num,
               (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v8->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      p_movInfo_5__2 = &v8->fields._movInfo_5__2;
      sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._movInfo_5__2, (int64_t)Item, v21, v22, v23, v24, v25, v26);
      if ( !*p_currController )
        goto LABEL_181;
      v27 = *p_movInfo_5__2;
      if ( !*p_movInfo_5__2 )
        goto LABEL_181;
      player_k__BackingField = (*p_currController)->fields._player_k__BackingField;
      v29 = 1.0;
      if ( !v27->fields.ignoreTimeScale )
      {
        v29 = UnityEngine_Time__get_timeScale(0LL);
        v27 = *p_movInfo_5__2;
        if ( !*p_movInfo_5__2 )
          goto LABEL_181;
      }
      if ( !player_k__BackingField )
        goto LABEL_181;
      CriMana_Player__SetSpeed(player_k__BackingField, v29 * v27->fields.playSpeed, 0LL);
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
      v36 = v8->fields._movInfo_5__2;
      *(_QWORD *)&v8->fields._currentFrame_5__3 = (unsigned int)this;
      if ( !v36 )
        goto LABEL_181;
      v8->fields._fadeinTime_5__5 = v36->fields.fadeinTime;
      if ( ((unsigned int)this & 0x80000000) != 0 )
      {
LABEL_23:
        v8->fields.__2__current = 0LL;
        v37 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(v37, 0LL, v30, v31, v32, v33, v34, v35);
        result = 1;
        *(_DWORD *)&v37[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleMoviePlayer__PlayMovie_d__44_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  BattleMoviePlayer__StartMovie_d__35_o *v8; // x19
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x8
  System_Collections_IEnumerator_o *v12; // x0
  UnityEngine_Coroutine_o *started; // x0
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  BattlePerformance_o *perf; // x0
  int v22; // w8
  int64_t v23; // x1
  int64_t nextMovieObj; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_IEnumerator_o *v37; // x0
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v38; // x8
  int32_t v39; // w1
  UnityEngine_Object_o *v40; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v41; // x9
  int64_t v42; // x1
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v55; // x8
  int size; // w8
  System_Collections_IEnumerator_o *v57; // x0
  System_Collections_Generic_List_T__o *v58; // x22
  System_Collections_IEnumerator_o *v59; // x21
  BattleMoviePlayer___c_c *v60; // x8
  System_Func_object__bool__o *_9__35_0; // x23
  Il2CppObject *v62; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  UnityEngine_Coroutine_o *v70; // x0
  PartyOrganizationUtility_o *v71; // x19
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int v78; // w8
  System_Collections_IEnumerator_o *v79; // x0
  UnityEngine_Coroutine_o *v80; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7

  v8 = this;
  if ( (byte_4BDECB0 & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1C21E38(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_BattleMoviePlayer___c__StartMovie_b__35_0__);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)sub_1C21E38(&BattleMoviePlayer___c_TypeInfo);
    byte_4BDECB0 = 1;
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
        v12 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, 0, 0LL);
        started = UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v12, 0LL);
        v8->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1C21DDC(p__2__current, (int64_t)started, v15, v16, v17, v18, v19, v20);
        LOBYTE(perf) = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
      BattleMoviePlayer__Dispose(_4__this, 0LL);
      goto LABEL_39;
    default:
      goto LABEL_41;
  }
  while ( 1 )
  {
    if ( !_4__this )
      goto LABEL_45;
    v41 = _4__this->fields.MovieInfoList;
    if ( !v41 )
      goto LABEL_45;
    if ( v22 >= v41->fields._size - 1 || _4__this->fields._ForceFadeout_k__BackingField )
    {
      v42 = (int64_t)_4__this->fields.currMovieObj;
      _4__this->fields.pastMovieObj = (struct UnityEngine_GameObject_o *)v42;
      sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.pastMovieObj, v42, v2, v3, v4, v5, v6, v7);
      _4__this->fields.currMovieObj = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.currMovieObj, 0LL, v43, v44, v45, v46, v47, v48);
      _4__this->fields.nextMovieObj = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.nextMovieObj, 0LL, v49, v50, v51, v52, v53, v54);
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v55 = _4__this->fields.MovieInfoList;
        if ( !v55 )
LABEL_45:
          sub_1C22094(this, method);
        size = v55->fields._size;
        if ( size >= 1 )
        {
          v57 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, size - 1, 0, 0LL);
          v58 = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
          v59 = v57;
          v60 = BattleMoviePlayer___c_TypeInfo;
          if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
            v60 = BattleMoviePlayer___c_TypeInfo;
          }
          _9__35_0 = (System_Func_object__bool__o *)v60->static_fields->__9__35_0;
          if ( !_9__35_0 )
          {
            if ( !v60->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v60);
              v60 = BattleMoviePlayer___c_TypeInfo;
            }
            v62 = (Il2CppObject *)v60->static_fields->__9;
            _9__35_0 = (System_Func_object__bool__o *)sub_1C22084(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__35_0, v62, Method_BattleMoviePlayer___c__StartMovie_b__35_0__, 0LL);
            static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
            static_fields->__9__35_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__35_0;
            sub_1C21DDC(
              (PartyOrganizationUtility_o *)&static_fields->__9__35_0,
              (int64_t)_9__35_0,
              v64,
              v65,
              v66,
              v67,
              v68,
              v69);
          }
          if ( BasicHelper__Any_object_(
                 v58,
                 (System_Func_T__bool__o *)_9__35_0,
                 (const MethodInfo_2F9AD70 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
          {
            BattleMoviePlayer__ShowBg(_4__this, 1, 0LL);
          }
          v70 = UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v59, 0LL);
          v8->fields.__2__current = (Il2CppObject *)v70;
          v71 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
          sub_1C21DDC(v71, (int64_t)v70, v72, v73, v74, v75, v76, v77);
          v78 = 3;
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
    v23 = (int64_t)_4__this->fields.currMovieObj;
    _4__this->fields.pastMovieObj = (struct UnityEngine_GameObject_o *)v23;
    sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.pastMovieObj, v23, v2, v3, v4, v5, v6, v7);
    nextMovieObj = (int64_t)_4__this->fields.nextMovieObj;
    _4__this->fields.currMovieObj = (struct UnityEngine_GameObject_o *)nextMovieObj;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&_4__this->fields.currMovieObj,
      nextMovieObj,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    _4__this->fields.nextMovieObj = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.nextMovieObj, 0LL, v31, v32, v33, v34, v35, v36);
    v37 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, v8->fields._i_5__2, 0, 0LL);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)UnityEngine_MonoBehaviour__StartCoroutine_70854884(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      v37,
                                                      0LL);
    v38 = _4__this->fields.MovieInfoList;
    if ( !v38 )
      goto LABEL_45;
    v39 = v8->fields._i_5__2 + 2;
    if ( v39 < v38->fields._size )
      BattleMoviePlayer__GetMoviePanelAdd(_4__this, v39, 0LL);
    v40 = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__StartMovie_d__35_o *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_23:
    v22 = v8->fields._i_5__2 + 1;
    v8->fields._i_5__2 = v22;
  }
  v79 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, v8->fields._i_5__2 + 1, 0LL);
  v80 = UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, v79, 0LL);
  v8->fields.__2__current = (Il2CppObject *)v80;
  v71 = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
  sub_1C21DDC(v71, (int64_t)v80, v81, v82, v83, v84, v85, v86);
  v78 = 2;
LABEL_43:
  *(_DWORD *)&v71[-1].fields._IsQuestStartMenuMode_k__BackingField = v78;
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_BattleMoviePlayer__StartMovie_d__35_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDECAB & 1) == 0 )
  {
    sub_1C21E38(&BattleMoviePlayer___c_TypeInfo);
    byte_4BDECAB = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(BattleMoviePlayer___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleMoviePlayer___c_TypeInfo->static_fields->__9 = (struct BattleMoviePlayer___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)BattleMoviePlayer___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_1C22094(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___FadeoutDeleteMovie_b__38_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___PauseMovie_b__36_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___StartMovie_b__35_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C22094(this, 0LL);
  return x->fields.cameraType == 1;
}