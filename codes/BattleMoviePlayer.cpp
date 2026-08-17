void BattleMoviePlayer___cctor(const MethodInfo *method)
{
  struct BattleMoviePlayer_StaticFields *static_fields; // x8

  if ( (byte_5973569 & 1) == 0 )
  {
    sub_2213A60(&BattleMoviePlayer_TypeInfo);
    byte_5973569 = 1;
  }
  static_fields = BattleMoviePlayer_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BackMovieScale = xmmword_E9D700;
  *(_QWORD *)&static_fields->BasePanelPosition.fields.x = 0;
  static_fields->BasePanelPosition.fields.z = 10.0;
}


void BattleMoviePlayer___ctor(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__c *v3; // x0
  System_Collections_Generic_List_object__o *v4; // x20
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int v18; // w10
  UnityEngine_Vector3_c *v19; // x8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x9
  float z; // s1
  _BOOL4 v22; // w9
  struct UnityEngine_Vector3_StaticFields *v23; // x10
  float v24; // s1
  struct UnityEngine_Vector3_StaticFields *v25; // x8
  float v26; // s1

  if ( (byte_5973568 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
    sub_2213A60(&System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_5973568 = 1;
  }
  v3 = System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__TypeInfo;
  this->fields.KeepStartPosition = 1;
  v4 = (System_Collections_Generic_List_object__o *)sub_2213CCC(v3);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo___ctor__);
  this->fields.MovieInfoList = (struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *)v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.MovieInfoList, (int32_t)v4, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.ObjList = (struct System_Collections_Generic_List_GameObject__o *)v11;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.ObjList, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
  }
  v18 = (unsigned __int8)byte_5969AE5;
  v19 = UnityEngine_Vector3_TypeInfo;
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.startPanelPosition.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.startPanelPosition.fields.z = z;
  if ( v18 )
  {
    v22 = 0;
  }
  else
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    v19 = UnityEngine_Vector3_TypeInfo;
    byte_5969AE5 = 1;
    v22 = byte_5969AE0 == 0;
  }
  v23 = v19->static_fields;
  v24 = v23->oneVector.fields.z;
  *(_QWORD *)&this->fields.startPanelScale.fields.x = *(_QWORD *)&v23->oneVector.fields.x;
  this->fields.startPanelScale.fields.z = v24;
  if ( v22 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    v19 = UnityEngine_Vector3_TypeInfo;
    byte_5969AE0 = 1;
  }
  v25 = v19->static_fields;
  v26 = v25->zeroVector.fields.z;
  *(_QWORD *)&this->fields.cameraStartPosition.fields.x = *(_QWORD *)&v25->zeroVector.fields.x;
  this->fields.cameraStartPosition.fields.z = v26;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


UnityEngine_GameObject_o *BattleMoviePlayer__CreateBattleMoviePanel(
        BattleMoviePlayer_o *this,
        BattleMoviePlayer_MovieInfo_o *movieInfo,
        int32_t no,
        const MethodInfo *method)
{
  BattleMoviePlayer_o *v6; // x20
  int32_t cameraType; // w25
  Il2CppObject *v8; // x21
  struct UnityEngine_GameObject_o *v9; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x8
  struct System_Object_array *v17; // x9
  _QWORD *v18; // x10
  __int64 v19; // x11
  BattleMoviePlayer_o *v20; // x21
  Il2CppClass **v21; // x0
  struct BattlePerformance_o *perf; // x8
  Il2CppObject *moviePrefab; // x21
  __int64 v24; // x1
  UnityEngine_Transform_o *transform; // x23
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_List_object__o *ObjList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v34; // x10
  __int64 size; // x11
  Il2CppClass **v36; // x0
  UnityEngine_Material_o **p_baseMat; // x23
  UnityEngine_Object_o *baseMat; // x24
  UnityEngine_Material_o *material; // x24
  UnityEngine_Material_o *v40; // x25
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  UnityEngine_Transform_o *v47; // x24
  float v48; // s8
  float y; // s9
  UnityEngine_Transform_o *v50; // x22
  UnityEngine_Transform_o *v51; // x22
  float x; // s8
  float v53; // s9
  float z; // s10
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
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
  if ( (byte_597355C & 1) == 0 )
  {
    sub_2213A60(&BattleMoviePlayer_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_2213A60(&Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    this = (BattleMoviePlayer_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_597355C = 1;
  }
  component = 0;
  v60 = 0;
  if ( !movieInfo )
    goto LABEL_61;
  cameraType = movieInfo->fields.cameraType;
  if ( cameraType == 1 )
  {
    perf = v6->fields.perf;
    if ( !perf )
      goto LABEL_61;
    this = (BattleMoviePlayer_o *)perf->fields.actorcamera;
    if ( !this )
      goto LABEL_61;
    moviePrefab = (Il2CppObject *)v6->fields.moviePrefab;
    this = (BattleMoviePlayer_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_61;
    transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__59717116(
                                    moviePrefab,
                                    transform,
                                    (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    ObjList = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !ObjList )
      goto LABEL_61;
    items = ObjList->fields._items;
    v34 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++ObjList->fields._version;
    if ( !items )
      goto LABEL_61;
    size = ObjList->fields._size;
    v20 = this;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        ObjList,
        (Il2CppObject *)this,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    }
    else
    {
      v36 = &items->obj.klass + size;
      ObjList->fields._size = size + 1;
      v36[4] = (Il2CppClass *)v20;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v20, v26, v27, v28, v29, v30, v31);
    }
    if ( !v20 )
      goto LABEL_61;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v20,
           &v60,
           (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)v60;
      if ( !v60 )
        goto LABEL_61;
      BattleCameraFullScaleSetter__Initialize(
        (BattleCameraFullScaleSetter_o *)v60,
        v6->fields.perf,
        0,
        movieInfo->fields.isFlip,
        0);
    }
    UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)v20, 11, 0);
  }
  else
  {
    if ( cameraType )
    {
      v20 = 0;
      goto LABEL_37;
    }
    this = (BattleMoviePlayer_o *)v6->fields.perf;
    if ( !this )
      goto LABEL_61;
    v8 = (Il2CppObject *)v6->fields.moviePrefab;
    this = (BattleMoviePlayer_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_BattlePerformance___);
    if ( !this )
      goto LABEL_61;
    v9 = this[1].fields.moviePrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, movieInfo);
    this = (BattleMoviePlayer_o *)UnityEngine_Object__Instantiate_object__59717116(
                                    v8,
                                    (UnityEngine_Transform_o *)v9,
                                    (const MethodInfo_38F35FC *)Method_UnityEngine_Object_Instantiate_GameObject____91801432);
    v16 = (System_Collections_Generic_List_object__o *)v6->fields.ObjList;
    if ( !v16 )
      goto LABEL_61;
    v17 = v16->fields._items;
    v18 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v16->fields._version;
    if ( !v17 )
      goto LABEL_61;
    v19 = v16->fields._size;
    v20 = this;
    if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v16,
        (Il2CppObject *)this,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &v17->obj.klass + v19;
      v16->fields._size = v19 + 1;
      v21[4] = (Il2CppClass *)v20;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v20, v10, v11, v12, v13, v14, v15);
    }
    if ( !v20 )
      goto LABEL_61;
    if ( UnityEngine_GameObject__TryGetComponent_object_(
           (UnityEngine_GameObject_o *)v20,
           &component,
           (const MethodInfo_38B7F30 *)Method_UnityEngine_GameObject_TryGetComponent_BattleCameraFullScaleSetter___) )
    {
      this = (BattleMoviePlayer_o *)component;
      if ( !component )
        goto LABEL_61;
      BattleCameraFullScaleSetter__Initialize(
        (BattleCameraFullScaleSetter_o *)component,
        v6->fields.perf,
        1,
        movieInfo->fields.isFlip,
        0);
    }
  }
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v20,
                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
  if ( !this )
    goto LABEL_61;
  LODWORD(this->fields.moviePrefab) = cameraType;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, 1, 0);
LABEL_37:
  p_baseMat = &v6->fields.baseMat;
  baseMat = (UnityEngine_Object_o *)v6->fields.baseMat;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, movieInfo);
  this = (BattleMoviePlayer_o *)UnityEngine_Object__op_Equality(baseMat, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v20 )
      goto LABEL_61;
    this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                    (UnityEngine_GameObject_o *)v20,
                                    (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !this )
      goto LABEL_61;
    material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
    v40 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor_83274924(v40, material, 0);
    *p_baseMat = v40;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.baseMat, (int32_t)v40, v41, v42, v43, v44, v45, v46);
  }
  else if ( !v20 )
  {
    goto LABEL_61;
  }
  v47 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  if ( !this )
    goto LABEL_61;
  LODWORD(v48) = (unsigned int)UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  if ( !this )
    goto LABEL_61;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  y = position.fields.y;
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v20, 0);
  if ( !this )
    goto LABEL_61;
  v63 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
  if ( !v47 )
    goto LABEL_61;
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
            x = localScale.fields.x;
            v53 = localScale.fields.y;
            this = (BattleMoviePlayer_o *)BattleMoviePlayer_TypeInfo;
            z = localScale.fields.z;
            if ( !*(&BattleMoviePlayer_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, movieInfo);
            if ( v51 )
            {
              static_fields = BattleMoviePlayer_TypeInfo->static_fields;
              v68.fields.z = z * static_fields->BackMovieScale;
              v68.fields.y = v53 * static_fields->BackMovieScale;
              v68.fields.x = x * static_fields->BackMovieScale;
              UnityEngine_Transform__set_localScale(v51, v68, 0);
              goto LABEL_57;
            }
          }
        }
      }
    }
LABEL_61:
    sub_2213CDC(this, movieInfo);
  }
