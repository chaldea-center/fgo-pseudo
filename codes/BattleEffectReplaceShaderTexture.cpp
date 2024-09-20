void __fastcall BattleEffectReplaceShaderTexture___ctor(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x0
  Il2CppObject *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  struct System_Object_array *v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  Il2CppClass **v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  struct System_Object_array *v47; // x8
  _QWORD *v48; // x9
  __int64 v49; // x10
  Il2CppClass **v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  Il2CppClass **v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  struct System_Object_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  Il2CppClass **v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  struct System_Object_array *v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  Il2CppClass **v68; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  int32_t v87; // w2
  int32_t v88; // w3
  struct System_Object_array *v89; // x8
  _QWORD *v90; // x9
  __int64 v91; // x10
  Il2CppClass **v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  System_Collections_Generic_List_object__o *v95; // x20
  int32_t v96; // w2
  int32_t v97; // w3

  if ( (byte_4A5DF62 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Material___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&StringLiteral_7230/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/);
    sub_1B885B0(&StringLiteral_7233/*"Hidden/Particle/distortion-GrabPass"*/);
    sub_1B885B0(&StringLiteral_6370/*"FGO_Battle/Ken/Base"*/);
    sub_1B885B0(&StringLiteral_7234/*"Hidden/Particle/distortion-Stencil"*/);
    sub_1B885B0(&StringLiteral_7232/*"Hidden/Particle/distortion"*/);
    sub_1B885B0(&StringLiteral_6371/*"FGO_Battle/Particle/Base"*/);
    sub_1B885B0(&StringLiteral_7229/*"Hidden/Particle/MultiplyAdd1Pass"*/);
    sub_1B885B0(&StringLiteral_7223/*"Hidden/Ken/Distortion"*/);
    sub_1B885B0(&StringLiteral_7231/*"Hidden/Particle/dissolve"*/);
    sub_1B885B0(&StringLiteral_7225/*"Hidden/Ken/MultiplyAdd"*/);
    sub_1B885B0(&StringLiteral_7226/*"Hidden/Particle/Base-Stencil"*/);
    sub_1B885B0(&StringLiteral_7227/*"Hidden/Particle/MultiplyAdd"*/);
    sub_1B885B0(&StringLiteral_7228/*"Hidden/Particle/MultiplyAdd-Stencil"*/);
    sub_1B885B0(&StringLiteral_7224/*"Hidden/Ken/GradationMap"*/);
    byte_4A5DF62 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject___ctor__);
  this->fields.replaceObjects = (struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.replaceObjects, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v6 )
    goto LABEL_61;
  v8 = (Il2CppObject *)StringLiteral_6371/*"FGO_Battle/Particle/Base"*/;
  items = v6->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_61;
  size = v6->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v14[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)v8, v9, v10);
  }
  v8 = (Il2CppObject *)StringLiteral_7227/*"Hidden/Particle/MultiplyAdd"*/;
  v17 = v6->fields._items;
  v18 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v17 )
    goto LABEL_61;
  v19 = v6->fields._size;
  if ( (unsigned int)v19 >= v17->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = &v17->obj.klass + v19;
    v6->fields._size = v19 + 1;
    v20[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)v8, v15, v16);
  }
  v8 = (Il2CppObject *)StringLiteral_7229/*"Hidden/Particle/MultiplyAdd1Pass"*/;
  v23 = v6->fields._items;
  v24 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v23 )
    goto LABEL_61;
  v25 = v6->fields._size;
  if ( (unsigned int)v25 >= v23->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    v6->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v8, v21, v22);
  }
  v8 = (Il2CppObject *)StringLiteral_7232/*"Hidden/Particle/distortion"*/;
  v29 = v6->fields._items;
  v30 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v29 )
    goto LABEL_61;
  v31 = v6->fields._size;
  if ( (unsigned int)v31 >= v29->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &v29->obj.klass + v31;
    v6->fields._size = v31 + 1;
    v32[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v8, v27, v28);
  }
  v8 = (Il2CppObject *)StringLiteral_7226/*"Hidden/Particle/Base-Stencil"*/;
  v35 = v6->fields._items;
  v36 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v35 )
    goto LABEL_61;
  v37 = v6->fields._size;
  if ( (unsigned int)v37 >= v35->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
  }
  else
  {
    v38 = &v35->obj.klass + v37;
    v6->fields._size = v37 + 1;
    v38[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v38 + 4), (int32_t)v8, v33, v34);
  }
  v8 = (Il2CppObject *)StringLiteral_7228/*"Hidden/Particle/MultiplyAdd-Stencil"*/;
  v41 = v6->fields._items;
  v42 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v41 )
    goto LABEL_61;
  v43 = v6->fields._size;
  if ( (unsigned int)v43 >= v41->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &v41->obj.klass + v43;
    v6->fields._size = v43 + 1;
    v44[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v44 + 4), (int32_t)v8, v39, v40);
  }
  v8 = (Il2CppObject *)StringLiteral_7230/*"Hidden/Particle/MultiplyAdd1Pass-Stencil"*/;
  v47 = v6->fields._items;
  v48 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v47 )
    goto LABEL_61;
  v49 = v6->fields._size;
  if ( (unsigned int)v49 >= v47->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &v47->obj.klass + v49;
    v6->fields._size = v49 + 1;
    v50[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v8, v45, v46);
  }
  v8 = (Il2CppObject *)StringLiteral_7234/*"Hidden/Particle/distortion-Stencil"*/;
  v53 = v6->fields._items;
  v54 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v53 )
    goto LABEL_61;
  v55 = v6->fields._size;
  if ( (unsigned int)v55 >= v53->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = &v53->obj.klass + v55;
    v6->fields._size = v55 + 1;
    v56[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v8, v51, v52);
  }
  v8 = (Il2CppObject *)StringLiteral_7233/*"Hidden/Particle/distortion-GrabPass"*/;
  v59 = v6->fields._items;
  v60 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v59 )
    goto LABEL_61;
  v61 = v6->fields._size;
  if ( (unsigned int)v61 >= v59->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &v59->obj.klass + v61;
    v6->fields._size = v61 + 1;
    v62[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v62 + 4), (int32_t)v8, v57, v58);
  }
  v8 = (Il2CppObject *)StringLiteral_7231/*"Hidden/Particle/dissolve"*/;
  v65 = v6->fields._items;
  v66 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v65 )
    goto LABEL_61;
  v67 = v6->fields._size;
  if ( (unsigned int)v67 >= v65->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
  }
  else
  {
    v68 = &v65->obj.klass + v67;
    v6->fields._size = v67 + 1;
    v68[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v68 + 4), (int32_t)v8, v63, v64);
  }
  v8 = (Il2CppObject *)StringLiteral_6370/*"FGO_Battle/Ken/Base"*/;
  v71 = v6->fields._items;
  v72 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v71 )
    goto LABEL_61;
  v73 = v6->fields._size;
  if ( (unsigned int)v73 >= v71->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
  }
  else
  {
    v74 = &v71->obj.klass + v73;
    v6->fields._size = v73 + 1;
    v74[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v8, v69, v70);
  }
  v8 = (Il2CppObject *)StringLiteral_7225/*"Hidden/Ken/MultiplyAdd"*/;
  v77 = v6->fields._items;
  v78 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v77 )
    goto LABEL_61;
  v79 = v6->fields._size;
  if ( (unsigned int)v79 >= v77->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v80 = &v77->obj.klass + v79;
    v6->fields._size = v79 + 1;
    v80[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v80 + 4), (int32_t)v8, v75, v76);
  }
  v8 = (Il2CppObject *)StringLiteral_7223/*"Hidden/Ken/Distortion"*/;
  v83 = v6->fields._items;
  v84 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v83 )
    goto LABEL_61;
  v85 = v6->fields._size;
  if ( (unsigned int)v85 >= v83->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
  }
  else
  {
    v86 = &v83->obj.klass + v85;
    v6->fields._size = v85 + 1;
    v86[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v86 + 4), (int32_t)v8, v81, v82);
  }
  v8 = (Il2CppObject *)StringLiteral_7224/*"Hidden/Ken/GradationMap"*/;
  v89 = v6->fields._items;
  v90 = Method_System_Collections_Generic_List_string__Add__;
  ++v6->fields._version;
  if ( !v89 )
