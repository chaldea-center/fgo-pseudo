void __fastcall CommonParticleControlComponent___ctor(CommonParticleControlComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonParticleControlComponent__Update(
        CommonParticleControlComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  CommonParticleControlComponent_o *v4; // x19
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x8
  int32_t v6; // w20

  v4 = this;
  if ( (byte_4B175C3 & 1) == 0 )
  {
    this = (CommonParticleControlComponent_o *)sub_1BCA7E0(
                                                 &Method_System_Collections_Generic_List_ParticleSystem__get_Count__,
                                                 method,
                                                 v2);
    byte_4B175C3 = 1;
  }
  particleParent = v4->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  v6 = 0;
  while ( v6 < particleParent->fields._size )
  {
    this = (CommonParticleControlComponent_o *)CommonParticleControlComponent__isAlive(v4, v6, 1, v3);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    particleParent = v4->fields.particleParent;
    ++v6;
    if ( !particleParent )
      goto LABEL_8;
  }
  this = (CommonParticleControlComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v4, 0LL);
  if ( !this )
LABEL_8:
    sub_1BCAA3C(this, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


void __fastcall CommonParticleControlComponent__init(
        CommonParticleControlComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1BCAA3C(0LL, v6);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  CommonParticleControlComponent__setupLayer(this, layer, v7);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CommonParticleControlComponent__isAlive(
        CommonParticleControlComponent_o *this,
        int32_t idx,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *particleParent; // x0

  if ( (byte_4B175C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, *(_QWORD *)&idx, withChildren);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v7, v8);
    byte_4B175C7 = 1;
  }
  particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  if ( particleParent->fields._size > idx )
  {
    particleParent = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    particleParent,
                                                                    idx,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( particleParent )
      return UnityEngine_ParticleSystem__IsAlive((UnityEngine_ParticleSystem_o *)particleParent, withChildren, 0LL);
LABEL_8:
    sub_1BCAA3C(particleParent, *(_QWORD *)&idx);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleAllStop(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *particleParent; // x0
  int32_t v8; // w20
  bool v9; // w21

  if ( (byte_4B175C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, withChildren, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v5, v6);
    byte_4B175C5 = 1;
  }
  particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_11;
  v8 = 0;
  v9 = withChildren;
  while ( v8 < particleParent->fields._size )
  {
    particleParent = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    particleParent,
                                                                    v8,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( particleParent )
    {
      UnityEngine_ParticleSystem__Stop_70434620((UnityEngine_ParticleSystem_o *)particleParent, v9, 0LL);
      particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
      ++v8;
      if ( particleParent )
        continue;
    }
    goto LABEL_11;
  }
  particleParent = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL);
  if ( !particleParent )
LABEL_11:
    sub_1BCAA3C(particleParent, withChildren);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)particleParent, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleStart(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w21
  bool v10; // w20

  if ( (byte_4B175C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, withChildren, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v5, v6);
    byte_4B175C4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.particleParent) == 0LL) )
  {
LABEL_9:
    sub_1BCAA3C(gameObject, v8);
  }
  v9 = 0;
  v10 = withChildren;
  while ( v9 < SLODWORD(gameObject[1].klass) )
  {
    gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)gameObject,
                                               v9,
                                               (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( gameObject )
    {
      UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)gameObject, v10, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.particleParent;
      ++v9;
      if ( gameObject )
        continue;
    }
    goto LABEL_9;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleStop(
        CommonParticleControlComponent_o *this,
        int32_t idx,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *particleParent; // x0

  if ( (byte_4B175C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, *(_QWORD *)&idx, withChildren);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v7, v8);
    byte_4B175C6 = 1;
  }
  particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  if ( particleParent->fields._size > idx )
  {
    particleParent = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    particleParent,
                                                                    idx,
                                                                    (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( particleParent )
    {
      UnityEngine_ParticleSystem__Stop_70434620((UnityEngine_ParticleSystem_o *)particleParent, withChildren, 0LL);
      return;
    }
LABEL_8:
    sub_1BCAA3C(particleParent, *(_QWORD *)&idx);
  }
}


void __fastcall CommonParticleControlComponent__setupLayer(
        CommonParticleControlComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  void *gameObject; // x0
  __int64 v6; // x1
  UnityEngine_GameObject_o *v7; // x0
  int v8; // w8
  void *v9; // x20
  unsigned int v10; // w21

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)gameObject, layer, 0LL);
  v7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  gameObject = GameObjectExtensions__GetChildren(v7, 1, 0LL);
  if ( !gameObject )
    goto LABEL_10;
  v8 = *((_DWORD *)gameObject + 6);
  v9 = gameObject;
  if ( v8 >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= v8 )
        sub_1BCAA44(gameObject, v6);
      gameObject = (void *)*((_QWORD *)v9 + (int)v10 + 4);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)gameObject, layer, 0LL);
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        return;
    }
LABEL_10:
    sub_1BCAA3C(gameObject, v6);
  }
}