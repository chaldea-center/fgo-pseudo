void __fastcall BattleMoviePlayer___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct BattleMoviePlayer_StaticFields *static_fields; // x8

  if ( (byte_4A3056C & 1) == 0 )
  {
    sub_1B761C0(&BattleMoviePlayer_TypeInfo, v1);
    byte_4A3056C = 1;
  }
  static_fields = BattleMoviePlayer_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BackMovieScale = xmmword_BADDF0;
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

  if ( (byte_4A3056B & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject___ctor__, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__, v3);
    sub_1B761C0(&System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo, v4);
    sub_1B761C0(&System_Collections_Generic_List_GameObject__TypeInfo, v5);
    byte_4A3056B = 1;
  }
  this->fields.KeepStartPosition = 1;
  v6 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
  this->fields.MovieInfoList = (struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *)v6;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.MovieInfoList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B7640C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34D6DA0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ObjList = (struct System_Collections_Generic_List_GameObject__o *)v9;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.ObjList, (int32_t)v9, v10, v11);
  if ( !byte_4A28BB1 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v12);
    byte_4A28BB1 = 1;
  }
  v13 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.startPanelPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.startPanelPosition.fields.z = z;
  if ( byte_4A28BB6 )
  {
    v16 = 0;
  }
  else
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v12);
    v13 = UnityEngine_Vector3_TypeInfo;
    byte_4A28BB6 = 1;
    v16 = byte_4A28BB1 == 0;
  }
  v17 = v13->static_fields;
  v18 = v17->oneVector.fields.z;
  *(_QWORD *)&this->fields.startPanelScale.fields.x = *(_QWORD *)&v17->oneVector.fields.x;
  this->fields.startPanelScale.fields.z = v18;
  if ( v16 )
  {
    sub_1B761C0(&UnityEngine_Vector3_TypeInfo, v12);
    v13 = UnityEngine_Vector3_TypeInfo;
    byte_4A28BB1 = 1;
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
  UnityEngine_Transform_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
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
  int32_t v31; // w3
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
  int32_t v43; // w3
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
  if ( (byte_4A3055F & 1) == 0 )
  {
    sub_1B761C0(&BattleMoviePlayer_TypeInfo, movieInfo);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_BattlePerformance___, v7);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___, v8);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v9);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v10);
    sub_1B761C0(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___, v11);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__Add__, v12);
    sub_1B761C0(&UnityEngine_Material_TypeInfo, v13);
    sub_1B761C0(&Method_UnityEngine_Object_Instantiate_GameObject____75989608, v14);
    this = (BattleMoviePlayer_o *)sub_1B761C0(&UnityEngine_Object_TypeInfo, v15);
    byte_4A3055F = 1;
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
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__49174716(
                                    moviePrefab,
                                    transform,
                                    (const MethodInfo_2EE58BC *)Method_UnityEngine_Object_Instantiate_GameObject____75989608);
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
        *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      ObjList->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v25;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v25, v30, v31);
    }
    if ( !v25 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v25,
           &v61,
           (const MethodInfo_2EB2C48 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)v61;
      if ( !v61 )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v61, v6->fields.perf, 0, 0LL);
    }
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v25, 11, 0LL);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v25,
                                    (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
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
                                    (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    if ( !this )
      goto LABEL_63;
    v18 = *(UnityEngine_Transform_o **)&this[1].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__49174716(
                                    v17,
                                    v18,
                                    (const MethodInfo_2EE58BC *)Method_UnityEngine_Object_Instantiate_GameObject____75989608);
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
        *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &v22->obj.klass + v24;
      v21->fields._size = v24 + 1;
      v26[4] = (Il2CppClass *)v25;
      sub_1B76164((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v25, v19, v20);
    }
    if ( !v25 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v25,
           &component,
           (const MethodInfo_2EB2C48 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)component;
      if ( !component )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)component, v6->fields.perf, 1, 0LL);
    }
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v25,
                                    (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
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
                                    (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !this )
      goto LABEL_63;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
    v41 = (UnityEngine_Material_o *)sub_1B7640C(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_69150768(v41, material, 0LL);
    *p_baseMat = v41;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v6->fields.baseMat, (int32_t)v41, v42, v43);
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
    sub_1B7641C(this, movieInfo);
  }
