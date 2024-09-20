void __fastcall BattleMoviePlayer___cctor(const MethodInfo *method)
{
  struct BattleMoviePlayer_StaticFields *static_fields; // x8

  if ( (byte_4A5D7A8 & 1) == 0 )
  {
    sub_1B885B0(&BattleMoviePlayer_TypeInfo);
    byte_4A5D7A8 = 1;
  }
  static_fields = BattleMoviePlayer_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BackMovieScale = xmmword_BB5560;
  *(_QWORD *)&static_fields->BasePanelPosition.fields.x = 0LL;
  static_fields->BasePanelPosition.fields.z = 10.0;
}


void __fastcall BattleMoviePlayer___ctor(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  UnityEngine_Vector3_c *v9; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  _BOOL4 v12; // w9
  struct UnityEngine_Vector3_StaticFields *v13; // x10
  float v14; // s1
  struct UnityEngine_Vector3_StaticFields *v15; // x8
  float v16; // s1

  if ( (byte_4A5D7A7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4A5D7A7 = 1;
  }
  this->fields.KeepStartPosition = 1;
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
  this->fields.MovieInfoList = (struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.MovieInfoList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ObjList = (struct System_Collections_Generic_List_GameObject__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.ObjList, (int32_t)v6, v7, v8);
  if ( !byte_4A55CE1 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  v9 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.startPanelPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.startPanelPosition.fields.z = z;
  if ( byte_4A55CE6 )
  {
    v12 = 0;
  }
  else
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    v9 = UnityEngine_Vector3_TypeInfo;
    byte_4A55CE6 = 1;
    v12 = byte_4A55CE1 == 0;
  }
  v13 = v9->static_fields;
  v14 = v13->oneVector.fields.z;
  *(_QWORD *)&this->fields.startPanelScale.fields.x = *(_QWORD *)&v13->oneVector.fields.x;
  this->fields.startPanelScale.fields.z = v14;
  if ( v12 )
  {
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    v9 = UnityEngine_Vector3_TypeInfo;
    byte_4A55CE1 = 1;
  }
  v15 = v9->static_fields;
  v16 = v15->zeroVector.fields.z;
  *(_QWORD *)&this->fields.cameraStartPosition.fields.x = *(_QWORD *)&v15->zeroVector.fields.x;
  this->fields.cameraStartPosition.fields.z = v16;
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
  UnityEngine_Transform_o *v9; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *v12; // x8
  struct System_Object_array *v13; // x9
  _QWORD *v14; // x10
  __int64 v15; // x11
  BattleMoviePlayer_o *v16; // x21
  Il2CppClass **v17; // x0
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *moviePrefab; // x21
  UnityEngine_Transform_o *transform; // x23
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *ObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v25; // x10
  __int64 size; // x11
  Il2CppClass **v27; // x0
  int v28; // w8
  UnityEngine_Material_o **p_baseMat; // x23
  UnityEngine_Object_o *baseMat; // x24
  UnityEngine_Material_o *material; // x24
  UnityEngine_Material_o *v32; // x25
  int32_t v33; // w2
  int32_t v34; // w3
  UnityEngine_Transform_o *v35; // x24
  float v36; // s8
  float y; // s9
  float v38; // s2
  UnityEngine_Transform_o *v39; // x22
  float v40; // s0
  float v41; // s1
  float v42; // s2
  UnityEngine_Transform_o *v43; // x22
  float x; // s8
  float v45; // s9
  float z; // s10
  float *v47; // x8
  UnityEngine_Material_o *v48; // x23
  UnityEngine_Material_o *v49; // x22
  const MethodInfo *v50; // x3
  Il2CppObject *v52; // [xsp+8h] [xbp-78h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-68h] BYREF
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4A5D79B & 1) == 0 )
  {
    sub_1B885B0(&BattleMoviePlayer_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    this = (BattleMoviePlayer_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D79B = 1;
  }
  component = 0LL;
  v52 = 0LL;
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
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__49297800(
                                    moviePrefab,
                                    transform,
                                    (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    ObjList = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !ObjList )
      goto LABEL_63;
    items = ObjList->fields._items;
    v25 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++ObjList->fields._version;
    if ( !items )
      goto LABEL_63;
    size = ObjList->fields._size;
    v16 = this;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        ObjList,
        (Il2CppObject *)this,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      ObjList->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v27 + 4), (int32_t)v16, v21, v22);
    }
    if ( !v16 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v16,
           &v52,
           (const MethodInfo_2ED0148 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)v52;
      if ( !v52 )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)v52, v6->fields.perf, 0, 0LL);
    }
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v16, 11, 0LL);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v16,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v28 = 1;
  }
  else
  {
    if ( cameraType )
    {
      v16 = 0LL;
      goto LABEL_39;
    }
    this = (BattleMoviePlayer_o *)v6->fields.perf;
    if ( !this )
      goto LABEL_63;
    v8 = (Il2CppObject *)v6->fields.moviePrefab;
    this = (BattleMoviePlayer_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    if ( !this )
      goto LABEL_63;
    v9 = *(UnityEngine_Transform_o **)&this[1].fields.m_CachedPtr;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__49297800(
                                    v8,
                                    v9,
                                    (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    v12 = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !v12 )
      goto LABEL_63;
    v13 = v12->fields._items;
    v14 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v12->fields._version;
    if ( !v13 )
      goto LABEL_63;
    v15 = v12->fields._size;
    v16 = this;
    if ( (unsigned int)v15 >= v13->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v12,
        (Il2CppObject *)this,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &v13->obj.klass + v15;
      v12->fields._size = v15 + 1;
      v17[4] = (Il2CppClass *)v16;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)v16, v10, v11);
    }
    if ( !v16 )
      goto LABEL_63;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v16,
           &component,
           (const MethodInfo_2ED0148 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)component;
      if ( !component )
        goto LABEL_63;
      BattleCameraFullScaleSetter__Initialize((BattleCameraFullScaleSetter_o *)component, v6->fields.perf, 1, 0LL);
    }
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v16,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    if ( !this )
      goto LABEL_63;
    v28 = 0;
  }
  LODWORD(this->fields.moviePrefab) = v28;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0LL);
LABEL_39:
  p_baseMat = &v6->fields.baseMat;
  baseMat = (UnityEngine_Object_o *)v6->fields.baseMat;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleMoviePlayer_o *)UnityEngine_Object__op_Equality(baseMat, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v16 )
      goto LABEL_63;
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v16,
                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !this )
      goto LABEL_63;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
    v32 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_69322740(v32, material, 0LL);
    *p_baseMat = v32;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.baseMat, (int32_t)v32, v33, v34);
  }
  else if ( !v16 )
  {
    goto LABEL_63;
  }
  v35 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  if ( !this )
    goto LABEL_63;
  LODWORD(v36) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  if ( !this )
    goto LABEL_63;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  y = position.fields.y;
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
  if ( !this )
    goto LABEL_63;
  *(UnityEngine_Vector3_o *)(&v38 - 2) = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
  if ( !v35 )
    goto LABEL_63;
  v55.fields.y = y;
  v55.fields.z = (float)((float)no * 0.1) + v38;
  v55.fields.x = v36;
  UnityEngine_Transform__set_position(v35, v55, 0LL);
  if ( movieInfo->fields.isBackMovie )
  {
    v39 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
    if ( this )
    {
      *(UnityEngine_Vector3_o *)&v40 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
      if ( v39 )
      {
        v56.fields.z = v42 + 0.1;
        v56.fields.y = v41 + 0.0;
        v56.fields.x = v40 + 0.0;
        UnityEngine_Transform__set_position(v39, v56, 0LL);
        this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
        if ( this )
        {
          v43 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
          this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v16, 0LL);
          if ( this )
          {
            localScale = UnityEngine_Transform__get_localScale((UnityEngine_Transform_o *)this, 0LL);
            this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            x = localScale.fields.x;
            v45 = localScale.fields.y;
            z = localScale.fields.z;
            if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
              this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            }
            if ( v43 )
            {
              v47 = *(float **)&this[1].fields.m_CachedPtr;
              v58.fields.z = z * *v47;
              v58.fields.y = v45 * *v47;
              v58.fields.x = x * *v47;
              UnityEngine_Transform__set_localScale(v43, v58, 0LL);
              goto LABEL_59;
            }
          }
        }
      }
    }