LABEL_61:
    sub_1B8880C(v7, v8);
  v91 = v6->fields._size;
  if ( (unsigned int)v91 >= v89->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      v8,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
  }
  else
  {
    v92 = &v89->obj.klass + v91;
    v6->fields._size = v91 + 1;
    v92[4] = (Il2CppClass *)v8;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v92 + 4), (int32_t)v8, v87, v88);
  }
  this->fields.autoReplaceShaderNames = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.autoReplaceShaderNames, (int32_t)v6, v93, v94);
  v95 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v95,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Material___ctor__);
  this->fields.replaceMaterials = (struct System_Collections_Generic_List_Material__o *)v95;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.replaceMaterials, (int32_t)v95, v96, v97);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__Execute(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  BattleEffectReplaceShaderTexture_o *v2; // x19
  struct System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__o *replaceObjects; // x8
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  UnityEngine_Object_o *v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  Il2CppObject *current; // x27
  System_Collections_Generic_List_object__o *TargetActors; // x0
  __int64 v11; // x1
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x21
  bool isChocoServant; // w23
  _BOOL8 isShadowServant; // x0
  const MethodInfo *v17; // x3
  bool v18; // w24
  UnityEngine_Object_o *ActorTexture; // x25
  Il2CppObject *Instance; // x0
  __int64 v21; // x1
  UnityEngine_GameObject_o *ShadowEffect; // x21
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Object_o *NodeFromName; // x26
  UnityEngine_Transform_o *v25; // x0
  __int64 v26; // x1
  UnityEngine_Transform_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_Transform_o *v29; // x0
  __int64 v30; // x1
  UnityEngine_Transform_o *v31; // x26
  UnityEngine_Transform_o *v32; // x0
  __int64 v33; // x1
  UnityEngine_Transform_o *v34; // x21
  UnityEngine_Object_o *klass; // x21
  __int64 v36; // x1
  UnityEngine_Object_o *v37; // x0
  System_Collections_Generic_List_object__o *v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_List_T__o *monitor; // x0
  Il2CppObject *v41; // x21
  const MethodInfo *v42; // x5
  UnityEngine_Renderer_array *TargetRenderers; // x0
  __int64 v44; // x1
  UnityEngine_Renderer_array *v45; // x28
  __int64 v46; // x8
  unsigned __int64 v47; // x9
  System_Collections_Generic_List_object__o *v48; // x0
  Il2CppObject *v49; // x21
  const MethodInfo *v50; // x4
  System_Collections_Generic_List_object__o *TargetMaterials; // x0
  __int64 v52; // x1
  Il2CppObject *v53; // x29
  _BOOL8 v54; // x0
  __int64 v55; // x1
  System_Collections_Generic_List_object__o *autoReplaceShaderNames; // x21
  UnityEngine_Object_o *shader; // x0
  __int64 v58; // x1
  Il2CppObject *name; // x0
  UnityEngine_Object_o *v60; // x0
  __int64 v61; // x1
  System_String_o *v62; // x0
  BattleEffectReplaceShaderTexture_o *v63; // x0
  const MethodInfo *v64; // x3
  UnityEngine_Object_o *ReplaceChocoShader; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v67; // x1
  Il2CppObject *Component_object; // x26
  _BOOL8 v69; // x0
  __int64 v70; // x1
  UnityEngine_Shader_o *v71; // x0
  _BOOL8 v72; // x0
  const MethodInfo *v73; // x3
  Il2CppObject *object; // x0
  const MethodInfo *v75; // x4
  BattleEffectReplaceShaderTexture_o *v76; // x0
  const MethodInfo *v77; // x5
  System_Collections_Generic_List_object__o *v78; // x21
  UnityEngine_Object_o *v79; // x0
  __int64 v80; // x1
  Il2CppObject *v81; // x0
  UnityEngine_Object_o *v82; // x0
  __int64 v83; // x1
  System_String_o *v84; // x0
  BattleEffectReplaceShaderTexture_o *v85; // x0
  const MethodInfo *v86; // x3
  UnityEngine_Object_o *v87; // x21
  _BOOL8 v88; // x0
  const MethodInfo *v89; // x3
  BattleEffectReplaceShaderTexture_o *v90; // x0
  const MethodInfo *v91; // x5
  System_Collections_Generic_List_object__o *replaceMaterials; // x0
  __int64 v93; // x1
  int32_t v94; // w2
  int32_t v95; // w3
  System_Collections_Generic_List_object__o *v96; // x0
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x8
  System_String_o *targetShaderName; // [xsp+8h] [xbp-138h]
  Il2CppObject *v102; // [xsp+10h] [xbp-130h]
  unsigned __int64 v103; // [xsp+18h] [xbp-128h]
  UnityEngine_Component_o *v104; // [xsp+20h] [xbp-120h]
  System_Collections_Generic_List_Enumerator_object__o v105; // [xsp+28h] [xbp-118h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v106; // [xsp+40h] [xbp-100h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v107; // [xsp+60h] [xbp-E0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v108; // [xsp+80h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v109; // [xsp+A0h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v110; // [xsp+C0h] [xbp-80h] BYREF
  System_Collections_Generic_Dictionary_string__Shader__o *shaderCaches; // [xsp+D8h] [xbp-68h] BYREF

  v2 = this;
  if ( (byte_4A5DF56 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__Shader__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleActorControl__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__get_Current__);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Material__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Material__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Renderer__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Material__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1B885B0(&StringLiteral_16159/*"_Choco"*/);
    sub_1B885B0(&StringLiteral_16337/*"_Shadow"*/);
    sub_1B885B0(&StringLiteral_12735/*"Shaders/ChocoMap"*/);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B885B0(&StringLiteral_4954/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/);
    byte_4A5DF56 = 1;
  }
  memset(&v110, 0, sizeof(v110));
  memset(&v109, 0, sizeof(v109));
  memset(&v108, 0, sizeof(v108));
  memset(&v107, 0, sizeof(v107));
  memset(&v106, 0, sizeof(v106));
  replaceObjects = v2->fields.replaceObjects;
  if ( !replaceObjects )
    goto LABEL_146;
  if ( replaceObjects->fields._size < 1 )
    return;
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__Shader__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v4,
    (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__Shader___ctor__);
  shaderCaches = (System_Collections_Generic_Dictionary_string__Shader__o *)v4;
  this = (BattleEffectReplaceShaderTexture_o *)v2->fields.replaceObjects;
  if ( !this )
LABEL_146:
    sub_1B8880C(this, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v105,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ReplaceObject__GetEnumerator__);
  v5 = 0LL;
  v110 = v105;
  while ( 1 )
  {
    v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v110,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__MoveNext__);
    if ( !v6 )
      break;
    current = v110.fields._current;
    if ( !v110.fields._current )
      sub_1B8880C(v6, v7);
    TargetActors = (System_Collections_Generic_List_object__o *)BattleEffectReplaceShaderTexture__GetTargetActors(
                                                                  v2,
                                                                  (System_Int32_array *)v110.fields._current[1].monitor,
                                                                  (bool)v110.fields._current[2].klass,
                                                                  (bool)v110.fields._current[1].klass,
                                                                  v8);
    if ( !TargetActors )
      sub_1B8880C(0LL, v11);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v105,
      TargetActors,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleActorControl__GetEnumerator__);
    v109 = v105;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v109,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__MoveNext__);
      if ( !v12 )
        break;
      v14 = v109.fields._current;
      if ( !v109.fields._current )
        sub_1B8880C(v12, v13);
      isChocoServant = BattleActorControl__isChocoServant((BattleActorControl_o *)v109.fields._current, 0LL);
      isShadowServant = BattleActorControl__isShadowServant((BattleActorControl_o *)v14, 0LL);
      v18 = isShadowServant;
      v104 = (UnityEngine_Component_o *)v14;
      if ( LOBYTE(current[11].monitor) )
        ActorTexture = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getActorTexture(
                                                 (BattleEffectReplaceShaderTexture_o *)isShadowServant,
                                                 (BattleActorControl_o *)v14,
                                                 (System_String_o *)current[2].monitor,
                                                 v17);
      else
        ActorTexture = 0LL;
      if ( (v18 & (__int64)current[3].klass & 1) != 0 )
      {
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
        if ( !Instance )
          sub_1B8880C(0LL, v21);
        ShadowEffect = ServantAssetLoadManager__createShadowEffect((ServantAssetLoadManager_o *)Instance, 0, 0LL);
        transform = UnityEngine_Component__get_transform(v104, 0LL);
        NodeFromName = (UnityEngine_Object_o *)TransformHelper__getNodeFromName(
                                                 transform,
                                                 (System_String_o *)current[3].monitor,
                                                 0,
                                                 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v25 = (UnityEngine_Transform_o *)UnityEngine_Object__op_Equality(NodeFromName, 0LL, 0LL);
        if ( ((unsigned __int8)v25 & 1) != 0 )
        {
          v25 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v2, 0LL);
          NodeFromName = (UnityEngine_Object_o *)v25;
        }
        if ( !ShadowEffect )
          sub_1B8880C(v25, v26);
        v27 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        if ( !v27 )
          sub_1B8880C(0LL, v28);
        UnityEngine_Transform__SetParent(v27, (UnityEngine_Transform_o *)NodeFromName, 0LL);
        v29 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        v31 = v29;
        if ( !byte_4A55CE1 )
        {
          v29 = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE1 = 1;
        }
        if ( !v31 )
          sub_1B8880C(v29, v30);
        UnityEngine_Transform__set_localPosition(v31, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0LL);
        v32 = UnityEngine_GameObject__get_transform(ShadowEffect, 0LL);
        v34 = v32;
        if ( !byte_4A55CE6 )
        {
          v32 = (UnityEngine_Transform_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        if ( !v34 )
          sub_1B8880C(v32, v33);
        UnityEngine_Transform__set_localScale(v34, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      }
      klass = (UnityEngine_Object_o *)current[7].klass;
      targetShaderName = (System_String_o *)current[6].monitor;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(klass, 0LL, 0LL) )
      {
        v37 = (UnityEngine_Object_o *)current[7].klass;
        if ( !v37 )
          sub_1B8880C(0LL, v36);
        targetShaderName = UnityEngine_Object__get_name(v37, 0LL);
      }
      v38 = (System_Collections_Generic_List_object__o *)current[4].klass;
      if ( !v38 )
        sub_1B8880C(0LL, v36);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v105,
        v38,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
      v108 = v105;
      while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v108,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
      {
        monitor = (System_Collections_Generic_List_T__o *)current[5].monitor;
        if ( !monitor )
          sub_1B8880C(0LL, v39);
        v41 = v108.fields._current;
        System_Collections_Generic_List_Int32Enum___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v105,
          monitor,
          (const MethodInfo_34E3B10 *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_RendererType__GetEnumerator__);
        v107 = v105;
        while ( System_Collections_Generic_List_Enumerator_Int32Enum___MoveNext(
                  (System_Collections_Generic_List_Enumerator_T__o *)&v107,
                  (const MethodInfo_3274DF4 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__MoveNext__) )
        {
          TargetRenderers = BattleEffectReplaceShaderTexture__getTargetRenderers(
                              v2,
                              (UnityEngine_GameObject_o *)v41,
                              (int32_t)v107.fields._current,
                              (bool)current[5].klass,
                              BYTE1(current[5].klass),
                              v42);
          v45 = TargetRenderers;
          if ( TargetRenderers )
          {
            v46 = *(_QWORD *)&TargetRenderers->max_length;
            if ( (int)v46 >= 1 )
            {
              v47 = 0LL;
              v102 = v41;
              do
              {
                if ( v47 >= (unsigned int)v46 )
                  sub_1B88814(TargetRenderers, v44);
                v48 = (System_Collections_Generic_List_object__o *)current[4].monitor;
                if ( !v48 )
                  sub_1B8880C(0LL, v44);
                v103 = v47;
                v49 = (Il2CppObject *)v45->m_Items[v47];
                TargetRenderers = (UnityEngine_Renderer_array *)System_Collections_Generic_List_object___Contains(
                                                                  v48,
                                                                  v49,
                                                                  (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_Renderer__Contains__);
                if ( ((unsigned __int8)TargetRenderers & 1) == 0 )
                {
                  TargetMaterials = (System_Collections_Generic_List_object__o *)BattleEffectReplaceShaderTexture__getTargetMaterials(
                                                                                   (BattleEffectReplaceShaderTexture_o *)TargetRenderers,
                                                                                   (UnityEngine_Renderer_o *)v49,
                                                                                   targetShaderName,
                                                                                   (bool)current[6].klass,
                                                                                   v50);
                  if ( !TargetMaterials )
                    sub_1B8880C(0LL, v52);
                  System_Collections_Generic_List_object___GetEnumerator(
                    (System_Collections_Generic_List_Enumerator_T__o *)&v105,
                    TargetMaterials,
                    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
                  v106 = v105;
                  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                            &v106,
                            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
                  {
                    v53 = v106.fields._current;
                    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                    v54 = UnityEngine_Object__op_Inequality(ActorTexture, 0LL, 0LL);
                    if ( v54 )
                    {
                      if ( !v53 )
                        sub_1B8880C(v54, v55);
                      UnityEngine_Material__set_mainTexture(
                        (UnityEngine_Material_o *)v53,
                        (UnityEngine_Texture_o *)ActorTexture,
                        0LL);
                    }
                    if ( isChocoServant )
                    {
                      if ( !BYTE1(current[11].monitor) )
                        goto LABEL_64;
                      if ( !v53 )
                        sub_1B8880C(v54, v55);
                      autoReplaceShaderNames = (System_Collections_Generic_List_object__o *)v2->fields.autoReplaceShaderNames;
                      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                         (UnityEngine_Material_o *)v53,
                                                         0LL);
                      if ( !shader )
                        sub_1B8880C(0LL, v58);
                      name = (Il2CppObject *)UnityEngine_Object__get_name(shader, 0LL);
                      if ( !autoReplaceShaderNames )
                        sub_1B8880C(name, name);
                      if ( System_Collections_Generic_List_object___Contains(
                             autoReplaceShaderNames,
                             name,
                             (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__) )
                      {
                        v60 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                        (UnityEngine_Material_o *)v53,
                                                        0LL);
                        if ( !v60 )
                          sub_1B8880C(0LL, v61);
                        v62 = UnityEngine_Object__get_name(v60, 0LL);
                        v63 = (BattleEffectReplaceShaderTexture_o *)System_String__Concat_61707032(
                                                                      v62,
                                                                      (System_String_o *)StringLiteral_16159/*"_Choco"*/,
                                                                      0LL);
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                       v63,
                                                                       (System_String_o *)v63,
                                                                       &shaderCaches,
                                                                       v64);
                      }
                      else
                      {
LABEL_64:
                        ReplaceChocoShader = 0LL;
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL) )
                        ReplaceChocoShader = (UnityEngine_Object_o *)current[7].monitor;
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      if ( UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL) && BYTE2(current[11].monitor) )
                      {
                        gameObject = UnityEngine_Component__get_gameObject(v104, 0LL);
                        if ( !gameObject )
                          sub_1B8880C(0LL, v67);
                        Component_object = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleServantDeadComponent___);
                        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                        v69 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
                        if ( v69 )
                        {
                          if ( !v53 )
                            sub_1B8880C(v69, v70);
                          v71 = UnityEngine_Material__get_shader((UnityEngine_Material_o *)v53, 0LL);
                          if ( !Component_object )
                            sub_1B8880C(v71, v71);
                          ReplaceChocoShader = (UnityEngine_Object_o *)BattleServantDeadComponent__getReplaceChocoShader(
                                                                         (BattleServantDeadComponent_o *)Component_object,
                                                                         v71,
                                                                         0LL,
                                                                         0LL);
                        }
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      v72 = UnityEngine_Object__op_Equality(ReplaceChocoShader, 0LL, 0LL);
                      if ( v72 )
                        ReplaceChocoShader = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                                       (BattleEffectReplaceShaderTexture_o *)v72,
                                                                       (System_String_o *)StringLiteral_4954/*"Custom/SoftEdgeUnlitCutZ_Choco (SoftClip)"*/,
                                                                       &shaderCaches,
                                                                       v73);
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      object = (Il2CppObject *)UnityEngine_Object__op_Equality(v5, 0LL, 0LL);
                      if ( ((unsigned __int8)object & 1) != 0 )
                      {
                        object = UnityEngine_Resources__Load_object_(
                                   (System_String_o *)StringLiteral_12735/*"Shaders/ChocoMap"*/,
                                   (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_Texture2D___);
                        v5 = (UnityEngine_Object_o *)object;
                      }
                      BattleEffectReplaceShaderTexture__setupChocoShader(
                        (BattleEffectReplaceShaderTexture_o *)object,
                        (UnityEngine_Material_o *)v53,
                        (UnityEngine_Shader_o *)ReplaceChocoShader,
                        (UnityEngine_Texture2D_o *)v5,
                        v75);
                      BattleEffectReplaceShaderTexture__updateShaderValues(
                        v76,
                        (UnityEngine_Material_o *)v53,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[8].klass,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[8].monitor,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[9].klass,
                        v77);
                    }
                    if ( v18 )
                    {
                      if ( !v53 )
                        sub_1B8880C(v54, v55);
                      v78 = (System_Collections_Generic_List_object__o *)v2->fields.autoReplaceShaderNames;
                      v79 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v53, 0LL);
                      if ( !v79 )
                        sub_1B8880C(0LL, v80);
                      v81 = (Il2CppObject *)UnityEngine_Object__get_name(v79, 0LL);
                      if ( !v78 )
                        sub_1B8880C(v81, v81);
                      if ( System_Collections_Generic_List_object___Contains(
                             v78,
                             v81,
                             (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__) )
                      {
                        v82 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(
                                                        (UnityEngine_Material_o *)v53,
                                                        0LL);
                        if ( !v82 )
                          sub_1B8880C(0LL, v83);
                        v84 = UnityEngine_Object__get_name(v82, 0LL);
                        v85 = (BattleEffectReplaceShaderTexture_o *)System_String__Concat_61707032(
                                                                      v84,
                                                                      (System_String_o *)StringLiteral_16337/*"_Shadow"*/,
                                                                      0LL);
                        v87 = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__loadShader(
                                                        v85,
                                                        (System_String_o *)v85,
                                                        &shaderCaches,
                                                        v86);
                      }
                      else
                      {
                        v87 = 0LL;
                      }
                      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                      v88 = UnityEngine_Object__op_Equality(v87, 0LL, 0LL);
                      if ( v88 )
                        v87 = (UnityEngine_Object_o *)current[9].monitor;
                      BattleEffectReplaceShaderTexture__setupShadowShader(
                        (BattleEffectReplaceShaderTexture_o *)v88,
                        (UnityEngine_Material_o *)v53,
                        (UnityEngine_Shader_o *)v87,
                        v89);
                      BattleEffectReplaceShaderTexture__updateShaderValues(
                        v90,
                        (UnityEngine_Material_o *)v53,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *)current[10].klass,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *)current[10].monitor,
                        (System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *)current[11].klass,
                        v91);
                    }
                    replaceMaterials = (System_Collections_Generic_List_object__o *)v2->fields.replaceMaterials;
                    if ( !replaceMaterials )
                      sub_1B8880C(0LL, v55);
                    if ( !System_Collections_Generic_List_object___Contains(
                            replaceMaterials,
                            v53,
                            (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_Material__Contains__) )
                    {
                      v96 = (System_Collections_Generic_List_object__o *)v2->fields.replaceMaterials;
                      if ( !v96 )
                        sub_1B8880C(0LL, v93);
                      items = v96->fields._items;
                      v98 = Method_System_Collections_Generic_List_Material__Add__;
                      ++v96->fields._version;
                      if ( !items )
                        sub_1B8880C(v96, v93);
                      size = v96->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v96,
                          v53,
                          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v100 = &items->obj.klass + size;
                        v96->fields._size = size + 1;
                        v100[4] = (Il2CppClass *)v53;
                        sub_1B88554((ServantStatusBattleListViewItem_o *)(v100 + 4), (int32_t)v53, v94, v95);
                      }
                    }
                  }
                  System_Collections_Generic_List_Enumerator_object___Dispose(
                    &v106,
                    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
                }
                v41 = v102;
                LODWORD(v46) = v45->max_length;
                v47 = v103 + 1;
              }
              while ( (__int64)(v103 + 1) < (int)v46 );
            }
          }
        }
        System_Collections_Generic_List_Enumerator_Int32Enum___Dispose(
          (System_Collections_Generic_List_Enumerator_T__o *)&v107,
          (const MethodInfo_3274DF0 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_RendererType__Dispose__);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v108,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v109,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleActorControl__Dispose__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v110,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ReplaceObject__Dispose__);
}