LABEL_59:
  v57 = *p_baseMat;
  v58 = (UnityEngine_Material_o *)sub_1B7640C(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_69150768(v58, v57, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v25,
                                  (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v58, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v25,
                                  (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
  if ( !this )
    goto LABEL_63;
  CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v58, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v25, 1, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v25,
                                  (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
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
  int32_t v49; // w3
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_List_UnityEvent__o *v54; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_float__o *v55; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_List_int__o *v56; // [xsp+20h] [xbp-D0h]
  BattleMoviePlayer_o *v59; // [xsp+38h] [xbp-B8h]
  int32_t cama; // [xsp+44h] [xbp-ACh]
  UnityEngine_Events_UnityEvent_o *eff; // [xsp+48h] [xbp-A8h]
  System_String_o *patha; // [xsp+58h] [xbp-98h]

  v59 = this;
  if ( (byte_4A3056A & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__, type);
    sub_1B761C0(&Method_System_Collections_Generic_List_float__get_Count__, v21);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Count__, v22);
    sub_1B761C0(&Method_System_Collections_Generic_List_UnityEvent__get_Count__, v23);
    sub_1B761C0(&Method_System_Collections_Generic_List_string__get_Count__, v24);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Count__, v25);
    sub_1B761C0(&Method_System_Collections_Generic_List_string__get_Item__, v26);
    sub_1B761C0(&Method_System_Collections_Generic_List_UnityEvent__get_Item__, v27);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__, v28);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Item__, v29);
    sub_1B761C0(&Method_System_Collections_Generic_List_float__get_Item__, v30);
    sub_1B761C0(&BattleMoviePlayer_MovieInfo_TypeInfo, v31);
    this = (BattleMoviePlayer_o *)sub_1B761C0(&StringLiteral_1/*""*/, v32);
    byte_4A3056A = 1;
  }
  v59->fields.KeepStartPosition = keepStartPosition;
  v59->fields.OverrideZDepth = overrideZDepth;
  v59->fields.IgnoreTimeScale = ignoreTS;
  v59->fields.Loop = loop;
  v59->fields.IsBackMovie = isBackMovie;
  if ( !path )
LABEL_47:
    sub_1B7641C(this, type);
  v33 = valid;
  if ( path->fields._size >= 1 )
  {
    v34 = effRest;
    v35 = 0;
    v55 = speed;
    v56 = cam;
    v54 = effect;
    do
    {
      this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)path,
                                      v35,
                                      (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                                              (const MethodInfo_34BCAEC *)Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
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
                                              (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                        (const MethodInfo_34F7A58 *)Method_System_Collections_Generic_List_float__get_Item__),
                      0.0);
            if ( v35 < fadeout->fields._size )
              v37 = fmaxf(
                      System_Collections_Generic_List_float___get_Item(
                        fadeout,
                        v35,
                        (const MethodInfo_34F7A58 *)Method_System_Collections_Generic_List_float__get_Item__),
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
                                              (const MethodInfo_34BA2C0 *)Method_System_Collections_Generic_List_int__get_Item__);
              v39 = (int)this;
            }
            if ( !speed )
              goto LABEL_47;
            Item = 1.0;
            if ( v35 < speed->fields._size )
              Item = System_Collections_Generic_List_float___get_Item(
                       speed,
                       v35,
                       (const MethodInfo_34F7A58 *)Method_System_Collections_Generic_List_float__get_Item__);
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
                                              (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_UnityEvent__get_Item__);
              eff = (UnityEngine_Events_UnityEvent_o *)this;
            }
            if ( !v34 )
              goto LABEL_47;
            v41 = 0.0;
            if ( v35 < v34->fields._size )
              v41 = System_Collections_Generic_List_float___get_Item(
                      v34,
                      v35,
                      (const MethodInfo_34F7A58 *)Method_System_Collections_Generic_List_float__get_Item__);
            if ( !fadein )
              goto LABEL_47;
            v42 = 0.0;
            cama = v39;
            if ( v35 < fadein->fields._size )
              v42 = System_Collections_Generic_List_float___get_Item(
                      fadein,
                      v35,
                      (const MethodInfo_34F7A58 *)Method_System_Collections_Generic_List_float__get_Item__);
            MovieInfoList = (System_Collections_Generic_List_object__o *)v59->fields.MovieInfoList;
            IgnoreTimeScale = v59->fields.IgnoreTimeScale;
            v45 = v59->fields.Loop;
            v46 = v59->fields.IsBackMovie;
            v47 = (BattleMoviePlayer_MovieInfo_o *)sub_1B7640C(BattleMoviePlayer_MovieInfo_TypeInfo);
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
              0LL);
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
                *(const MethodInfo_34D75D4 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = &items->obj.klass + size;
              MovieInfoList->fields._size = size + 1;
              v53[4] = (Il2CppClass *)v47;
              sub_1B76164((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v47, v48, v49);
            }
            effect = v54;
            speed = v55;
            cam = v56;
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
  System_Func_object__bool__o *_9__28_0; // x21
  Il2CppObject *v19; // x22
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  int32_t v22; // w3
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

  if ( (byte_4A3055E & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v4);
    sub_1B761C0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v5);
    sub_1B761C0(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__Clear__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Clear__, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    sub_1B761C0(&Method_BattleMoviePlayer___c__Dispose_b__28_0__, v11);
    sub_1B761C0(&BattleMoviePlayer___c_TypeInfo, v12);
    byte_4A3055E = 1;
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
    _9__28_0 = (System_Func_object__bool__o *)v17->static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = BattleMoviePlayer___c_TypeInfo;
      }
      v19 = (Il2CppObject *)v17->static_fields->__9;
      _9__28_0 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__28_0, v19, Method_BattleMoviePlayer___c__Dispose_b__28_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__28_0;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v21, v22);
    }
    ObjList = (struct System_Collections_Generic_List_GameObject__o *)BasicHelper__Any_object_(
                                                                        MovieInfoList,
                                                                        (System_Func_T__bool__o *)_9__28_0,
                                                                        (const MethodInfo_2E4D7D0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
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
    (const MethodInfo_34D80CC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v33 = v32;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_32568D8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v33.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69287408((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_32568D4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v28 = this->fields.ObjList;
  if ( !v28 )
LABEL_32:
    sub_1B7641C(ObjList, v15);
  v29 = v28->fields._size;
  v30 = v28->fields._version + 1;
  v28->fields._size = 0;
  v28->fields._version = v30;
  if ( v29 >= 1 )
    System_Array__Clear((System_Array_o *)v28->fields._items, 0, v29, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69287408(gameObject, 0LL);
}


System_Collections_IEnumerator_o *__fastcall BattleMoviePlayer__FadeoutDeleteMovie(
        BattleMoviePlayer_o *this,
        System_Action_o *FadeOuted,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A30565 & 1) == 0 )
  {
    sub_1B761C0(&BattleMoviePlayer__FadeoutDeleteMovie_d__39_TypeInfo, FadeOuted);
    byte_4A30565 = 1;
  }
  v5 = sub_1B7640C(BattleMoviePlayer__FadeoutDeleteMovie_d__39_TypeInfo);
  BattleMoviePlayer__FadeoutDeleteMovie_d__39___ctor((BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B7641C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = FadeOuted;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)FadeOuted, v10, v11);
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
  int32_t v11; // w3

  if ( (byte_4A30561 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, *(_QWORD *)&i);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v5);
    byte_4A30561 = 1;
  }
  MovieInfoList = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
  if ( !MovieInfoList )
    sub_1B7641C(0LL, *(_QWORD *)&i);
  if ( MovieInfoList->fields._size > i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             MovieInfoList,
             i,
             (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(this, (BattleMoviePlayer_MovieInfo_o *)Item, i, v8);
    this->fields.nextMovieObj = BattleMoviePanel;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.nextMovieObj, (int32_t)BattleMoviePanel, v10, v11);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A30560 & 1) == 0 )
  {
    sub_1B761C0(&BattleMoviePlayer__GetMoviePanelFirst_d__31_TypeInfo, performance);
    byte_4A30560 = 1;
  }
  v5 = sub_1B7640C(BattleMoviePlayer__GetMoviePanelFirst_d__31_TypeInfo);
  BattleMoviePlayer__GetMoviePanelFirst_d__31___ctor((BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B7641C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = performance;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)performance, v10, v11);
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

  if ( (byte_4A30569 & 1) == 0 )
  {
    sub_1B761C0(&UnityEngine_Application_TypeInfo, obj);
    sub_1B761C0(&AssetManager_TypeInfo, v7);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v8);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v9);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v10);
    sub_1B761C0(&StringLiteral_1121/*".usm"*/, v11);
    sub_1B761C0(&StringLiteral_1167/*"/StreamingAssets/"*/, v12);
    sub_1B761C0(&StringLiteral_1162/*"/Resources/"*/, v13);
    byte_4A30569 = 1;
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
                      (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v16 = (System_String_o *)*((_QWORD *)MovieInfoList + 3);
    if ( !v16 )
      goto LABEL_41;
    if ( !System_String__EndsWith(*((System_String_o **)MovieInfoList + 3), (System_String_o *)StringLiteral_1121/*".usm"*/, 0LL) )
      v16 = System_String__Concat_61535060(v16, (System_String_o *)StringLiteral_1121/*".usm"*/, 0LL);
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
                      (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
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
                        (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v22 = &StringLiteral_1162/*"/Resources/"*/;
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
                        (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v22 = &StringLiteral_1167/*"/StreamingAssets/"*/;
    }
    MovieInfoList = System_String__Concat_61546320(
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
                                                   (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
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
    sub_1B7641C(MovieInfoList, v14);
  }
}


void __fastcall BattleMoviePlayer__Initialize(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *MoviePanelFirst; // x1

  MoviePanelFirst = BattleMoviePlayer__GetMoviePanelFirst(this, perf, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)this, MoviePanelFirst, 0LL);
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
  if ( (byte_4A30566 & 1) == 0 )
  {
    sub_1B761C0(&BattleMoviePlayer_TypeInfo, method);
    this = (BattleMoviePlayer_o *)sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    byte_4A30566 = 1;
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
    sub_1B7641C(this, method);
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

  if ( (byte_4A30564 & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v3);
    byte_4A30564 = 1;
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
                                                         (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___)) == 0LL
    || (Component_object = (UnityEngine_GameObject_o *)Component_object[2].monitor) == 0LL )
  {
    sub_1B7641C(Component_object, v5);
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
  System_Func_object__bool__o *_9__37_0; // x23
  Il2CppObject *v18; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  const MethodInfo *v22; // x2

  if ( (byte_4A30563 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, v);
    sub_1B761C0(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v5);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v6);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v7);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v8);
    sub_1B761C0(&Method_BattleMoviePlayer___c__PauseMovie_b__37_0__, v9);
    sub_1B761C0(&BattleMoviePlayer___c_TypeInfo, v10);
    byte_4A30563 = 1;
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
                         (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
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
    _9__37_0 = (System_Func_object__bool__o *)v16->static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = BattleMoviePlayer___c_TypeInfo;
      }
      v18 = (Il2CppObject *)v16->static_fields->__9;
      _9__37_0 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__37_0, v18, Method_BattleMoviePlayer___c__PauseMovie_b__37_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__37_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__37_0;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__37_0, (int32_t)_9__37_0, v20, v21);
    }
    if ( BasicHelper__Any_object_(
           MovieInfoList,
           (System_Func_T__bool__o *)_9__37_0,
           (const MethodInfo_2E4D7D0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
    {
      BattleMoviePlayer__ShowBg(this, v, v22);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v14,
                         (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !Component_object )
LABEL_19:
      sub_1B7641C(Component_object, v13);
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
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A30567 & 1) == 0 )
  {
    sub_1B761C0(&BattleMoviePlayer__PlayMovie_d__45_TypeInfo, movieObj);
    byte_4A30567 = 1;
  }
  v7 = sub_1B7640C(BattleMoviePlayer__PlayMovie_d__45_TypeInfo);
  BattleMoviePlayer__PlayMovie_d__45___ctor((BattleMoviePlayer__PlayMovie_d__45_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B7641C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = movieObj;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)movieObj, v12, v13);
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
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A30568 & 1) == 0 )
  {
    sub_1B761C0(&BattleMoviePlayer__PlayMovieFadeOut_d__46_TypeInfo, movieObj);
    byte_4A30568 = 1;
  }
  v9 = sub_1B7640C(BattleMoviePlayer__PlayMovieFadeOut_d__46_TypeInfo);
  BattleMoviePlayer__PlayMovieFadeOut_d__46___ctor((BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1B7641C(v10, v11);
  *(_QWORD *)(v9 + 40) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = movieObj;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)movieObj, v14, v15);
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
    sub_1B7641C(this, v);
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
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_4A30562 & 1) == 0 )
  {
    sub_1B761C0(&BattleMoviePlayer__StartMovie_d__36_TypeInfo, method);
    byte_4A30562 = 1;
  }
  v3 = sub_1B7640C(BattleMoviePlayer__StartMovie_d__36_TypeInfo);
  BattleMoviePlayer__StartMovie_d__36___ctor((BattleMoviePlayer__StartMovie_d__36_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B7641C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B76164((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3

  v24 = ignoreTmScl;
  v25 = lp;
  v26 = backMovie;
  this->fields.playSpeed = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.pathType = type;
  this->fields.moviePath = path;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.moviePath, (int32_t)path, v27, v28);
  this->fields.effectEvent = eff;
  this->fields.validTime = valid;
  this->fields.fadeRestTime = fade;
  this->fields.cameraType = cam;
  this->fields.playSpeed = speed;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.effectEvent, (int32_t)eff, v29, v30);
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


void __fastcall BattleMoviePlayer__FadeoutDeleteMovie_d__39___ctor(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleMoviePlayer__FadeoutDeleteMovie_d__39__MoveNext(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  System_Collections_IEnumerator_o *v10; // x0
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  System_Collections_IEnumerator_o *v12; // x21
  BattleMoviePlayer___c_c *v13; // x8
  System_Func_object__bool__o *_9__39_0; // x23
  Il2CppObject *v15; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  UnityEngine_Coroutine_o *started; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  BattlePerformance_o *perf; // x0
  struct System_Action_o *FadeOuted; // x8

  v2 = this;
  if ( (byte_4A3056E & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1B761C0(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v3);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v4);
    sub_1B761C0(&Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__39_0__, v5);
    this = (BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *)sub_1B761C0(&BattleMoviePlayer___c_TypeInfo, v6);
    byte_4A3056E = 1;
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
        v10 = BattleMoviePlayer__PlayMovieFadeOut(
                _4__this,
                _4__this->fields.currMovieObj,
                _4__this->fields.currentMovieNum,
                1,
                0LL);
        MovieInfoList = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
        v12 = v10;
        v13 = BattleMoviePlayer___c_TypeInfo;
        if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
          v13 = BattleMoviePlayer___c_TypeInfo;
        }
        _9__39_0 = (System_Func_object__bool__o *)v13->static_fields->__9__39_0;
        if ( !_9__39_0 )
        {
          if ( !v13->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v13);
            v13 = BattleMoviePlayer___c_TypeInfo;
          }
          v15 = (Il2CppObject *)v13->static_fields->__9;
          _9__39_0 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__39_0,
            v15,
            Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__39_0__,
            0LL);
          static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
          static_fields->__9__39_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__39_0;
          sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v17, v18);
        }
        if ( BasicHelper__Any_object_(
               MovieInfoList,
               (System_Func_T__bool__o *)_9__39_0,
               (const MethodInfo_2E4D7D0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
        {
          BattleMoviePlayer__ShowBg(_4__this, 1, 0LL);
        }
        started = UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)_4__this, v12, 0LL);
        v2->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B76164(p__2__current, (int32_t)started, v21, v22);
        LOBYTE(perf) = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return (char)perf;
      }
LABEL_23:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
LABEL_25:
    sub_1B7641C(this, method);
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


Il2CppObject *__fastcall BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_BattleMoviePlayer__FadeoutDeleteMovie_d__39_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__FadeoutDeleteMovie_d__39__System_IDisposable_Dispose(
        BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__GetMoviePanelFirst_d__31___ctor(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleMoviePlayer__GetMoviePanelFirst_d__31__MoveNext(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  BattleMoviePlayer__GetMoviePanelFirst_d__31_o *v2; // x21
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct BattleMoviePlayer_o *_4__this; // x19
  Il2CppObject **p_perf; // x20
  UnityEngine_Object_o *perf; // x22
  UnityEngine_Object_o *performance; // x22
  int32_t v11; // w2
  int32_t v12; // w3
  struct BattlePerformance_o *v13; // x1
  UnityEngine_Object_o *v14; // x21
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  UnityEngine_Object_o *v18; // x20
  Il2CppObject *v19; // x0
  UnityEngine_GameObject_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  v2 = this;
  if ( (byte_4A3056F & 1) == 0 )
  {
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v3);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v4);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v5);
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)sub_1B761C0(&StringLiteral_10598/*"Performance"*/, v6);
    byte_4A3056F = 1;
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
      sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.perf, (int32_t)v13, v11, v12);
    }
    v14 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
      goto LABEL_19;
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)UnityEngine_GameObject__Find(
                                                              (System_String_o *)StringLiteral_10598/*"Performance"*/,
                                                              0LL);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    *p_perf = Component_object;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.perf, (int32_t)Component_object, v16, v17);
    v18 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v18, 0LL, 0LL) )
    {
LABEL_19:
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)_4__this->fields.MovieInfoList;
      if ( this )
      {
        if ( SLODWORD(this->fields.__2__current) < 1
          || (v19 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__),
              v20 = BattleMoviePlayer__CreateBattleMoviePanel(_4__this, (BattleMoviePlayer_MovieInfo_o *)v19, 0, 0LL),
              _4__this->fields.currMovieObj = v20,
              sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, (int32_t)v20, v21, v22),
              (this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)_4__this->fields.MovieInfoList) != 0LL) )
        {
          if ( SLODWORD(this->fields.__2__current) > 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     1,
                     (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
            BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(
                                 _4__this,
                                 (BattleMoviePlayer_MovieInfo_o *)Item,
                                 1,
                                 0LL);
            _4__this->fields.nextMovieObj = BattleMoviePanel;
            sub_1B76164(
              (ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj,
              (int32_t)BattleMoviePanel,
              v25,
              v26);
          }
          return 0;
        }
      }
LABEL_25:
      sub_1B7641C(this, method);
    }
  }
  return 0;
}