LABEL_63:
    sub_1B8880C(this, movieInfo);
  }
LABEL_59:
  v48 = *p_baseMat;
  v49 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_69322740(v49, v48, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v16,
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v49, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v16,
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
  if ( !this )
    goto LABEL_63;
  CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v49, 0LL);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v16, 1, 0LL);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v16,
                                  (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_63;
  UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
  BattleMoviePlayer__InitMovie(v6, (UnityEngine_GameObject_o *)v16, no, v50);
  return (UnityEngine_GameObject_o *)v16;
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
  int32_t v36; // w2
  int32_t v37; // w3
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_List_UnityEvent__o *v42; // [xsp+10h] [xbp-E0h]
  System_Collections_Generic_List_float__o *v43; // [xsp+18h] [xbp-D8h]
  System_Collections_Generic_List_int__o *v44; // [xsp+20h] [xbp-D0h]
  BattleMoviePlayer_o *v47; // [xsp+38h] [xbp-B8h]
  int32_t cama; // [xsp+44h] [xbp-ACh]
  UnityEngine_Events_UnityEvent_o *eff; // [xsp+48h] [xbp-A8h]
  System_String_o *patha; // [xsp+58h] [xbp-98h]

  v47 = this;
  if ( (byte_4A5D7A6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UnityEvent__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_UnityEvent__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_float__get_Item__);
    sub_1B885B0(&BattleMoviePlayer_MovieInfo_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5D7A6 = 1;
  }
  v47->fields.KeepStartPosition = keepStartPosition;
  v47->fields.OverrideZDepth = overrideZDepth;
  v47->fields.IgnoreTimeScale = ignoreTS;
  v47->fields.Loop = loop;
  v47->fields.IsBackMovie = isBackMovie;
  if ( !path )
LABEL_47:
    sub_1B8880C(this, type);
  v21 = valid;
  if ( path->fields._size >= 1 )
  {
    v22 = effRest;
    v23 = 0;
    v43 = speed;
    v44 = cam;
    v42 = effect;
    do
    {
      this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)path,
                                      v23,
                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                                              (const MethodInfo_34E2D4C *)Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
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
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_string__get_Item__);
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
                        (const MethodInfo_351DCB8 *)Method_System_Collections_Generic_List_float__get_Item__),
                      0.0);
            if ( v23 < fadeout->fields._size )
              v25 = fmaxf(
                      System_Collections_Generic_List_float___get_Item(
                        fadeout,
                        v23,
                        (const MethodInfo_351DCB8 *)Method_System_Collections_Generic_List_float__get_Item__),
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
                                              (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
              v27 = (int)this;
            }
            if ( !speed )
              goto LABEL_47;
            Item = 1.0;
            if ( v23 < speed->fields._size )
              Item = System_Collections_Generic_List_float___get_Item(
                       speed,
                       v23,
                       (const MethodInfo_351DCB8 *)Method_System_Collections_Generic_List_float__get_Item__);
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
                                              (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_UnityEvent__get_Item__);
              eff = (UnityEngine_Events_UnityEvent_o *)this;
            }
            if ( !v22 )
              goto LABEL_47;
            v29 = 0.0;
            if ( v23 < v22->fields._size )
              v29 = System_Collections_Generic_List_float___get_Item(
                      v22,
                      v23,
                      (const MethodInfo_351DCB8 *)Method_System_Collections_Generic_List_float__get_Item__);
            if ( !fadein )
              goto LABEL_47;
            v30 = 0.0;
            cama = v27;
            if ( v23 < fadein->fields._size )
              v30 = System_Collections_Generic_List_float___get_Item(
                      fadein,
                      v23,
                      (const MethodInfo_351DCB8 *)Method_System_Collections_Generic_List_float__get_Item__);
            MovieInfoList = (System_Collections_Generic_List_object__o *)v47->fields.MovieInfoList;
            IgnoreTimeScale = v47->fields.IgnoreTimeScale;
            v33 = v47->fields.Loop;
            v34 = v47->fields.IsBackMovie;
            v35 = (BattleMoviePlayer_MovieInfo_o *)sub_1B887FC(BattleMoviePlayer_MovieInfo_TypeInfo);
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
            v39 = Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__;
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
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
            }
            else
            {
              v41 = &items->obj.klass + size;
              MovieInfoList->fields._size = size + 1;
              v41[4] = (Il2CppClass *)v35;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v35, v36, v37);
            }
            effect = v42;
            speed = v43;
            cam = v44;
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
  System_Func_object__bool__o *_9__28_0; // x21
  Il2CppObject *v9; // x22
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v14; // x8
  int32_t size; // w2
  int v16; // w9
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *v18; // x8
  int32_t v19; // w2
  int v20; // w9
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A5D79A & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleMoviePlayer___c__Dispose_b__28_0__);
    sub_1B885B0(&BattleMoviePlayer___c_TypeInfo);
    byte_4A5D79A = 1;
  }
  memset(&v23, 0, sizeof(v23));
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
    _9__28_0 = (System_Func_object__bool__o *)v7->static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = BattleMoviePlayer___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__28_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__28_0, v9, Method_BattleMoviePlayer___c__Dispose_b__28_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__28_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v11, v12);
    }
    ObjList = (struct System_Collections_Generic_List_GameObject__o *)BasicHelper__Any_object_(
                                                                        MovieInfoList,
                                                                        (System_Func_T__bool__o *)_9__28_0,
                                                                        (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    if ( ((unsigned __int8)ObjList & 1) != 0 )
      BattleMoviePlayer__ShowBg(this, 1, v13);
  }
  v14 = this->fields.MovieInfoList;
  if ( !v14 )
    goto LABEL_32;
  size = v14->fields._size;
  v16 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v16;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0LL);
  ObjList = this->fields.ObjList;
  if ( !ObjList )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)ObjList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)current, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v18 = this->fields.ObjList;
  if ( !v18 )