BattleActorControl_o *__fastcall BattleEffectReplaceShaderTexture__GetModelBattleActor(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t servantId,
        bool isCheckUniqueId,
        const MethodInfo *method)
{
  System_Object_array *ObjectsOfType_object; // x0
  __int64 v8; // x1
  int max_length; // w8
  System_Object_array *v10; // x22
  unsigned int v11; // w24
  Il2CppClass **v12; // x8
  BattleActorControl_o *v13; // x23

  if ( (byte_4A5DF58 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF58 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  ObjectsOfType_object = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2F03700 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
  if ( !ObjectsOfType_object )
    goto LABEL_17;
  max_length = ObjectsOfType_object->max_length;
  v10 = ObjectsOfType_object;
  if ( max_length >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= max_length )
        sub_1B88814(ObjectsOfType_object, v8);
      v12 = &v10->obj.klass + (int)v11;
      v13 = (BattleActorControl_o *)v12[4];
      if ( !v13 )
        break;
      ObjectsOfType_object = (System_Object_array *)BattleActorControl__getServantId(
                                                      (BattleActorControl_o *)v12[4],
                                                      0LL);
      if ( (_DWORD)ObjectsOfType_object == servantId
        && (!isCheckUniqueId || v13->fields.uniqueID == this->fields.targetId) )
      {
        return v13;
      }
      max_length = v10->max_length;
      if ( (int)++v11 >= max_length )
        return 0LL;
    }
LABEL_17:
    sub_1B8880C(ObjectsOfType_object, v8);
  }
  return 0LL;
}