Il2CppObject *__fastcall BattleMoviePlayer__GetMoviePanelFirst_d__31__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__GetMoviePanelFirst_d__31__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_BattleMoviePlayer__GetMoviePanelFirst_d__31_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__GetMoviePanelFirst_d__31__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__GetMoviePanelFirst_d__31__System_IDisposable_Dispose(
        BattleMoviePlayer__GetMoviePanelFirst_d__31_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__46___ctor(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__46__MoveNext(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v4; // x19
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
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o **p_movieMaterial_5__2; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **v22; // x22
  int32_t v23; // w2
  int32_t v24; // w3
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
  struct BattlePerformance_o *v48; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  char v52; // w22
  float v53; // s11
  float v54; // s12
  float v55; // s13
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v56; // x21
  float v57; // s0
  int32_t v58; // w2
  float *v59; // x9
  float v60; // s8
  float v61; // s9
  float v62; // s10
  float v63; // s0
  BattleMoviePlayer_c *v64; // x8
  struct BattlePerformance_o *v65; // x8
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v66; // x21
  int v67; // s0
  float v69; // s2
  float v70; // s4
  float v71; // s2
  float v72; // s8
  float v73; // s9
  float v74; // s10
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v76; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v78; // s0
  float v79; // s1
  float v80; // s2
  float v81; // s11
  float v82; // s12
  float v83; // s13
  float v84; // s0
  float v85; // s0
  float v86; // s2
  float v87; // s1
  float v88; // s0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o **p_movInfo_5__3; // x21
  int32_t v92; // w2
  int32_t v93; // w3
  int32_t v94; // w2
  int32_t v95; // w3
  UnityEngine_Object_o *v96; // x19
  float v97; // s0
  float v98; // s1
  float v99; // s2
  float v100; // s11
  float v101; // s12
  float v102; // s13
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v105; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A30571 & 1) == 0 )
  {
    sub_1B761C0(&BattleMoviePlayer_TypeInfo, method);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_GameObject__Remove__, v6);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v8);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v9);
    sub_1B761C0(&StringLiteral_16405/*"_ZWriteMode"*/, v10);
    sub_1B761C0(&StringLiteral_16404/*"_ZTestMode"*/, v11);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)sub_1B761C0(&StringLiteral_16372/*"_Transparency"*/, v12);
    byte_4A30571 = 1;
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
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__GetDisplayedFrameNo(
                                                            player_k__BackingField,
                                                            0LL);
    if ( v4->fields._effectTime_5__4 <= (float)(int)this )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movInfo_5__3;
      if ( !this )
        goto LABEL_121;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movInfo_5__3;
        if ( !this )
          goto LABEL_121;
      }
      *(_QWORD *)&this->fields.num = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v2, v3);
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
      p_movInfo_5__3 = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o **)&v4->fields._movInfo_5__3;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movInfo_5__3;
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
      sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v2, v3);
      if ( !v4->fields._pastError_5__5 )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16404/*"_ZTestMode"*/, 4, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16372/*"_Transparency"*/, 1.0, 0LL);
      }
      v4->fields._movieMaterial_5__2 = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._movieMaterial_5__2, 0, v92, v93);
      v4->fields._movInfo_5__3 = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__3, 0, v94, v95);
      goto LABEL_113;
    }
    movInfo_5__3 = v4->fields._movInfo_5__3;
    if ( !movInfo_5__3 )
      goto LABEL_121;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movieMaterial_5__2;
    if ( !this )
      goto LABEL_121;
    v37 = 1.0 - (float)(v4->fields._restTime_5__6 / movInfo_5__3->fields.fadeRestTime);
    v38 = fminf(v37, 1.0);
    v39 = v37 < 0.0;
    v40 = 0.0;
    if ( !v39 )
      v40 = v38;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16372/*"_Transparency"*/, v40, 0LL);
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
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        }
        monitor = (float *)this[2].monitor;
        perf = _4__this->fields.perf;
        v46 = monitor[6];
        v47 = *((_QWORD *)monitor + 2);
        _4__this->fields.startPanelPosition.fields.z = v46;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v47;
        if ( !perf )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v48 = _4__this->fields.perf;
        if ( !v48 )
          goto LABEL_121;
        if ( !this )
          goto LABEL_121;
        v103 = UnityEngine_Transform__InverseTransformVector(
                 (UnityEngine_Transform_o *)this,
                 v48->fields._CurrentShakeWidth_k__BackingField,
                 0LL);
        x = v103.fields.x;
        y = v103.fields.y;
        z = v103.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
        if ( !_4__this->fields.currController )
          goto LABEL_121;
        v52 = (char)this;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)_4__this->fields.currController,
                                                                0LL);
        v53 = _4__this->fields.startPanelPosition.fields.x;
        v54 = _4__this->fields.startPanelPosition.fields.y;
        v55 = _4__this->fields.startPanelPosition.fields.z;
        v56 = this;
        if ( (v52 & 1) == 0 )
        {
          if ( !this )
            goto LABEL_121;
          v110.fields.z = z + v55;
          v110.fields.y = y + v54;
          v110.fields.x = x + v53;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v110, 0LL);
          goto LABEL_103;
        }
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !v56 )
          goto LABEL_121;
        v57 = *((float *)this[2].monitor + 3) / *((float *)this[2].monitor + 2);
        v104.fields.z = (float)(v55 * v57) + (float)(z * v57);
        v104.fields.y = (float)(v54 * v57) + (float)(y * v57);
        v104.fields.x = (float)(v53 * v57) + (float)(x * v57);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v56, v104, 0LL);
      }
      else
      {
        v65 = _4__this->fields.perf;
        if ( !v65 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v65->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v66 = this;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
        position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
        position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
        *(UnityEngine_Vector3_o *)&v67 = UnityEngine_Transform__InverseTransformVector(
                                           (UnityEngine_Transform_o *)v66,
                                           position,
                                           0LL);
        v70 = fminf(v69, 1.0);
        if ( v69 < -0.3 )
          v71 = -0.3;
        else
          v71 = v70;
        v107 = UnityEngine_Transform__TransformDirection(
                 (UnityEngine_Transform_o *)v66,
                 *(UnityEngine_Vector3_o *)&v67,
                 0LL);
        v72 = v107.fields.x;
        v73 = v107.fields.y;
        v74 = v107.fields.z;
        IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
        v76 = BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          v76 = BattleMoviePlayer_TypeInfo;
        }
        static_fields = v76->static_fields;
        if ( !IsBossCamera )
        {
          *(UnityEngine_Vector3_o *)&v97 = UnityEngine_Transform__TransformPoint(
                                             (UnityEngine_Transform_o *)v66,
                                             static_fields->BasePanelPosition,
                                             0LL);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_121;
          v100 = v97;
          v101 = v98;
          v102 = v99;
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !this )
            goto LABEL_121;
          v111.fields.z = v102 - v74;
          v111.fields.y = v101 - v73;
          v111.fields.x = v100 - v72;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v111, 0LL);
          goto LABEL_103;
        }
        v108.fields.z = static_fields->BossPanelDist;
        v108.fields.x = 0.0;
        v108.fields.y = 0.0;
        *(UnityEngine_Vector3_o *)&v78 = UnityEngine_Transform__TransformPoint(
                                           (UnityEngine_Transform_o *)v66,
                                           v108,
                                           0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        v81 = v78;
        v82 = v79;
        v83 = v80;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v84 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v109.fields.z = v83 - (float)(v74 * v84);
        v109.fields.y = v82 - (float)(v73 * v84);
        v109.fields.x = v81 - (float)(v72 * v84);
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v109, 0LL);
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v64 = BattleMoviePlayer_TypeInfo;
    }
    else
    {
      if ( !BattleMoviePlayer__IsBossCamera(_4__this, 0LL) )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)this,
          _4__this->fields.startPanelPosition,
          0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
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
      v59 = (float *)this[2].monitor;
      v61 = v59[5];
      v60 = v59[6];
      v62 = v59[4];
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this->fields.currController,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v63 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
          / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
      v105.fields.z = v60 * v63;
      v105.fields.y = v61 * v63;
      v105.fields.x = v62 * v63;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v105, 0LL);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v64 = BattleMoviePlayer_TypeInfo;
    }
    v85 = v64->static_fields->BossPanelDist / v64->static_fields->BaseDist;
    v86 = v85 * _4__this->fields.startPanelScale.fields.z;
    v87 = v85 * _4__this->fields.startPanelScale.fields.y;
    v88 = v85 * _4__this->fields.startPanelScale.fields.x;