LABEL_32:
    sub_1B8880C(ObjList, v5);
  v19 = v18->fields._size;
  v20 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v20;
  if ( v19 >= 1 )
    System_Array__Clear((System_Array_o *)v18->fields._items, 0, v19, 0LL);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
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

  if ( (byte_4A5D7A1 & 1) == 0 )
  {
    sub_1B885B0(&BattleMoviePlayer__FadeoutDeleteMovie_d__39_TypeInfo);
    byte_4A5D7A1 = 1;
  }
  v5 = sub_1B887FC(BattleMoviePlayer__FadeoutDeleteMovie_d__39_TypeInfo);
  BattleMoviePlayer__FadeoutDeleteMovie_d__39___ctor((BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = FadeOuted;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)FadeOuted, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleMoviePlayer__GetMoviePanelAdd(BattleMoviePlayer_o *this, int32_t i, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *MovieInfoList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v7; // x3
  struct UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5D79D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    byte_4A5D79D = 1;
  }
  MovieInfoList = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
  if ( !MovieInfoList )
    sub_1B8880C(0LL, *(_QWORD *)&i);
  if ( MovieInfoList->fields._size > i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             MovieInfoList,
             i,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(this, (BattleMoviePlayer_MovieInfo_o *)Item, i, v7);
    this->fields.nextMovieObj = BattleMoviePanel;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.nextMovieObj, (int32_t)BattleMoviePanel, v9, v10);
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

  if ( (byte_4A5D79C & 1) == 0 )
  {
    sub_1B885B0(&BattleMoviePlayer__GetMoviePanelFirst_d__31_TypeInfo);
    byte_4A5D79C = 1;
  }
  v5 = sub_1B887FC(BattleMoviePlayer__GetMoviePanelFirst_d__31_TypeInfo);
  BattleMoviePlayer__GetMoviePanelFirst_d__31___ctor((BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = performance;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)performance, v10, v11);
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

  if ( (byte_4A5D7A5 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Application_TypeInfo);
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1121/*".usm"*/);
    sub_1B885B0(&StringLiteral_1167/*"/StreamingAssets/"*/);
    sub_1B885B0(&StringLiteral_1162/*"/Resources/"*/);
    byte_4A5D7A5 = 1;
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
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v9 = (System_String_o *)*((_QWORD *)MovieInfoList + 3);
    if ( !v9 )
      goto LABEL_41;
    if ( !System_String__EndsWith(*((System_String_o **)MovieInfoList + 3), (System_String_o *)StringLiteral_1121/*".usm"*/, 0LL) )
      v9 = System_String__Concat_61707032(v9, (System_String_o *)StringLiteral_1121/*".usm"*/, 0LL);
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
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
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
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
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
                        (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v15 = &StringLiteral_1167/*"/StreamingAssets/"*/;
    }
    MovieInfoList = System_String__Concat_61718292(
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
                                                   (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
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
    sub_1B8880C(MovieInfoList, v7);
  }
}


void __fastcall BattleMoviePlayer__Initialize(
        BattleMoviePlayer_o *this,
        BattlePerformance_o *perf,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *MoviePanelFirst; // x1

  MoviePanelFirst = BattleMoviePlayer__GetMoviePanelFirst(this, perf, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, MoviePanelFirst, 0LL);
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
  if ( (byte_4A5D7A2 & 1) == 0 )
  {
    sub_1B885B0(&BattleMoviePlayer_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D7A2 = 1;
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
    sub_1B8880C(this, method);
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

  if ( (byte_4A5D7A0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5D7A0 = 1;
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
                                                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___)) == 0LL
    || (Component_object = (UnityEngine_GameObject_o *)Component_object[2].monitor) == 0LL )
  {
    sub_1B8880C(Component_object, v4);
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
  System_Func_object__bool__o *_9__37_0; // x23
  Il2CppObject *v12; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  const MethodInfo *v16; // x2

  if ( (byte_4A5D79F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1B885B0(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleMoviePlayer___c__PauseMovie_b__37_0__);
    sub_1B885B0(&BattleMoviePlayer___c_TypeInfo);
    byte_4A5D79F = 1;
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
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
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
    _9__37_0 = (System_Func_object__bool__o *)v10->static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleMoviePlayer___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__37_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__37_0, v12, Method_BattleMoviePlayer___c__PauseMovie_b__37_0__, 0LL);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      static_fields->__9__37_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__37_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__37_0, (int32_t)_9__37_0, v14, v15);
    }
    if ( BasicHelper__Any_object_(
           MovieInfoList,
           (System_Func_T__bool__o *)_9__37_0,
           (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
    {
      BattleMoviePlayer__ShowBg(this, v, v16);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v8,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !Component_object )
LABEL_19:
      sub_1B8880C(Component_object, v7);
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

  if ( (byte_4A5D7A3 & 1) == 0 )
  {
    sub_1B885B0(&BattleMoviePlayer__PlayMovie_d__45_TypeInfo);
    byte_4A5D7A3 = 1;
  }
  v7 = sub_1B887FC(BattleMoviePlayer__PlayMovie_d__45_TypeInfo);
  BattleMoviePlayer__PlayMovie_d__45___ctor((BattleMoviePlayer__PlayMovie_d__45_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B8880C(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v10, v11);
  *(_QWORD *)(v7 + 40) = movieObj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)movieObj, v12, v13);
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

  if ( (byte_4A5D7A4 & 1) == 0 )
  {
    sub_1B885B0(&BattleMoviePlayer__PlayMovieFadeOut_d__46_TypeInfo);
    byte_4A5D7A4 = 1;
  }
  v9 = sub_1B887FC(BattleMoviePlayer__PlayMovieFadeOut_d__46_TypeInfo);
  BattleMoviePlayer__PlayMovieFadeOut_d__46___ctor((BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v9, 0, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  *(_QWORD *)(v9 + 40) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = movieObj;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)movieObj, v14, v15);
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
    sub_1B8880C(this, v);
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

  if ( (byte_4A5D79E & 1) == 0 )
  {
    sub_1B885B0(&BattleMoviePlayer__StartMovie_d__36_TypeInfo);
    byte_4A5D79E = 1;
  }
  v3 = sub_1B887FC(BattleMoviePlayer__StartMovie_d__36_TypeInfo);
  BattleMoviePlayer__StartMovie_d__36___ctor((BattleMoviePlayer__StartMovie_d__36_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B8880C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.moviePath, (int32_t)path, v27, v28);
  this->fields.effectEvent = eff;
  this->fields.validTime = valid;
  this->fields.fadeRestTime = fade;
  this->fields.cameraType = cam;
  this->fields.playSpeed = speed;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.effectEvent, (int32_t)eff, v29, v30);
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
  int32_t _1__state; // w8
  BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  System_Collections_IEnumerator_o *v6; // x0
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  System_Collections_IEnumerator_o *v8; // x21
  BattleMoviePlayer___c_c *v9; // x8
  System_Func_object__bool__o *_9__39_0; // x23
  Il2CppObject *v11; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Coroutine_o *started; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v17; // w2
  int32_t v18; // w3
  BattlePerformance_o *perf; // x0
  struct System_Action_o *FadeOuted; // x8

  v2 = this;
  if ( (byte_4A5D7AA & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1B885B0(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__39_0__);
    this = (BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *)sub_1B885B0(&BattleMoviePlayer___c_TypeInfo);
    byte_4A5D7AA = 1;
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
        _9__39_0 = (System_Func_object__bool__o *)v9->static_fields->__9__39_0;
        if ( !_9__39_0 )
        {
          if ( !v9->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v9);
            v9 = BattleMoviePlayer___c_TypeInfo;
          }
          v11 = (Il2CppObject *)v9->static_fields->__9;
          _9__39_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(
            _9__39_0,
            v11,
            Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__39_0__,
            0LL);
          static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
          static_fields->__9__39_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__39_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__39_0, (int32_t)_9__39_0, v13, v14);
        }
        if ( BasicHelper__Any_object_(
               MovieInfoList,
               (System_Func_T__bool__o *)_9__39_0,
               (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
        {
          BattleMoviePlayer__ShowBg(_4__this, 1, 0LL);
        }
        started = UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)_4__this, v8, 0LL);
        v2->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B88554(p__2__current, (int32_t)started, v17, v18);
        LOBYTE(perf) = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return (char)perf;
      }
LABEL_23:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
LABEL_25:
    sub_1B8880C(this, method);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleMoviePlayer__FadeoutDeleteMovie_d__39_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  struct BattleMoviePlayer_o *_4__this; // x19
  Il2CppObject **p_perf; // x20
  UnityEngine_Object_o *perf; // x22
  UnityEngine_Object_o *performance; // x22
  int32_t v7; // w2
  int32_t v8; // w3
  struct BattlePerformance_o *v9; // x1
  UnityEngine_Object_o *v10; // x21
  Il2CppObject *Component_object; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Object_o *v14; // x20
  Il2CppObject *v15; // x0
  UnityEngine_GameObject_o *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *BattleMoviePanel; // x0
  int32_t v21; // w2
  int32_t v22; // w3

  v2 = this;
  if ( (byte_4A5D7AB & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)sub_1B885B0(&StringLiteral_10601/*"Performance"*/);
    byte_4A5D7AB = 1;
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
      v9 = v2->fields.performance;
      *p_perf = (Il2CppObject *)v9;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.perf, (int32_t)v9, v7, v8);
    }
    v10 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v10, 0LL, 0LL) )
      goto LABEL_19;
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)UnityEngine_GameObject__Find(
                                                              (System_String_o *)StringLiteral_10601/*"Performance"*/,
                                                              0LL);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    *p_perf = Component_object;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.perf, (int32_t)Component_object, v12, v13);
    v14 = (UnityEngine_Object_o *)*p_perf;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality(v14, 0LL, 0LL) )
    {
LABEL_19:
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)_4__this->fields.MovieInfoList;
      if ( this )
      {
        if ( SLODWORD(this->fields.__2__current) < 1
          || (v15 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__),
              v16 = BattleMoviePlayer__CreateBattleMoviePanel(_4__this, (BattleMoviePlayer_MovieInfo_o *)v15, 0, 0LL),
              _4__this->fields.currMovieObj = v16,
              sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, (int32_t)v16, v17, v18),
              (this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)_4__this->fields.MovieInfoList) != 0LL) )
        {
          if ( SLODWORD(this->fields.__2__current) > 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     1,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
            BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(
                                 _4__this,
                                 (BattleMoviePlayer_MovieInfo_o *)Item,
                                 1,
                                 0LL);
            _4__this->fields.nextMovieObj = BattleMoviePanel;
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj,
              (int32_t)BattleMoviePanel,
              v21,
              v22);
          }
          return 0;
        }
      }