LABEL_57:
  v56 = *p_baseMat;
  v57 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
  UnityEngine_Material___ctor_83274924(v57, v56, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v20,
                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_61;
  UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)this, v57, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v20,
                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
  if ( !this )
    goto LABEL_61;
  CriManaMovieMaterial__set_material((CriManaMovieMaterial_o *)this, v57, 0);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)v20, 1, 0);
  this = (BattleMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                                  (UnityEngine_GameObject_o *)v20,
                                  (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
  if ( !this )
    goto LABEL_61;
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
  System_Collections_Generic_List_object__o *v19; // x19
  System_Collections_Generic_List_float__o *v20; // x20
  System_Collections_Generic_List_int__o *v21; // x21
  System_Collections_Generic_List_float__o *v22; // x23
  const MethodInfo_44AE7F8 **v23; // x28
  System_Collections_Generic_List_float__o *v25; // x27
  int32_t v26; // w29
  BattleMoviePlayer_o *v27; // x25
  float v28; // s8
  float v29; // s9
  int32_t v30; // w21
  float Item; // s10
  BattleMoviePlayer_o *v32; // x19
  float v33; // s11
  float v34; // s12
  int32_t v35; // w25
  System_Collections_Generic_List_float__o *v36; // x22
  const MethodInfo_44AE7F8 **v37; // x26
  System_Collections_Generic_List_object__o *MovieInfoList; // x27
  bool IgnoreTimeScale; // w19
  bool v40; // w20
  bool v41; // w21
  bool flip; // w23
  BattleMoviePlayer_MovieInfo_o *v43; // x28
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  struct System_Object_array *items; // x8
  _QWORD *v51; // x9
  __int64 size; // x10
  Il2CppClass **v53; // x0
  System_Collections_Generic_List_float__o *v54; // [xsp+28h] [xbp-E8h]
  BattleMoviePlayer_o *v60; // [xsp+58h] [xbp-B8h]
  UnityEngine_Events_UnityEvent_o *v61; // [xsp+60h] [xbp-B0h]
  System_String_o *v62; // [xsp+68h] [xbp-A8h]
  int32_t typea; // [xsp+7Ch] [xbp-94h]

  v60 = this;
  if ( (byte_5973567 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_float__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_UnityEvent__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_UnityEvent__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_float__get_Item__);
    sub_2213A60(&BattleMoviePlayer_MovieInfo_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_2213A60(&StringLiteral_1/*""*/);
    byte_5973567 = 1;
  }
  v60->fields.KeepStartPosition = keepStartPosition;
  v60->fields.OverrideZDepth = overrideZDepth;
  v60->fields.IgnoreTimeScale = ignoreTS;
  v60->fields.Loop = loop;
  v60->fields.IsBackMovie = isBackMovie;
  v60->fields.IsFlip = isFlip;
  if ( !path )
LABEL_47:
    sub_2213CDC(this, type);
  v20 = speed;
  v19 = (System_Collections_Generic_List_object__o *)effect;
  v22 = valid;
  v21 = cam;
  if ( path->fields._size >= 1 )
  {
    v23 = (const MethodInfo_44AE7F8 **)&Method_System_Collections_Generic_List_float__get_Item__;
    v25 = effRest;
    v26 = 0;
    v54 = fadeout;
    do
    {
      this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)path,
                                      v26,
                                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
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
              typea = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                              (System_Collections_Generic_List_T__o *)type,
                                              v26,
                                              (const MethodInfo_4469790 *)Method_System_Collections_Generic_List_BattleMoviePlayer_PathType__get_Item__);
              typea = (int)this;
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
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_string__get_Item__);
              v27 = this;
            }
            if ( !v22 )
              goto LABEL_47;
            v28 = 0.0;
            v29 = 0.0;
            if ( v26 < v22->fields._size )
              v29 = fmaxf(System_Collections_Generic_List_float___get_Item(v22, v26, *v23), 0.0);
            if ( v26 < fadeout->fields._size )
              v28 = fmaxf(System_Collections_Generic_List_float___get_Item(fadeout, v26, *v23), 1.0);
            if ( v26 >= v21->fields._size )
            {
              v30 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_int___get_Item(
                                              v21,
                                              v26,
                                              (const MethodInfo_4466F78 *)Method_System_Collections_Generic_List_int__get_Item__);
              v30 = (int)this;
            }
            if ( !v20 )
              goto LABEL_47;
            Item = 1.0;
            if ( v26 < v20->fields._size )
              Item = System_Collections_Generic_List_float___get_Item(v20, v26, *v23);
            if ( !v19 )
              goto LABEL_47;
            v62 = (System_String_o *)v27;
            if ( v26 >= v19->fields._size )
            {
              v32 = 0;
            }
            else
            {
              this = (BattleMoviePlayer_o *)System_Collections_Generic_List_object___get_Item(
                                              v19,
                                              v26,
                                              (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_UnityEvent__get_Item__);
              v32 = this;
            }
            if ( !v25 )
              goto LABEL_47;
            v33 = 0.0;
            if ( v26 < v25->fields._size )
              v33 = System_Collections_Generic_List_float___get_Item(v25, v26, *v23);
            if ( !fadein )
              goto LABEL_47;
            v34 = 0.0;
            v35 = v30;
            v61 = (UnityEngine_Events_UnityEvent_o *)v32;
            if ( v26 < fadein->fields._size )
              v34 = System_Collections_Generic_List_float___get_Item(fadein, v26, *v23);
            v36 = fadein;
            v37 = v23;
            MovieInfoList = (System_Collections_Generic_List_object__o *)v60->fields.MovieInfoList;
            IgnoreTimeScale = v60->fields.IgnoreTimeScale;
            v40 = v60->fields.Loop;
            v41 = v60->fields.IsBackMovie;
            flip = v60->fields.IsFlip;
            v43 = (BattleMoviePlayer_MovieInfo_o *)sub_2213CCC(BattleMoviePlayer_MovieInfo_TypeInfo);
            BattleMoviePlayer_MovieInfo___ctor(
              v43,
              typea,
              v62,
              v29,
              v28,
              v35,
              Item,
              v61,
              v33,
              IgnoreTimeScale,
              v34,
              v40,
              v41,
              flip,
              0);
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
                *(const MethodInfo_4483C64 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
            }
            else
            {
              v53 = &items->obj.klass + size;
              MovieInfoList->fields._size = size + 1;
              v53[4] = (Il2CppClass *)v43;
              sub_2213A04((MissionNaviTransitionBoardItem_o *)(v53 + 4), (int32_t)v43, v44, v45, v46, v47, v48, v49);
            }
            v20 = speed;
            v19 = (System_Collections_Generic_List_object__o *)effect;
            v22 = valid;
            v21 = cam;
            v23 = v37;
            fadein = v36;
            v25 = effRest;
            fadeout = v54;
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
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__28_0; // x21
  Il2CppObject *v10; // x22
  struct BattleMoviePlayer___c_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x2
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  __int64 v22; // x1
  Il2CppObject *current; // x20
  __int64 v24; // x1
  struct System_Collections_Generic_List_GameObject__o *v25; // x8
  int32_t v26; // w2
  int v27; // w9
  __int64 v28; // x1
  UnityEngine_Object_o *gameObject; // x19
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_597355B & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleMoviePlayer___c__Dispose_b__28_0__);
    sub_2213A60(&BattleMoviePlayer___c_TypeInfo);
    byte_597355B = 1;
  }
  perf = (UnityEngine_Object_o *)this->fields.perf;
  memset(&v30, 0, sizeof(v30));
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  ObjList = (struct System_Collections_Generic_List_GameObject__o *)UnityEngine_Object__op_Inequality(perf, 0, 0);
  if ( ((unsigned __int8)ObjList & 1) != 0 )
  {
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v7 = BattleMoviePlayer___c_TypeInfo;
    if ( !*(&BattleMoviePlayer___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo, v5);
      v7 = BattleMoviePlayer___c_TypeInfo;
    }
    static_fields = v7->static_fields;
    _9__28_0 = (System_Func_object__bool__o *)static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( !*(&v7->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v7, v5);
        static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      }
      v10 = (Il2CppObject *)static_fields->__9;
      _9__28_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__28_0, v10, Method_BattleMoviePlayer___c__Dispose_b__28_0__, 0);
      v11 = BattleMoviePlayer___c_TypeInfo->static_fields;
      v11->__9__28_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__28_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v11->__9__28_0, (int32_t)_9__28_0, v12, v13, v14, v15, v16, v17);
    }
    ObjList = (struct System_Collections_Generic_List_GameObject__o *)BasicHelper__Any_object_(
                                                                        MovieInfoList,
                                                                        (System_Func_T__bool__o *)_9__28_0,
                                                                        (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    if ( ((unsigned __int8)ObjList & 1) != 0 )
      BattleMoviePlayer__ShowBg(this, 1, v18);
  }
  v19 = this->fields.MovieInfoList;
  if ( !v19 )
    goto LABEL_32;
  size = v19->fields._size;
  v21 = v19->fields._version + 1;
  v19->fields._size = 0;
  v19->fields._version = v21;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0);
  ObjList = this->fields.ObjList;
  if ( !ObjList )
    goto LABEL_32;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)ObjList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v30,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v30.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      UnityEngine_Object__Destroy_83459800((UnityEngine_Object_o *)current, 0);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v25 = this->fields.ObjList;
  if ( !v25 )
LABEL_32:
    sub_2213CDC(ObjList, v5);
  v26 = v25->fields._size;
  v27 = v25->fields._version + 1;
  v25->fields._size = 0;
  v25->fields._version = v27;
  if ( v26 >= 1 )
    System_Array__Clear((System_Array_o *)v25->fields._items, 0, v26, 0);
  gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  UnityEngine_Object__Destroy_83459800(gameObject, 0);
}


System_Collections_IEnumerator_o *BattleMoviePlayer__FadeoutDeleteMovie(
        BattleMoviePlayer_o *this,
        System_Action_o *FadeOuted,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5973562 & 1) == 0 )
  {
    sub_2213A60(&BattleMoviePlayer__FadeoutDeleteMovie_d__39_TypeInfo);
    byte_5973562 = 1;
  }
  v5 = sub_2213CCC(BattleMoviePlayer__FadeoutDeleteMovie_d__39_TypeInfo);
  BattleMoviePlayer__FadeoutDeleteMovie_d__39___ctor((BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *)v5, 0, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = FadeOuted;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)FadeOuted, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