System_Collections_Generic_List_BattleActorControl__o *__fastcall BattleEffectReplaceShaderTexture__GetTargetActors(
        BattleEffectReplaceShaderTexture_o *this,
        System_Int32_array *servantIds,
        bool isCheckUniqueId,
        bool useUniqueId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v9; // x19
  System_Object_array *Instance; // x0
  Il2CppObject *v11; // x1
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *v13; // x20
  Il2CppObject *Component_object; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  ServantStatusBattleListViewItem_o *v21; // x0
  __int64 v22; // x8
  Il2CppObject **i; // x9
  __int64 v24; // x8
  unsigned __int64 v25; // x25
  bool v26; // w22
  UnityEngine_Object_o *ModelBattleActor; // x23
  int32_t v28; // w2
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  __int64 v33; // x8
  System_Collections_Generic_List_object__o *v34; // x0
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0

  if ( (byte_4A5DF57 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActorControl__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActorControl__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleActorControl___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleActorControl__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    byte_4A5DF57 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleActorControl__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleActorControl___ctor__);
  if ( this->fields.isNPEffect )
  {
    Instance = (System_Object_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    v13 = (UnityEngine_Object_o *)Instance->m_Items[8];
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(v13, 0LL, 0LL);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !v13 )
        goto LABEL_50;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v13,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BattleActorControl___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(
                                          (UnityEngine_Object_o *)Component_object,
                                          0LL,
                                          0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v9 )
        {
          items = v9->fields._items;
          v18 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
          ++v9->fields._version;
          if ( items )
          {
            size = v9->fields._size;
            if ( (unsigned int)size < items->max_length )
            {
              v20 = &items->obj.klass + size;
              v9->fields._size = size + 1;
              v20[4] = (Il2CppClass *)Component_object;
              v21 = (ServantStatusBattleListViewItem_o *)(v20 + 4);
              LODWORD(v11) = (_DWORD)Component_object;
LABEL_46:
              sub_1B88554(v21, (int32_t)v11, v15, v16);
              return (System_Collections_Generic_List_BattleActorControl__o *)v9;
            }
            v33 = v18[4];
            v34 = v9;
            v11 = Component_object;
            goto LABEL_48;
          }
        }
        goto LABEL_50;
      }
    }
  }
  else if ( useUniqueId )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    Instance = UnityEngine_Object__FindObjectsOfType_object_((const MethodInfo_2F03700 *)Method_UnityEngine_Object_FindObjectsOfType_BattleActorControl___);
    if ( !Instance )
      goto LABEL_50;
    if ( (int)*(_QWORD *)&Instance->max_length >= 1 )
    {
      v22 = (unsigned int)*(_QWORD *)&Instance->max_length;
      for ( i = Instance->m_Items; ; ++i )
      {
        v11 = *i;
        if ( !*i )
          goto LABEL_50;
        if ( LODWORD(v11[29].klass) == this->fields.targetId )
          break;
        if ( !--v22 )
          return (System_Collections_Generic_List_BattleActorControl__o *)v9;
      }
      if ( v9 )
      {
        v35 = v9->fields._items;
        v36 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
        ++v9->fields._version;
        if ( v35 )
        {
          v37 = v9->fields._size;
          if ( (unsigned int)v37 < v35->max_length )
          {
            v38 = &v35->obj.klass + v37;
            v9->fields._size = v37 + 1;
            v38[4] = (Il2CppClass *)v11;
            v21 = (ServantStatusBattleListViewItem_o *)(v38 + 4);
            goto LABEL_46;
          }
          v33 = v36[4];
          v34 = v9;
LABEL_48:
          System_Collections_Generic_List_object___AddWithResize(
            v34,
            v11,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v33 + 192) + 112LL));
          return (System_Collections_Generic_List_BattleActorControl__o *)v9;
        }
      }