LABEL_25:
      sub_1B8880C(this, method);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleMoviePlayer__GetMoviePanelFirst_d__31_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *movieObj; // x21
  struct CriManaMovieController_o *v8; // x8
  UnityEngine_Material_o *material; // x0
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o **p_movieMaterial_5__2; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **v14; // x22
  int32_t v15; // w2
  int32_t v16; // w3
  struct BattleMoviePlayer_MovieInfo_o *v17; // x8
  float validTime; // s8
  struct CriManaMovieController_o *v19; // x8
  float effectRestTime; // s0
  struct CriManaMovieController_o *v21; // x8
  _BOOL4 forceFadeout; // w8
  struct BattleMoviePlayer_MovieInfo_o *v23; // x8
  struct CriManaMovieController_o *currController; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  int32_t num; // w8
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x9
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__3; // x8
  float v29; // s0
  float v30; // s1
  bool v31; // nf
  float v32; // s0
  struct BattleMoviePlayer_MovieInfo_o *v33; // x8
  float restTime_5__6; // s8
  float timeScale; // s0
  float *monitor; // x9
  struct BattlePerformance_o *perf; // x8
  float v38; // w10
  __int64 v39; // x9
  UnityEngine_Vector3_o *v40; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  char v44; // w22
  float v45; // s11
  float v46; // s12
  float v47; // s13
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v48; // x21
  float v49; // s0
  int32_t v50; // w2
  float *v51; // x9
  float v52; // s8
  float v53; // s9
  float v54; // s10
  float v55; // s0
  BattleMoviePlayer_c *v56; // x8
  struct BattlePerformance_o *v57; // x8
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v58; // x21
  int v59; // s0
  float v61; // s2
  float v62; // s4
  float v63; // s2
  float v64; // s8
  float v65; // s9
  float v66; // s10
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v68; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v70; // s0
  float v71; // s1
  float v72; // s2
  float v73; // s11
  float v74; // s12
  float v75; // s13
  float v76; // s0
  float v77; // s0
  float v78; // s2
  float v79; // s1
  float v80; // s0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o **p_movInfo_5__3; // x21
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w2
  int32_t v87; // w3
  UnityEngine_Object_o *v88; // x19
  float v89; // s0
  float v90; // s1
  float v91; // s2
  float v92; // s11
  float v93; // s12
  float v94; // s13
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v99; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v100; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A5D7AD & 1) == 0 )
  {
    sub_1B885B0(&BattleMoviePlayer_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16411/*"_ZWriteMode"*/);
    sub_1B885B0(&StringLiteral_16410/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)sub_1B885B0(&StringLiteral_16378/*"_Transparency"*/);
    byte_4A5D7AD = 1;
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v2, v3);
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v2, v3);
      if ( !v4->fields._pastError_5__5 )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16410/*"_ZTestMode"*/, 4, 0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_121;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16378/*"_Transparency"*/, 1.0, 0LL);
      }
      v4->fields._movieMaterial_5__2 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._movieMaterial_5__2, 0, v84, v85);
      v4->fields._movInfo_5__3 = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__3, 0, v86, v87);
      goto LABEL_113;
    }
    movInfo_5__3 = v4->fields._movInfo_5__3;
    if ( !movInfo_5__3 )
      goto LABEL_121;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields._movieMaterial_5__2;
    if ( !this )
      goto LABEL_121;
    v29 = 1.0 - (float)(v4->fields._restTime_5__6 / movInfo_5__3->fields.fadeRestTime);
    v30 = fminf(v29, 1.0);
    v31 = v29 < 0.0;
    v32 = 0.0;
    if ( !v31 )
      v32 = v30;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16378/*"_Transparency"*/, v32, 0LL);
    v33 = v4->fields._movInfo_5__3;
    if ( !v33 )
      goto LABEL_121;
    restTime_5__6 = v4->fields._restTime_5__6;
    timeScale = 1.0;
    if ( !v33->fields.ignoreTimeScale )
    {
      timeScale = UnityEngine_Time__get_timeScale(0LL);
      v33 = v4->fields._movInfo_5__3;
      if ( !v33 )
        goto LABEL_121;
    }
    v4->fields._restTime_5__6 = restTime_5__6 - (float)(timeScale * v33->fields.playSpeed);
    if ( _4__this->fields.KeepStartPosition )
    {
      if ( v33->fields._UsePlayMakerShakeParam_k__BackingField )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        }
        monitor = (float *)this[2].monitor;
        perf = _4__this->fields.perf;
        v38 = monitor[6];
        v39 = *((_QWORD *)monitor + 2);
        _4__this->fields.startPanelPosition.fields.z = v38;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v39;
        if ( !perf )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        v40 = (UnityEngine_Vector3_o *)_4__this->fields.perf;
        if ( !v40 )
          goto LABEL_121;
        if ( !this )
          goto LABEL_121;
        v95 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)this, v40[106], 0LL);
        x = v95.fields.x;
        y = v95.fields.y;
        z = v95.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
        if ( !_4__this->fields.currController )
          goto LABEL_121;
        v44 = (char)this;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)_4__this->fields.currController,
                                                                0LL);
        v45 = _4__this->fields.startPanelPosition.fields.x;
        v46 = _4__this->fields.startPanelPosition.fields.y;
        v47 = _4__this->fields.startPanelPosition.fields.z;
        v48 = this;
        if ( (v44 & 1) == 0 )
        {
          if ( !this )
            goto LABEL_121;
          v102.fields.z = z + v47;
          v102.fields.y = y + v46;
          v102.fields.x = x + v45;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v102, 0LL);
          goto LABEL_103;
        }
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        }
        if ( !v48 )
          goto LABEL_121;
        v49 = *((float *)this[2].monitor + 3) / *((float *)this[2].monitor + 2);
        v96.fields.z = (float)(v47 * v49) + (float)(z * v49);
        v96.fields.y = (float)(v46 * v49) + (float)(y * v49);
        v96.fields.x = (float)(v45 * v49) + (float)(x * v49);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v48, v96, 0LL);
      }
      else
      {
        v57 = _4__this->fields.perf;
        if ( !v57 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v57->fields.actorcamera;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v58 = this;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
        position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
        position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
        position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
        *(UnityEngine_Vector3_o *)&v59 = UnityEngine_Transform__InverseTransformVector(
                                           (UnityEngine_Transform_o *)v58,
                                           position,
                                           0LL);
        v62 = fminf(v61, 1.0);
        if ( v61 < -0.3 )
          v63 = -0.3;
        else
          v63 = v62;
        v99 = UnityEngine_Transform__TransformDirection(
                (UnityEngine_Transform_o *)v58,
                *(UnityEngine_Vector3_o *)&v59,
                0LL);
        v64 = v99.fields.x;
        v65 = v99.fields.y;
        v66 = v99.fields.z;
        IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
        v68 = BattleMoviePlayer_TypeInfo;
        if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
          v68 = BattleMoviePlayer_TypeInfo;
        }
        static_fields = v68->static_fields;
        if ( !IsBossCamera )
        {
          *(UnityEngine_Vector3_o *)&v89 = UnityEngine_Transform__TransformPoint(
                                             (UnityEngine_Transform_o *)v58,
                                             static_fields->BasePanelPosition,
                                             0LL);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_121;
          v92 = v89;
          v93 = v90;
          v94 = v91;
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
          if ( !this )
            goto LABEL_121;
          v103.fields.z = v94 - v66;
          v103.fields.y = v93 - v65;
          v103.fields.x = v92 - v64;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v103, 0LL);
          goto LABEL_103;
        }
        v100.fields.z = static_fields->BossPanelDist;
        v100.fields.x = 0.0;
        v100.fields.y = 0.0;
        *(UnityEngine_Vector3_o *)&v70 = UnityEngine_Transform__TransformPoint(
                                           (UnityEngine_Transform_o *)v58,
                                           v100,
                                           0LL);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_121;
        v73 = v70;
        v74 = v71;
        v75 = v72;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v76 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v101.fields.z = v75 - (float)(v66 * v76);
        v101.fields.y = v74 - (float)(v65 * v76);
        v101.fields.x = v73 - (float)(v64 * v76);
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v101, 0LL);
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v56 = BattleMoviePlayer_TypeInfo;
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
        v79 = _4__this->fields.startPanelScale.fields.y;
        v78 = _4__this->fields.startPanelScale.fields.z;
        v80 = _4__this->fields.startPanelScale.fields.x;
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
      v51 = (float *)this[2].monitor;
      v53 = v51[5];
      v52 = v51[6];
      v54 = v51[4];
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)_4__this->fields.currController,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v55 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
          / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
      v97.fields.z = v52 * v55;
      v97.fields.y = v53 * v55;
      v97.fields.x = v54 * v55;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v97, 0LL);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_121;
      v56 = BattleMoviePlayer_TypeInfo;
    }
    v77 = v56->static_fields->BossPanelDist / v56->static_fields->BaseDist;
    v78 = v77 * _4__this->fields.startPanelScale.fields.z;
    v79 = v77 * _4__this->fields.startPanelScale.fields.y;
    v80 = v77 * _4__this->fields.startPanelScale.fields.x;