void BattleMoviePlayer__GetMoviePanelAdd(BattleMoviePlayer_o *this, int32_t i, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *MovieInfoList; // x0
  Il2CppObject *Item; // x0
  const MethodInfo *v7; // x3
  struct UnityEngine_GameObject_o *BattleMoviePanel; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7

  if ( (byte_597355E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    byte_597355E = 1;
  }
  MovieInfoList = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
  if ( !MovieInfoList )
    sub_2213CDC(0, *(_QWORD *)&i);
  if ( MovieInfoList->fields._size > i )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             MovieInfoList,
             i,
             (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(this, (BattleMoviePlayer_MovieInfo_o *)Item, i, v7);
    this->fields.nextMovieObj = BattleMoviePanel;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.nextMovieObj,
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
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_597355D & 1) == 0 )
  {
    sub_2213A60(&BattleMoviePlayer__GetMoviePanelFirst_d__31_TypeInfo);
    byte_597355D = 1;
  }
  v5 = sub_2213CCC(BattleMoviePlayer__GetMoviePanelFirst_d__31_TypeInfo);
  BattleMoviePlayer__GetMoviePanelFirst_d__31___ctor((BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)v5, 0, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = performance;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)performance, v14, v15, v16, v17, v18, v19);
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
  __int64 v10; // x1
  AssetData_o *AssetStorageData; // x0
  System_String_o *v12; // x22
  int v13; // w8
  System_Collections_Generic_List_object__o *v14; // x8
  System_String_o *v15; // x21
  __int64 *v16; // x8
  System_Collections_Generic_List_object__o *v17; // x8
  __int64 v18; // x1
  UnityEngine_Object_o *Component_object; // x19

  if ( (byte_5973566 & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Application_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_1121/*".usm"*/);
    sub_2213A60(&StringLiteral_1168/*"/StreamingAssets/"*/);
    sub_2213A60(&StringLiteral_1163/*"/Resources/"*/);
    byte_5973566 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( UnityEngine_Object__op_Implicit((UnityEngine_Object_o *)obj, 0) )
  {
    MovieInfoList = this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_41;
    MovieInfoList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)MovieInfoList,
                      pathnum,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v9 = (System_String_o *)*((_QWORD *)MovieInfoList + 3);
    if ( !v9 )
      goto LABEL_41;
    if ( !System_String__EndsWith(*((System_String_o **)MovieInfoList + 3), (System_String_o *)StringLiteral_1121/*".usm"*/, 0) )
      v9 = System_String__Concat_75651716(v9, (System_String_o *)StringLiteral_1121/*".usm"*/, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v10);
    AssetStorageData = AssetManager__getAssetStorageData(v9, 0);
    v12 = AssetStorageData ? AssetData__get_Path(AssetStorageData, 0) : 0LL;
    MovieInfoList = this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_41;
    MovieInfoList = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)MovieInfoList,
                      pathnum,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    if ( !MovieInfoList )
      goto LABEL_41;
    v13 = *((_DWORD *)MovieInfoList + 4);
    if ( v13 == 102 )
    {
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v7);
      MovieInfoList = UnityEngine_Application__get_dataPath(0);
      v17 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v17 )
        goto LABEL_41;
      v15 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v17,
                        pathnum,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v16 = &StringLiteral_1163/*"/Resources/"*/;
    }
    else
    {
      if ( v13 != 101 )
        goto LABEL_31;
      if ( !*(&UnityEngine_Application_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Application_TypeInfo, v7);
      MovieInfoList = UnityEngine_Application__get_dataPath(0);
      v14 = (System_Collections_Generic_List_object__o *)this->fields.MovieInfoList;
      if ( !v14 )
        goto LABEL_41;
      v15 = (System_String_o *)MovieInfoList;
      MovieInfoList = System_Collections_Generic_List_object___get_Item(
                        v14,
                        pathnum,
                        (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      if ( !MovieInfoList )
        goto LABEL_41;
      v16 = &StringLiteral_1168/*"/StreamingAssets/"*/;
    }
    MovieInfoList = System_String__Concat_75694928(
                      v15,
                      (System_String_o *)*v16,
                      *((System_String_o **)MovieInfoList + 3),
                      0);
    v12 = (System_String_o *)MovieInfoList;
LABEL_31:
    if ( obj )
    {
      Component_object = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(
                                                   obj,
                                                   (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      if ( !UnityEngine_Object__op_Inequality(Component_object, 0, 0) )
        return;
      MovieInfoList = (void *)System_String__IsNullOrEmpty(v12, 0);
      if ( ((unsigned __int8)MovieInfoList & 1) != 0 )
        return;
      if ( Component_object )
      {
        MovieInfoList = Component_object[2].monitor;
        if ( MovieInfoList )
        {
          CriMana_Player__SetFile((CriMana_Player_o *)MovieInfoList, 0, v12, 0, 0);
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
    sub_2213CDC(MovieInfoList, v7);
  }
}


void BattleMoviePlayer__Initialize(BattleMoviePlayer_o *this, BattlePerformance_o *perf, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *MoviePanelFirst; // x1

  MoviePanelFirst = BattleMoviePlayer__GetMoviePanelFirst(this, perf, method);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, MoviePanelFirst, 0);
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
  if ( (byte_5973563 & 1) == 0 )
  {
    sub_2213A60(&BattleMoviePlayer_TypeInfo);
    this = (BattleMoviePlayer_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973563 = 1;
  }
  perf = v2->fields.perf;
  if ( !perf )
    goto LABEL_16;
  actorcamera = (UnityEngine_Object_o *)perf->fields.actorcamera;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
    sub_2213CDC(this, method);
  }
  v7 = BattleMoviePlayer_TypeInfo;
  if ( !*(&BattleMoviePlayer_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, method);
    v7 = BattleMoviePlayer_TypeInfo;
  }
  fieldOfView = v7->static_fields->DefaultFov;
LABEL_13:
  if ( !*(&v7->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v7, method);
    v7 = BattleMoviePlayer_TypeInfo;
  }
  return fieldOfView > v7->static_fields->DefaultFov;
}


bool BattleMoviePlayer__IsPausedMovie(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *currMovieObj; // x20
  __int64 v4; // x1
  UnityEngine_GameObject_o *Component_object; // x0

  if ( (byte_5973561 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5973561 = 1;
  }
  currMovieObj = (UnityEngine_Object_o *)this->fields.currMovieObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(currMovieObj, 0, 0) )
    return 0;
  Component_object = this->fields.currMovieObj;
  if ( !Component_object
    || (Component_object = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                         Component_object,
                                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___)) == 0
    || (Component_object = (UnityEngine_GameObject_o *)Component_object[2].monitor) == 0 )
  {
    sub_2213CDC(Component_object, v4);
  }
  return CriMana_Player__IsPaused((CriMana_Player_o *)Component_object, 0);
}


// local variable allocation has failed, the output may be wrong!
void BattleMoviePlayer__PauseMovie(BattleMoviePlayer_o *this, bool v, const MethodInfo *method)
{
  UnityEngine_Object_o *currMovieObj; // x21
  Il2CppObject *Component_object; // x0
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x21
  __int64 v9; // x1
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  BattleMoviePlayer___c_c *v11; // x0
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__37_0; // x23
  Il2CppObject *v14; // x24
  struct BattleMoviePlayer___c_StaticFields *v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  const MethodInfo *v22; // x2

  if ( (byte_5973560 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_2213A60(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleMoviePlayer___c__PauseMovie_b__37_0__);
    sub_2213A60(&BattleMoviePlayer___c_TypeInfo);
    byte_5973560 = 1;
  }
  currMovieObj = (UnityEngine_Object_o *)this->fields.currMovieObj;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v);
  Component_object = (Il2CppObject *)UnityEngine_Object__op_Equality(currMovieObj, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    v8 = this->fields.currMovieObj;
    if ( !v8 )
      goto LABEL_19;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         this->fields.currMovieObj,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    if ( !Component_object )
      goto LABEL_19;
    Component_object = (Il2CppObject *)Component_object[3].monitor;
    if ( !Component_object )
      goto LABEL_19;
    CriMana_Player__Pause((CriMana_Player_o *)Component_object, v, 0);
    MovieInfoList = (System_Collections_Generic_List_T__o *)this->fields.MovieInfoList;
    v11 = BattleMoviePlayer___c_TypeInfo;
    if ( !*(&BattleMoviePlayer___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo, v9);
      v11 = BattleMoviePlayer___c_TypeInfo;
    }
    static_fields = v11->static_fields;
    _9__37_0 = (System_Func_object__bool__o *)static_fields->__9__37_0;
    if ( !_9__37_0 )
    {
      if ( !*(&v11->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v11, v9);
        static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
      }
      v14 = (Il2CppObject *)static_fields->__9;
      _9__37_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__37_0, v14, Method_BattleMoviePlayer___c__PauseMovie_b__37_0__, 0);
      v15 = BattleMoviePlayer___c_TypeInfo->static_fields;
      v15->__9__37_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__37_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v15->__9__37_0, (int32_t)_9__37_0, v16, v17, v18, v19, v20, v21);
    }
    if ( BasicHelper__Any_object_(
           MovieInfoList,
           (System_Func_T__bool__o *)_9__37_0,
           (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
    {
      BattleMoviePlayer__ShowBg(this, v, v22);
    }
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v8,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    if ( !Component_object )
LABEL_19:
      sub_2213CDC(Component_object, v7);
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
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5973564 & 1) == 0 )
  {
    sub_2213A60(&BattleMoviePlayer__PlayMovie_d__45_TypeInfo);
    byte_5973564 = 1;
  }
  v7 = sub_2213CCC(BattleMoviePlayer__PlayMovie_d__45_TypeInfo);
  BattleMoviePlayer__PlayMovie_d__45___ctor((BattleMoviePlayer__PlayMovie_d__45_o *)v7, 0, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 40) = movieObj;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)movieObj, v16, v17, v18, v19, v20, v21);
  result = (System_Collections_IEnumerator_o *)v7;
  *(_DWORD *)(v7 + 48) = num;
  return result;
}


System_Collections_IEnumerator_o *BattleMoviePlayer__PlayMovieFadeOut(
        BattleMoviePlayer_o *this,
        UnityEngine_GameObject_o *movieObj,
        int32_t num,
        bool forceFadeout,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_IEnumerator_o *result; // x0

  if ( (byte_5973565 & 1) == 0 )
  {
    sub_2213A60(&BattleMoviePlayer__PlayMovieFadeOut_d__46_TypeInfo);
    byte_5973565 = 1;
  }
  v9 = sub_2213CCC(BattleMoviePlayer__PlayMovieFadeOut_d__46_TypeInfo);
  BattleMoviePlayer__PlayMovieFadeOut_d__46___ctor((BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v9, 0, 0);
  if ( !v9 )
    sub_2213CDC(v10, v11);
  *(_QWORD *)(v9 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = movieObj;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)movieObj, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v9 + 48) = num;
  result = (System_Collections_IEnumerator_o *)v9;
  *(_BYTE *)(v9 + 52) = forceFadeout;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void BattleMoviePlayer__ShowBg(BattleMoviePlayer_o *this, bool v, const MethodInfo *method)
{
  BattleMoviePlayer_o *v3; // x19
  struct BattlePerformance_o *perf; // x8
  UnityEngine_Camera_o *actorcamera; // x19
  int32_t cullingMask; // w8
  UnityEngine_Camera_o *v7; // x0
  int32_t v8; // w1
  struct BattlePerformance_o *v9; // x8
  UnityEngine_Camera_o *v10; // x19
  int32_t v11; // w8

  v3 = this;
  if ( !v )
  {
    perf = this->fields.perf;
    if ( perf )
    {
      actorcamera = perf->fields.actorcamera;
      if ( actorcamera )
      {
        cullingMask = UnityEngine_Camera__get_cullingMask(perf->fields.actorcamera, 0);
        v7 = actorcamera;
        v8 = cullingMask & 0xFFEFFFFF;
LABEL_12:
        UnityEngine_Camera__set_cullingMask(v7, v8, 0);
        return;
      }
    }
LABEL_13:
    sub_2213CDC(this, v);
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
    v9 = v3->fields.perf;
    if ( v9 )
    {
      v10 = v9->fields.actorcamera;
      if ( v10 )
      {
        v11 = UnityEngine_Camera__get_cullingMask(v9->fields.actorcamera, 0);
        v7 = v10;
        v8 = v11 | 0x100000;
        goto LABEL_12;
      }
    }
    goto LABEL_13;
  }
}


System_Collections_IEnumerator_o *BattleMoviePlayer__StartMovie(BattleMoviePlayer_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_597355F & 1) == 0 )
  {
    sub_2213A60(&BattleMoviePlayer__StartMovie_d__36_TypeInfo);
    byte_597355F = 1;
  }
  v3 = sub_2213CCC(BattleMoviePlayer__StartMovie_d__36_TypeInfo);
  BattleMoviePlayer__StartMovie_d__36___ctor((BattleMoviePlayer__StartMovie_d__36_o *)v3, 0, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
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
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  this->fields.playSpeed = 1.0;
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.pathType = type;
  this->fields.moviePath = path;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.moviePath, (int32_t)path, v28, v29, v30, v31, v32, v33);
  this->fields.playSpeed = speed;
  this->fields.effectEvent = eff;
  this->fields.validTime = valid;
  this->fields.fadeRestTime = fade;
  this->fields.cameraType = cam;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.effectEvent, (int32_t)eff, v34, v35, v36, v37, v38, v39);
  this->fields.effectRestTime = effRest;
  this->fields.ignoreTimeScale = ignoreTmScl;
  this->fields.fadeinTime = fadein;
  this->fields.loop = lp;
  this->fields.isBackMovie = backMovie;
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
  __int64 v6; // x1
  System_Collections_IEnumerator_o *v7; // x21
  System_Collections_Generic_List_T__o *MovieInfoList; // x22
  BattleMoviePlayer___c_c *v9; // x8
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__39_0; // x23
  Il2CppObject *v12; // x24
  struct BattleMoviePlayer___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_Coroutine_o *started; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  BattlePerformance_o *perf; // x0
  struct System_Action_o *FadeOuted; // x8

  v2 = this;
  if ( (byte_597356B & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_2213A60(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__39_0__);
    this = (BattleMoviePlayer__FadeoutDeleteMovie_d__39_o *)sub_2213A60(&BattleMoviePlayer___c_TypeInfo);
    byte_597356B = 1;
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
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
      if ( UnityEngine_Object__op_Inequality(currMovieObj, 0, 0) )
      {
        v7 = BattleMoviePlayer__PlayMovieFadeOut(
               _4__this,
               _4__this->fields.currMovieObj,
               _4__this->fields.currentMovieNum,
               1,
               0);
        MovieInfoList = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
        v9 = BattleMoviePlayer___c_TypeInfo;
        if ( !*(&BattleMoviePlayer___c_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo, v6);
          v9 = BattleMoviePlayer___c_TypeInfo;
        }
        static_fields = v9->static_fields;
        _9__39_0 = (System_Func_object__bool__o *)static_fields->__9__39_0;
        if ( !_9__39_0 )
        {
          if ( !*(&v9->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v9, v6);
            static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
          }
          v12 = (Il2CppObject *)static_fields->__9;
          _9__39_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
          System_Func_object__bool____ctor(_9__39_0, v12, Method_BattleMoviePlayer___c__FadeoutDeleteMovie_b__39_0__, 0);
          v13 = BattleMoviePlayer___c_TypeInfo->static_fields;
          v13->__9__39_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__39_0;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&v13->__9__39_0,
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
               (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
        {
          BattleMoviePlayer__ShowBg(_4__this, 1, 0);
        }
        started = UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)_4__this, v7, 0);
        v2->fields.__2__current = (Il2CppObject *)started;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v2->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)started, v22, v23, v24, v25, v26, v27);
        LOBYTE(perf) = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return (char)perf;
      }
LABEL_23:
      LOBYTE(perf) = 0;
      return (char)perf;
    }