LABEL_50:
      sub_1B8880C(Instance, v11);
    }
  }
  else if ( servantIds )
  {
    v24 = *(_QWORD *)&servantIds->max_length;
    if ( (int)v24 >= 1 )
    {
      v25 = 0LL;
      v26 = isCheckUniqueId;
      do
      {
        if ( v25 >= (unsigned int)v24 )
          sub_1B88814(Instance, v11);
        ModelBattleActor = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__GetModelBattleActor(
                                                     this,
                                                     servantIds->m_Items[v25 + 1],
                                                     v26,
                                                     v12);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        Instance = (System_Object_array *)UnityEngine_Object__op_Inequality(ModelBattleActor, 0LL, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !v9 )
            goto LABEL_50;
          Instance = (System_Object_array *)System_Collections_Generic_List_object___Contains(
                                              v9,
                                              (Il2CppObject *)ModelBattleActor,
                                              (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_BattleActorControl__Contains__);
          if ( ((unsigned __int8)Instance & 1) == 0 )
          {
            v29 = v9->fields._items;
            v30 = Method_System_Collections_Generic_List_BattleActorControl__Add__;
            ++v9->fields._version;
            if ( !v29 )
              goto LABEL_50;
            v31 = v9->fields._size;
            if ( (unsigned int)v31 >= v29->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v9,
                (Il2CppObject *)ModelBattleActor,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
            }
            else
            {
              v32 = &v29->obj.klass + v31;
              v9->fields._size = v31 + 1;
              v32[4] = (Il2CppClass *)ModelBattleActor;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)ModelBattleActor, v28, (int32_t)v12);
            }
          }
        }
        LODWORD(v24) = servantIds->max_length;
        ++v25;
      }
      while ( (__int64)v25 < (int)v24 );
    }
  }
  return (System_Collections_Generic_List_BattleActorControl__o *)v9;
}