LABEL_102:
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v80, 0LL);
LABEL_103:
    if ( v4->fields._restTime_5__6 > 0.0 )
    {
      v4->fields.__2__current = 0LL;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
      sub_1B88554(p__2__current, 0, v2, v3);
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
          (const MethodInfo_34FED5C *)Method_System_Collections_Generic_List_GameObject__Remove__);
        v88 = (UnityEngine_Object_o *)v4->fields.movieObj;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(v88, 0LL);
        return 0;
      }
      goto LABEL_121;
    }
    if ( !_4__this )
      goto LABEL_121;
    v8 = _4__this->fields.currController;
    if ( !v8 )
      goto LABEL_121;
    if ( v8->fields._player_k__BackingField )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v4->fields.movieObj;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_121;
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0LL);
      v4->fields._movieMaterial_5__2 = material;
      p_movieMaterial_5__2 = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o **)&v4->fields._movieMaterial_5__2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._movieMaterial_5__2, (int32_t)material, v11, v12);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_121;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v4->fields.num,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v4->fields._movInfo_5__3 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      v14 = &v4->fields._movInfo_5__3;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__3, (int32_t)Item, v15, v16);
      v17 = v4->fields._movInfo_5__3;
      if ( !v17 )
        goto LABEL_121;
      validTime = v17->fields.validTime;
      if ( validTime <= 0.0 )
      {
        v19 = _4__this->fields.currController;
        if ( !v19 )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v19->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_121;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__get_movieInfo(
                                                                (CriMana_Player_o *)this,
                                                                0LL);
        if ( !this )
          goto LABEL_121;
        v17 = *v14;
        if ( !*v14 )
          goto LABEL_121;
        validTime = (float)(unsigned int)this->fields.num;
      }
      effectRestTime = v17->fields.effectRestTime;
      v4->fields._pastError_5__5 = 0;
      v4->fields._effectTime_5__4 = fmaxf(validTime - effectRestTime, 0.0);
      v21 = _4__this->fields.currController;
      if ( !v21 )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v21->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_121;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__GetDisplayedFrameNo(
                                                              (CriMana_Player_o *)this,
                                                              0LL);
      forceFadeout = v4->fields.forceFadeout;
      v4->fields._restTime_5__6 = validTime - (float)(int)this;
      if ( !forceFadeout )
      {
        v23 = *v14;
        if ( !*v14 )
          goto LABEL_121;
        goto LABEL_63;
      }
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v23 = *v14;
        if ( !*v14 )
          goto LABEL_121;
        v4->fields._restTime_5__6 = v23->fields.fadeRestTime;
        _4__this->fields._ForceFadeout_k__BackingField = 1;
LABEL_63:
        if ( v23->fields.isBackMovie )
        {
          this = *p_movieMaterial_5__2;
          if ( !*p_movieMaterial_5__2 )
            goto LABEL_121;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16411/*"_ZWriteMode"*/, 0, 0LL);
        }
        this = *p_movieMaterial_5__2;
        if ( !*p_movieMaterial_5__2 )
