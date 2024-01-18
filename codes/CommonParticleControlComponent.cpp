void __fastcall CommonParticleControlComponent___ctor(CommonParticleControlComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall CommonParticleControlComponent__Update(
        CommonParticleControlComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  CommonParticleControlComponent_o *v3; // x19
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x8
  int32_t v5; // w20

  v3 = this;
  if ( (byte_4183E8E & 1) == 0 )
  {
    this = (CommonParticleControlComponent_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_ParticleSystem__get_Count__,
                                                 method);
    byte_4183E8E = 1;
  }
  particleParent = v3->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  v5 = 0;
  while ( v5 < particleParent->fields._size )
  {
    this = (CommonParticleControlComponent_o *)CommonParticleControlComponent__isAlive(v3, v5, 1, v2);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    particleParent = v3->fields.particleParent;
    ++v5;
    if ( !particleParent )
      goto LABEL_8;
  }
  this = (CommonParticleControlComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0LL);
  if ( !this )
LABEL_8:
    sub_B2C434(this, method);
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
    sub_B2C434(0LL, v6);
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
  CommonParticleControlComponent_o *v6; // x21
  __int64 v7; // x1
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x21
  int32_t size; // w8

  v6 = this;
  if ( (byte_4183E92 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, *(_QWORD *)&idx);
    this = (CommonParticleControlComponent_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_ParticleSystem__get_Item__,
                                                 v7);
    byte_4183E92 = 1;
  }
  particleParent = v6->fields.particleParent;
  if ( !particleParent )
    goto LABEL_10;
  size = particleParent->fields._size;
  if ( size > idx )
  {
    if ( size <= (unsigned int)idx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (CommonParticleControlComponent_o *)particleParent->fields._items->m_Items[idx];
    if ( this )
      return UnityEngine_ParticleSystem__IsAlive((UnityEngine_ParticleSystem_o *)this, withChildren, 0LL);
LABEL_10:
    sub_B2C434(this, *(_QWORD *)&idx);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleAllStop(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  __int64 v5; // x1
  UnityEngine_Component_c *klass; // x22
  __int64 v7; // x21
  bool v8; // w20
  int namespaze; // w8

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4183E90 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, withChildren);
    this = (CommonParticleControlComponent_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_ParticleSystem__get_Item__,
                                                 v5);
    byte_4183E90 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    goto LABEL_13;
  v7 = 0LL;
  v8 = withChildren;
  while ( 1 )
  {
    namespaze = (int)klass->_1.namespaze;
    if ( (int)v7 >= namespaze )
      break;
    if ( namespaze <= (unsigned int)v7 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = *(CommonParticleControlComponent_o **)&klass->_1.name[8 * v7 + 32];
    if ( this )
    {
      UnityEngine_ParticleSystem__Stop_50259416((UnityEngine_ParticleSystem_o *)this, v8, 0LL);
      klass = v4[1].klass;
      ++v7;
      if ( klass )
        continue;
    }
    goto LABEL_13;
  }
  this = (CommonParticleControlComponent_o *)UnityEngine_Component__get_gameObject(v4, 0LL);
  if ( !this )
LABEL_13:
    sub_B2C434(this, withChildren);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleStart(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  __int64 v5; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x22
  __int64 v9; // x21
  bool v10; // w20
  int size; // w8

  if ( (byte_4183E8F & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, withChildren);
    sub_B2C35C(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__, v5);
    byte_4183E8F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL), (particleParent = this->fields.particleParent) == 0LL) )
  {
LABEL_11:
    sub_B2C434(gameObject, v7);
  }
  v9 = 0LL;
  v10 = withChildren;
  while ( 1 )
  {
    size = particleParent->fields._size;
    if ( (int)v9 >= size )
      break;
    if ( size <= (unsigned int)v9 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    gameObject = (UnityEngine_GameObject_o *)particleParent->fields._items->m_Items[v9];
    if ( gameObject )
    {
      UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)gameObject, v10, 0LL);
      particleParent = this->fields.particleParent;
      ++v9;
      if ( particleParent )
        continue;
    }
    goto LABEL_11;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CommonParticleControlComponent__particleStop(
        CommonParticleControlComponent_o *this,
        int32_t idx,
        bool withChildren,
        const MethodInfo *method)
{
  CommonParticleControlComponent_o *v6; // x21
  __int64 v7; // x1
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x21
  int32_t size; // w8

  v6 = this;
  if ( (byte_4183E91 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__, *(_QWORD *)&idx);
    this = (CommonParticleControlComponent_o *)sub_B2C35C(
                                                 &Method_System_Collections_Generic_List_ParticleSystem__get_Item__,
                                                 v7);
    byte_4183E91 = 1;
  }
  particleParent = v6->fields.particleParent;
  if ( !particleParent )
    goto LABEL_10;
  size = particleParent->fields._size;
  if ( size > idx )
  {
    if ( size <= (unsigned int)idx )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
    this = (CommonParticleControlComponent_o *)particleParent->fields._items->m_Items[idx];
    if ( this )
    {
      UnityEngine_ParticleSystem__Stop_50259416((UnityEngine_ParticleSystem_o *)this, withChildren, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(this, *(_QWORD *)&idx);
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
  __int64 v11; // x0

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
      {
        v11 = sub_B2C460(gameObject);
        sub_B2C400(v11, 0LL);
      }
      gameObject = (void *)*((_QWORD *)v9 + (int)v10 + 4);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)gameObject, layer, 0LL);
      v8 = *((_DWORD *)v9 + 6);
      if ( (int)++v10 >= v8 )
        return;
    }
LABEL_10:
    sub_B2C434(gameObject, v6);
  }
}