void __fastcall BattleEffectReplaceShaderTexture__OnDestroy(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  BattleEffectReplaceShaderTexture_o *v2; // x19
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_Material__o *replaceMaterials; // x8
  int32_t size; // w2
  int v6; // w9
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  v2 = this;
  if ( (byte_4A5DF55 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_Material__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Material__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Material__GetEnumerator__);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF55 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  if ( v2->fields.destroyReplaceShaderMaterials )
  {
    this = (BattleEffectReplaceShaderTexture_o *)v2->fields.replaceMaterials;
    if ( !this )
      goto LABEL_18;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)this,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_Material__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_Material__MoveNext__) )
    {
      current = v7.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__DestroyImmediate_69459568((UnityEngine_Object_o *)current, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_Material__Dispose__);
  }
  replaceMaterials = v2->fields.replaceMaterials;
  if ( !replaceMaterials )
LABEL_18:
    sub_1B8880C(this, method);
  size = replaceMaterials->fields._size;
  v6 = replaceMaterials->fields._version + 1;
  replaceMaterials->fields._size = 0;
  replaceMaterials->fields._version = v6;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)replaceMaterials->fields._items, 0, size, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__SetTargetId(
        BattleEffectReplaceShaderTexture_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  this->fields.targetId = targetId;
}


void __fastcall BattleEffectReplaceShaderTexture__Start(
        BattleEffectReplaceShaderTexture_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isNPEffect )
    BattleEffectReplaceShaderTexture__Execute(this, method);
}


UnityEngine_Texture_o *__fastcall BattleEffectReplaceShaderTexture__getActorTexture(
        BattleEffectReplaceShaderTexture_o *this,
        BattleActorControl_o *actor,
        System_String_o *searchMeshWord,
        const MethodInfo *method)
{
  int m_CancellationTokenSource; // w8
  BattleEffectReplaceShaderTexture_o *v7; // x20
  unsigned int v8; // w22
  BattleEffectReplaceShaderTexture_c **v9; // x8
  UnityEngine_Object_o *v10; // x21

  if ( (byte_4A5DF5A & 1) == 0 )
  {
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76107592);
    byte_4A5DF5A = 1;
  }
  if ( !actor )
    goto LABEL_16;
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                                 (UnityEngine_Component_o *)actor,
                                                 1,
                                                 (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_SkinnedMeshRenderer____76107592);
  if ( !this )
    goto LABEL_16;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v7 = this;
  if ( m_CancellationTokenSource < 1 )
    return 0LL;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= m_CancellationTokenSource )
      sub_1B88814(this, actor);
    v9 = &v7->klass + (int)v8;
    v10 = (UnityEngine_Object_o *)v9[4];
    if ( !v10 )
      goto LABEL_16;
    this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)v9[4], 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Object__get_name(v10, 0LL);
      if ( !this )
        goto LABEL_16;
      this = (BattleEffectReplaceShaderTexture_o *)System_String__IndexOf_61738608(
                                                     (System_String_o *)this,
                                                     searchMeshWord,
                                                     0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
        break;
    }
    m_CancellationTokenSource = (int)v7->fields.m_CancellationTokenSource;
    if ( (int)++v8 >= m_CancellationTokenSource )
      return 0LL;
  }
  this = (BattleEffectReplaceShaderTexture_o *)UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)v10, 0LL);
  if ( !this )
LABEL_16:
    sub_1B8880C(this, actor);
  return UnityEngine_Material__get_mainTexture((UnityEngine_Material_o *)this, 0LL);
}


UnityEngine_Renderer_o *__fastcall BattleEffectReplaceShaderTexture__getRenderer(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        const MethodInfo *method)
{
  __int64 *v6; // x8
  UnityEngine_Renderer_o *result; // x0

  if ( (byte_4A5DF5C & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_MeshRenderer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_Renderer___);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___);
    byte_4A5DF5C = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_14;
      v6 = &Method_UnityEngine_GameObject_GetComponent_Renderer___;
      goto LABEL_13;
    case 1:
      if ( !gameObject )
        goto LABEL_14;
      v6 = &Method_UnityEngine_GameObject_GetComponent_MeshRenderer___;
      goto LABEL_13;
    case 2:
      if ( !gameObject )
        goto LABEL_14;
      v6 = &Method_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer___;
      goto LABEL_13;
    case 3:
      if ( !gameObject )
LABEL_14:
        sub_1B8880C(this, gameObject);
      v6 = &Method_UnityEngine_GameObject_GetComponent_ParticleSystemRenderer___;
LABEL_13:
      result = (UnityEngine_Renderer_o *)UnityEngine_GameObject__GetComponent_object_(
                                           gameObject,
                                           (const MethodInfo_2ECEEB8 *)*v6);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


UnityEngine_Renderer_array *__fastcall BattleEffectReplaceShaderTexture__getRenderersInChildren(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *gameObject,
        int32_t rendererType,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 *v8; // x8
  UnityEngine_Renderer_array *result; // x0

  if ( (byte_4A5DF5D & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____76153672);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____76153704);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76153712);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____76153728);
    byte_4A5DF5D = 1;
  }
  switch ( rendererType )
  {
    case 0:
      if ( !gameObject )
        goto LABEL_14;
      v8 = &Method_UnityEngine_GameObject_GetComponentsInChildren_Renderer____76153712;
      goto LABEL_13;
    case 1:
      if ( !gameObject )
        goto LABEL_14;
      v8 = &Method_UnityEngine_GameObject_GetComponentsInChildren_MeshRenderer____76153672;
      goto LABEL_13;
    case 2:
      if ( !gameObject )
        goto LABEL_14;
      v8 = &Method_UnityEngine_GameObject_GetComponentsInChildren_SkinnedMeshRenderer____76153728;
      goto LABEL_13;
    case 3:
      if ( !gameObject )
LABEL_14:
        sub_1B8880C(this, gameObject);
      v8 = &Method_UnityEngine_GameObject_GetComponentsInChildren_ParticleSystemRenderer____76153704;
LABEL_13:
      result = (UnityEngine_Renderer_array *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                               gameObject,
                                               includeInactive,
                                               (const MethodInfo_2ECFB58 *)*v8);
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}