LABEL_121:
          sub_1B8880C(this, method);
        if ( _4__this->fields.OverrideZDepth )
          v50 = 8;
        else
          v50 = 4;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_16410/*"_ZTestMode"*/, v50, 0LL);
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleMoviePlayer__PlayMovieFadeOut_d__46_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct CriManaMovieController_o **p_currController; // x21
  UnityEngine_Object_o *v10; // x22
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **p_movInfo_5__2; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  struct BattleMoviePlayer_MovieInfo_o *v15; // x8
  CriMana_Player_o *player_k__BackingField; // x23
  float v17; // s0
  int32_t v18; // w2
  int32_t v19; // w3
  struct BattleMoviePlayer_MovieInfo_o *v20; // x8
  ServantStatusBattleListViewItem_o *v21; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovie_d__45_o *v23; // x22
  BattleMoviePlayer__PlayMovie_d__45_o *v24; // x21
  BattleMoviePlayer__PlayMovie_d__45_o *v25; // x22
  float v26; // s0
  int32_t v27; // w2
  float fadeinTime_5__5; // s0
  struct CriManaMovieController_o *v29; // x8
  struct BattleMoviePlayer_MovieInfo_o *v30; // x8
  float skipFrame_5__4; // s8
  float timeScale; // s0
  struct CriManaMovieController_o *v33; // x9
  struct BattleMoviePlayer_MovieInfo_o *v34; // x8
  BattleMoviePlayer__PlayMovie_d__45_o *v35; // x21
  float *v36; // x8
  float v37; // s0
  struct CriManaMovieController_o *v38; // x8
  struct CriManaMovieController_o *v39; // x8
  unsigned int num; // w9
  _BOOL4 KeepStartPosition; // w8
  struct BattlePerformance_o *v42; // x8
  struct BattleMoviePlayer_MovieInfo_o *v43; // x8
  BattleMoviePlayer__PlayMovie_d__45_o *v44; // x21
  int32_t v45; // w2
  struct BattleMoviePlayer_MovieInfo_o *v46; // x8
  struct CriManaMovieController_o *v47; // x8
  struct BattleMoviePlayer_MovieInfo_o *v48; // x8
  float v49; // s0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  struct BattleMoviePlayer_MovieInfo_o *v52; // x8
  struct CriManaMovieController_o *currController; // x8
  int32_t v54; // w2
  int32_t v55; // w3
  float effectTime_5__7; // s0
  struct BattlePerformance_o *perf; // x8
  struct BattleMoviePlayer_MovieInfo_o *v58; // x9
  float *v59; // x9
  float v60; // s8
  float v61; // s9
  float v62; // s10
  float v63; // s0
  BattleMoviePlayer_c *v64; // x8
  __int64 v65; // x9
  float v66; // w10
  __int64 v67; // x9
  UnityEngine_Vector3_o *v68; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  char v72; // w22
  float v73; // s11
  float v74; // s12
  float v75; // s13
  BattleMoviePlayer__PlayMovie_d__45_o *v76; // x21
  float v77; // s0
  BattleMoviePlayer__PlayMovie_d__45_o *v78; // x21
  int v79; // s0
  float v81; // s2
  float v82; // s4
  float v83; // s2
  float v84; // s8
  float v85; // s9
  float v86; // s10
  bool IsBossCamera; // w22
  BattleMoviePlayer_c *v88; // x8
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v90; // s0
  float v91; // s1
  float v92; // s2
  float v93; // s11
  float v94; // s12
  float v95; // s13
  float v96; // s0
  float v97; // s0
  float v98; // s2
  float v99; // s1
  float v100; // s0
  float v101; // s0
  float v102; // s1
  float v103; // s2
  float v104; // s11
  float v105; // s12
  float v106; // s13
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v113; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v114; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A5D7AC & 1) == 0 )
  {
    sub_1B885B0(&BattleMoviePlayer_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16411/*"_ZWriteMode"*/);
    sub_1B885B0(&StringLiteral_16410/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovie_d__45_o *)sub_1B885B0(&StringLiteral_16378/*"_Transparency"*/);
    byte_4A5D7AC = 1;
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, 0, v2, v3);
        return 0;
      }
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_181;
      v23 = this;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                       (UnityEngine_Renderer_o *)this,
                                                       0LL);
      v24 = this;
      if ( v4->fields._fadeinTime_5__5 > 0.0 )
      {
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v23, 1, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                         (UnityEngine_Renderer_o *)v23,
                                                         0LL);
        if ( !_4__this->fields.baseMat )
          goto LABEL_181;
        v25 = this;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Material__get_renderQueue(
                                                         _4__this->fields.baseMat,
                                                         0LL);
        if ( !v25 )
          goto LABEL_181;
        UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v25, (int32_t)this, 0LL);
        v26 = (float)v4->fields._currentFrame_5__3 / v4->fields._fadeinTime_5__5;
        if ( v26 >= 1.0 )
        {
          if ( !v24 )
            goto LABEL_181;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v24, (System_String_o *)StringLiteral_16410/*"_ZTestMode"*/, 4, 0LL);
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v24,
            (System_String_o *)StringLiteral_16378/*"_Transparency"*/,
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
          if ( !v24 )
            goto LABEL_181;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v24,
            (System_String_o *)StringLiteral_16378/*"_Transparency"*/,
            1.0 - v26,
            0LL);
          if ( _4__this->fields.OverrideZDepth )
            v27 = 8;
          else
            v27 = 4;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v24, (System_String_o *)StringLiteral_16410/*"_ZTestMode"*/, v27, 0LL);
        }
      }
      v52 = v4->fields._movInfo_5__2;
      if ( !v52 )
        goto LABEL_181;
      if ( v52->fields.isBackMovie )
      {
        if ( !v24 )
          goto LABEL_181;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)v24, (System_String_o *)StringLiteral_16411/*"_ZWriteMode"*/, 0, 0LL);
      }
      if ( _4__this->fields._ForceFadeout_k__BackingField )
        return 0;
      currController = _4__this->fields.currController;
      if ( !currController
        || (this = (BattleMoviePlayer__PlayMovie_d__45_o *)currController->fields._player_k__BackingField) == 0LL )
      {
LABEL_181:
        sub_1B8880C(this, method);
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
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.num, 0, v54, v55);
      }
      if ( _4__this->fields.KeepStartPosition )
      {
        perf = _4__this->fields.perf;
        if ( !perf )
          goto LABEL_181;
        v58 = v4->fields._movInfo_5__2;
        if ( perf->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          if ( !v58 )
            goto LABEL_181;
          v58->fields._UsePlayMakerShakeParam_k__BackingField = 1;
        }
        else if ( !v58 )
        {
          goto LABEL_181;
        }
        if ( v58->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer_TypeInfo;
            perf = _4__this->fields.perf;
          }
          v65 = *(_QWORD *)&this[1].fields._isLoopMovie_5__9;
          v66 = *(float *)(v65 + 24);
          v67 = *(_QWORD *)(v65 + 16);
          _4__this->fields.startPanelPosition.fields.z = v66;
          *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v67;
          if ( !perf )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_181;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          v68 = (UnityEngine_Vector3_o *)_4__this->fields.perf;
          if ( !v68 )
            goto LABEL_181;
          if ( !this )
            goto LABEL_181;
          v110 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)this, v68[106], 0LL);
          x = v110.fields.x;
          y = v110.fields.y;
          z = v110.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
          if ( !_4__this->fields.currController )
            goto LABEL_181;
          v72 = (char)this;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)_4__this->fields.currController,
                                                           0LL);
          v73 = _4__this->fields.startPanelPosition.fields.x;
          v74 = _4__this->fields.startPanelPosition.fields.y;
          v75 = _4__this->fields.startPanelPosition.fields.z;
          v76 = this;
          if ( (v72 & 1) == 0 )
          {
            if ( this )
            {
              v116.fields.z = z + v75;
              v116.fields.y = y + v74;
              v116.fields.x = x + v73;
              UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v116, 0LL);
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
          if ( !v76 )
            goto LABEL_181;
          v77 = *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 12LL)
              / *(float *)(*(_QWORD *)&this[1].fields._isLoopMovie_5__9 + 8LL);
          v111.fields.z = (float)(v75 * v77) + (float)(z * v77);
          v111.fields.y = (float)(v74 * v77) + (float)(y * v77);
          v111.fields.x = (float)(v73 * v77) + (float)(x * v77);
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v76, v111, 0LL);
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
          v78 = this;
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0LL);
          position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
          position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
          position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
          *(UnityEngine_Vector3_o *)&v79 = UnityEngine_Transform__InverseTransformVector(
                                             (UnityEngine_Transform_o *)v78,
                                             position,
                                             0LL);
          v82 = fminf(v81, 1.0);
          if ( v81 < -0.3 )
            v83 = -0.3;
          else
            v83 = v82;
          v113 = UnityEngine_Transform__TransformDirection(
                   (UnityEngine_Transform_o *)v78,
                   *(UnityEngine_Vector3_o *)&v79,
                   0LL);
          v84 = v113.fields.x;
          v85 = v113.fields.y;
          v86 = v113.fields.z;
          IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, 0LL);
          v88 = BattleMoviePlayer_TypeInfo;
          if ( !BattleMoviePlayer_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo);
            v88 = BattleMoviePlayer_TypeInfo;
          }
          static_fields = v88->static_fields;
          if ( !IsBossCamera )
          {
            *(UnityEngine_Vector3_o *)&v101 = UnityEngine_Transform__TransformPoint(
                                                (UnityEngine_Transform_o *)v78,
                                                static_fields->BasePanelPosition,
                                                0LL);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
            if ( this )
            {
              v104 = v101;
              v105 = v102;
              v106 = v103;
              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0LL);
              if ( this )
              {
                v117.fields.z = v106 - v86;
                v117.fields.y = v105 - v85;
                v117.fields.x = v104 - v84;
                UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v117, 0LL);
                goto LABEL_106;
              }
            }
            goto LABEL_181;
          }
          v114.fields.z = static_fields->BossPanelDist;
          v114.fields.x = 0.0;
          v114.fields.y = 0.0;
          *(UnityEngine_Vector3_o *)&v90 = UnityEngine_Transform__TransformPoint(
                                             (UnityEngine_Transform_o *)v78,
                                             v114,
                                             0LL);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_181;
          v93 = v90;
          v94 = v91;
          v95 = v92;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL);
          if ( !this )
            goto LABEL_181;
          v96 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
              / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
          v115.fields.z = v95 - (float)(v86 * v96);
          v115.fields.y = v94 - (float)(v85 * v96);
          v115.fields.x = v93 - (float)(v84 * v96);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v115, 0LL);
        }
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v64 = BattleMoviePlayer_TypeInfo;
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
          v99 = _4__this->fields.startPanelScale.fields.y;
          v98 = _4__this->fields.startPanelScale.fields.z;
          v100 = _4__this->fields.startPanelScale.fields.x;