LABEL_25:
    sub_2213CDC(this, method);
  }
  v2->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_25;
  BattleMoviePlayer__Dispose(_4__this, 0);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleMoviePlayer__FadeoutDeleteMovie_d__39_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct BattlePerformance_o *v14; // x1
  UnityEngine_Object_o *v15; // x21
  Il2CppObject *Component_object; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  __int64 v23; // x1
  UnityEngine_Object_o *v24; // x20
  Il2CppObject *v25; // x0
  UnityEngine_GameObject_o *v26; // x0
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppObject *Item; // x0
  UnityEngine_GameObject_o *BattleMoviePanel; // x0
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7

  v2 = this;
  if ( (byte_597356C & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)sub_2213A60(&StringLiteral_11044/*"Performance"*/);
    byte_597356C = 1;
  }
  if ( !v2->fields.__1__state )
  {
    _4__this = v2->fields.__4__this;
    v2->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_25;
    p_perf = (Il2CppObject **)&_4__this->fields.perf;
    perf = (UnityEngine_Object_o *)_4__this->fields.perf;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Equality(perf, 0, 0) )
      goto LABEL_19;
    performance = (UnityEngine_Object_o *)v2->fields.performance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(performance, 0, 0) )
    {
      v14 = v2->fields.performance;
      *p_perf = (Il2CppObject *)v14;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.perf, (int32_t)v14, v8, v9, v10, v11, v12, v13);
    }
    v15 = (UnityEngine_Object_o *)*p_perf;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
    if ( !UnityEngine_Object__op_Equality(v15, 0, 0) )
      goto LABEL_19;
    this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)UnityEngine_GameObject__Find(
                                                              (System_String_o *)StringLiteral_11044/*"Performance"*/,
                                                              0);
    if ( !this )
      goto LABEL_25;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattlePerformance___);
    *p_perf = Component_object;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.perf,
      (int32_t)Component_object,
      v17,
      v18,
      v19,
      v20,
      v21,
      v22);
    v24 = (UnityEngine_Object_o *)*p_perf;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v23);
    if ( !UnityEngine_Object__op_Equality(v24, 0, 0) )
    {
LABEL_19:
      this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)_4__this->fields.MovieInfoList;
      if ( this )
      {
        if ( SLODWORD(this->fields.__2__current) < 1
          || (v25 = System_Collections_Generic_List_object___get_Item(
                      (System_Collections_Generic_List_object__o *)this,
                      0,
                      (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__),
              v26 = BattleMoviePlayer__CreateBattleMoviePanel(_4__this, (BattleMoviePlayer_MovieInfo_o *)v25, 0, 0),
              _4__this->fields.currMovieObj = v26,
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&_4__this->fields.currMovieObj,
                (int32_t)v26,
                v27,
                v28,
                v29,
                v30,
                v31,
                v32),
              (this = (BattleMoviePlayer__GetMoviePanelFirst_d__31_o *)_4__this->fields.MovieInfoList) != 0) )
        {
          if ( SLODWORD(this->fields.__2__current) > 1 )
          {
            Item = System_Collections_Generic_List_object___get_Item(
                     (System_Collections_Generic_List_object__o *)this,
                     1,
                     (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
            BattleMoviePanel = BattleMoviePlayer__CreateBattleMoviePanel(
                                 _4__this,
                                 (BattleMoviePlayer_MovieInfo_o *)Item,
                                 1,
                                 0);
            _4__this->fields.nextMovieObj = BattleMoviePanel;
            sub_2213A04(
              (MissionNaviTransitionBoardItem_o *)&_4__this->fields.nextMovieObj,
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
      sub_2213CDC(this, method);
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleMoviePlayer__GetMoviePanelFirst_d__31_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *movieObj; // x21
  struct CriManaMovieController_o *v12; // x8
  UnityEngine_Material_o *material; // x0
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o **p_movieMaterial_5__2; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **v22; // x22
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  struct BattleMoviePlayer_MovieInfo_o *v29; // x8
  float validTime; // s8
  struct CriManaMovieController_o *v31; // x8
  float effectRestTime; // s0
  struct CriManaMovieController_o *v33; // x8
  _BOOL4 forceFadeout; // w8
  struct BattleMoviePlayer_MovieInfo_o *v35; // x8
  float v36; // s0
  struct CriManaMovieController_o *currController; // x8
  CriMana_Player_o *player_k__BackingField; // x0
  int32_t num; // w8
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x9
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__3; // x8
  float fadeRestTime; // s1
  float v43; // s8
  float v44; // s0
  float v45; // s1
  float v46; // s0
  struct BattleMoviePlayer_MovieInfo_o *v47; // x8
  float restTime_5__6; // s9
  float timeScale; // s0
  _BOOL4 KeepStartPosition; // w9
  float *monitor; // x9
  struct BattlePerformance_o *perf; // x8
  float v53; // w10
  __int64 v54; // x9
  struct BattlePerformance_o *v55; // x8
  float z; // s8
  bool IsBossCamera; // w8
  float32x2_t v58; // d10
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v59; // x21
  float v60; // s9
  float v61; // s0
  float v62; // s3
  float v63; // s4
  unsigned __int64 v64; // d0 OVERLAPPED
  float v65; // s2
  int v66; // s1
  int32_t v67; // w2
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v69; // s8
  float v70; // s9
  float v71; // s10
  float v72; // s0
  BattleMoviePlayer_c *v73; // x8
  struct BattlePerformance_o *v74; // x8
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o *v75; // x21
  float v76; // s3
  float v77; // s2
  float v78; // s8
  float v79; // s9
  float v80; // s10
  __int64 v81; // x1
  bool v82; // w8
  BattleMoviePlayer_c *v83; // x0
  int v84; // w9
  float v85; // s11
  float v86; // s12
  float v87; // s13
  float v88; // s0
  float v89; // s0
  float v90; // s2
  float v91; // s1
  float v92; // s0 OVERLAPPED
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0
  BattleMoviePlayer__PlayMovieFadeOut_d__46_o **p_movInfo_5__3; // x21
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  __int64 v108; // x1
  UnityEngine_Object_o *v109; // x19
  float v110; // s11
  float v111; // s12
  float v112; // s13
  float y; // [xsp+0h] [xbp-80h]
  float x; // [xsp+10h] [xbp-70h]
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v122; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_597356E & 1) == 0 )
  {
    sub_2213A60(&BattleMoviePlayer_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17079/*"_ZWriteMode"*/);
    sub_2213A60(&StringLiteral_17077/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)sub_2213A60(&StringLiteral_17037/*"_Transparency"*/);
    byte_597356E = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_131;
    currController = _4__this->fields.currController;
    if ( !currController )
      goto LABEL_131;
    player_k__BackingField = currController->fields._player_k__BackingField;
    if ( !player_k__BackingField )
      goto LABEL_113;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__GetDisplayedFrameNo(player_k__BackingField, 0);
    if ( v8->fields._effectTime_5__4 <= (float)(int)this )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movInfo_5__3;
      if ( !this )
        goto LABEL_131;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movInfo_5__3;
        if ( !this )
          goto LABEL_131;
      }
      *(_QWORD *)&this->fields.num = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.num, 0, v2, v3, v4, v5, v6, v7);
    }
    num = v8->fields.num;
    if ( num < 0 )
      goto LABEL_66;
    MovieInfoList = _4__this->fields.MovieInfoList;
    if ( !MovieInfoList )
      goto LABEL_131;
    if ( num >= MovieInfoList->fields._size )
    {
LABEL_66:
      v8->fields._pastError_5__5 = 1;
LABEL_113:
      p_movInfo_5__3 = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o **)&v8->fields._movInfo_5__3;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movInfo_5__3;
      if ( !this )
        goto LABEL_131;
      if ( *(_QWORD *)&this->fields.num )
      {
        UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0);
        this = *p_movInfo_5__3;
        if ( !*p_movInfo_5__3 )
          goto LABEL_131;
      }
      *(_QWORD *)&this->fields.num = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.num, 0, v2, v3, v4, v5, v6, v7);
      if ( !v8->fields._pastError_5__5 )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_131;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_17077/*"_ZTestMode"*/, 4, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movieMaterial_5__2;
        if ( !this )
          goto LABEL_131;
        UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_17037/*"_Transparency"*/, 1.0, 0);
      }
      v8->fields._movieMaterial_5__2 = 0;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._movieMaterial_5__2,
        0,
        v96,
        v97,
        v98,
        v99,
        v100,
        v101);
      v8->fields._movInfo_5__3 = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields._movInfo_5__3, 0, v102, v103, v104, v105, v106, v107);
      goto LABEL_121;
    }
    movInfo_5__3 = v8->fields._movInfo_5__3;
    if ( !movInfo_5__3 )
      goto LABEL_131;
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields._movieMaterial_5__2;
    if ( !this )
      goto LABEL_131;
    fadeRestTime = movInfo_5__3->fields.fadeRestTime;
    v43 = 1.0;
    v44 = 1.0 - (float)(v8->fields._restTime_5__6 / fadeRestTime);
    v45 = v44 <= 1.0 ? 1.0 - (float)(v8->fields._restTime_5__6 / fadeRestTime) : 1.0;
    v46 = v44 >= 0.0 ? v45 : 0.0;
    UnityEngine_Material__SetFloat((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_17037/*"_Transparency"*/, v46, 0);
    v47 = v8->fields._movInfo_5__3;
    if ( !v47 )
      goto LABEL_131;
    restTime_5__6 = v8->fields._restTime_5__6;
    if ( !v47->fields.ignoreTimeScale )
    {
      timeScale = UnityEngine_Time__get_timeScale(0);
      v47 = v8->fields._movInfo_5__3;
      if ( !v47 )
        goto LABEL_131;
      v43 = timeScale;
    }
    KeepStartPosition = _4__this->fields.KeepStartPosition;
    v8->fields._restTime_5__6 = restTime_5__6 - (float)(v43 * v47->fields.playSpeed);
    if ( KeepStartPosition )
    {
      if ( v47->fields._UsePlayMakerShakeParam_k__BackingField )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        if ( !*(&BattleMoviePlayer_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, method);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)BattleMoviePlayer_TypeInfo;
        }
        monitor = (float *)this[2].monitor;
        perf = _4__this->fields.perf;
        v53 = monitor[6];
        v54 = *((_QWORD *)monitor + 2);
        _4__this->fields.startPanelPosition.fields.z = v53;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v54;
        if ( !perf )
          goto LABEL_131;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)perf->fields.actorcamera;
        if ( !this )
          goto LABEL_131;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        v55 = _4__this->fields.perf;
        if ( !v55 || !this )
          goto LABEL_131;
        v115 = UnityEngine_Transform__InverseTransformVector(
                 (UnityEngine_Transform_o *)this,
                 v55->fields._CurrentShakeWidth_k__BackingField,
                 0);
        y = v115.fields.y;
        x = v115.fields.x;
        z = v115.fields.z;
        IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !IsBossCamera )
        {
          if ( !this )
            goto LABEL_131;
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
          if ( !this )
            goto LABEL_131;
          v123.fields.z = z + _4__this->fields.startPanelPosition.fields.z;
          v123.fields.y = y + _4__this->fields.startPanelPosition.fields.y;
          v123.fields.x = x + _4__this->fields.startPanelPosition.fields.x;
          UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v123, 0);
          goto LABEL_111;
        }
        if ( !this )
          goto LABEL_131;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        v58.n64_u64[0] = *(unsigned __int64 *)&_4__this->fields.startPanelPosition.fields.x;
        v59 = this;
        v60 = _4__this->fields.startPanelPosition.fields.z;
        if ( !*(&BattleMoviePlayer_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, method);
        if ( !v59 )
          goto LABEL_131;
        v61 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v62 = v60 * v61;
        v63 = z * v61;
        v64 = vadd_f32(vmul_n_f32(v58, v61), vmul_n_f32((float32x2_t)__PAIR64__(LODWORD(y), LODWORD(x)), v61)).n64_u64[0];
        v65 = v62 + v63;
        v66 = HIDWORD(v64);
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v59, *(UnityEngine_Vector3_o *)&v64, 0);
      }
      else
      {
        v74 = _4__this->fields.perf;
        if ( !v74 )
          goto LABEL_131;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v74->fields.actorcamera;
        if ( !this )
          goto LABEL_131;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_131;
        v75 = this;
        position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
        position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
        position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
        position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
        v118 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)v75, position, 0);
        v76 = 1.0;
        if ( v118.fields.z <= 1.0 )
          v76 = v118.fields.z;
        if ( v118.fields.z >= -0.3 )
          v77 = v76;
        else
          v77 = -0.3;
        v119 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)v75, v118, 0);
        v78 = v119.fields.x;
        v79 = v119.fields.y;
        v80 = v119.fields.z;
        v82 = BattleMoviePlayer__IsBossCamera(_4__this, 0);
        v83 = BattleMoviePlayer_TypeInfo;
        v84 = *(&BattleMoviePlayer_TypeInfo->_2.cctor_finished + 1);
        if ( !v82 )
        {
          if ( !v84 )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, v81);
            v83 = BattleMoviePlayer_TypeInfo;
          }
          v124 = UnityEngine_Transform__TransformPoint(
                   (UnityEngine_Transform_o *)v75,
                   v83->static_fields->BasePanelPosition,
                   0);
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_131;
          v110 = v124.fields.x;
          v111 = v124.fields.y;
          v112 = v124.fields.z;
          this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
          if ( !this )
            goto LABEL_131;
          v125.fields.z = v112 - v80;
          v125.fields.y = v111 - v79;
          v125.fields.x = v110 - v78;
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v125, 0);
          goto LABEL_111;
        }
        if ( !v84 )
        {
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, v81);
          v83 = BattleMoviePlayer_TypeInfo;
        }
        v120.fields.x = 0.0;
        v120.fields.y = 0.0;
        v120.fields.z = v83->static_fields->BossPanelDist;
        v121 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)v75, v120, 0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_131;
        v85 = v121.fields.x;
        v86 = v121.fields.y;
        v87 = v121.fields.z;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_131;
        v88 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v122.fields.z = v87 - (float)(v80 * v88);
        v122.fields.y = v86 - (float)(v79 * v88);
        v122.fields.x = v85 - (float)(v78 * v88);
        UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v122, 0);
      }
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_131;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      if ( !this )
        goto LABEL_131;
      v73 = BattleMoviePlayer_TypeInfo;
    }
    else
    {
      if ( !BattleMoviePlayer__IsBossCamera(_4__this, 0) )
      {
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_131;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_131;
        UnityEngine_Transform__set_localPosition(
          (UnityEngine_Transform_o *)this,
          _4__this->fields.startPanelPosition,
          0);
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_131;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                                (UnityEngine_Component_o *)this,
                                                                0);
        if ( !this )
          goto LABEL_131;
        v91 = _4__this->fields.startPanelScale.fields.y;
        v90 = _4__this->fields.startPanelScale.fields.z;
        v92 = _4__this->fields.startPanelScale.fields.x;
        goto LABEL_110;
      }
      if ( !*(&BattleMoviePlayer_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, method);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_131;
      static_fields = BattleMoviePlayer_TypeInfo->static_fields;
      v70 = static_fields->BasePanelPosition.fields.y;
      v69 = static_fields->BasePanelPosition.fields.z;
      v71 = static_fields->BasePanelPosition.fields.x;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      if ( !this )
        goto LABEL_131;
      v72 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
          / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
      v116.fields.z = v69 * v72;
      v116.fields.y = v70 * v72;
      v116.fields.x = v71 * v72;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v116, 0);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_131;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      if ( !this )
        goto LABEL_131;
      v73 = BattleMoviePlayer_TypeInfo;
    }
    v89 = v73->static_fields->BossPanelDist / v73->static_fields->BaseDist;
    v90 = _4__this->fields.startPanelScale.fields.z * v89;
    v91 = _4__this->fields.startPanelScale.fields.y * v89;
    v92 = v89 * _4__this->fields.startPanelScale.fields.x;