System_Collections_Generic_List_Material__o *__fastcall BattleEffectReplaceShaderTexture__getTargetMaterials(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Renderer_o *renderer,
        System_String_o *targetShaderName,
        bool targetShaderAll,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x21
  UnityEngine_Object_o *materials; // x0
  __int64 v10; // x1
  UnityEngine_Object_c *klass; // x8
  UnityEngine_Object_o *v12; // x22
  unsigned __int64 i; // x25
  UnityEngine_Object_o *v14; // x23
  UnityEngine_Object_o *shader; // x24
  System_String_o *name; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0

  if ( (byte_4A5DF5E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Material__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Material__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Material___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Material__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF5E = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Material__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Material___ctor__);
  if ( !renderer || (materials = (UnityEngine_Object_o *)UnityEngine_Renderer__get_materials(renderer, 0LL)) == 0LL )
LABEL_27:
    sub_1B8880C(materials, v10);
  klass = materials[1].klass;
  v12 = materials;
  if ( (int)klass >= 1 )
  {
    for ( i = 0LL; (__int64)i < (int)klass; ++i )
    {
      if ( i >= (unsigned int)klass )
        sub_1B88814(materials, v10);
      v14 = (UnityEngine_Object_o *)*((_QWORD *)&v12[1].monitor + i);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(v14, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
        goto LABEL_31;
      if ( !v14 )
        goto LABEL_27;
      shader = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v14, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      materials = (UnityEngine_Object_o *)UnityEngine_Object__op_Inequality(shader, 0LL, 0LL);
      if ( ((unsigned __int8)materials & 1) != 0 )
      {
LABEL_31:
        if ( targetShaderAll )
          goto LABEL_19;
        if ( !v14 )
          goto LABEL_27;
        materials = (UnityEngine_Object_o *)UnityEngine_Material__get_shader((UnityEngine_Material_o *)v14, 0LL);
        if ( !materials )
          goto LABEL_27;
        name = UnityEngine_Object__get_name(materials, 0LL);
        materials = (UnityEngine_Object_o *)System_String__op_Equality(name, targetShaderName, 0LL);
        if ( ((unsigned __int8)materials & 1) != 0 )
        {
LABEL_19:
          if ( !v8 )
            goto LABEL_27;
          materials = (UnityEngine_Object_o *)System_Collections_Generic_List_object___Contains(
                                                v8,
                                                (Il2CppObject *)v14,
                                                (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_Material__Contains__);
          if ( ((unsigned __int8)materials & 1) == 0 )
          {
            items = v8->fields._items;
            v20 = Method_System_Collections_Generic_List_Material__Add__;
            ++v8->fields._version;
            if ( !items )
              goto LABEL_27;
            size = v8->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v8,
                (Il2CppObject *)v14,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
            }
            else
            {
              v22 = &items->obj.klass + size;
              v8->fields._size = size + 1;
              v22[4] = (Il2CppClass *)v14;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v14, v17, v18);
            }
          }
        }
      }
      LODWORD(klass) = v12[1].klass;
    }
  }
  return (System_Collections_Generic_List_Material__o *)v8;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Renderer_array *__fastcall BattleEffectReplaceShaderTexture__getTargetRenderers(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_GameObject_o *targetObject,
        int32_t rendererType,
        bool targetsInChildren,
        bool includeInactive,
        const MethodInfo *method)
{
  UnityEngine_Object_o *Renderer; // x19
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  __int64 v17; // x0

  if ( (byte_4A5DF5B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B885B0(&UnityEngine_Renderer___TypeInfo);
    byte_4A5DF5B = 1;
  }
  if ( targetsInChildren )
    return BattleEffectReplaceShaderTexture__getRenderersInChildren(
             this,
             targetObject,
             rendererType,
             includeInactive,
             (const MethodInfo *)includeInactive);
  Renderer = (UnityEngine_Object_o *)BattleEffectReplaceShaderTexture__getRenderer(
                                       this,
                                       targetObject,
                                       rendererType,
                                       (const MethodInfo *)targetsInChildren);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v12 = 0LL;
  if ( UnityEngine_Object__op_Inequality(Renderer, 0LL, 0LL) )
  {
    v13 = sub_1B88658(UnityEngine_Renderer___TypeInfo, 1LL);
    if ( !v13 )
      sub_1B8880C(0LL, v14);
    v12 = v13;
    if ( Renderer )
    {
      v13 = sub_1B886EC(Renderer, *(_QWORD *)(*(_QWORD *)v13 + 64LL));
      if ( !v13 )
      {
        v17 = sub_1B88830(0LL);
        sub_1B886D8(v17, 0LL);
      }
    }
    if ( !*(_DWORD *)(v12 + 24) )
      sub_1B88814(v13, v14);
    *(_QWORD *)(v12 + 32) = Renderer;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 32), (int32_t)Renderer, v15, v16);
  }
  return (UnityEngine_Renderer_array *)v12;
}


UnityEngine_Shader_o *__fastcall BattleEffectReplaceShaderTexture__loadShader(
        BattleEffectReplaceShaderTexture_o *this,
        System_String_o *shaderName,
        System_Collections_Generic_Dictionary_string__Shader__o **shaderCaches,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__Shader__o *v6; // x0
  UnityEngine_Shader_o *result; // x0
  UnityEngine_Object_o *v8; // x21
  bool v9; // w8

  if ( (byte_4A5DF59 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DF59 = 1;
  }
  v6 = *shaderCaches;
  if ( !*shaderCaches )
    goto LABEL_13;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)v6,
         (Il2CppObject *)shaderName,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__Shader__ContainsKey__) )
  {
    v6 = *shaderCaches;
    if ( *shaderCaches )
      return (UnityEngine_Shader_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                       (System_Collections_Generic_Dictionary_object__object__o *)v6,
                                       (Il2CppObject *)shaderName,
                                       (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__Shader__get_Item__);
LABEL_13:
    sub_1B8880C(v6, shaderName);
  }
  v8 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(shaderName, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__op_Inequality(v8, 0LL, 0LL);
  result = 0LL;
  if ( v9 )
  {
    v6 = *shaderCaches;
    if ( !*shaderCaches )
      goto LABEL_13;
    System_Collections_Generic_Dictionary_object__object___set_Item(
      (System_Collections_Generic_Dictionary_object__object__o *)v6,
      (Il2CppObject *)shaderName,
      (Il2CppObject *)v8,
      (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__Shader__set_Item__);
    return (UnityEngine_Shader_o *)v8;
  }
  return result;
}


void __fastcall BattleEffectReplaceShaderTexture__setupChocoShader(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        UnityEngine_Shader_o *chocoShader,
        UnityEngine_Texture2D_o *chocoTexture,
        const MethodInfo *method)
{
  float r; // s8
  float g; // s9
  float b; // s10
  float a; // s11
  float v12; // s12
  float v13; // s13
  float v14; // s14
  float v15; // s15
  UnityEngine_Color_o Color; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v18; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v19; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5DF5F & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    sub_1B885B0(&StringLiteral_16160/*"_ChocoTex"*/);
    sub_1B885B0(&StringLiteral_16392/*"_Use_alphawidth"*/);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B885B0(&StringLiteral_16135/*"_AddColor"*/);
    byte_4A5DF5F = 1;
  }
  if ( !material )
    sub_1B8880C(this, material);
  if ( UnityEngine_Material__HasProperty_69325648(material, (System_String_o *)StringLiteral_16179/*"_Color"*/, 0LL) )
  {
    Color = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16179/*"_Color"*/, 0LL);
    r = Color.fields.r;
    g = Color.fields.g;
    b = Color.fields.b;
    a = Color.fields.a;
  }
  else
  {
    r = 1.0;
    g = 1.0;
    b = 1.0;
    a = 1.0;
  }
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  v15 = 0.0;
  if ( UnityEngine_Material__HasProperty_69325648(material, (System_String_o *)StringLiteral_16135/*"_AddColor"*/, 0LL) )
  {
    v17 = UnityEngine_Material__GetColor(material, (System_String_o *)StringLiteral_16135/*"_AddColor"*/, 0LL);
    v12 = v17.fields.r;
    v13 = v17.fields.g;
    v14 = v17.fields.b;
    v15 = v17.fields.a;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)chocoShader, 0LL, 0LL) )
    UnityEngine_Material__set_shader(material, chocoShader, 0LL);
  v18.fields.r = r;
  v18.fields.g = g;
  v18.fields.b = b;
  v18.fields.a = a;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16179/*"_Color"*/, v18, 0LL);
  v19.fields.r = v12;
  v19.fields.g = v13;
  v19.fields.b = v14;
  v19.fields.a = v15;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16135/*"_AddColor"*/, v19, 0LL);
  UnityEngine_Material__SetTexture(
    material,
    (System_String_o *)StringLiteral_16160/*"_ChocoTex"*/,
    (UnityEngine_Texture_o *)chocoTexture,
    0LL);
  if ( UnityEngine_Material__HasProperty_69325648(material, (System_String_o *)StringLiteral_16392/*"_Use_alphawidth"*/, 0LL) )
    UnityEngine_Material__SetFloat(material, (System_String_o *)StringLiteral_16392/*"_Use_alphawidth"*/, 1.0, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__setupShadowShader(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        UnityEngine_Shader_o *shadowShader,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5DF60 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_16179/*"_Color"*/);
    byte_4A5DF60 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)shadowShader, 0LL, 0LL);
  if ( !v6 )
  {
    if ( material )
      goto LABEL_9;
LABEL_10:
    sub_1B8880C(v6, v7);
  }
  if ( !material )
    goto LABEL_10;
  UnityEngine_Material__set_shader(material, shadowShader, 0LL);