LABEL_177:
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v100, 0LL);
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
        v59 = *(float **)&this[1].fields._isLoopMovie_5__9;
        v61 = v59[5];
        v60 = v59[6];
        v62 = v59[4];
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)_4__this->fields.currController,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v63 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v109.fields.z = v60 * v63;
        v109.fields.y = v61 * v63;
        v109.fields.x = v62 * v63;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v109, 0LL);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_181;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0LL);
        if ( !this )
          goto LABEL_181;
        v64 = BattleMoviePlayer_TypeInfo;
      }
      v97 = v64->static_fields->BossPanelDist / v64->static_fields->BaseDist;
      v98 = v97 * _4__this->fields.startPanelScale.fields.z;
      v99 = v97 * _4__this->fields.startPanelScale.fields.y;
      v100 = v97 * _4__this->fields.startPanelScale.fields.x;
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
                                                         (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_181;
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
      }
      v29 = _4__this->fields.currController;
      if ( !v29 )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v29->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_181;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0LL);
      v30 = v4->fields._movInfo_5__2;
      v4->fields._currentFrame_5__3 = (int)this;
      if ( !v30 )
        goto LABEL_181;
      skipFrame_5__4 = v4->fields._skipFrame_5__4;
      if ( v30->fields.ignoreTimeScale )
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
      v33 = _4__this->fields.currController;
      if ( v33 )
      {
        v34 = v4->fields._movInfo_5__2;
        if ( v34 )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v33->fields._player_k__BackingField;
          if ( this )
          {
            CriMana_Player__Loop((CriMana_Player_o *)this, v34->fields.loop, 0LL);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
            if ( this )
            {
              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                               (UnityEngine_Component_o *)this,
                                                               (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
              if ( this )
              {
                this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                                 (UnityEngine_Renderer_o *)this,
                                                                 0LL);
                if ( _4__this->fields.baseMat )
                {
                  v35 = this;
                  this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Material__get_renderQueue(
                                                                   _4__this->fields.baseMat,
                                                                   0LL);
                  if ( v35 )
                  {
                    UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v35, (int32_t)this, 0LL);
                    if ( v4->fields._fadeinTime_5__5 > 0.0 )
                    {
                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                      if ( !this )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                       (UnityEngine_Component_o *)this,
                                                                       (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                      if ( !this )
                        goto LABEL_181;
                      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0LL);
                    }
                    v36 = (float *)v4->fields._movInfo_5__2;
                    if ( !v36 )
                      goto LABEL_181;
                    v37 = v36[8];
                    if ( v37 <= 0.0 )
                    {
                      v38 = _4__this->fields.currController;
                      if ( !v38 )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v38->fields._player_k__BackingField;
                      if ( !this )
                        goto LABEL_181;
                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
                                                                       (CriMana_Player_o *)this,
                                                                       0LL);
                      if ( this )
                      {
                        v39 = _4__this->fields.currController;
                        if ( !v39 )
                          goto LABEL_181;
                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)v39->fields._player_k__BackingField;
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
                      v36 = (float *)v4->fields._movInfo_5__2;
                      if ( !v36 )
                        goto LABEL_181;
                      v37 = (float)num;
                    }
                    v4->fields._fadeoutTime_5__6 = fmaxf(v37 - v36[10], 0.0);
                    v4->fields._effectTime_5__7 = fmaxf(v37 - v36[14], 0.0);
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
                              v42 = _4__this->fields.perf;
                              if ( !v42 )
                                goto LABEL_181;
                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)v42->fields.actorcamera;
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
                                                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                              if ( this )
                              {
                                this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                 0LL);
                                v43 = v4->fields._movInfo_5__2;
                                if ( v43 )
                                {
                                  v44 = this;
                                  if ( v43->fields.cameraType == 1 )
                                    BattleMoviePlayer__ShowBg(_4__this, v4->fields._fadeinTime_5__5 > 0.0, 0LL);
                                  if ( v4->fields._fadeinTime_5__5 <= 0.0 )
                                  {
                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                    if ( !this )
                                      goto LABEL_181;
                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                                     (UnityEngine_Component_o *)this,
                                                                                     (const MethodInfo_2E763AC *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                    if ( !this )
                                      goto LABEL_181;
                                    UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 1, 0LL);
                                  }
                                  else
                                  {
                                    if ( !v44 )
                                      goto LABEL_181;
                                    if ( _4__this->fields.OverrideZDepth )
                                      v45 = 8;
                                    else
                                      v45 = 4;
                                    UnityEngine_Material__SetInt(
                                      (UnityEngine_Material_o *)v44,
                                      (System_String_o *)StringLiteral_16410/*"_ZTestMode"*/,
                                      v45,
                                      0LL);
                                    UnityEngine_Material__SetFloat(
                                      (UnityEngine_Material_o *)v44,
                                      (System_String_o *)StringLiteral_16378/*"_Transparency"*/,
                                      1.0,
                                      0LL);
                                  }
                                  v46 = v4->fields._movInfo_5__2;
                                  if ( !v46 )
                                    goto LABEL_181;
                                  if ( v46->fields.isBackMovie )
                                  {
                                    if ( !v44 )
                                      goto LABEL_181;
                                    UnityEngine_Material__SetInt(
                                      (UnityEngine_Material_o *)v44,
                                      (System_String_o *)StringLiteral_16411/*"_ZWriteMode"*/,
                                      0,
                                      0LL);
                                  }
                                  v47 = _4__this->fields.currController;
                                  if ( v47 )
                                  {
                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)v47->fields._player_k__BackingField;
                                    if ( this )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo(
                                                                                       (CriMana_Player_o *)this,
                                                                                       0LL);
                                      v48 = v4->fields._movInfo_5__2;
                                      v4->fields._currentFrame_5__3 = (int)this;
                                      if ( v48 )
                                      {
                                        v49 = 1.0;
                                        if ( v48->fields.ignoreTimeScale
                                          || (v49 = UnityEngine_Time__get_timeScale(0LL),
                                              (v48 = v4->fields._movInfo_5__2) != 0LL) )
                                        {
                                          v4->fields._playSpeed_5__8 = v49 * v48->fields.playSpeed;
                                          v4->fields._isLoopMovie_5__9 = v48->fields.loop;
LABEL_106:
                                          if ( v4->fields._isLoopMovie_5__9
                                            || (float)((float)(v4->fields._skipFrame_5__4
                                                             + (float)v4->fields._currentFrame_5__3)
                                                     + v4->fields._playSpeed_5__8) < v4->fields._fadeoutTime_5__6 )
                                          {
                                            v4->fields.__2__current = 0LL;
                                            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
                                            sub_1B88554(p__2__current, 0, v2, v3);
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
                                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !_4__this )
        goto LABEL_181;
      _4__this->fields.currController = (struct CriManaMovieController_o *)this;
      p_currController = &_4__this->fields.currController;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.currController, (int32_t)this, v7, v8);
      _4__this->fields.currentMovieNum = v4->fields.num;
      v10 = (UnityEngine_Object_o *)_4__this->fields.currController;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
        return 0;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_181;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v4->fields.num,
               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v4->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      p_movInfo_5__2 = &v4->fields._movInfo_5__2;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._movInfo_5__2, (int32_t)Item, v13, v14);
      if ( !*p_currController )
        goto LABEL_181;
      v15 = *p_movInfo_5__2;
      if ( !*p_movInfo_5__2 )
        goto LABEL_181;
      player_k__BackingField = (*p_currController)->fields._player_k__BackingField;
      v17 = 1.0;
      if ( !v15->fields.ignoreTimeScale )
      {
        v17 = UnityEngine_Time__get_timeScale(0LL);
        v15 = *p_movInfo_5__2;
        if ( !*p_movInfo_5__2 )
          goto LABEL_181;
      }
      if ( !player_k__BackingField )
        goto LABEL_181;
      CriMana_Player__SetSpeed(player_k__BackingField, v17 * v15->fields.playSpeed, 0LL);
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
      v20 = v4->fields._movInfo_5__2;
      *(_QWORD *)&v4->fields._currentFrame_5__3 = (unsigned int)this;
      if ( !v20 )
        goto LABEL_181;
      v4->fields._fadeinTime_5__5 = v20->fields.fadeinTime;
      if ( ((unsigned int)this & 0x80000000) != 0 )
      {
LABEL_23:
        v4->fields.__2__current = 0LL;
        v21 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(v21, 0, v18, v19);
        result = 1;
        *(_DWORD *)&v21[-1].fields.isMine = 1;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleMoviePlayer__PlayMovie_d__45_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x8
  System_Collections_IEnumerator_o *v8; // x0
  UnityEngine_Coroutine_o *started; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v11; // w2
  int32_t v12; // w3
  BattlePerformance_o *perf; // x0
  int v14; // w8
  struct UnityEngine_GameObject_o *v15; // x1
  struct UnityEngine_GameObject_o *nextMovieObj; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_IEnumerator_o *v21; // x0
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v22; // x8
  int32_t v23; // w1
  UnityEngine_Object_o *v24; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v25; // x9
  struct UnityEngine_GameObject_o *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v31; // x8
  int size; // w8
  System_Collections_IEnumerator_o *v33; // x0
  System_Collections_Generic_List_T__o *v34; // x22
  System_Collections_IEnumerator_o *v35; // x21
  BattleMoviePlayer___c_c *v36; // x8
  System_Func_object__bool__o *_9__36_0; // x23
  Il2CppObject *v38; // x24
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  UnityEngine_Coroutine_o *v42; // x0
  ServantStatusBattleListViewItem_o *v43; // x19
  int32_t v44; // w2
  int32_t v45; // w3
  int v46; // w8
  System_Collections_IEnumerator_o *v47; // x0
  UnityEngine_Coroutine_o *v48; // x0
  int32_t v49; // w2
  int32_t v50; // w3

  v4 = this;
  if ( (byte_4A5D7AE & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_1B885B0(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_BattleMoviePlayer___c__StartMovie_b__36_0__);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)sub_1B885B0(&BattleMoviePlayer___c_TypeInfo);
    byte_4A5D7AE = 1;
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
        v8 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, 0, 0LL);
        started = UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)_4__this, v8, 0LL);
        v4->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(p__2__current, (int32_t)started, v11, v12);
        LOBYTE(perf) = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return (char)perf;
      }
LABEL_12:
      v14 = 0;
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
    v25 = _4__this->fields.MovieInfoList;
    if ( !v25 )
      goto LABEL_45;
    if ( v14 >= v25->fields._size - 1 || _4__this->fields._ForceFadeout_k__BackingField )
    {
      v26 = _4__this->fields.currMovieObj;
      _4__this->fields.pastMovieObj = v26;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v26, v2, v3);
      _4__this->fields.currMovieObj = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, 0, v27, v28);
      _4__this->fields.nextMovieObj = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, 0, v29, v30);
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v31 = _4__this->fields.MovieInfoList;
        if ( !v31 )