LABEL_102:
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v88, 0LL);
LABEL_103:
    if ( v4->fields._restTime_5__6 > 0.0 )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B76164(p__2__current, 0, v2, v3);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Object__op_Inequality(movieObj, 0LL, 0LL);
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
          (Il2CppObject *)v4->fields.movieObj,
          (const MethodInfo_34D8AFC *)Method_System_Collections_Generic_List_GameObject__Remove__);
        v96 = (UnityEngine_Object_o *)v4->fields.movieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69287408(v96, 0LL);
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
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields.movieObj;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_121;
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      v4->fields._movieMaterial_5__2 = material;
      p_movieMaterial_5__2 = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o **)&v4->fields._movieMaterial_5__2;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._movieMaterial_5__2, (int32_t)material, v19, v20);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_121;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v4->fields.num,
               (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v4->fields._movInfo_5__3 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      v22 = &v4->fields._movInfo_5__3;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__3, (int32_t)Item, v23, v24);
      v25 = v4->fields._movInfo_5__3;
      if ( !v25 )
        goto LABEL_121;
      validTime = v25->fields.validTime;
      if ( validTime <= 0.0 )
      {
        v27 = _4__this->fields.currController;
        if ( !v27 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v27->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__get_movieInfo(
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
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v29->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__GetDisplayedFrameNo(
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
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16405/*"_ZWriteMode"*/, 0, 0LL);
        }
        this = *p_movieMaterial_5__2;
        if ( !*p_movieMaterial_5__2 )
LABEL_121:
          sub_1B7641C(this, method);
        if ( _4__this->fields.OverrideZDepth )
          v58 = 8;
        else
          v58 = 4;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16404/*"_ZTestMode"*/, v58, 0LL);
        goto LABEL_103;
      }
    }
  }
  return 0;
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovieFadeOut_d__46__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__PlayMovieFadeOut_d__46__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_BattleMoviePlayer__PlayMovieFadeOut_d__46_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovieFadeOut_d__46__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__PlayMovieFadeOut_d__46__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovieFadeOut_d__46_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__PlayMovie_d__45___ctor(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleMoviePlayer__PlayMovie_d__45__MoveNext(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleMoviePlayer__PlayMovie_d__45_o *v4; // x19
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
  int32_t v15; // w2
  int32_t v16; // w3
  struct CriManaMovieController_o **p_currController; // x21
  UnityEngine_Object_o *v18; // x22
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **p_movInfo_5__2; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  struct BattleMoviePlayer_MovieInfo_o *v23; // x8
  CriMana_Player_o *player_k__BackingField; // x23
  float v25; // s0
  int32_t v26; // w2
  int32_t v27; // w3
  struct BattleMoviePlayer_MovieInfo_o *v28; // x8
  ServantStatusBattleListViewItem_o *v29; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovie_d__45_o *v31; // x22
  BattleMoviePlayer__PlayMovie_d__45_o *v32; // x21
  BattleMoviePlayer__PlayMovie_d__45_o *v33; // x22
  float v34; // s0
  int32_t v35; // w2
  float fadeinTime_5__5; // s0
  struct CriManaMovieController_o *v37; // x8
  struct BattleMoviePlayer_MovieInfo_o *v38; // x8
  float skipFrame_5__4; // s8
  float timeScale; // s0
  struct CriManaMovieController_o *v41; // x9
  struct BattleMoviePlayer_MovieInfo_o *v42; // x8
  BattleMoviePlayer__PlayMovie_d__45_o *v43; // x21
  float *v44; // x8
  float v45; // s0
  struct CriManaMovieController_o *v46; // x8
  struct CriManaMovieController_o *v47; // x8
  unsigned int num; // w9
  _BOOL4 KeepStartPosition; // w8
  struct BattlePerformance_o *v50; // x8
  struct BattleMoviePlayer_MovieInfo_o *v51; // x8
  BattleMoviePlayer__PlayMovie_d__45_o *v52; // x21
  int32_t v53; // w2
  struct BattleMoviePlayer_MovieInfo_o *v54; // x8
  struct CriManaMovieController_o *v55; // x8
  struct BattleMoviePlayer_MovieInfo_o *v56; // x8
  float v57; // s0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  struct BattleMoviePlayer_MovieInfo_o *v60; // x8
  struct CriManaMovieController_o *currController; // x8
  int32_t v62; // w2
  int32_t v63; // w3
  float effectTime_5__7; // s0
  struct BattlePerformance_o *perf; // x8
  struct BattleMoviePlayer_MovieInfo_o *v66; // x9
  float *v67; // x9
  float v68; // s8
  float v69; // s9
  float v70; // s10
  float v71; // s0
  BattleMoviePlayer_c *v72; // x8
  __int64 v73; // x9
  float v74; // w10
  __int64 v75; // x9
  struct BattlePerformance_o *v76; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  char v80; // w22
  float v81; // s11
  float v82; // s12
  float v83; // s13
  BattleMoviePlayer__PlayMovie_d__45_o *v84; // x21
  float v85; // s0
  BattleMoviePlayer__PlayMovie_d__45_o *v86; // x21
  int v87; // s0
  float v89; // s2
  float v90; // s4
  float v91; // s2
  float v92; // s8
  float v93; // s9
  float v94; // s10
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v96; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v98; // s0
  float v99; // s1
  float v100; // s2
  float v101; // s11
  float v102; // s12
  float v103; // s13
  float v104; // s0
  float v105; // s0
  float v106; // s2
  float v107; // s1
  float v108; // s0
  float v109; // s0
  float v110; // s1
  float v111; // s2
  float v112; // s11
  float v113; // s12
  float v114; // s13
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A30570 & 1) == 0 )
  {
    sub_1B761C0(&BattleMoviePlayer_TypeInfo, method);
    sub_1B761C0(&Method_UnityEngine_Component_GetComponent_MeshRenderer___, v5);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___, v6);
    sub_1B761C0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___, v7);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__, v8);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v9);
    sub_1B761C0(&StringLiteral_16405/*"_ZWriteMode"*/, v10);
    sub_1B761C0(&StringLiteral_16404/*"_ZTestMode"*/, v11);
    this = (BattleMoviePlayer__PlayMovie_d__45_o *)sub_1B761C0(&StringLiteral_16372/*"_Transparency"*/, v12);
    byte_4A30570 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  switch ( _1__state )
  {
    case 2:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_181;
      if ( !this->fields._movInfo_5__2 )
      {
LABEL_109:
        v4->fields._movInfo_5__2 = 0LL;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, 0, v2, v3);
        return 0;
      }
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_181;
      v31 = this;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                       (UnityEngine_Renderer_o *)this,
                                                       0LL);
      v32 = this;
      if ( v4->fields._fadeinTime_5__5 > 0.0 )
      {
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v31, 1, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                         (UnityEngine_Renderer_o *)v31,
                                                         0LL);
        if ( !_4__this->fields.baseMat )
          goto LABEL_181;
        v33 = this;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Material__get_renderQueue(
                                                         _4__this->fields.baseMat,
                                                         0LL);
        if ( !v33 )
          goto LABEL_181;
        UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v33, (int32_t)this, 0LL);
        v34 = (float)v4->fields._currentFrame_5__3 / v4->fields._fadeinTime_5__5;
        if ( v34 >= 1.0 )
        {
          if ( !v32 )
            goto LABEL_181;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v32, (System_String_o *)StringLiteral_16404/*"_ZTestMode"*/, 4, 0LL);
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v32,
            (System_String_o *)StringLiteral_16372/*"_Transparency"*/,
            0.0,
            0LL);
          movInfo_5__2 = v4->fields._movInfo_5__2;
          if ( !movInfo_5__2 )
            goto LABEL_181;
          if ( movInfo_5__2->fields.cameraType == 1 )
            BattleMoviePlayer__ShowBg(_4__this, 0, 0LL);
          v4->fields._fadeinTime_5__5 = 0.0;
        }
        else
        {
          if ( !v32 )
            goto LABEL_181;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v32,
            (System_String_o *)StringLiteral_16372/*"_Transparency"*/,
            1.0 - v34,
            0LL);
          if ( _4__this->fields.OverrideZDepth )
            v35 = 8;
          else
            v35 = 4;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v32, (System_String_o *)StringLiteral_16404/*"_ZTestMode"*/, v35, 0LL);
        }
      }
      v60 = v4->fields._movInfo_5__2;
      if ( !v60 )
        goto LABEL_181;
      if ( v60->fields.isBackMovie )
      {
        if ( !v32 )
          goto LABEL_181;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)v32, (System_String_o *)StringLiteral_16405/*"_ZWriteMode"*/, 0, 0LL);
      }
      if ( _4__this->fields._ForceFadeout_k__BackingField )
        return 0;
      currController = _4__this->fields.currController;
      if ( !currController
        || (this = (BattleMoviePlayer__PlayMovie_d__45_o *)currController->fields._player_k__BackingField) == 0LL )
      {
LABEL_181:
        sub_1B7641C(this, method);
      }
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      effectTime_5__7 = v4->fields._effectTime_5__7;
      v4->fields._currentFrame_5__3 = (int)this;
      if ( effectTime_5__7 <= (float)(int)this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)v4->fields._movInfo_5__2;
        if ( !this )
          goto LABEL_181;
        if ( *(_QWORD *)&this->fields.num )
        {
          UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0LL);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v4->fields._movInfo_5__2;
          if ( !this )
            goto LABEL_181;
        }
        *(_QWORD *)&this->fields.num = 0LL;
        sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v62, v63);
      }
      if ( _4__this->fields.KeepStartPosition )
      {
        perf = _4__this->fields.perf;
        if ( !perf )
          goto LABEL_181;
        v66 = v4->fields._movInfo_5__2;
        if ( perf->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          if ( !v66 )
            goto LABEL_181;
          v66->fields._UsePlayMakerShakeParam_k__BackingField = 1;
        }
        else if ( !v66 )
        {
          goto LABEL_181;
        }
        if ( v66->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
            perf = _4__this->fields.perf;
          }
          v73 = *(_QWORD *)&this[1].fields._isLoopMovie_5__9;
          v74 = *(float *)(v73 + 24);
          v75 = *(_QWORD *)(v73 + 16);
          _4__this->fields.startPanelPosition.fields.z = v74;
          *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v75;
          if ( !perf )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          v76 = _4__this->fields.perf;
          if ( !v76 )
            goto LABEL_181;
          if ( !this )
            goto LABEL_181;
          v118 = UnityEngine_Transform__InverseTransformVector(
                   (UnityEngine_Transform_o *)this,
                   v76->fields._CurrentShakeWidth_k__BackingField,
                   0LL);
          x = v118.fields.x;
          y = v118.fields.y;
          z = v118.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
          if ( !_4__this->fields.currController )
            goto LABEL_181;
          v80 = (char)this;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)_4__this->fields.currController,
                                                           0LL);
          v81 = _4__this->fields.startPanelPosition.fields.x;
          v82 = _4__this->fields.startPanelPosition.fields.y;
          v83 = _4__this->fields.startPanelPosition.fields.z;
          v84 = this;
          if ( (v80 & 1) == 0 )
          {
            if ( this )
            {
              v124.fields.z = z + v83;
              v124.fields.y = y + v82;
              v124.fields.x = x + v81;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v124, 0LL);
              goto LABEL_106;
            }
            goto LABEL_181;
          }
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
          }
          if ( !v84 )
            goto LABEL_181;
          v85 = *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 12LL)
              / *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 8LL);
          v119.fields.z = (float)(v83 * v85) + (float)(z * v85);
          v119.fields.y = (float)(v82 * v85) + (float)(y * v85);
          v119.fields.x = (float)(v81 * v85) + (float)(x * v85);
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v84, v119, 0LL);
        }
        else
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_181;
          v86 = this;
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
          position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
          position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
          position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
          *(UnityEngine_Vector3_o *)&v87 = UnityEngine_Transform__InverseTransformVector(
                                             (UnityEngine_Transform_o *)v86,
                                             position,
                                             0LL);
          v90 = fminf(v89, 1.0);
          if ( v89 < -0.3 )
            v91 = -0.3;
          else
            v91 = v90;
          v121 = UnityEngine_Transform__TransformDirection(
                   (UnityEngine_Transform_o *)v86,
                   *(UnityEngine_Vector3_o *)&v87,
                   0LL);
          v92 = v121.fields.x;
          v93 = v121.fields.y;
          v94 = v121.fields.z;
          IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
          v96 = BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            v96 = BattleMoviePlayer_TypeInfo;
          }
          static_fields = v96->static_fields;
          if ( !IsBossCamera )
          {
            *(UnityEngine_Vector3_o *)&v109 = UnityEngine_Transform__TransformPoint(
                                                (UnityEngine_Transform_o *)v86,
                                                static_fields->BasePanelPosition,
                                                0LL);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
            if ( this )
            {
              v112 = v109;
              v113 = v110;
              v114 = v111;
              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( this )
              {
                v125.fields.z = v114 - v94;
                v125.fields.y = v113 - v93;
                v125.fields.x = v112 - v92;
                UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v125, 0LL);
                goto LABEL_106;
              }
            }
            goto LABEL_181;
          }
          v122.fields.z = static_fields->BossPanelDist;
          v122.fields.x = 0.0;
          v122.fields.y = 0.0;
          *(UnityEngine_Vector3_o *)&v98 = UnityEngine_Transform__TransformPoint(
                                             (UnityEngine_Transform_o *)v86,
                                             v122,
                                             0LL);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_181;
          v101 = v98;
          v102 = v99;
          v103 = v100;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_181;
          v104 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
               / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
          v123.fields.z = v103 - (float)(v94 * v104);
          v123.fields.y = v102 - (float)(v93 * v104);
          v123.fields.x = v101 - (float)(v92 * v104);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v123, 0LL);
        }
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v72 = BattleMoviePlayer_TypeInfo;
      }
      else
      {
        if ( !BattleMoviePlayer__IsBossCamera(_4__this, 0LL) )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_181;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)this,
            _4__this->fields.startPanelPosition,
            0LL);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_181;
          v107 = _4__this->fields.startPanelScale.fields.y;
          v106 = _4__this->fields.startPanelScale.fields.z;
          v108 = _4__this->fields.startPanelScale.fields.x;