LABEL_110:
    UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&v92, 0);
LABEL_111:
    if ( v8->fields._restTime_5__6 > 0.0 )
    {
      v8->fields.__2__current = 0;
      p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
      sub_2213A04(p__2__current, 0, v2, v3, v4, v5, v6, v7);
      result = 1;
      p__2__current[-1].fields._BoardType_k__BackingField = 1;
      return result;
    }
    goto LABEL_113;
  }
  if ( !_1__state )
  {
    movieObj = (UnityEngine_Object_o *)v8->fields.movieObj;
    v8->fields.__1__state = -1;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_Object__op_Inequality(movieObj, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !_4__this )
        goto LABEL_131;
LABEL_121:
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.ObjList;
      if ( this )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)v8->fields.movieObj,
          (const MethodInfo_4485154 *)Method_System_Collections_Generic_List_GameObject__Remove__);
        v109 = (UnityEngine_Object_o *)v8->fields.movieObj;
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v108);
        UnityEngine_Object__Destroy_83459800(v109, 0);
        return 0;
      }
      goto LABEL_131;
    }
    if ( !_4__this )
      goto LABEL_131;
    v12 = _4__this->fields.currController;
    if ( !v12 )
      goto LABEL_131;
    if ( v12->fields._player_k__BackingField )
    {
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v8->fields.movieObj;
      if ( !this )
        goto LABEL_131;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)UnityEngine_GameObject__GetComponent_object_(
                                                              (UnityEngine_GameObject_o *)this,
                                                              (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_131;
      material = UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)this, 0);
      v8->fields._movieMaterial_5__2 = material;
      p_movieMaterial_5__2 = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o **)&v8->fields._movieMaterial_5__2;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._movieMaterial_5__2,
        (int32_t)material,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_131;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v8->fields.num,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v8->fields._movInfo_5__3 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      v22 = &v8->fields._movInfo_5__3;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._movInfo_5__3,
        (int32_t)Item,
        v23,
        v24,
        v25,
        v26,
        v27,
        v28);
      v29 = v8->fields._movInfo_5__3;
      if ( !v29 )
        goto LABEL_131;
      validTime = v29->fields.validTime;
      if ( validTime <= 0.0 )
      {
        v31 = _4__this->fields.currController;
        if ( !v31 )
          goto LABEL_131;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v31->fields._player_k__BackingField;
        if ( !this )
          goto LABEL_131;
        this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0);
        if ( !this )
          goto LABEL_131;
        v29 = *v22;
        if ( !*v22 )
          goto LABEL_131;
        validTime = (float)(unsigned int)this->fields.num;
      }
      effectRestTime = v29->fields.effectRestTime;
      v33 = _4__this->fields.currController;
      v8->fields._pastError_5__5 = 0;
      v8->fields._effectTime_5__4 = fmaxf(validTime - effectRestTime, 0.0);
      if ( !v33 )
        goto LABEL_131;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)v33->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_131;
      this = (BattleMoviePlayer__PlayMovieFadeOut_d__46_o *)CriMana_Player__GetDisplayedFrameNo(
                                                              (CriMana_Player_o *)this,
                                                              0);
      forceFadeout = v8->fields.forceFadeout;
      v8->fields._restTime_5__6 = validTime - (float)(int)this;
      if ( !forceFadeout )
      {
        v35 = *v22;
        if ( !*v22 )
          goto LABEL_131;
        goto LABEL_68;
      }
      if ( !_4__this->fields._ForceFadeout_k__BackingField )
      {
        v35 = *v22;
        if ( !*v22 )
          goto LABEL_131;
        v36 = v35->fields.fadeRestTime;
        _4__this->fields._ForceFadeout_k__BackingField = 1;
        v8->fields._restTime_5__6 = v36;
LABEL_68:
        if ( v35->fields.isBackMovie )
        {
          this = *p_movieMaterial_5__2;
          if ( !*p_movieMaterial_5__2 )
            goto LABEL_131;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_17079/*"_ZWriteMode"*/, 0, 0);
        }
        this = *p_movieMaterial_5__2;
        if ( !*p_movieMaterial_5__2 )