LABEL_45:
          sub_1B8880C(this, method);
        size = v31->fields._size;
        if ( size >= 1 )
        {
          v33 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, size - 1, 0, 0LL);
          v34 = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
          v35 = v33;
          v36 = BattleMoviePlayer___c_TypeInfo;
          if ( !BattleMoviePlayer___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo);
            v36 = BattleMoviePlayer___c_TypeInfo;
          }
          _9__36_0 = (System_Func_object__bool__o *)v36->static_fields->__9__36_0;
          if ( !_9__36_0 )
          {
            if ( !v36->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v36);
              v36 = BattleMoviePlayer___c_TypeInfo;
            }
            v38 = (Il2CppObject *)v36->static_fields->__9;
            _9__36_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__36_0, v38, Method_BattleMoviePlayer___c__StartMovie_b__36_0__, 0LL);
            static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
            static_fields->__9__36_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__36_0;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__36_0, (int32_t)_9__36_0, v40, v41);
          }
          if ( BasicHelper__Any_object_(
                 v34,
                 (System_Func_T__bool__o *)_9__36_0,
                 (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
          {
            BattleMoviePlayer__ShowBg(_4__this, 1, 0LL);
          }
          v42 = UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)_4__this, v35, 0LL);
          v4->fields.__2__current = (Il2CppObject *)v42;
          v43 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
          sub_1B88554(v43, (int32_t)v42, v44, v45);
          v46 = 3;
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
    v15 = _4__this->fields.currMovieObj;
    _4__this->fields.pastMovieObj = v15;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v15, v2, v3);
    nextMovieObj = _4__this->fields.nextMovieObj;
    _4__this->fields.currMovieObj = nextMovieObj;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.currMovieObj, (int32_t)nextMovieObj, v17, v18);
    _4__this->fields.nextMovieObj = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.nextMovieObj, 0, v19, v20);
    v21 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, v4->fields._i_5__2, 0, 0LL);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)UnityEngine_MonoBehaviour__StartCoroutine_69444652(
                                                      (UnityEngine_MonoBehaviour_o *)_4__this,
                                                      v21,
                                                      0LL);
    v22 = _4__this->fields.MovieInfoList;
    if ( !v22 )
      goto LABEL_45;
    v23 = v4->fields._i_5__2 + 2;
    if ( v23 < v22->fields._size )
      BattleMoviePlayer__GetMoviePanelAdd(_4__this, v23, 0LL);
    v24 = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__StartMovie_d__36_o *)UnityEngine_Object__op_Inequality(v24, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      break;
LABEL_23:
    v14 = v4->fields._i_5__2 + 1;
    v4->fields._i_5__2 = v14;
  }
  v47 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, v4->fields._i_5__2 + 1, 0LL);
  v48 = UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)_4__this, v47, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v48;
  v43 = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
  sub_1B88554(v43, (int32_t)v48, v49, v50);
  v46 = 2;
LABEL_43:
  *(_DWORD *)&v43[-1].fields.isMine = v46;
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

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_BattleMoviePlayer__StartMovie_d__36_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5D7A9 & 1) == 0 )
  {
    sub_1B885B0(&BattleMoviePlayer___c_TypeInfo);
    byte_4A5D7A9 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleMoviePlayer___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleMoviePlayer___c_TypeInfo->static_fields->__9 = (struct BattleMoviePlayer___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleMoviePlayer___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___FadeoutDeleteMovie_b__39_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___PauseMovie_b__37_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.cameraType == 1;
}


bool __fastcall BattleMoviePlayer___c___StartMovie_b__36_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.cameraType == 1;
}