LABEL_177:
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v108, 0LL);
          goto LABEL_106;
        }
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !_4__this->fields.currController )
          goto LABEL_181;
        v67 = *(float **)&this[1].fields._isLoopMovie_5__9;
        v69 = v67[5];
        v68 = v67[6];
        v70 = v67[4];
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)_4__this->fields.currController,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v71 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v117.fields.z = v68 * v71;
        v117.fields.y = v69 * v71;
        v117.fields.x = v70 * v71;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v117, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v72 = BattleMoviePlayer_TypeInfo;
      }
      v105 = v72->static_fields->BossPanelDist / v72->static_fields->BaseDist;
      v106 = v105 * _4__this->fields.startPanelScale.fields.z;
      v107 = v105 * _4__this->fields.startPanelScale.fields.y;
      v108 = v105 * _4__this->fields.startPanelScale.fields.x;
      goto LABEL_177;
    case 1:
      fadeinTime_5__5 = v4->fields._fadeinTime_5__5;
      v4->fields.__1__state = -1;
      if ( fadeinTime_5__5 <= 0.0 )
      {
        if ( !_4__this )
          goto LABEL_181;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_181;
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
      }
      v37 = _4__this->fields.currController;
      if ( !v37 )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v37->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      v38 = v4->fields._movInfo_5__2;
      v4->fields._currentFrame_5__3 = (int)this;
      if ( !v38 )
        goto LABEL_181;
      skipFrame_5__4 = v4->fields._skipFrame_5__4;
      if ( v38->fields.ignoreTimeScale )
      {
        timeScale = 1.0;
      }
      else
      {
        timeScale = UnityEngine_Time__get_timeScale(0LL);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)(unsigned int)v4->fields._currentFrame_5__3;
      }
      v4->fields._skipFrame_5__4 = skipFrame_5__4 + timeScale;
      if ( ((unsigned int)this & 0x80000000) != 0 )
        goto LABEL_23;