LABEL_9:
  v8.fields.r = 0.05;
  v8.fields.a = 1.0;
  v8.fields.g = 0.05;
  v8.fields.b = 0.05;
  UnityEngine_Material__SetColor(material, (System_String_o *)StringLiteral_16179/*"_Color"*/, v8, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture__updateShaderValues(
        BattleEffectReplaceShaderTexture_o *this,
        UnityEngine_Material_o *material,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__o *replaceShaderFloatValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__o *replaceShaderColorValues,
        System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__o *replaceShaderTextureValues,
        const MethodInfo *method)
{
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *current; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *v15; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *v18; // x20
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+0h] [xbp-D0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v20; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+30h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+50h] [xbp-80h] BYREF

  if ( (byte_4A5DF61 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__);
    this = (BattleEffectReplaceShaderTexture_o *)sub_1B885B0(&Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__);
    byte_4A5DF61 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  memset(&v21, 0, sizeof(v21));
  memset(&v20, 0, sizeof(v20));
  if ( !replaceShaderFloatValues )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)replaceShaderFloatValues,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderFloatValue__GetEnumerator__);
  v22 = v19;
  while ( 1 )
  {
    v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v22,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__MoveNext__);
    if ( !v10 )
      break;
    current = v22.fields._current;
    if ( !v22.fields._current )
      sub_1B8880C(v10, v11);
    if ( !material )
      sub_1B8880C(v10, v11);
    if ( UnityEngine_Material__HasProperty_69325648(material, (System_String_o *)v22.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetFloat(material, (System_String_o *)current[1].klass, *(float *)&current[1].monitor, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v22,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderFloatValue__Dispose__);
  if ( !replaceShaderColorValues )
    goto LABEL_31;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    (System_Collections_Generic_List_object__o *)replaceShaderColorValues,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderColorValue__GetEnumerator__);
  v21 = v19;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v21,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__MoveNext__);
    if ( !v13 )
      break;
    v15 = v21.fields._current;
    if ( !v21.fields._current )
      sub_1B8880C(v13, v14);
    if ( !material )
      sub_1B8880C(v13, v14);
    if ( UnityEngine_Material__HasProperty_69325648(material, (System_String_o *)v21.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetColor(
        material,
        (System_String_o *)v15[1].klass,
        *(UnityEngine_Color_o *)&v15[1].monitor,
        0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v21,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderColorValue__Dispose__);
  if ( !replaceShaderTextureValues )
LABEL_31:
    sub_1B8880C(this, material);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v20,
    (System_Collections_Generic_List_object__o *)replaceShaderTextureValues,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleEffectReplaceShaderTexture_ShaderTextureValue__GetEnumerator__);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v20,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__MoveNext__);
    if ( !v16 )
      break;
    v18 = v20.fields._current;
    if ( !v20.fields._current )
      sub_1B8880C(v16, v17);
    if ( !material )
      sub_1B8880C(v16, v17);
    if ( UnityEngine_Material__HasProperty_69325648(material, (System_String_o *)v20.fields._current[1].klass, 0LL) )
      UnityEngine_Material__SetTexture(
        material,
        (System_String_o *)v18[1].klass,
        (UnityEngine_Texture_o *)v18[1].monitor,
        0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v20,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleEffectReplaceShaderTexture_ShaderTextureValue__Dispose__);
}


void __fastcall BattleEffectReplaceShaderTexture_ReplaceObject___ctor(
        BattleEffectReplaceShaderTexture_ReplaceObject_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w1

  if ( (byte_4A5DF63 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17358/*"body_level"*/);
    byte_4A5DF63 = 1;
  }
  this->fields.useUniqueId = 1;
  this->fields.isCheckUniqueId = 1;
  v5 = StringLiteral_17358/*"body_level"*/;
  this->fields.searchMeshWord = (struct System_String_o *)StringLiteral_17358/*"body_level"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.searchMeshWord, v5, v2, v3);
  this->fields.targetShaderAll = 1;
  *(_WORD *)&this->fields.targetsInChildren = 257;
  *(_WORD *)&this->fields.useAutoReplaceShader = 257;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderColorValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderColorValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderFloatValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderFloatValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleEffectReplaceShaderTexture_ShaderTextureValue___ctor(
        BattleEffectReplaceShaderTexture_ShaderTextureValue_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}