LABEL_131:
          sub_2213CDC(this, method);
        if ( _4__this->fields.OverrideZDepth )
          v67 = 8;
        else
          v67 = 4;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)this, (System_String_o *)StringLiteral_17077/*"_ZTestMode"*/, v67, 0);
        goto LABEL_111;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleMoviePlayer__PlayMovieFadeOut_d__46_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleMoviePlayer__PlayMovie_d__45_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleMoviePlayer_o *_4__this; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct CriManaMovieController_o **p_currController; // x21
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x22
  UnityEngine_Object_c *v20; // x0
  int v21; // w9
  Il2CppObject *Item; // x0
  struct BattleMoviePlayer_MovieInfo_o **p_movInfo_5__2; // x22
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  struct BattleMoviePlayer_MovieInfo_o *v30; // x8
  float v31; // s0
  CriMana_Player_o *v32; // x23
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct BattleMoviePlayer_MovieInfo_o *v39; // x8
  MissionNaviTransitionBoardItem_o *v40; // x19
  bool result; // w0
  float fadeinTime_5__5; // s0
  BattleMoviePlayer__PlayMovie_d__45_o *v43; // x22
  BattleMoviePlayer__PlayMovie_d__45_o *v44; // x21
  BattleMoviePlayer__PlayMovie_d__45_o *v45; // x22
  float v46; // s0
  int32_t v47; // w2
  struct CriManaMovieController_o *v48; // x8
  struct BattleMoviePlayer_MovieInfo_o *v49; // x8
  float skipFrame_5__4; // s8
  float timeScale; // s0
  struct CriManaMovieController_o *v52; // x8
  BattleCameraFullScaleSetter_o *v53; // x21
  struct CriManaMovieController_o *v54; // x8
  CriMana_Player_o *player_k__BackingField; // x8
  uint32_t v56; // w22
  struct CriManaMovieController_o *v57; // x9
  struct BattleMoviePlayer_MovieInfo_o *v58; // x8
  BattleMoviePlayer__PlayMovie_d__45_o *v59; // x21
  int32x2_t v60; // d0
  struct BattleMoviePlayer_MovieInfo_o *v61; // x8
  struct CriManaMovieController_o *v62; // x8
  struct CriManaMovieController_o *v63; // x8
  unsigned int num; // w9
  float32x2_t v65; // d1
  _BOOL4 KeepStartPosition; // w8
  struct BattlePerformance_o *v67; // x8
  struct BattleMoviePlayer_MovieInfo_o *v68; // x8
  BattleMoviePlayer__PlayMovie_d__45_o *v69; // x21
  int32_t v70; // w2
  struct BattleMoviePlayer_MovieInfo_o *v71; // x8
  struct CriManaMovieController_o *v72; // x8
  struct BattleMoviePlayer_MovieInfo_o *v73; // x8
  float v74; // s0
  float playSpeed; // s1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  struct BattleMoviePlayer_MovieInfo_o *movInfo_5__2; // x8
  struct BattleMoviePlayer_MovieInfo_o *v78; // x8
  struct CriManaMovieController_o *currController; // x8
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  float effectTime_5__7; // s1
  struct BattlePerformance_o *perf; // x8
  struct BattleMoviePlayer_MovieInfo_o *v88; // x9
  struct BattleMoviePlayer_StaticFields *static_fields; // x8
  float v90; // s8
  float v91; // s9
  float v92; // s10
  float v93; // s0
  BattleMoviePlayer_c *v94; // x8
  struct BattleMoviePlayer_StaticFields *v95; // x9
  float v96; // w10
  __int64 v97; // x9
  struct BattleMoviePlayer_StaticFields *v98; // x9
  __int64 v99; // x10
  struct BattlePerformance_o *v100; // x8
  float v101; // s8
  bool v102; // w8
  float v103; // s9
  BattleMoviePlayer__PlayMovie_d__45_o *v104; // x21
  float32x2_t v105; // d10
  float v106; // s0
  unsigned __int64 v107; // d1 OVERLAPPED
  float v108; // s0
  int v109; // s2
  float v110; // s0
  float z; // s2
  float y; // s1
  float x; // s0 OVERLAPPED
  BattleMoviePlayer__PlayMovie_d__45_o *v114; // x21
  float v115; // s3
  float v116; // s2
  float v117; // s8
  float v118; // s9
  float v119; // s10
  __int64 v120; // x1
  bool IsBossCamera; // w8
  BattleMoviePlayer_c *v122; // x0
  int v123; // w9
  float v124; // s11
  float v125; // s12
  float v126; // s13
  float v127; // s0
  float v128; // s11
  float v129; // s12
  float v130; // s13
  float v131; // [xsp+0h] [xbp-80h]
  float v132; // [xsp+10h] [xbp-70h]
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localScale; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v135; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v136; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v143; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v144; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v145; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_597356D & 1) == 0 )
  {
    sub_2213A60(&BattleMoviePlayer_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_MeshRenderer___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&StringLiteral_17079/*"_ZWriteMode"*/);
    sub_2213A60(&StringLiteral_17077/*"_ZTestMode"*/);
    this = (BattleMoviePlayer__PlayMovie_d__45_o *)sub_2213A60(&StringLiteral_17037/*"_Transparency"*/);
    byte_597356D = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  switch ( _1__state )
  {
    case 2:
      v8->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_194;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
      if ( !this )
        goto LABEL_194;
      if ( !this->fields._movInfo_5__2 )
      {
LABEL_117:
        v8->fields._movInfo_5__2 = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields._movInfo_5__2, 0, v2, v3, v4, v5, v6, v7);
        return 0;
      }
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                       (UnityEngine_Component_o *)this,
                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
      if ( !this )
        goto LABEL_194;
      v43 = this;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                       (UnityEngine_Renderer_o *)this,
                                                       0);
      v44 = this;
      if ( v8->fields._fadeinTime_5__5 > 0.0 )
      {
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)v43, 1, 0);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                         (UnityEngine_Renderer_o *)v43,
                                                         0);
        if ( !_4__this->fields.baseMat )
          goto LABEL_194;
        v45 = this;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Material__get_renderQueue(
                                                         _4__this->fields.baseMat,
                                                         0);
        if ( !v45 )
          goto LABEL_194;
        UnityEngine_Material__set_renderQueue((UnityEngine_Material_o *)v45, (int32_t)this, 0);
        v46 = (float)v8->fields._currentFrame_5__3 / v8->fields._fadeinTime_5__5;
        if ( v46 >= 1.0 )
        {
          if ( !v44 )
            goto LABEL_194;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v44, (System_String_o *)StringLiteral_17077/*"_ZTestMode"*/, 4, 0);
          UnityEngine_Material__SetFloat((UnityEngine_Material_o *)v44, (System_String_o *)StringLiteral_17037/*"_Transparency"*/, 0.0, 0);
          movInfo_5__2 = v8->fields._movInfo_5__2;
          if ( !movInfo_5__2 )
            goto LABEL_194;
          if ( movInfo_5__2->fields.cameraType == 1 )
            BattleMoviePlayer__ShowBg(_4__this, 0, 0);
          v8->fields._fadeinTime_5__5 = 0.0;
        }
        else
        {
          if ( !v44 )
            goto LABEL_194;
          UnityEngine_Material__SetFloat(
            (UnityEngine_Material_o *)v44,
            (System_String_o *)StringLiteral_17037/*"_Transparency"*/,
            1.0 - v46,
            0);
          if ( _4__this->fields.OverrideZDepth )
            v47 = 8;
          else
            v47 = 4;
          UnityEngine_Material__SetInt((UnityEngine_Material_o *)v44, (System_String_o *)StringLiteral_17077/*"_ZTestMode"*/, v47, 0);
        }
      }
      v78 = v8->fields._movInfo_5__2;
      if ( !v78 )
        goto LABEL_194;
      if ( v78->fields.isBackMovie )
      {
        if ( !v44 )
          goto LABEL_194;
        UnityEngine_Material__SetInt((UnityEngine_Material_o *)v44, (System_String_o *)StringLiteral_17079/*"_ZWriteMode"*/, 0, 0);
      }
      if ( _4__this->fields._ForceFadeout_k__BackingField )
        return 0;
      currController = _4__this->fields.currController;
      if ( !currController
        || (this = (BattleMoviePlayer__PlayMovie_d__45_o *)currController->fields._player_k__BackingField) == 0 )
      {
LABEL_194:
        sub_2213CDC(this, method);
      }
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
      effectTime_5__7 = v8->fields._effectTime_5__7;
      v8->fields._currentFrame_5__3 = (int)this;
      if ( effectTime_5__7 <= (float)(int)this )
      {
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)v8->fields._movInfo_5__2;
        if ( !this )
          goto LABEL_194;
        if ( *(_QWORD *)&this->fields.num )
        {
          UnityEngine_Events_UnityEvent__Invoke(*(UnityEngine_Events_UnityEvent_o **)&this->fields.num, 0);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v8->fields._movInfo_5__2;
          if ( !this )
            goto LABEL_194;
        }
        *(_QWORD *)&this->fields.num = 0;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.num, 0, v80, v81, v82, v83, v84, v85);
      }
      if ( !_4__this->fields.KeepStartPosition )
      {
        if ( !BattleMoviePlayer__IsBossCamera(_4__this, 0) )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_194;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_194;
          UnityEngine_Transform__set_localPosition(
            (UnityEngine_Transform_o *)this,
            _4__this->fields.startPanelPosition,
            0);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_194;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_194;
          y = _4__this->fields.startPanelScale.fields.y;
          z = _4__this->fields.startPanelScale.fields.z;
          x = _4__this->fields.startPanelScale.fields.x;
LABEL_175:
          UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)this, *(UnityEngine_Vector3_o *)&x, 0);
          goto LABEL_114;
        }
        if ( !*(&BattleMoviePlayer_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, method);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_194;
        static_fields = BattleMoviePlayer_TypeInfo->static_fields;
        v91 = static_fields->BasePanelPosition.fields.y;
        v90 = static_fields->BasePanelPosition.fields.z;
        v92 = static_fields->BasePanelPosition.fields.x;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( !this )
          goto LABEL_194;
        v93 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
            / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
        v135.fields.z = v90 * v93;
        v135.fields.y = v91 * v93;
        v135.fields.x = v92 * v93;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v135, 0);
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_194;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this,
                                                         0);
        if ( !this )
          goto LABEL_194;
        v94 = BattleMoviePlayer_TypeInfo;
LABEL_166:
        v110 = v94->static_fields->BossPanelDist / v94->static_fields->BaseDist;
        z = _4__this->fields.startPanelScale.fields.z * v110;
        y = _4__this->fields.startPanelScale.fields.y * v110;
        x = v110 * _4__this->fields.startPanelScale.fields.x;
        goto LABEL_175;
      }
      perf = _4__this->fields.perf;
      if ( !perf )
        goto LABEL_194;
      v88 = v8->fields._movInfo_5__2;
      if ( perf->fields._UsePlayMakerShakeParam_k__BackingField )
      {
        if ( !v88 )
          goto LABEL_194;
        v88->fields._UsePlayMakerShakeParam_k__BackingField = 1;
      }
      else
      {
        if ( !v88 )
          goto LABEL_194;
        if ( !v88->fields._UsePlayMakerShakeParam_k__BackingField )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)perf->fields.actorcamera;
          if ( !this )
            goto LABEL_194;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_194;
          v114 = this;
          position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0);
          position.fields.x = position.fields.x - _4__this->fields.cameraStartPosition.fields.x;
          position.fields.y = position.fields.y - _4__this->fields.cameraStartPosition.fields.y;
          position.fields.z = position.fields.z - _4__this->fields.cameraStartPosition.fields.z;
          v139 = UnityEngine_Transform__InverseTransformVector((UnityEngine_Transform_o *)v114, position, 0);
          v115 = 1.0;
          if ( v139.fields.z <= 1.0 )
            v115 = v139.fields.z;
          if ( v139.fields.z >= -0.3 )
            v116 = v115;
          else
            v116 = -0.3;
          v140 = UnityEngine_Transform__TransformDirection((UnityEngine_Transform_o *)v114, v139, 0);
          v117 = v140.fields.x;
          v118 = v140.fields.y;
          v119 = v140.fields.z;
          IsBossCamera = BattleMoviePlayer__IsBossCamera(_4__this, 0);
          v122 = BattleMoviePlayer_TypeInfo;
          v123 = *(&BattleMoviePlayer_TypeInfo->_2.cctor_finished + 1);
          if ( !IsBossCamera )
          {
            if ( !v123 )
            {
              j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, v120);
              v122 = BattleMoviePlayer_TypeInfo;
            }
            v144 = UnityEngine_Transform__TransformPoint(
                     (UnityEngine_Transform_o *)v114,
                     v122->static_fields->BasePanelPosition,
                     0);
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
            if ( this )
            {
              v128 = v144.fields.x;
              v129 = v144.fields.y;
              v130 = v144.fields.z;
              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                               (UnityEngine_Component_o *)this,
                                                               0);
              if ( this )
              {
                v145.fields.z = v130 - v119;
                v145.fields.y = v129 - v118;
                v145.fields.x = v128 - v117;
                UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v145, 0);
                goto LABEL_114;
              }
            }
            goto LABEL_194;
          }
          if ( !v123 )
          {
            j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, v120);
            v122 = BattleMoviePlayer_TypeInfo;
          }
          v141.fields.x = 0.0;
          v141.fields.y = 0.0;
          v141.fields.z = v122->static_fields->BossPanelDist;
          v142 = UnityEngine_Transform__TransformPoint((UnityEngine_Transform_o *)v114, v141, 0);
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_194;
          v124 = v142.fields.x;
          v125 = v142.fields.y;
          v126 = v142.fields.z;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_194;
          v127 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
               / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
          v143.fields.z = v126 - (float)(v119 * v127);
          v143.fields.y = v125 - (float)(v118 * v127);
          v143.fields.x = v124 - (float)(v117 * v127);
          UnityEngine_Transform__set_position((UnityEngine_Transform_o *)this, v143, 0);