LABEL_50:
      v41 = _4__this->fields.currController;
      if ( v41 )
      {
        v42 = v4->fields._movInfo_5__2;
        if ( v42 )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v41->fields._player_k__BackingField;
          if ( this )
          {
            CriMana_Player__Loop((CriMana_Player_o *)this, v42->fields.loop, 0LL);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
            if ( this )
            {
              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
              if ( this )
              {
                this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                                 (UnityEngine_Renderer_o *)this,
                                                                 0LL);
                if ( _4__this->fields.baseMat )
                {
                  v43 = this;
                  this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Material__get_renderQueue(
                                                                   _4__this->fields.baseMat,
                                                                   0LL);
                  if ( v43 )
                  {
                    UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v43, (int32_t)this, 0LL);
                    if ( v4->fields._fadeinTime_5__5 > 0.0 )
                    {
                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                      if ( !this )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)this,
                                                                       (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                      if ( !this )
                        goto LABEL_181;
                      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
                    }
                    v44 = (float *)v4->fields._movInfo_5__2;
                    if ( !v44 )
                      goto LABEL_181;
                    v45 = v44[8];
                    if ( v45 <= 0.0 )
                    {
                      v46 = _4__this->fields.currController;
                      if ( !v46 )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v46->fields._player_k__BackingField;
                      if ( !this )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
                                                                       (CriMana_Player_o *)this,
                                                                       0LL);
                      if ( this )
                      {
                        v47 = _4__this->fields.currController;
                        if ( !v47 )
                          goto LABEL_181;
                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)v47->fields._player_k__BackingField;
                        if ( !this )
                          goto LABEL_181;
                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
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
                      v44 = (float *)v4->fields._movInfo_5__2;
                      if ( !v44 )
                        goto LABEL_181;
                      v45 = (float)num;
                    }
                    v4->fields._fadeoutTime_5__6 = fmaxf(v45 - v44[10], 0.0);
                    v4->fields._effectTime_5__7 = fmaxf(v45 - v44[14], 0.0);
                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                    if ( this )
                    {
                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                                       (UnityEngine_Component_o *)this,
                                                                       0LL);
                      if ( this )
                      {
                        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                        _4__this->fields.startPanelPosition = localPosition;
                        if ( this )
                        {
                          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                                           (UnityEngine_Component_o *)this,
                                                                           0LL);
                          if ( this )
                          {
                            localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
                            KeepStartPosition = _4__this->fields.KeepStartPosition;
                            _4__this->fields.startPanelScale = localScale;
                            if ( KeepStartPosition )
                            {
                              v50 = _4__this->fields.perf;
                              if ( !v50 )
                                goto LABEL_181;
                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)v50->fields.actorcamera;
                              if ( !this )
                                goto LABEL_181;
                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                                               (UnityEngine_Component_o *)this,
                                                                               0LL);
                              if ( !this )
                                goto LABEL_181;
                              _4__this->fields.cameraStartPosition = UnityEngine_Transform__get_position(
                                                                       (UnityEngine_Transform_o *)this,
                                                                       0LL);
                            }
                            this = (BattleMoviePlayer__PlayMovie_d__45_o *)v4->fields.movieObj;
                            if ( this )
                            {
                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                               (UnityEngine_GameObject_o *)this,
                                                                               (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                              if ( this )
                              {
                                this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                 0LL);
                                v51 = v4->fields._movInfo_5__2;
                                if ( v51 )
                                {
                                  v52 = this;
                                  if ( v51->fields.cameraType == 1 )
                                    BattleMoviePlayer__ShowBg(_4__this, v4->fields._fadeinTime_5__5 > 0.0, 0LL);
                                  if ( v4->fields._fadeinTime_5__5 <= 0.0 )
                                  {
                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                    if ( !this )
                                      goto LABEL_181;
                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                                     (UnityEngine_Component_o *)this,
                                                                                     (const MethodInfo_2E58EAC *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                    if ( !this )
                                      goto LABEL_181;
                                    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 1, 0LL);
                                  }
                                  else
                                  {
                                    if ( !v52 )
                                      goto LABEL_181;
                                    if ( _4__this->fields.OverrideZDepth )
                                      v53 = 8;
                                    else
                                      v53 = 4;
                                    UnityEngine_Material__SetInt(
                                      (UnityEngine_Material_o *)v52,
                                      (System_String_o *)StringLiteral_16404/*"_ZTestMode"*/,
                                      v53,
                                      0LL);
                                    UnityEngine_Material__SetFloat(
                                      (UnityEngine_Material_o *)v52,
                                      (System_String_o *)StringLiteral_16372/*"_Transparency"*/,
                                      1.0,
                                      0LL);
                                  }
                                  v54 = v4->fields._movInfo_5__2;
                                  if ( !v54 )
                                    goto LABEL_181;
                                  if ( v54->fields.isBackMovie )
                                  {
                                    if ( !v52 )
                                      goto LABEL_181;
                                    UnityEngine_Material__SetInt(
                                      (UnityEngine_Material_o *)v52,
                                      (System_String_o *)StringLiteral_16405/*"_ZWriteMode"*/,
                                      0,
                                      0LL);
                                  }
                                  v55 = _4__this->fields.currController;
                                  if ( v55 )
                                  {
                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)v55->fields._player_k__BackingField;
                                    if ( this )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo(
                                                                                       (CriMana_Player_o *)this,
                                                                                       0LL);
                                      v56 = v4->fields._movInfo_5__2;
                                      v4->fields._currentFrame_5__3 = (int)this;
                                      if ( v56 )
                                      {
                                        v57 = 1.0;
                                        if ( v56->fields.ignoreTimeScale
                                          || (v57 = UnityEngine_Time__get_timeScale(0LL),
                                              (v56 = v4->fields._movInfo_5__2) != 0LL) )
                                        {
                                          v4->fields._playSpeed_5__8 = v57 * v56->fields.playSpeed;
                                          v4->fields._isLoopMovie_5__9 = v56->fields.loop;
LABEL_106:
                                          if ( v4->fields._isLoopMovie_5__9
                                            || (float)((float)(v4->fields._skipFrame_5__4
                                                             + (float)v4->fields._currentFrame_5__3)
                                                     + v4->fields._playSpeed_5__8) < v4->fields._fadeoutTime_5__6 )
                                          {
                                            v4->fields.__2__current = 0LL;
                                            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                                            sub_1B76164(p__2__current, 0, v2, v3);
                                            *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
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
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v4->fields.movieObj;
      v4->fields.__1__state = -1;
      if ( !this )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)this,
                                                       (const MethodInfo_2EB19B8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !_4__this )
        goto LABEL_181;
      _4__this->fields.currController = (struct CriManaMovieController_o *)this;
      p_currController = &_4__this->fields.currController;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.currController, (int32_t)this, v15, v16);
      _4__this->fields.currentMovieNum = v4->fields.num;
      v18 = (UnityEngine_Object_o *)_4__this->fields.currController;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v18, 0LL, 0LL) )
        return 0;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_181;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v4->fields.num,
               (const MethodInfo_34D7304 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v4->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      p_movInfo_5__2 = &v4->fields._movInfo_5__2;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, (int32_t)Item, v21, v22);
      if ( !*p_currController )
        goto LABEL_181;
      v23 = *p_movInfo_5__2;
      if ( !*p_movInfo_5__2 )
        goto LABEL_181;
      player_k__BackingField = (*p_currController)->fields._player_k__BackingField;
      v25 = 1.0;
      if ( !v23->fields.ignoreTimeScale )
      {
        v25 = UnityEngine_Time__get_timeScale(0LL);
        v23 = *p_movInfo_5__2;
        if ( !*p_movInfo_5__2 )
          goto LABEL_181;
      }
      if ( !player_k__BackingField )
        goto LABEL_181;
      CriMana_Player__SetSpeed(player_k__BackingField, v25 * v23->fields.playSpeed, 0LL);
      if ( !*p_currController )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_181;
      CriMana_Player__Start((CriMana_Player_o *)this, 0LL);
      if ( !*p_currController )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      v28 = v4->fields._movInfo_5__2;
      *(_QWORD *)&v4->fields._currentFrame_5__3 = (unsigned int)this;
      if ( !v28 )
        goto LABEL_181;
      v4->fields._fadeinTime_5__5 = v28->fields.fadeinTime;
      if ( ((unsigned int)this & 0x80000000) != 0 )
      {
LABEL_23:
        v4->fields.__2__current = 0LL;
        v29 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B76164(v29, 0, v26, v27);
        result = 1;
        *(_DWORD *)&v29[-1].fields.isMine = 1;
        return result;
      }
      goto LABEL_50;
  }
  return 0;
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovie_d__45__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__PlayMovie_d__45__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_BattleMoviePlayer__PlayMovie_d__45_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__PlayMovie_d__45__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__PlayMovie_d__45__System_IDisposable_Dispose(
        BattleMoviePlayer__PlayMovie_d__45_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleMoviePlayer__StartMovie_d__36___ctor(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleMoviePlayer__StartMovie_d__36__MoveNext(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  BattleMoviePlayer__StartMovie_d__36_o *v4; // x19
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
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v16; // w2
  int32_t v17; // w3
  BattlePerformance_o *perf; // x0
  int v19; // w8
  struct UnityEngine_GameObject_o *v20; // x1
  struct UnityEngine_GameObject_o *nextMovieObj; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_IEnumerator_o *v26; // x0
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v27; // x8
  int32_t v28; // w1
  UnityEngine_Object_o *v29; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v30; // x9
  struct UnityEngine_GameObject_o *v31; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v36; // x8
  int size; // w8
  System_Collections_IEnumerator_o *v38; // x0
  System_Collections_Generic_List_T__o *v39; // x22
  System_Collections_IEnumerator_o *v40; // x21
  BattleMoviePlayer___c_c *v41; // x8
  System_Func_object__bool__o *_9__36_0; // x23
  Il2CppObject *v43; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  UnityEngine_Coroutine_o *v47; // x0
  ServantStatusBattleListViewItem_o *v48; // x19
  int32_t v49; // w2
  int32_t v50; // w3
  int v51; // w8
  System_Collections_IEnumerator_o *v52; // x0
  UnityEngine_Coroutine_o *v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3

  v4 = this;
  if ( (byte_4A30572 & 1) == 0 )
  {
    sub_1B761C0(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___, method);
    sub_1B761C0(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo, v5);
    sub_1B761C0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__, v6);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v7);
    sub_1B761C0(&Method_BattleMoviePlayer___c__StartMovie_b__36_0__, v8);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)sub_1B761C0(&BattleMoviePlayer___c_TypeInfo, v9);
    byte_4A30572 = 1;
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
      this = (BattleMoviePlayer__StartMovie_d__36_o *)UnityEngine_Object__op_Inequality(currMovieObj, 0LL, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_12;
      MovieInfoList = _4__this->fields.MovieInfoList;
      if ( !MovieInfoList )
        goto LABEL_45;
      if ( MovieInfoList->fields._size >= 1 )
      {
        v13 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, 0, 0LL);
        started = UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)_4__this, v13, 0LL);
        v4->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B76164(p__2__current, (int32_t)started, v16, v17);
        LOBYTE(perf) = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
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
      BattleMoviePlayer__Dispose(_4__this, 0LL);
      goto LABEL_39;
    default:
      goto LABEL_41;
  }
  while ( 1 )
  {
    if ( !_4__this )
      goto LABEL_45;
    v30 = _4__this->fields.MovieInfoList;
    if ( !v30 )
      goto LABEL_45;
    if ( v19 >= v30->fields._size - 1 || _4__this->fields._ForceFadeout_k__BackingField )
    {
      v31 = _4__this->fields.currMovieObj;
      _4__this->fields.pastMovieObj = v31;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v31, v2, v3);
      _4__this->fields.currMovieObj = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, 0, v32, v33);
      _4__this->fields.nextMovieObj = 0LL;
      sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, 0, v34, v35);
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v36 = _4__this->fields.MovieInfoList;
        if ( !v36 )
LABEL_45:
          sub_1B7641C(this, method);
        size = v36->fields._size;
        if ( size >= 1 )
        {
          v38 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, size - 1, 0, 0LL);
          v39 = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
          v40 = v38;
          v41 = BattleMoviePlayer___c_TypeInfo;
          if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
            v41 = BattleMoviePlayer___c_TypeInfo;
          }
          _9__36_0 = (System_Func_object__bool__o *)v41->static_fields->__9__36_0;
          if ( !_9__36_0 )
          {
            if ( !v41->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v41);
              v41 = BattleMoviePlayer___c_TypeInfo;
            }
            v43 = (Il2CppObject *)v41->static_fields->__9;
            _9__36_0 = (System_Func_object__bool__o *)sub_1B7640C(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__36_0, v43, Method_BattleMoviePlayer___c__StartMovie_b__36_0__, 0LL);
            static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
            static_fields->__9__36_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__36_0;
            sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v45, v46);
          }
          if ( BasicHelper__Any_object_(
                 v39,
                 (System_Func_T__bool__o *)_9__36_0,
                 (const MethodInfo_2E4D7D0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
          {
            BattleMoviePlayer__ShowBg(_4__this, 1, 0LL);
          }
          v47 = UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)_4__this, v40, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v47;
          v48 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B76164(v48, (int32_t)v47, v49, v50);
          v51 = 3;
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
    sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v20, v2, v3);
    nextMovieObj = _4__this->fields.nextMovieObj;
    _4__this->fields.currMovieObj = nextMovieObj;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, (int32_t)nextMovieObj, v22, v23);
    _4__this->fields.nextMovieObj = 0LL;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, 0, v24, v25);
    v26 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, v4->fields._i_5__2, 0, 0LL);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)UnityEngine_MonoBehaviour__StartCoroutine_69272680(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      v26,
                                                      0LL);
    v27 = _4__this->fields.MovieInfoList;
    if ( !v27 )
      goto LABEL_45;
    v28 = v4->fields._i_5__2 + 2;
    if ( v28 < v27->fields._size )
      BattleMoviePlayer__GetMoviePanelAdd(_4__this, v28, 0LL);
    v29 = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)UnityEngine_Object__op_Inequality(v29, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_23:
    v19 = v4->fields._i_5__2 + 1;
    v4->fields._i_5__2 = v19;
  }
  v52 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, v4->fields._i_5__2 + 1, 0LL);
  v53 = UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)_4__this, v52, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v53;
  v48 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B76164(v48, (int32_t)v53, v54, v55);
  v51 = 2;