LABEL_163:
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
          if ( !this )
            goto LABEL_194;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( !this )
            goto LABEL_194;
          v94 = BattleMoviePlayer_TypeInfo;
          goto LABEL_166;
        }
      }
      if ( *(&BattleMoviePlayer_TypeInfo->_2.cctor_finished + 1) )
      {
        v95 = BattleMoviePlayer_TypeInfo->static_fields;
        v96 = v95->BasePanelPosition.fields.z;
        v97 = *(_QWORD *)&v95->BasePanelPosition.fields.x;
        _4__this->fields.startPanelPosition.fields.z = v96;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v97;
      }
      else
      {
        j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, method);
        v98 = BattleMoviePlayer_TypeInfo->static_fields;
        perf = _4__this->fields.perf;
        v99 = *(_QWORD *)&v98->BasePanelPosition.fields.x;
        *(float *)&v98 = v98->BasePanelPosition.fields.z;
        *(_QWORD *)&_4__this->fields.startPanelPosition.fields.x = v99;
        LODWORD(_4__this->fields.startPanelPosition.fields.z) = (_DWORD)v98;
        if ( !perf )
          goto LABEL_194;
      }
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)perf->fields.actorcamera;
      if ( !this )
        goto LABEL_194;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
      v100 = _4__this->fields.perf;
      if ( !v100 || !this )
        goto LABEL_194;
      v136 = UnityEngine_Transform__InverseTransformVector(
               (UnityEngine_Transform_o *)this,
               v100->fields._CurrentShakeWidth_k__BackingField,
               0);
      v101 = v136.fields.x;
      v131 = v136.fields.z;
      v132 = v136.fields.y;
      v102 = BattleMoviePlayer__IsBossCamera(_4__this, 0);
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
      if ( !v102 )
      {
        if ( this )
        {
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0);
          if ( this )
          {
            v137.fields.z = v131 + _4__this->fields.startPanelPosition.fields.z;
            v137.fields.y = v132 + _4__this->fields.startPanelPosition.fields.y;
            v137.fields.x = v101 + _4__this->fields.startPanelPosition.fields.x;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v137, 0);
            goto LABEL_114;
          }
        }
        goto LABEL_194;
      }
      if ( !this )
        goto LABEL_194;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
      v103 = _4__this->fields.startPanelPosition.fields.x;
      v104 = this;
      v105.n64_u64[0] = *(unsigned __int64 *)&_4__this->fields.startPanelPosition.fields.y;
      if ( !*(&BattleMoviePlayer_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleMoviePlayer_TypeInfo, method);
      if ( !v104 )
        goto LABEL_194;
      v106 = BattleMoviePlayer_TypeInfo->static_fields->BossPanelDist
           / BattleMoviePlayer_TypeInfo->static_fields->BaseDist;
      v107 = vadd_f32(vmul_n_f32(v105, v106), vmul_n_f32((float32x2_t)__PAIR64__(LODWORD(v131), LODWORD(v132)), v106)).n64_u64[0];
      v108 = (float)(v103 * v106) + (float)(v101 * v106);
      v109 = HIDWORD(v107);
      UnityEngine_Transform__set_localPosition(
        (UnityEngine_Transform_o *)v104,
        *(UnityEngine_Vector3_o *)((char *)&v107 - 4),
        0);
      goto LABEL_163;
    case 1:
      fadeinTime_5__5 = v8->fields._fadeinTime_5__5;
      v8->fields.__1__state = -1;
      if ( fadeinTime_5__5 <= 0.0 )
      {
        if ( !_4__this )
          goto LABEL_194;
      }
      else
      {
        if ( !_4__this )
          goto LABEL_194;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
        if ( !this )
          goto LABEL_194;
        this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                         (UnityEngine_Component_o *)this,
                                                         (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
        if ( !this )
          goto LABEL_194;
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0);
      }
      v48 = _4__this->fields.currController;
      if ( !v48 )
        goto LABEL_194;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v48->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_194;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
      v49 = v8->fields._movInfo_5__2;
      v8->fields._currentFrame_5__3 = (int)this;
      if ( !v49 )
        goto LABEL_194;
      skipFrame_5__4 = v8->fields._skipFrame_5__4;
      if ( v49->fields.ignoreTimeScale )
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
                                                         (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_BattleCameraFullScaleSetter___);
        v52 = _4__this->fields.currController;
        if ( v52 )
        {
          v53 = (BattleCameraFullScaleSetter_o *)this;
          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v52->fields._player_k__BackingField;
          if ( this )
          {
            this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo((CriMana_Player_o *)this, 0);
            if ( this )
            {
              v54 = _4__this->fields.currController;
              if ( v54 )
              {
                player_k__BackingField = v54->fields._player_k__BackingField;
                if ( player_k__BackingField )
                {
                  v56 = (uint32_t)this->fields.__4__this;
                  this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
                                                                   player_k__BackingField,
                                                                   0);
                  if ( this )
                  {
                    if ( v53 )
                    {
                      BattleCameraFullScaleSetter__AdjustPanelSize(v53, v56, HIDWORD(this->fields.__4__this), 0);
                      v57 = _4__this->fields.currController;
                      if ( v57 )
                      {
                        v58 = v8->fields._movInfo_5__2;
                        if ( v58 )
                        {
                          this = (BattleMoviePlayer__PlayMovie_d__45_o *)v57->fields._player_k__BackingField;
                          if ( this )
                          {
                            CriMana_Player__Loop((CriMana_Player_o *)this, v58->fields.loop, 0);
                            this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                            if ( this )
                            {
                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                               (UnityEngine_Component_o *)this,
                                                                               (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                              if ( this )
                              {
                                this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                 0);
                                if ( _4__this->fields.baseMat )
                                {
                                  v59 = this;
                                  this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Material__get_renderQueue(
                                                                                   _4__this->fields.baseMat,
                                                                                   0);
                                  if ( v59 )
                                  {
                                    UnityEngine_Material__set_renderQueue(
                                      (UnityEngine_Material_o *)v59,
                                      (int32_t)this,
                                      0);
                                    if ( v8->fields._fadeinTime_5__5 > 0.0 )
                                    {
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                      if ( !this )
                                        goto LABEL_194;
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                                       (UnityEngine_Component_o *)this,
                                                                                       (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                      if ( !this )
                                        goto LABEL_194;
                                      UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)this, 0, 0);
                                    }
                                    v61 = v8->fields._movInfo_5__2;
                                    if ( !v61 )
                                      goto LABEL_194;
                                    v60.n64_u32[0] = LODWORD(v61->fields.validTime);
                                    if ( v60.n64_f32[0] <= 0.0 )
                                    {
                                      v62 = _4__this->fields.currController;
                                      if ( !v62 )
                                        goto LABEL_194;
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v62->fields._player_k__BackingField;
                                      if ( !this )
                                        goto LABEL_194;
                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
                                                                                       (CriMana_Player_o *)this,
                                                                                       0);
                                      if ( this )
                                      {
                                        v63 = _4__this->fields.currController;
                                        if ( !v63 )
                                          goto LABEL_194;
                                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)v63->fields._player_k__BackingField;
                                        if ( !this )
                                          goto LABEL_194;
                                        this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__get_movieInfo(
                                                                                         (CriMana_Player_o *)this,
                                                                                         0);
                                        if ( !this )
                                          goto LABEL_194;
                                        num = this->fields.num;
                                      }
                                      else
                                      {
                                        num = 0;
                                      }
                                      v61 = v8->fields._movInfo_5__2;
                                      if ( !v61 )
                                        goto LABEL_194;
                                      v60.n64_f32[0] = (float)num;
                                    }
                                    v65.n64_u32[0] = LODWORD(v61->fields.fadeRestTime);
                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                    v65.n64_u32[1] = LODWORD(v61->fields.effectRestTime);
                                    *(float32x2_t *)&v8->fields._fadeoutTime_5__6 = vmaxnm_f32(
                                                                                      vsub_f32(
                                                                                        vdup_lane_s32(v60, 0),
                                                                                        v65),
                                                                                      0);
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
                                              v67 = _4__this->fields.perf;
                                              if ( !v67 )
                                                goto LABEL_194;
                                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)v67->fields.actorcamera;
                                              if ( !this )
                                                goto LABEL_194;
                                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__get_transform(
                                                                                               (UnityEngine_Component_o *)this,
                                                                                               0);
                                              if ( !this )
                                                goto LABEL_194;
                                              _4__this->fields.cameraStartPosition = UnityEngine_Transform__get_position(
                                                                                       (UnityEngine_Transform_o *)this,
                                                                                       0);
                                            }
                                            this = (BattleMoviePlayer__PlayMovie_d__45_o *)v8->fields.movieObj;
                                            if ( this )
                                            {
                                              this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                                               (UnityEngine_GameObject_o *)this,
                                                                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
                                              if ( this )
                                              {
                                                this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Renderer__get_material(
                                                                                                 (UnityEngine_Renderer_o *)this,
                                                                                                 0);
                                                v68 = v8->fields._movInfo_5__2;
                                                if ( v68 )
                                                {
                                                  v69 = this;
                                                  if ( v68->fields.cameraType == 1 )
                                                    BattleMoviePlayer__ShowBg(
                                                      _4__this,
                                                      v8->fields._fadeinTime_5__5 > 0.0,
                                                      0);
                                                  if ( v8->fields._fadeinTime_5__5 <= 0.0 )
                                                  {
                                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.currController;
                                                    if ( !this )
                                                      goto LABEL_194;
                                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_Component__GetComponent_object_(
                                                                                                     (UnityEngine_Component_o *)this,
                                                                                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_MeshRenderer___);
                                                    if ( !this )
                                                      goto LABEL_194;
                                                    UnityEngine_Renderer__set_enabled(
                                                      (UnityEngine_Renderer_o *)this,
                                                      1,
                                                      0);
                                                  }
                                                  else
                                                  {
                                                    if ( !v69 )
                                                      goto LABEL_194;
                                                    if ( _4__this->fields.OverrideZDepth )
                                                      v70 = 8;
                                                    else
                                                      v70 = 4;
                                                    UnityEngine_Material__SetInt(
                                                      (UnityEngine_Material_o *)v69,
                                                      (System_String_o *)StringLiteral_17077/*"_ZTestMode"*/,
                                                      v70,
                                                      0);
                                                    UnityEngine_Material__SetFloat(
                                                      (UnityEngine_Material_o *)v69,
                                                      (System_String_o *)StringLiteral_17037/*"_Transparency"*/,
                                                      1.0,
                                                      0);
                                                  }
                                                  v71 = v8->fields._movInfo_5__2;
                                                  if ( !v71 )
                                                    goto LABEL_194;
                                                  if ( v71->fields.isBackMovie )
                                                  {
                                                    if ( !v69 )
                                                      goto LABEL_194;
                                                    UnityEngine_Material__SetInt(
                                                      (UnityEngine_Material_o *)v69,
                                                      (System_String_o *)StringLiteral_17079/*"_ZWriteMode"*/,
                                                      0,
                                                      0);
                                                  }
                                                  v72 = _4__this->fields.currController;
                                                  if ( v72 )
                                                  {
                                                    this = (BattleMoviePlayer__PlayMovie_d__45_o *)v72->fields._player_k__BackingField;
                                                    if ( this )
                                                    {
                                                      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
                                                      v73 = v8->fields._movInfo_5__2;
                                                      v8->fields._currentFrame_5__3 = (int)this;
                                                      if ( v73 )
                                                      {
                                                        v74 = 1.0;
                                                        if ( v73->fields.ignoreTimeScale
                                                          || (v74 = UnityEngine_Time__get_timeScale(0),
                                                              (v73 = v8->fields._movInfo_5__2) != 0) )
                                                        {
                                                          playSpeed = v73->fields.playSpeed;
                                                          v8->fields._isLoopMovie_5__9 = v73->fields.loop;
                                                          v8->fields._playSpeed_5__8 = v74 * playSpeed;
LABEL_114:
                                                          if ( v8->fields._isLoopMovie_5__9
                                                            || (float)((float)(v8->fields._skipFrame_5__4
                                                                             + (float)v8->fields._currentFrame_5__3)
                                                                     + v8->fields._playSpeed_5__8) < v8->fields._fadeoutTime_5__6 )
                                                          {
                                                            v8->fields.__2__current = 0;
                                                            p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
                                                            sub_2213A04(p__2__current, 0, v2, v3, v4, v5, v6, v7);
                                                            result = 1;
                                                            p__2__current[-1].fields._BoardType_k__BackingField = 2;
                                                            return result;
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
      goto LABEL_194;
    case 0:
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)v8->fields.movieObj;
      v8->fields.__1__state = -1;
      if ( !this )
        goto LABEL_194;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)UnityEngine_GameObject__GetComponent_object_(
                                                       (UnityEngine_GameObject_o *)this,
                                                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CriManaMovieController___);
      if ( !_4__this )
        goto LABEL_194;
      _4__this->fields.currController = (struct CriManaMovieController_o *)this;
      p_currController = &_4__this->fields.currController;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&_4__this->fields.currController,
        (int32_t)this,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v19 = (UnityEngine_Object_o *)_4__this->fields.currController;
      v20 = UnityEngine_Object_TypeInfo;
      v21 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
      _4__this->fields.currentMovieNum = v8->fields.num;
      if ( !v21 )
        j_il2cpp_runtime_class_init_0(v20, v18);
      if ( !UnityEngine_Object__op_Inequality(v19, 0, 0) )
        return 0;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)_4__this->fields.MovieInfoList;
      if ( !this )
        goto LABEL_194;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               v8->fields.num,
               (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Item__);
      v8->fields._movInfo_5__2 = (struct BattleMoviePlayer_MovieInfo_o *)Item;
      p_movInfo_5__2 = &v8->fields._movInfo_5__2;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._movInfo_5__2,
        (int32_t)Item,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      if ( !*p_currController )
        goto LABEL_194;
      v30 = *p_movInfo_5__2;
      if ( !*p_movInfo_5__2 )
        goto LABEL_194;
      v31 = 1.0;
      v32 = (*p_currController)->fields._player_k__BackingField;
      if ( !v30->fields.ignoreTimeScale )
      {
        v31 = UnityEngine_Time__get_timeScale(0);
        v30 = *p_movInfo_5__2;
        if ( !*p_movInfo_5__2 )
          goto LABEL_194;
      }
      if ( !v32 )
        goto LABEL_194;
      CriMana_Player__SetSpeed(v32, v31 * v30->fields.playSpeed, 0);
      if ( !*p_currController )
        goto LABEL_194;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_194;
      CriMana_Player__Start((CriMana_Player_o *)this, 0);
      if ( !*p_currController )
        goto LABEL_194;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)(*p_currController)->fields._player_k__BackingField;
      if ( !this )
        goto LABEL_194;
      this = (BattleMoviePlayer__PlayMovie_d__45_o *)CriMana_Player__GetDisplayedFrameNo((CriMana_Player_o *)this, 0);
      v39 = v8->fields._movInfo_5__2;
      *(_QWORD *)&v8->fields._currentFrame_5__3 = (unsigned int)this;
      if ( !v39 )
        goto LABEL_194;
      v8->fields._fadeinTime_5__5 = v39->fields.fadeinTime;
      if ( ((unsigned int)this & 0x80000000) != 0 )
      {
LABEL_23:
        v8->fields.__2__current = 0;
        v40 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_2213A04(v40, 0, v33, v34, v35, v36, v37, v38);
        result = 1;
        v40[-1].fields._BoardType_k__BackingField = 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleMoviePlayer__PlayMovie_d__45_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  BattlePerformance_o *perf; // x0
  struct BattleMoviePlayer_o *_4__this; // x20
  UnityEngine_Object_o *currMovieObj; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *MovieInfoList; // x8
  System_Collections_IEnumerator_o *v14; // x0
  Il2CppObject *started; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w8
  struct UnityEngine_GameObject_o *v24; // x1
  struct UnityEngine_GameObject_o *nextMovieObj; // x1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_Collections_IEnumerator_o *v38; // x0
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v39; // x8
  __int64 v40; // x1
  UnityEngine_Object_o *v41; // x21
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v42; // x9
  struct UnityEngine_GameObject_o *v43; // x1
  System_String_o *v44; // x2
  System_String_o *v45; // x3
  int32_t v46; // w4
  int32_t v47; // w5
  bool v48; // w6
  bool v49; // w7
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__o *v56; // x8
  int size; // w8
  __int64 v58; // x1
  System_Collections_IEnumerator_o *v59; // x21
  System_Collections_Generic_List_T__o *v60; // x22
  BattleMoviePlayer___c_c *v61; // x8
  struct BattleMoviePlayer___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__36_0; // x23
  Il2CppObject *v64; // x24
  struct BattleMoviePlayer___c_StaticFields *v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  Il2CppObject *v72; // x0
  Il2CppObject **v73; // x19
  System_String_o *v74; // x2
  System_String_o *v75; // x3
  int32_t v76; // w4
  int32_t v77; // w5
  bool v78; // w6
  bool v79; // w7
  int v80; // w8
  System_Collections_IEnumerator_o *v81; // x0
  Il2CppObject *v82; // x0
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7

  if ( (byte_597356F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___);
    sub_2213A60(&System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_BattleMoviePlayer_MovieInfo__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_BattleMoviePlayer___c__StartMovie_b__36_0__);
    sub_2213A60(&BattleMoviePlayer___c_TypeInfo);
    byte_597356F = 1;
  }
  _1__state = this->fields.__1__state;
  perf = 0;
  _4__this = this->fields.__4__this;
  if ( _1__state > 1 )
  {
    if ( _1__state == 2 )
    {
      this->fields.__1__state = -1;
      goto LABEL_30;
    }
    if ( _1__state != 3 )
      return (char)perf;
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      BattleMoviePlayer__Dispose(_4__this, 0);
LABEL_20:
      perf = _4__this->fields.perf;
      if ( !perf )
        return (char)perf;
      BattlePerformance__OnBattleMovieEnd(perf, 0);
      goto LABEL_22;
    }
    goto LABEL_49;
  }
  if ( _1__state )
  {
    if ( _1__state != 1 )
      return (char)perf;
    this->fields.__1__state = -1;
  }
  else
  {
    this->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_49;
    currMovieObj = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(currMovieObj, 0, 0);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      MovieInfoList = _4__this->fields.MovieInfoList;
      if ( !MovieInfoList )
        goto LABEL_49;
      if ( MovieInfoList->fields._size >= 1 )
      {
        v14 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, 0, 0);
        started = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                                    (UnityEngine_MonoBehaviour_o *)_4__this,
                                    v14,
                                    0);
        this->fields.__2__current = started;
        p__2__current = &this->fields.__2__current;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)started, v17, v18, v19, v20, v21, v22);
        LOBYTE(perf) = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return (char)perf;
      }
    }
  }
  v23 = 0;
  for ( this->fields._i_5__2 = 0; ; this->fields._i_5__2 = v23 )
  {
    if ( !_4__this )
      goto LABEL_49;
    v42 = _4__this->fields.MovieInfoList;
    if ( !v42 )
      goto LABEL_49;
    if ( v23 >= v42->fields._size - 1 || _4__this->fields._ForceFadeout_k__BackingField )
      break;
    v24 = _4__this->fields.currMovieObj;
    _4__this->fields.pastMovieObj = v24;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.pastMovieObj,
      (int32_t)v24,
      v2,
      v3,
      v4,
      v5,
      v6,
      v7);
    nextMovieObj = _4__this->fields.nextMovieObj;
    _4__this->fields.currMovieObj = nextMovieObj;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.currMovieObj,
      (int32_t)nextMovieObj,
      v26,
      v27,
      v28,
      v29,
      v30,
      v31);
    _4__this->fields.nextMovieObj = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.nextMovieObj, 0, v32, v33, v34, v35, v36, v37);
    v38 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, this->fields._i_5__2, 0, 0);
    perf = (BattlePerformance_o *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                                    (UnityEngine_MonoBehaviour_o *)_4__this,
                                    v38,
                                    0);
    v39 = _4__this->fields.MovieInfoList;
    if ( !v39 )
      goto LABEL_49;
    v40 = (unsigned int)(this->fields._i_5__2 + 2);
    if ( (int)v40 < v39->fields._size )
      BattleMoviePlayer__GetMoviePanelAdd(_4__this, v40, 0);
    v41 = (UnityEngine_Object_o *)_4__this->fields.currMovieObj;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v40);
    perf = (BattlePerformance_o *)UnityEngine_Object__op_Inequality(v41, 0, 0);
    if ( ((unsigned __int8)perf & 1) != 0 )
    {
      v81 = BattleMoviePlayer__PlayMovie(_4__this, _4__this->fields.currMovieObj, this->fields._i_5__2 + 1, 0);
      v82 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                              (UnityEngine_MonoBehaviour_o *)_4__this,
                              v81,
                              0);
      this->fields.__2__current = v82;
      v73 = &this->fields.__2__current;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)v73, (int32_t)v82, v83, v84, v85, v86, v87, v88);
      v80 = 2;
      goto LABEL_47;
    }
LABEL_30:
    v23 = this->fields._i_5__2 + 1;
  }
  v43 = _4__this->fields.currMovieObj;
  _4__this->fields.pastMovieObj = v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.pastMovieObj, (int32_t)v43, v2, v3, v4, v5, v6, v7);
  _4__this->fields.currMovieObj = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.currMovieObj, 0, v44, v45, v46, v47, v48, v49);
  _4__this->fields.nextMovieObj = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&_4__this->fields.nextMovieObj, 0, v50, v51, v52, v53, v54, v55);
  if ( _4__this->fields._ForceFadeout_k__BackingField )
  {
LABEL_22:
    LOBYTE(perf) = 0;
    return (char)perf;
  }
  v56 = _4__this->fields.MovieInfoList;
  if ( !v56 )
LABEL_49:
    sub_2213CDC(perf, method);
  size = v56->fields._size;
  if ( size < 1 )
    goto LABEL_20;
  v59 = BattleMoviePlayer__PlayMovieFadeOut(_4__this, _4__this->fields.pastMovieObj, size - 1, 0, 0);
  v60 = (System_Collections_Generic_List_T__o *)_4__this->fields.MovieInfoList;
  v61 = BattleMoviePlayer___c_TypeInfo;
  if ( !*(&BattleMoviePlayer___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleMoviePlayer___c_TypeInfo, v58);
    v61 = BattleMoviePlayer___c_TypeInfo;
  }
  static_fields = v61->static_fields;
  _9__36_0 = (System_Func_object__bool__o *)static_fields->__9__36_0;
  if ( !_9__36_0 )
  {
    if ( !*(&v61->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v61, v58);
      static_fields = BattleMoviePlayer___c_TypeInfo->static_fields;
    }
    v64 = (Il2CppObject *)static_fields->__9;
    _9__36_0 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_BattleMoviePlayer_MovieInfo__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__36_0, v64, Method_BattleMoviePlayer___c__StartMovie_b__36_0__, 0);
    v65 = BattleMoviePlayer___c_TypeInfo->static_fields;
    v65->__9__36_0 = (struct System_Func_BattleMoviePlayer_MovieInfo__bool__o *)_9__36_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v65->__9__36_0, (int32_t)_9__36_0, v66, v67, v68, v69, v70, v71);
  }
  if ( BasicHelper__Any_object_(
         v60,
         (System_Func_T__bool__o *)_9__36_0,
         (const MethodInfo_380FDE0 *)Method_BasicHelper_Any_BattleMoviePlayer_MovieInfo___) )
  {
    BattleMoviePlayer__ShowBg(_4__this, 1, 0);
  }
  v72 = (Il2CppObject *)UnityEngine_MonoBehaviour__StartCoroutine_83444756(
                          (UnityEngine_MonoBehaviour_o *)_4__this,
                          v59,
                          0);
  this->fields.__2__current = v72;
  v73 = &this->fields.__2__current;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v73, (int32_t)v72, v74, v75, v76, v77, v78, v79);
  v80 = 3;
LABEL_47:
  LOBYTE(perf) = 1;
  *((_DWORD *)v73 - 2) = v80;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_BattleMoviePlayer__StartMovie_d__36_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_597356A & 1) == 0 )
  {
    sub_2213A60(&BattleMoviePlayer___c_TypeInfo);
    byte_597356A = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(BattleMoviePlayer___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleMoviePlayer___c_TypeInfo->static_fields->__9 = (struct BattleMoviePlayer___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)BattleMoviePlayer___c_TypeInfo->static_fields,
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
    sub_2213CDC(this, 0);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___FadeoutDeleteMovie_b__39_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___PauseMovie_b__37_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.cameraType == 1;
}


bool BattleMoviePlayer___c___StartMovie_b__36_0(
        BattleMoviePlayer___c_o *this,
        BattleMoviePlayer_MovieInfo_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_2213CDC(this, 0);
  return x->fields.cameraType == 1;
}