LABEL_43:
  *(_DWORD *)&v48[-1].fields.isMine = v51;
  LOBYTE(perf) = 1;
  return (char)perf;
}


Il2CppObject *__fastcall BattleMoviePlayer__StartMovie_d__36__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleMoviePlayer__StartMovie_d__36__System_Collections_IEnumerator_Reset(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_BattleMoviePlayer__StartMovie_d__36_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
}


Il2CppObject *__fastcall BattleMoviePlayer__StartMovie_d__36__System_Collections_IEnumerator_get_Current(
        BattleMoviePlayer__StartMovie_d__36_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleMoviePlayer__StartMovie_d__36__System_IDisposable_Dispose(
        BattleMoviePlayer__StartMovie_d__36_o *this,
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

  if ( (byte_4A3056D & 1) == 0 )
  {
    sub_1B761C0(&BattleMoviePlayer___c_TypeInfo, v1);
    byte_4A3056D = 1;
  }
  v2 = (Il2CppObject *)sub_1B7640C(BattleMoviePlayer___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleMoviePlayer___c_TypeInfo->static_fields->__9 = (struct BattleMoviePlayer___c_o *)v2;
  sub_1B76164((ServantStatusBattleListViewItem_o *)BattleMoviePlayer___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleMoviePlayer___c___ctor(BattleMoviePlayer___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleMoviePlayer___c___Dispose_b__28_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___FadeoutDeleteMovie_b__39_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___PauseMovie_b__37_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___StartMovie_b__36_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B7641C(this, 0LL);
  return x->fields.cameraType == 1;
}